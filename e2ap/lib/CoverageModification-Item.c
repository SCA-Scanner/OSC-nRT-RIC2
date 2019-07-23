/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "CoverageModification-Item.h"

#include "CellReplacingInfo.h"
static int
memb_coverageState_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_coverageState_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_coverageState_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CoverageModification_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CoverageModification_Item, eCGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eCGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CoverageModification_Item, coverageState),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_coverageState_constr_3, &asn_PER_memb_coverageState_constr_3,  memb_coverageState_constraint_1 },
		0, 0, /* No default value */
		"coverageState"
		},
	{ ATF_POINTER, 2, offsetof(struct CoverageModification_Item, cellDeploymentStatusIndicator),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellDeploymentStatusIndicator,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellDeploymentStatusIndicator"
		},
	{ ATF_POINTER, 1, offsetof(struct CoverageModification_Item, cellReplacingInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReplacingInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReplacingInfo"
		},
};
static const int asn_MAP_CoverageModification_Item_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_CoverageModification_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CoverageModification_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eCGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* coverageState */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellDeploymentStatusIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* cellReplacingInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_CoverageModification_Item_specs_1 = {
	sizeof(struct CoverageModification_Item),
	offsetof(struct CoverageModification_Item, _asn_ctx),
	asn_MAP_CoverageModification_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CoverageModification_Item_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CoverageModification_Item = {
	"CoverageModification-Item",
	"CoverageModification-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_CoverageModification_Item_tags_1,
	sizeof(asn_DEF_CoverageModification_Item_tags_1)
		/sizeof(asn_DEF_CoverageModification_Item_tags_1[0]), /* 1 */
	asn_DEF_CoverageModification_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_CoverageModification_Item_tags_1)
		/sizeof(asn_DEF_CoverageModification_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CoverageModification_Item_1,
	4,	/* Elements count */
	&asn_SPC_CoverageModification_Item_specs_1	/* Additional specs */
};

