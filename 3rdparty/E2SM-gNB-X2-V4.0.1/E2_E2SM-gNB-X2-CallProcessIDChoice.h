/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "spec/e2sm-gNB-X2-v401.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_E2_E2SM_gNB_X2_CallProcessIDChoice_H_
#define	_E2_E2SM_gNB_X2_CallProcessIDChoice_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2_E2SM-gNB-X2-callProcessID.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2_E2SM_gNB_X2_CallProcessIDChoice_PR {
	E2_E2SM_gNB_X2_CallProcessIDChoice_PR_NOTHING,	/* No components present */
	E2_E2SM_gNB_X2_CallProcessIDChoice_PR_callProcessID_Format1
	/* Extensions may appear below */
	
} E2_E2SM_gNB_X2_CallProcessIDChoice_PR;

/* E2_E2SM-gNB-X2-CallProcessIDChoice */
typedef struct E2_E2SM_gNB_X2_CallProcessIDChoice {
	E2_E2SM_gNB_X2_CallProcessIDChoice_PR present;
	union E2_E2SM_gNB_X2_CallProcessIDChoice_u {
		E2_E2SM_gNB_X2_callProcessID_t	 callProcessID_Format1;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2_E2SM_gNB_X2_CallProcessIDChoice_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2_E2SM_gNB_X2_CallProcessIDChoice;

#ifdef __cplusplus
}
#endif

#endif	/* _E2_E2SM_gNB_X2_CallProcessIDChoice_H_ */
#include "asn_internal.h"
