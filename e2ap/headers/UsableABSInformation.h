/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_UsableABSInformation_H_
#define	_UsableABSInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UsableABSInformation_PR {
	UsableABSInformation_PR_NOTHING,	/* No components present */
	UsableABSInformation_PR_fdd,
	UsableABSInformation_PR_tdd
	/* Extensions may appear below */
	
} UsableABSInformation_PR;

/* Forward declarations */
struct UsableABSInformationFDD;
struct UsableABSInformationTDD;

/* UsableABSInformation */
typedef struct UsableABSInformation {
	UsableABSInformation_PR present;
	union UsableABSInformation_u {
		struct UsableABSInformationFDD	*fdd;
		struct UsableABSInformationTDD	*tdd;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UsableABSInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UsableABSInformation;
extern asn_CHOICE_specifics_t asn_SPC_UsableABSInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_UsableABSInformation_1[2];
extern asn_per_constraints_t asn_PER_type_UsableABSInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UsableABSInformation_H_ */
#include <asn_internal.h>
