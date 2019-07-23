/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "E-RABs-ToBeModified-SgNBModReq-Item-SgNBPDCPpresent.h"

#include "E-RAB-Level-QoS-Parameters.h"
#include "GBR-QosInformation.h"
#include "GTPtunnelEndpoint.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_1[] = {
	{ ATF_POINTER, 5, offsetof(struct E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent, full_E_RAB_Level_QoS_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RAB_Level_QoS_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"full-E-RAB-Level-QoS-Parameters"
		},
	{ ATF_POINTER, 4, offsetof(struct E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent, max_MN_admit_E_RAB_Level_QoS_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GBR_QosInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"max-MN-admit-E-RAB-Level-QoS-Parameters"
		},
	{ ATF_POINTER, 3, offsetof(struct E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent, meNB_DL_GTP_TEIDatMCG),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GTPtunnelEndpoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"meNB-DL-GTP-TEIDatMCG"
		},
	{ ATF_POINTER, 2, offsetof(struct E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent, s1_UL_GTPtunnelEndpoint),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GTPtunnelEndpoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s1-UL-GTPtunnelEndpoint"
		},
	{ ATF_POINTER, 1, offsetof(struct E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_9566P57,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* full-E-RAB-Level-QoS-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* max-MN-admit-E-RAB-Level-QoS-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* meNB-DL-GTP-TEIDatMCG */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* s1-UL-GTPtunnelEndpoint */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_specs_1 = {
	sizeof(struct E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent),
	offsetof(struct E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent, _asn_ctx),
	asn_MAP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent = {
	"E-RABs-ToBeModified-SgNBModReq-Item-SgNBPDCPpresent",
	"E-RABs-ToBeModified-SgNBModReq-Item-SgNBPDCPpresent",
	&asn_OP_SEQUENCE,
	asn_DEF_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_tags_1,
	sizeof(asn_DEF_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_tags_1)
		/sizeof(asn_DEF_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_tags_1[0]), /* 1 */
	asn_DEF_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_tags_1)
		/sizeof(asn_DEF_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_1,
	5,	/* Elements count */
	&asn_SPC_E_RABs_ToBeModified_SgNBModReq_Item_SgNBPDCPpresent_specs_1	/* Additional specs */
};

