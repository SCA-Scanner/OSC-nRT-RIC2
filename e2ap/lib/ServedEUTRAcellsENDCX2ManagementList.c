/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "ServedEUTRAcellsENDCX2ManagementList.h"

#include "NRNeighbour-Information.h"
#include "ProtocolExtensionContainer.h"
static asn_oer_constraints_t asn_OER_type_ServedEUTRAcellsENDCX2ManagementList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..256)) */};
static asn_per_constraints_t asn_PER_type_ServedEUTRAcellsENDCX2ManagementList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ServedEUTRAcellsENDCX2ManagementList__Member, servedEUTRACellInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServedCell_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servedEUTRACellInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct ServedEUTRAcellsENDCX2ManagementList__Member, nrNeighbourInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRNeighbour_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrNeighbourInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct ServedEUTRAcellsENDCX2ManagementList__Member, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_9566P90,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Member_oms_2[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servedEUTRACellInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nrNeighbourInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct ServedEUTRAcellsENDCX2ManagementList__Member),
	offsetof(struct ServedEUTRAcellsENDCX2ManagementList__Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_Member_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Member_2,
	3,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ServedEUTRAcellsENDCX2ManagementList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ServedEUTRAcellsENDCX2ManagementList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ServedEUTRAcellsENDCX2ManagementList_specs_1 = {
	sizeof(struct ServedEUTRAcellsENDCX2ManagementList),
	offsetof(struct ServedEUTRAcellsENDCX2ManagementList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_ServedEUTRAcellsENDCX2ManagementList = {
	"ServedEUTRAcellsENDCX2ManagementList",
	"ServedEUTRAcellsENDCX2ManagementList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ServedEUTRAcellsENDCX2ManagementList_tags_1,
	sizeof(asn_DEF_ServedEUTRAcellsENDCX2ManagementList_tags_1)
		/sizeof(asn_DEF_ServedEUTRAcellsENDCX2ManagementList_tags_1[0]), /* 1 */
	asn_DEF_ServedEUTRAcellsENDCX2ManagementList_tags_1,	/* Same as above */
	sizeof(asn_DEF_ServedEUTRAcellsENDCX2ManagementList_tags_1)
		/sizeof(asn_DEF_ServedEUTRAcellsENDCX2ManagementList_tags_1[0]), /* 1 */
	{ &asn_OER_type_ServedEUTRAcellsENDCX2ManagementList_constr_1, &asn_PER_type_ServedEUTRAcellsENDCX2ManagementList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_ServedEUTRAcellsENDCX2ManagementList_1,
	1,	/* Single element */
	&asn_SPC_ServedEUTRAcellsENDCX2ManagementList_specs_1	/* Additional specs */
};

