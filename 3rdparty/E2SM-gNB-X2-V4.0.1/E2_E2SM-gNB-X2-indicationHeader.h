/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "spec/e2sm-gNB-X2-v401.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_E2_E2SM_gNB_X2_indicationHeader_H_
#define	_E2_E2SM_gNB_X2_indicationHeader_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2_Interface-ID.h"
#include "E2_InterfaceDirection.h"
#include "E2_TimeStamp.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2_E2SM-gNB-X2-indicationHeader */
typedef struct E2_E2SM_gNB_X2_indicationHeader {
	E2_Interface_ID_t	 interface_ID;
	E2_InterfaceDirection_t	 interfaceDirection;
	E2_TimeStamp_t	*timestamp;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2_E2SM_gNB_X2_indicationHeader_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2_E2SM_gNB_X2_indicationHeader;
extern asn_SEQUENCE_specifics_t asn_SPC_E2_E2SM_gNB_X2_indicationHeader_specs_1;
extern asn_TYPE_member_t asn_MBR_E2_E2SM_gNB_X2_indicationHeader_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E2_E2SM_gNB_X2_indicationHeader_H_ */
#include "asn_internal.h"
