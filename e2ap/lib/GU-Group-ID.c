/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "GU-Group-ID.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_GU_Group_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GU_Group_ID, pLMN_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMN-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GU_Group_ID, mME_Group_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MME_Group_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mME-Group-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct GU_Group_ID, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_9566P153,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_GU_Group_ID_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_GU_Group_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GU_Group_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMN-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mME-Group-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_GU_Group_ID_specs_1 = {
	sizeof(struct GU_Group_ID),
	offsetof(struct GU_Group_ID, _asn_ctx),
	asn_MAP_GU_Group_ID_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_GU_Group_ID_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GU_Group_ID = {
	"GU-Group-ID",
	"GU-Group-ID",
	&asn_OP_SEQUENCE,
	asn_DEF_GU_Group_ID_tags_1,
	sizeof(asn_DEF_GU_Group_ID_tags_1)
		/sizeof(asn_DEF_GU_Group_ID_tags_1[0]), /* 1 */
	asn_DEF_GU_Group_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_GU_Group_ID_tags_1)
		/sizeof(asn_DEF_GU_Group_ID_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GU_Group_ID_1,
	3,	/* Elements count */
	&asn_SPC_GU_Group_ID_specs_1	/* Additional specs */
};

