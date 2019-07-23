/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "M4Configuration.h"

#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_M4Configuration_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M4Configuration, m4period),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M4period,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m4period"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M4Configuration, m4_links_to_log),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Links_to_log,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m4-links-to-log"
		},
	{ ATF_POINTER, 1, offsetof(struct M4Configuration, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_9566P162,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_M4Configuration_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_M4Configuration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M4Configuration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* m4period */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* m4-links-to-log */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_M4Configuration_specs_1 = {
	sizeof(struct M4Configuration),
	offsetof(struct M4Configuration, _asn_ctx),
	asn_MAP_M4Configuration_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_M4Configuration_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M4Configuration = {
	"M4Configuration",
	"M4Configuration",
	&asn_OP_SEQUENCE,
	asn_DEF_M4Configuration_tags_1,
	sizeof(asn_DEF_M4Configuration_tags_1)
		/sizeof(asn_DEF_M4Configuration_tags_1[0]), /* 1 */
	asn_DEF_M4Configuration_tags_1,	/* Same as above */
	sizeof(asn_DEF_M4Configuration_tags_1)
		/sizeof(asn_DEF_M4Configuration_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M4Configuration_1,
	3,	/* Elements count */
	&asn_SPC_M4Configuration_specs_1	/* Additional specs */
};

