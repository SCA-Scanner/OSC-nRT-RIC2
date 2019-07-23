/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "ServedCell-Information.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ServedCell_Information_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ServedCell_Information, pCI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServedCell_Information, cellId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServedCell_Information, tAC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServedCell_Information, broadcastPLMNs),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BroadcastPLMNs_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"broadcastPLMNs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServedCell_Information, eUTRA_Mode_Info),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_EUTRA_Mode_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRA-Mode-Info"
		},
	{ ATF_POINTER, 1, offsetof(struct ServedCell_Information, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_9566P192,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ServedCell_Information_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_ServedCell_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ServedCell_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pCI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellId */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tAC */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* broadcastPLMNs */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* eUTRA-Mode-Info */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ServedCell_Information_specs_1 = {
	sizeof(struct ServedCell_Information),
	offsetof(struct ServedCell_Information, _asn_ctx),
	asn_MAP_ServedCell_Information_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_ServedCell_Information_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ServedCell_Information = {
	"ServedCell-Information",
	"ServedCell-Information",
	&asn_OP_SEQUENCE,
	asn_DEF_ServedCell_Information_tags_1,
	sizeof(asn_DEF_ServedCell_Information_tags_1)
		/sizeof(asn_DEF_ServedCell_Information_tags_1[0]), /* 1 */
	asn_DEF_ServedCell_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_ServedCell_Information_tags_1)
		/sizeof(asn_DEF_ServedCell_Information_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ServedCell_Information_1,
	6,	/* Elements count */
	&asn_SPC_ServedCell_Information_specs_1	/* Additional specs */
};

