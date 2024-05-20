
/*
	Mnemonic:	rdc_replay.c
	Abstract:	This reads raw data from an RDC file generated by the mc_listener
				builds RMR messages which mimic the original message that the
				listener received, and then writes those messages.  The assumption
				is that a dummy route table is in place that causes one or more message
				types to be routed to the mc_listener for "replay" into the mc-core
				application.


				The RDC file format is expected to be:
					@RDC<mtype><len> or as depicted in hex:


					0000000 40 52 44 43					<< delim == @RDC
										30 30 31 30 30 35 30 2a  << mtype
																30 30 30 30 << msg len
					0000020 30 37 34 00
										40 4d 43 4c 30 30 30 30 30 34 36 00 << raw message
							:
							:

				This is a very quick and dirty thing, so it might be flakey.

				Parms from command line are file to read, and the msg type to extract.
				If mtype given is 0, then message type of each record is written to
				stdout (can be sorted -u for a list of messages in the file).


	Date:		19 November 2019
	Author:		E. Scott Daniels
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

#include "mcl.h"

/*
	Write a scathing message to let the user know they buggered it!
*/
static void invalid_arg( char* arg ) {
	fprintf( stderr, "%s is not a valid option, or requires an additional parameter which was omitted\n", arg );
}

int main( int argc, char** argv ) {
	char rbuf[1024 * 5];
	int state;					// processing state
	int fd;						// input file des
	int mtype;					// msg type for current buffer
	int mlen;					// len of raw data
	char*	nxt;				// pointer at next bytes to process
	int	remain = 0;				// number of bytes remaining to parse
	int	need = 20;				// number of bytes needed before having enough to work with
	int desired = -1;			// all mtypes; -t overrides and susses out one type
	int	wlen = 0;
	void*	mcl_ctx;			// mcl library context
	long	ok_count = 0;
	long	err_count = 0;
	char*	fifo_path = "/tmp/mcl_replay/fifos";	// directory where we create fifos; -d overrieds
	char*	input_file = NULL;						// -f to set; stdin is default if nil
	char*	arg;
	int		i;

	i = 1;
	while( i < argc ) {
		arg = argv[i];
		if( *arg != '-' ) {
			break;
		}

		switch( *(arg+1) ) {
			case 'd':
				if( i < argc-1 ) {
					fifo_path = argv[i+1];
					i++;
				} else {
					invalid_arg( arg );
					err_count++;
				}
				break;

			case 'f':
				if( i < argc-1 ) {
					input_file = argv[i+1];
					i++;
				} else {
					invalid_arg( arg );
					err_count++;
				}
				break;

			case 't':
				if( i < argc-1 ) {
					desired = atoi( argv[i+1] );
					i++;
				} else {
					invalid_arg( arg );
					err_count++;
				}
				break;

			default:
				fprintf( stderr, "unrecognised option: %s\n", arg );
				err_count++;
				break;
		}

		i++;
	}

	if( err_count ) {
		fprintf( stderr, "usage: %s [-d fifo-dir] [-f input-file] [-t msg-type]\n", argv[0] );
		fprintf( stderr, "if -f not given, then standard input is read\n" );
		exit( 1 );
	}


	if( input_file == NULL ) {
		fd = 0;
	} else {
		if( (fd = open( input_file, O_RDONLY )) < 0 ) {
			fprintf( stderr, "abort: cant open: %s: %s\n", input_file, strerror(errno) );
			exit( 1 );
		}
	}

	mcl_ctx = mcl_mk_context( fifo_path );
	mcl_set_sigh();							// ignore pipe related signals

	remain = read( fd, rbuf, sizeof( rbuf ) );
	nxt = rbuf;
	while( remain > 0 ) {
		if( remain < 20 ) {					// not enough stuff
			memcpy( rbuf, nxt, remain );	// copy remaining up front
			nxt = rbuf;
			remain += read( fd, nxt + remain, sizeof( rbuf ) - remain );
		}

		if( remain < 20 ) {					// truncated or a record > rbuf
			fprintf( stderr, "abort: @header check, truncated file, or record > read buffer size\n" );
			exit( 1 );
		}

		if( strncmp( nxt, "@RDC", 4 ) == 0 ) {
			mtype = atoi( nxt+4 );
			mlen = atoi( nxt+12 );
			nxt += 20;
			remain -= 20;

			if( remain < mlen ) {				// not enough stuff
				memcpy( rbuf, nxt, remain );	// copy remaining up front
				nxt = rbuf;
				remain += read( fd, nxt + remain, sizeof( rbuf ) - remain );
			}

			if( remain < mlen ) {				// truncated or a record > rbuf
				fprintf( stderr, "abort: truncated file, or record > read buffer size\n" );
				exit( 1 );
			}

			if( desired < 0 || mtype == desired ) {				// all mtypes, or specific
				state = mcl_fifo_one( mcl_ctx, nxt, mlen, mtype );
				if( state ) {
					ok_count++;
				} else {
					err_count++;
				}
			}

			nxt += mlen;
			remain -= mlen;
		} else {
			fprintf( stderr, "abort: didn't find rdc header!?! @ %ld\n", (long) (nxt - rbuf) );
			exit( 1 );
		}
	}

	fprintf( stderr, "done, captured %ld messages; %ld errors\n", ok_count, err_count );
	close( fd );
}

