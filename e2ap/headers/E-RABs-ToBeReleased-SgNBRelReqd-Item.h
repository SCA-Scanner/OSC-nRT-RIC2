/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_E_RABs_ToBeReleased_SgNBRelReqd_Item_H_
#define	_E_RABs_ToBeReleased_SgNBRelReqd_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-RAB-ID.h"
#include "RLCMode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* E-RABs-ToBeReleased-SgNBRelReqd-Item */
typedef struct E_RABs_ToBeReleased_SgNBRelReqd_Item {
	E_RAB_ID_t	 e_RAB_ID;
	RLCMode_t	 rlc_Mode_transferred;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABs_ToBeReleased_SgNBRelReqd_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABs_ToBeReleased_SgNBRelReqd_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _E_RABs_ToBeReleased_SgNBRelReqd_Item_H_ */
#include <asn_internal.h>
