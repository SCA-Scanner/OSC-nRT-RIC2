/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-v2.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-example -no-gen-OER`
 */

#ifndef	_E2connectionSetupFailed_List_H_
#define	_E2connectionSetupFailed_List_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolIE_SingleContainer;

/* E2connectionSetupFailed-List */
typedef struct E2connectionSetupFailed_List {
	A_SEQUENCE_OF(struct ProtocolIE_SingleContainer) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2connectionSetupFailed_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2connectionSetupFailed_List;

#ifdef __cplusplus
}
#endif

#endif	/* _E2connectionSetupFailed_List_H_ */
#include "asn_internal.h"
