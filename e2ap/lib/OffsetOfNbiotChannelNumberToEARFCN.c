/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "OffsetOfNbiotChannelNumberToEARFCN.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_OffsetOfNbiotChannelNumberToEARFCN_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_OffsetOfNbiotChannelNumberToEARFCN_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  20 }	/* (0..20,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_OffsetOfNbiotChannelNumberToEARFCN_value2enum_1[] = {
	{ 0,	8,	"minusTen" },
	{ 1,	9,	"minusNine" },
	{ 2,	10,	"minusEight" },
	{ 3,	10,	"minusSeven" },
	{ 4,	8,	"minusSix" },
	{ 5,	9,	"minusFive" },
	{ 6,	9,	"minusFour" },
	{ 7,	10,	"minusThree" },
	{ 8,	8,	"minusTwo" },
	{ 9,	8,	"minusOne" },
	{ 10,	16,	"minusZeroDotFive" },
	{ 11,	4,	"zero" },
	{ 12,	3,	"one" },
	{ 13,	3,	"two" },
	{ 14,	5,	"three" },
	{ 15,	4,	"four" },
	{ 16,	4,	"five" },
	{ 17,	3,	"six" },
	{ 18,	5,	"seven" },
	{ 19,	5,	"eight" },
	{ 20,	4,	"nine" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_OffsetOfNbiotChannelNumberToEARFCN_enum2value_1[] = {
	19,	/* eight(19) */
	16,	/* five(16) */
	15,	/* four(15) */
	2,	/* minusEight(2) */
	5,	/* minusFive(5) */
	6,	/* minusFour(6) */
	1,	/* minusNine(1) */
	9,	/* minusOne(9) */
	3,	/* minusSeven(3) */
	4,	/* minusSix(4) */
	0,	/* minusTen(0) */
	7,	/* minusThree(7) */
	8,	/* minusTwo(8) */
	10,	/* minusZeroDotFive(10) */
	20,	/* nine(20) */
	12,	/* one(12) */
	18,	/* seven(18) */
	17,	/* six(17) */
	14,	/* three(14) */
	13,	/* two(13) */
	11	/* zero(11) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_OffsetOfNbiotChannelNumberToEARFCN_specs_1 = {
	asn_MAP_OffsetOfNbiotChannelNumberToEARFCN_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_OffsetOfNbiotChannelNumberToEARFCN_enum2value_1,	/* N => "tag"; sorted by N */
	21,	/* Number of elements in the maps */
	22,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_OffsetOfNbiotChannelNumberToEARFCN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_OffsetOfNbiotChannelNumberToEARFCN = {
	"OffsetOfNbiotChannelNumberToEARFCN",
	"OffsetOfNbiotChannelNumberToEARFCN",
	&asn_OP_NativeEnumerated,
	asn_DEF_OffsetOfNbiotChannelNumberToEARFCN_tags_1,
	sizeof(asn_DEF_OffsetOfNbiotChannelNumberToEARFCN_tags_1)
		/sizeof(asn_DEF_OffsetOfNbiotChannelNumberToEARFCN_tags_1[0]), /* 1 */
	asn_DEF_OffsetOfNbiotChannelNumberToEARFCN_tags_1,	/* Same as above */
	sizeof(asn_DEF_OffsetOfNbiotChannelNumberToEARFCN_tags_1)
		/sizeof(asn_DEF_OffsetOfNbiotChannelNumberToEARFCN_tags_1[0]), /* 1 */
	{ &asn_OER_type_OffsetOfNbiotChannelNumberToEARFCN_constr_1, &asn_PER_type_OffsetOfNbiotChannelNumberToEARFCN_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_OffsetOfNbiotChannelNumberToEARFCN_specs_1	/* Additional specs */
};

