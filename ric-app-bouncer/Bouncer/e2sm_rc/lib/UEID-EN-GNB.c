/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example`
 */

#include "UEID-EN-GNB.h"

#include "UEID-GNB-CU-CP-E1AP-ID-List.h"
asn_TYPE_member_t asn_MBR_UEID_EN_GNB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEID_EN_GNB, m_eNB_UE_X2AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ENB_UE_X2AP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m-eNB-UE-X2AP-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct UEID_EN_GNB, m_eNB_UE_X2AP_ID_Extension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ENB_UE_X2AP_ID_Extension,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m-eNB-UE-X2AP-ID-Extension"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEID_EN_GNB, globalENB_ID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GlobalENB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalENB-ID"
		},
	{ ATF_POINTER, 3, offsetof(struct UEID_EN_GNB, gNB_CU_UE_F1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNB_CU_UE_F1AP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gNB-CU-UE-F1AP-ID"
		},
	{ ATF_POINTER, 2, offsetof(struct UEID_EN_GNB, gNB_CU_CP_UE_E1AP_ID_List),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEID_GNB_CU_CP_E1AP_ID_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gNB-CU-CP-UE-E1AP-ID-List"
		},
	{ ATF_POINTER, 1, offsetof(struct UEID_EN_GNB, ran_UEID),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANUEID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ran-UEID"
		},
};
static const int asn_MAP_UEID_EN_GNB_oms_1[] = { 1, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_UEID_EN_GNB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEID_EN_GNB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* m-eNB-UE-X2AP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* m-eNB-UE-X2AP-ID-Extension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* globalENB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* gNB-CU-UE-F1AP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* gNB-CU-CP-UE-E1AP-ID-List */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ran-UEID */
};
asn_SEQUENCE_specifics_t asn_SPC_UEID_EN_GNB_specs_1 = {
	sizeof(struct UEID_EN_GNB),
	offsetof(struct UEID_EN_GNB, _asn_ctx),
	asn_MAP_UEID_EN_GNB_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_UEID_EN_GNB_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEID_EN_GNB = {
	"UEID-EN-GNB",
	"UEID-EN-GNB",
	&asn_OP_SEQUENCE,
	asn_DEF_UEID_EN_GNB_tags_1,
	sizeof(asn_DEF_UEID_EN_GNB_tags_1)
		/sizeof(asn_DEF_UEID_EN_GNB_tags_1[0]), /* 1 */
	asn_DEF_UEID_EN_GNB_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEID_EN_GNB_tags_1)
		/sizeof(asn_DEF_UEID_EN_GNB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEID_EN_GNB_1,
	6,	/* Elements count */
	&asn_SPC_UEID_EN_GNB_specs_1	/* Additional specs */
};

