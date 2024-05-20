/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "E2SM-COMMON-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "InterfaceIdentifier.h"

#include "InterfaceID-NG.h"
#include "InterfaceID-Xn.h"
#include "InterfaceID-F1.h"
#include "InterfaceID-E1.h"
#include "InterfaceID-S1.h"
#include "InterfaceID-X2.h"
#include "InterfaceID-W1.h"
static asn_per_constraints_t asn_PER_type_InterfaceIdentifier_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_InterfaceIdentifier_1[] = {
	{ ATF_POINTER, 0, offsetof(struct InterfaceIdentifier, choice.nG),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterfaceID_NG,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nG"
		},
	{ ATF_POINTER, 0, offsetof(struct InterfaceIdentifier, choice.xN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterfaceID_Xn,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xN"
		},
	{ ATF_POINTER, 0, offsetof(struct InterfaceIdentifier, choice.f1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterfaceID_F1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"f1"
		},
	{ ATF_POINTER, 0, offsetof(struct InterfaceIdentifier, choice.e1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterfaceID_E1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e1"
		},
	{ ATF_POINTER, 0, offsetof(struct InterfaceIdentifier, choice.s1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterfaceID_S1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s1"
		},
	{ ATF_POINTER, 0, offsetof(struct InterfaceIdentifier, choice.x2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterfaceID_X2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"x2"
		},
	{ ATF_POINTER, 0, offsetof(struct InterfaceIdentifier, choice.w1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterfaceID_W1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"w1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_InterfaceIdentifier_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nG */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* xN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* f1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e1 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* s1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* x2 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* w1 */
};
static asn_CHOICE_specifics_t asn_SPC_InterfaceIdentifier_specs_1 = {
	sizeof(struct InterfaceIdentifier),
	offsetof(struct InterfaceIdentifier, _asn_ctx),
	offsetof(struct InterfaceIdentifier, present),
	sizeof(((struct InterfaceIdentifier *)0)->present),
	asn_MAP_InterfaceIdentifier_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0,
	7	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_InterfaceIdentifier = {
	"InterfaceIdentifier",
	"InterfaceIdentifier",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_InterfaceIdentifier_constr_1, CHOICE_constraint },
	asn_MBR_InterfaceIdentifier_1,
	7,	/* Elements count */
	&asn_SPC_InterfaceIdentifier_specs_1	/* Additional specs */
};

