/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "spec/e2sm-gNB-X2-v401.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_E2_RANueGroupDefinition_H_
#define	_E2_RANueGroupDefinition_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E2_RANueGroupDef_Item;

/* E2_RANueGroupDefinition */
typedef struct E2_RANueGroupDefinition {
	struct E2_RANueGroupDefinition__ranUEgroupDef_List {
		A_SEQUENCE_OF(struct E2_RANueGroupDef_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ranUEgroupDef_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2_RANueGroupDefinition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2_RANueGroupDefinition;
extern asn_SEQUENCE_specifics_t asn_SPC_E2_RANueGroupDefinition_specs_1;
extern asn_TYPE_member_t asn_MBR_E2_RANueGroupDefinition_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _E2_RANueGroupDefinition_H_ */
#include "asn_internal.h"
