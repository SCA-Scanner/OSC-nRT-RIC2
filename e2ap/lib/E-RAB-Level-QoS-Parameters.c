/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "E-RAB-Level-QoS-Parameters.h"

#include "GBR-QosInformation.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_E_RAB_Level_QoS_Parameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_RAB_Level_QoS_Parameters, qCI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RAB_Level_QoS_Parameters, allocationAndRetentionPriority),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllocationAndRetentionPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allocationAndRetentionPriority"
		},
	{ ATF_POINTER, 2, offsetof(struct E_RAB_Level_QoS_Parameters, gbrQosInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GBR_QosInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gbrQosInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct E_RAB_Level_QoS_Parameters, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_9566P139,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_E_RAB_Level_QoS_Parameters_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_E_RAB_Level_QoS_Parameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_RAB_Level_QoS_Parameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qCI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allocationAndRetentionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gbrQosInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_E_RAB_Level_QoS_Parameters_specs_1 = {
	sizeof(struct E_RAB_Level_QoS_Parameters),
	offsetof(struct E_RAB_Level_QoS_Parameters, _asn_ctx),
	asn_MAP_E_RAB_Level_QoS_Parameters_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_E_RAB_Level_QoS_Parameters_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_RAB_Level_QoS_Parameters = {
	"E-RAB-Level-QoS-Parameters",
	"E-RAB-Level-QoS-Parameters",
	&asn_OP_SEQUENCE,
	asn_DEF_E_RAB_Level_QoS_Parameters_tags_1,
	sizeof(asn_DEF_E_RAB_Level_QoS_Parameters_tags_1)
		/sizeof(asn_DEF_E_RAB_Level_QoS_Parameters_tags_1[0]), /* 1 */
	asn_DEF_E_RAB_Level_QoS_Parameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RAB_Level_QoS_Parameters_tags_1)
		/sizeof(asn_DEF_E_RAB_Level_QoS_Parameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_RAB_Level_QoS_Parameters_1,
	4,	/* Elements count */
	&asn_SPC_E_RAB_Level_QoS_Parameters_specs_1	/* Additional specs */
};

