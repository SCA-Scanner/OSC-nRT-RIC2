# vim: ts=4 noet sw=4:
#==================================================================================
#	Copyright (c) 2019-2021 Nokia
#	Copyright (c) 2018-2021 AT&T Intellectual Property.
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.
#==================================================================================

#	Mnemonic:	gen_rel_notes.sh
#	Abstract:	This script looks for CHANGES*.txt files at the top level
#				and builds one {X}fm source file from which the release notes
#				RTD file is created.

cat <<endKat

.** ------------------------------------------------------------------------
.** CAUTION: This .xfm file is automatically generated by fmt_changes.ksh
.**          do NOT edit. Use 'make rel-notes.xfm' to regenerate.
.** ------------------------------------------------------------------------

.dv GEN_TITLE 1
.dv doc_title Release Notes

.im ../lib/setup.im
.im ../lib/front_junk.im
.dh 1 u=off s=1,0
.dh 2 u=off s=1,0

&h1(E2AP Library Release Notes)
The following is a list of release highlights for the platform e2ap library.

endKat

for x in ../../../CHANGES*
do
	awk '
		/^#/ { next }		# ditch all comments

		# tag project releases by matching release tag in CHANGES file
		/^release=/ || /^release =/ {
			n = split( $0, a, "=" )
			printf( "&h1(%s Release)\n", a[n] )
			next
		}

		print_raw && /^$/ {				# include blank lines after first real stuff
			printf( "&space\n\n" );
			next
		}

		$1+0 >= 2019 {
			print_raw = 1				# safe to print blank lines
			printf( "&h2(%s)\n", $0 )
			next
		}

		print_raw { print }
	' $x
done