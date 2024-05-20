/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_NR_ARFCN_H_
#define	_NR_ARFCN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR-ARFCN */
typedef struct NR_ARFCN {
	long	 nRARFCN;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ARFCN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_ARFCN;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ARFCN_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ARFCN_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_ARFCN_H_ */
#include <asn_internal.h>
