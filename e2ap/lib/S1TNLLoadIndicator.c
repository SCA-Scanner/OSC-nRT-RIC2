/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "S1TNLLoadIndicator.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1TNLLoadIndicator_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1TNLLoadIndicator, dLS1TNLLoadIndicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoadIndicator,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dLS1TNLLoadIndicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1TNLLoadIndicator, uLS1TNLLoadIndicator),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoadIndicator,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uLS1TNLLoadIndicator"
		},
	{ ATF_POINTER, 1, offsetof(struct S1TNLLoadIndicator, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_9566P189,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1TNLLoadIndicator_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_S1TNLLoadIndicator_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1TNLLoadIndicator_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dLS1TNLLoadIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uLS1TNLLoadIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1TNLLoadIndicator_specs_1 = {
	sizeof(struct S1TNLLoadIndicator),
	offsetof(struct S1TNLLoadIndicator, _asn_ctx),
	asn_MAP_S1TNLLoadIndicator_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1TNLLoadIndicator_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1TNLLoadIndicator = {
	"S1TNLLoadIndicator",
	"S1TNLLoadIndicator",
	&asn_OP_SEQUENCE,
	asn_DEF_S1TNLLoadIndicator_tags_1,
	sizeof(asn_DEF_S1TNLLoadIndicator_tags_1)
		/sizeof(asn_DEF_S1TNLLoadIndicator_tags_1[0]), /* 1 */
	asn_DEF_S1TNLLoadIndicator_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1TNLLoadIndicator_tags_1)
		/sizeof(asn_DEF_S1TNLLoadIndicator_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1TNLLoadIndicator_1,
	3,	/* Elements count */
	&asn_SPC_S1TNLLoadIndicator_specs_1	/* Additional specs */
};

