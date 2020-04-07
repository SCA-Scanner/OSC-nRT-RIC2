/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "spec/e2sm-gNB-X2-v401.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_E2_InterfaceProtocolIE_Item_H_
#define	_E2_InterfaceProtocolIE_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2_InterfaceProtocolIE-ID.h"
#include "E2_InterfaceProtocolIE-Test.h"
#include "E2_InterfaceProtocolIE-Value.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2_InterfaceProtocolIE-Item */
typedef struct E2_InterfaceProtocolIE_Item {
	E2_InterfaceProtocolIE_ID_t	 interfaceProtocolIE_ID;
	E2_InterfaceProtocolIE_Test_t	 interfaceProtocolIE_Test;
	E2_InterfaceProtocolIE_Value_t	 interfaceProtocolIE_Value;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2_InterfaceProtocolIE_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2_InterfaceProtocolIE_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_E2_InterfaceProtocolIE_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_E2_InterfaceProtocolIE_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E2_InterfaceProtocolIE_Item_H_ */
#include "asn_internal.h"
