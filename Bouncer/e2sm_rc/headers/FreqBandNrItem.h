/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_FreqBandNrItem_H_
#define	_FreqBandNrItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FreqBandNrItem */
typedef struct FreqBandNrItem {
	long	 freqBandIndicatorNr;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqBandNrItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqBandNrItem;

#ifdef __cplusplus
}
#endif

#endif	/* _FreqBandNrItem_H_ */
#include <asn_internal.h>
