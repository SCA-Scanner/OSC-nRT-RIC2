/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_H_
#define	_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E_RAB_Level_QoS_Parameters;
struct GTPtunnelEndpoint;
struct ULConfiguration;
struct ProtocolExtensionContainer;

/* E-RABs-ToBeModified-SgNBModReq-Item-SgNBPDCPnotpresent */
typedef struct E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent {
	struct E_RAB_Level_QoS_Parameters	*requested_SCG_E_RAB_Level_QoS_Parameters;	/* OPTIONAL */
	struct GTPtunnelEndpoint	*meNB_UL_GTP_TEIDatPDCP;	/* OPTIONAL */
	struct ULConfiguration	*uL_Configuration;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent;
extern asn_SEQUENCE_specifics_t asn_SPC_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_specs_1;
extern asn_TYPE_member_t asn_MBR_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPnotpresent_H_ */
#include <asn_internal.h>
