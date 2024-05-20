/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-2.0.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_PolicyCondition_RANParameter_Item_H_
#define	_PolicyCondition_RANParameter_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANParameter-ID.h"
#include "RANParameter-Name.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RANParameter_Definition;

/* PolicyCondition-RANParameter-Item */
typedef struct PolicyCondition_RANParameter_Item {
	RANParameter_ID_t	 ranParameter_ID;
	RANParameter_Name_t	 ranParameter_name;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RANParameter_Definition	*ranParameter_Definition;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PolicyCondition_RANParameter_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PolicyCondition_RANParameter_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_PolicyCondition_RANParameter_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_PolicyCondition_RANParameter_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PolicyCondition_RANParameter_Item_H_ */
#include <asn_internal.h>
