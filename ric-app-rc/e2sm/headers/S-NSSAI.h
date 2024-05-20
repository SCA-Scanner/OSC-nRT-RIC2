/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-common.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_S_NSSAI_H_
#define	_S_NSSAI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SST.h"
#include "SD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S-NSSAI */
typedef struct S_NSSAI {
	SST_t	 sST;
	SD_t	*sD;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S_NSSAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S_NSSAI;

#ifdef __cplusplus
}
#endif

#endif	/* _S_NSSAI_H_ */
#include <asn_internal.h>
