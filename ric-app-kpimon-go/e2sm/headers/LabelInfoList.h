/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "kpm2_0.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_LabelInfoList_H_
#define	_LabelInfoList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LabelInfoItem;

/* LabelInfoList */
typedef struct LabelInfoList {
	A_SEQUENCE_OF(struct LabelInfoItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LabelInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LabelInfoList;
extern asn_SET_OF_specifics_t asn_SPC_LabelInfoList_specs_1;
extern asn_TYPE_member_t asn_MBR_LabelInfoList_1[1];
extern asn_per_constraints_t asn_PER_type_LabelInfoList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LabelInfoList_H_ */
#include "asn_internal.h"
