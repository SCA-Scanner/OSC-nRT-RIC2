/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "UsableABSInformationFDD.h"

#include "ProtocolExtensionContainer.h"
static int
memb_usable_abs_pattern_info_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 40)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_usable_abs_pattern_info_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	40	/* (SIZE(40..40)) */};
static asn_per_constraints_t asn_PER_memb_usable_abs_pattern_info_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  40,  40 }	/* (SIZE(40..40)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UsableABSInformationFDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UsableABSInformationFDD, usable_abs_pattern_info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_usable_abs_pattern_info_constr_2, &asn_PER_memb_usable_abs_pattern_info_constr_2,  memb_usable_abs_pattern_info_constraint_1 },
		0, 0, /* No default value */
		"usable-abs-pattern-info"
		},
	{ ATF_POINTER, 1, offsetof(struct UsableABSInformationFDD, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_9566P218,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_UsableABSInformationFDD_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_UsableABSInformationFDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UsableABSInformationFDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* usable-abs-pattern-info */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_UsableABSInformationFDD_specs_1 = {
	sizeof(struct UsableABSInformationFDD),
	offsetof(struct UsableABSInformationFDD, _asn_ctx),
	asn_MAP_UsableABSInformationFDD_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UsableABSInformationFDD_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UsableABSInformationFDD = {
	"UsableABSInformationFDD",
	"UsableABSInformationFDD",
	&asn_OP_SEQUENCE,
	asn_DEF_UsableABSInformationFDD_tags_1,
	sizeof(asn_DEF_UsableABSInformationFDD_tags_1)
		/sizeof(asn_DEF_UsableABSInformationFDD_tags_1[0]), /* 1 */
	asn_DEF_UsableABSInformationFDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_UsableABSInformationFDD_tags_1)
		/sizeof(asn_DEF_UsableABSInformationFDD_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UsableABSInformationFDD_1,
	2,	/* Elements count */
	&asn_SPC_UsableABSInformationFDD_specs_1	/* Additional specs */
};

