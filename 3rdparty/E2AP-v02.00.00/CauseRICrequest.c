/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "spec/e2ap-v02.00.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "CauseRICrequest.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_CauseRICrequest_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  13 }	/* (0..13,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_CauseRICrequest_value2enum_1[] = {
	{ 0,	23,	"ran-function-id-invalid" },
	{ 1,	20,	"action-not-supported" },
	{ 2,	17,	"excessive-actions" },
	{ 3,	16,	"duplicate-action" },
	{ 4,	23,	"duplicate-event-trigger" },
	{ 5,	23,	"function-resource-limit" },
	{ 6,	18,	"request-id-unknown" },
	{ 7,	46,	"inconsistent-action-subsequent-action-sequence" },
	{ 8,	23,	"control-message-invalid" },
	{ 9,	27,	"ric-call-process-id-invalid" },
	{ 10,	21,	"control-timer-expired" },
	{ 11,	25,	"control-failed-to-execute" },
	{ 12,	16,	"system-not-ready" },
	{ 13,	11,	"unspecified" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_CauseRICrequest_enum2value_1[] = {
	1,	/* action-not-supported(1) */
	11,	/* control-failed-to-execute(11) */
	8,	/* control-message-invalid(8) */
	10,	/* control-timer-expired(10) */
	3,	/* duplicate-action(3) */
	4,	/* duplicate-event-trigger(4) */
	2,	/* excessive-actions(2) */
	5,	/* function-resource-limit(5) */
	7,	/* inconsistent-action-subsequent-action-sequence(7) */
	0,	/* ran-function-id-invalid(0) */
	6,	/* request-id-unknown(6) */
	9,	/* ric-call-process-id-invalid(9) */
	12,	/* system-not-ready(12) */
	13	/* unspecified(13) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_CauseRICrequest_specs_1 = {
	asn_MAP_CauseRICrequest_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_CauseRICrequest_enum2value_1,	/* N => "tag"; sorted by N */
	14,	/* Number of elements in the maps */
	15,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_CauseRICrequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CauseRICrequest = {
	"CauseRICrequest",
	"CauseRICrequest",
	&asn_OP_NativeEnumerated,
	asn_DEF_CauseRICrequest_tags_1,
	sizeof(asn_DEF_CauseRICrequest_tags_1)
		/sizeof(asn_DEF_CauseRICrequest_tags_1[0]), /* 1 */
	asn_DEF_CauseRICrequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_CauseRICrequest_tags_1)
		/sizeof(asn_DEF_CauseRICrequest_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_CauseRICrequest_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_CauseRICrequest_specs_1	/* Additional specs */
};

