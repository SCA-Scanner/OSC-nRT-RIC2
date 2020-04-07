/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "spec/e2sm-gNB-X2-v401.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "E2_E2SM-gNB-X2-actionDefinition.h"

#include "E2_ActionParameter-Item.h"
static int
memb_E2_actionParameter_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 255)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_E2_actionParameter_List_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_E2_actionParameter_List_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_E2_actionParameter_List_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2_ActionParameter_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_E2_actionParameter_List_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_E2_actionParameter_List_specs_3 = {
	sizeof(struct E2_E2SM_gNB_X2_actionDefinition__actionParameter_List),
	offsetof(struct E2_E2SM_gNB_X2_actionDefinition__actionParameter_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_E2_actionParameter_List_3 = {
	"actionParameter-List",
	"actionParameter-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_E2_actionParameter_List_tags_3,
	sizeof(asn_DEF_E2_actionParameter_List_tags_3)
		/sizeof(asn_DEF_E2_actionParameter_List_tags_3[0]) - 1, /* 1 */
	asn_DEF_E2_actionParameter_List_tags_3,	/* Same as above */
	sizeof(asn_DEF_E2_actionParameter_List_tags_3)
		/sizeof(asn_DEF_E2_actionParameter_List_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_E2_actionParameter_List_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_E2_actionParameter_List_3,
	1,	/* Single element */
	&asn_SPC_E2_actionParameter_List_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_E2_E2SM_gNB_X2_actionDefinition_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2_E2SM_gNB_X2_actionDefinition, style_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2_Style_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"style-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct E2_E2SM_gNB_X2_actionDefinition, actionParameter_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_E2_actionParameter_List_3,
		0,
		{ 0, &asn_PER_memb_E2_actionParameter_List_constr_3,  memb_E2_actionParameter_List_constraint_1 },
		0, 0, /* No default value */
		"actionParameter-List"
		},
};
static const int asn_MAP_E2_E2SM_gNB_X2_actionDefinition_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_E2_E2SM_gNB_X2_actionDefinition_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2_E2SM_gNB_X2_actionDefinition_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* style-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* actionParameter-List */
};
asn_SEQUENCE_specifics_t asn_SPC_E2_E2SM_gNB_X2_actionDefinition_specs_1 = {
	sizeof(struct E2_E2SM_gNB_X2_actionDefinition),
	offsetof(struct E2_E2SM_gNB_X2_actionDefinition, _asn_ctx),
	asn_MAP_E2_E2SM_gNB_X2_actionDefinition_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_E2_E2SM_gNB_X2_actionDefinition_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2_E2SM_gNB_X2_actionDefinition = {
	"E2SM-gNB-X2-actionDefinition",
	"E2SM-gNB-X2-actionDefinition",
	&asn_OP_SEQUENCE,
	asn_DEF_E2_E2SM_gNB_X2_actionDefinition_tags_1,
	sizeof(asn_DEF_E2_E2SM_gNB_X2_actionDefinition_tags_1)
		/sizeof(asn_DEF_E2_E2SM_gNB_X2_actionDefinition_tags_1[0]), /* 1 */
	asn_DEF_E2_E2SM_gNB_X2_actionDefinition_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2_E2SM_gNB_X2_actionDefinition_tags_1)
		/sizeof(asn_DEF_E2_E2SM_gNB_X2_actionDefinition_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2_E2SM_gNB_X2_actionDefinition_1,
	2,	/* Elements count */
	&asn_SPC_E2_E2SM_gNB_X2_actionDefinition_specs_1	/* Additional specs */
};

