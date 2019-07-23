/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_BroadcastPLMNs_Item_H_
#define	_BroadcastPLMNs_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BroadcastPLMNs-Item */
typedef struct BroadcastPLMNs_Item {
	A_SEQUENCE_OF(PLMN_Identity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BroadcastPLMNs_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BroadcastPLMNs_Item;
extern asn_SET_OF_specifics_t asn_SPC_BroadcastPLMNs_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_BroadcastPLMNs_Item_1[1];
extern asn_per_constraints_t asn_PER_type_BroadcastPLMNs_Item_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BroadcastPLMNs_Item_H_ */
#include <asn_internal.h>
