/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "spec/e2sm-gNB-X2-v401.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "E2_RIC-InsertStyle-List.h"

#include "E2_RANparameterDef-Item.h"
static int
memb_E2_ric_InsertRanParameterDef_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_E2_ric_InsertRanParameterDef_List_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_E2_ric_InsertRanParameterDef_List_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_E2_ric_InsertRanParameterDef_List_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2_RANparameterDef_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_E2_ric_InsertRanParameterDef_List_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_E2_ric_InsertRanParameterDef_List_specs_5 = {
	sizeof(struct E2_RIC_InsertStyle_List__ric_InsertRanParameterDef_List),
	offsetof(struct E2_RIC_InsertStyle_List__ric_InsertRanParameterDef_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_E2_ric_InsertRanParameterDef_List_5 = {
	"ric-InsertRanParameterDef-List",
	"ric-InsertRanParameterDef-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_E2_ric_InsertRanParameterDef_List_tags_5,
	sizeof(asn_DEF_E2_ric_InsertRanParameterDef_List_tags_5)
		/sizeof(asn_DEF_E2_ric_InsertRanParameterDef_List_tags_5[0]) - 1, /* 1 */
	asn_DEF_E2_ric_InsertRanParameterDef_List_tags_5,	/* Same as above */
	sizeof(asn_DEF_E2_ric_InsertRanParameterDef_List_tags_5)
		/sizeof(asn_DEF_E2_ric_InsertRanParameterDef_List_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_E2_ric_InsertRanParameterDef_List_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_E2_ric_InsertRanParameterDef_List_5,
	1,	/* Single element */
	&asn_SPC_E2_ric_InsertRanParameterDef_List_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_E2_RIC_InsertStyle_List_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2_RIC_InsertStyle_List, ric_InsertStyle_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2_RIC_Style_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-InsertStyle-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2_RIC_InsertStyle_List, ric_InsertStyle_Name),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2_RIC_Style_Name,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-InsertStyle-Name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2_RIC_InsertStyle_List, ric_InsertActionFormat_Type),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2_RIC_Format_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-InsertActionFormat-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2_RIC_InsertStyle_List, ric_InsertRanParameterDef_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_E2_ric_InsertRanParameterDef_List_5,
		0,
		{ 0, &asn_PER_memb_E2_ric_InsertRanParameterDef_List_constr_5,  memb_E2_ric_InsertRanParameterDef_List_constraint_1 },
		0, 0, /* No default value */
		"ric-InsertRanParameterDef-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2_RIC_InsertStyle_List, ric_IndicationHeaderFormat_Type),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2_RIC_Format_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-IndicationHeaderFormat-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2_RIC_InsertStyle_List, ric_IndicationMessageFormat_Type),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2_RIC_Format_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-IndicationMessageFormat-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2_RIC_InsertStyle_List, ric_CallProcessIDFormat_Type),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2_RIC_Format_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-CallProcessIDFormat-Type"
		},
};
static const ber_tlv_tag_t asn_DEF_E2_RIC_InsertStyle_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2_RIC_InsertStyle_List_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ric-InsertStyle-Type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ric-InsertStyle-Name */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ric-InsertActionFormat-Type */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ric-InsertRanParameterDef-List */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ric-IndicationHeaderFormat-Type */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ric-IndicationMessageFormat-Type */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ric-CallProcessIDFormat-Type */
};
asn_SEQUENCE_specifics_t asn_SPC_E2_RIC_InsertStyle_List_specs_1 = {
	sizeof(struct E2_RIC_InsertStyle_List),
	offsetof(struct E2_RIC_InsertStyle_List, _asn_ctx),
	asn_MAP_E2_RIC_InsertStyle_List_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2_RIC_InsertStyle_List = {
	"RIC-InsertStyle-List",
	"RIC-InsertStyle-List",
	&asn_OP_SEQUENCE,
	asn_DEF_E2_RIC_InsertStyle_List_tags_1,
	sizeof(asn_DEF_E2_RIC_InsertStyle_List_tags_1)
		/sizeof(asn_DEF_E2_RIC_InsertStyle_List_tags_1[0]), /* 1 */
	asn_DEF_E2_RIC_InsertStyle_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2_RIC_InsertStyle_List_tags_1)
		/sizeof(asn_DEF_E2_RIC_InsertStyle_List_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2_RIC_InsertStyle_List_1,
	7,	/* Elements count */
	&asn_SPC_E2_RIC_InsertStyle_List_specs_1	/* Additional specs */
};

