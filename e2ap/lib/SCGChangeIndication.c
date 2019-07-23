/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "SCGChangeIndication.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_SCGChangeIndication_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_SCGChangeIndication_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SCGChangeIndication_value2enum_1[] = {
	{ 0,	19,	"pDCPCountWrapAround" },
	{ 1,	12,	"pSCellChange" },
	{ 2,	5,	"other" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_SCGChangeIndication_enum2value_1[] = {
	2,	/* other(2) */
	0,	/* pDCPCountWrapAround(0) */
	1	/* pSCellChange(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_SCGChangeIndication_specs_1 = {
	asn_MAP_SCGChangeIndication_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SCGChangeIndication_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SCGChangeIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SCGChangeIndication = {
	"SCGChangeIndication",
	"SCGChangeIndication",
	&asn_OP_NativeEnumerated,
	asn_DEF_SCGChangeIndication_tags_1,
	sizeof(asn_DEF_SCGChangeIndication_tags_1)
		/sizeof(asn_DEF_SCGChangeIndication_tags_1[0]), /* 1 */
	asn_DEF_SCGChangeIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCGChangeIndication_tags_1)
		/sizeof(asn_DEF_SCGChangeIndication_tags_1[0]), /* 1 */
	{ &asn_OER_type_SCGChangeIndication_constr_1, &asn_PER_type_SCGChangeIndication_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SCGChangeIndication_specs_1	/* Additional specs */
};

