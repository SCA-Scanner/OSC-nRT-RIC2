/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_GUAMI_H_
#define	_GUAMI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNIdentity.h"
#include "AMFRegionID.h"
#include "AMFSetID.h"
#include "AMFPointer.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GUAMI */
typedef struct GUAMI {
	PLMNIdentity_t	 pLMNIdentity;
	AMFRegionID_t	 aMFRegionID;
	AMFSetID_t	 aMFSetID;
	AMFPointer_t	 aMFPointer;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GUAMI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GUAMI;
extern asn_SEQUENCE_specifics_t asn_SPC_GUAMI_specs_1;
extern asn_TYPE_member_t asn_MBR_GUAMI_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _GUAMI_H_ */
#include <asn_internal.h>
