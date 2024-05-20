/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Descriptions"
 * 	found in "spec/e2ap-v02.00.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "E2AP-PDU.h"

static asn_per_constraints_t asn_PER_type_E2AP_PDU_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_E2AP_PDU_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2AP_PDU, choice.initiatingMessage),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InitiatingMessage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"initiatingMessage"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2AP_PDU, choice.successfulOutcome),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SuccessfulOutcome,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"successfulOutcome"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2AP_PDU, choice.unsuccessfulOutcome),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UnsuccessfulOutcome,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"unsuccessfulOutcome"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_E2AP_PDU_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* initiatingMessage */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* successfulOutcome */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* unsuccessfulOutcome */
};
static asn_CHOICE_specifics_t asn_SPC_E2AP_PDU_specs_1 = {
	sizeof(struct E2AP_PDU),
	offsetof(struct E2AP_PDU, _asn_ctx),
	offsetof(struct E2AP_PDU, present),
	sizeof(((struct E2AP_PDU *)0)->present),
	asn_MAP_E2AP_PDU_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_E2AP_PDU = {
	"E2AP-PDU",
	"E2AP-PDU",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_E2AP_PDU_constr_1, CHOICE_constraint },
	asn_MBR_E2AP_PDU_1,
	3,	/* Elements count */
	&asn_SPC_E2AP_PDU_specs_1	/* Additional specs */
};

