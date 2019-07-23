/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_ULResourcesULandDLSharing_H_
#define	_ULResourcesULandDLSharing_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "ULResourceBitmapULandDLSharing.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ULResourcesULandDLSharing_PR {
	ULResourcesULandDLSharing_PR_NOTHING,	/* No components present */
	ULResourcesULandDLSharing_PR_unchanged,
	ULResourcesULandDLSharing_PR_changed
	/* Extensions may appear below */
	
} ULResourcesULandDLSharing_PR;

/* ULResourcesULandDLSharing */
typedef struct ULResourcesULandDLSharing {
	ULResourcesULandDLSharing_PR present;
	union ULResourcesULandDLSharing_u {
		NULL_t	 unchanged;
		ULResourceBitmapULandDLSharing_t	 changed;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULResourcesULandDLSharing_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULResourcesULandDLSharing;
extern asn_CHOICE_specifics_t asn_SPC_ULResourcesULandDLSharing_specs_1;
extern asn_TYPE_member_t asn_MBR_ULResourcesULandDLSharing_1[2];
extern asn_per_constraints_t asn_PER_type_ULResourcesULandDLSharing_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ULResourcesULandDLSharing_H_ */
#include <asn_internal.h>
