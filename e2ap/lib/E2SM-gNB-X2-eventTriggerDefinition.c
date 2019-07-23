/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "E2SM-gNB-X2-eventTriggerDefinition.h"

#include "InterfaceProtocolIE-Item.h"
static int
memb_interfaceProtocolIE_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 15)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_interfaceProtocolIE_List_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..15)) */};
static asn_per_constraints_t asn_PER_type_interfaceProtocolIE_List_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (SIZE(1..15)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_interfaceProtocolIE_List_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..15)) */};
static asn_per_constraints_t asn_PER_memb_interfaceProtocolIE_List_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (SIZE(1..15)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_interfaceProtocolIE_List_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_InterfaceProtocolIE_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_interfaceProtocolIE_List_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_interfaceProtocolIE_List_specs_5 = {
	sizeof(struct E2SM_gNB_X2_eventTriggerDefinition__interfaceProtocolIE_List),
	offsetof(struct E2SM_gNB_X2_eventTriggerDefinition__interfaceProtocolIE_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interfaceProtocolIE_List_5 = {
	"interfaceProtocolIE-List",
	"interfaceProtocolIE-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_interfaceProtocolIE_List_tags_5,
	sizeof(asn_DEF_interfaceProtocolIE_List_tags_5)
		/sizeof(asn_DEF_interfaceProtocolIE_List_tags_5[0]) - 1, /* 1 */
	asn_DEF_interfaceProtocolIE_List_tags_5,	/* Same as above */
	sizeof(asn_DEF_interfaceProtocolIE_List_tags_5)
		/sizeof(asn_DEF_interfaceProtocolIE_List_tags_5[0]), /* 2 */
	{ &asn_OER_type_interfaceProtocolIE_List_constr_5, &asn_PER_type_interfaceProtocolIE_List_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_interfaceProtocolIE_List_5,
	1,	/* Single element */
	&asn_SPC_interfaceProtocolIE_List_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_E2SM_gNB_X2_eventTriggerDefinition_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_gNB_X2_eventTriggerDefinition, interface_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Interface_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interface-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_gNB_X2_eventTriggerDefinition, interfaceDirection),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterfaceDirection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interfaceDirection"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_gNB_X2_eventTriggerDefinition, interfaceMessageType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterfaceMessageType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interfaceMessageType"
		},
	{ ATF_POINTER, 1, offsetof(struct E2SM_gNB_X2_eventTriggerDefinition, interfaceProtocolIE_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_interfaceProtocolIE_List_5,
		0,
		{ &asn_OER_memb_interfaceProtocolIE_List_constr_5, &asn_PER_memb_interfaceProtocolIE_List_constr_5,  memb_interfaceProtocolIE_List_constraint_1 },
		0, 0, /* No default value */
		"interfaceProtocolIE-List"
		},
};
static const int asn_MAP_E2SM_gNB_X2_eventTriggerDefinition_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_E2SM_gNB_X2_eventTriggerDefinition_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_gNB_X2_eventTriggerDefinition_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interface-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interfaceDirection */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interfaceMessageType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* interfaceProtocolIE-List */
};
static asn_SEQUENCE_specifics_t asn_SPC_E2SM_gNB_X2_eventTriggerDefinition_specs_1 = {
	sizeof(struct E2SM_gNB_X2_eventTriggerDefinition),
	offsetof(struct E2SM_gNB_X2_eventTriggerDefinition, _asn_ctx),
	asn_MAP_E2SM_gNB_X2_eventTriggerDefinition_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_E2SM_gNB_X2_eventTriggerDefinition_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_gNB_X2_eventTriggerDefinition = {
	"E2SM-gNB-X2-eventTriggerDefinition",
	"E2SM-gNB-X2-eventTriggerDefinition",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_gNB_X2_eventTriggerDefinition_tags_1,
	sizeof(asn_DEF_E2SM_gNB_X2_eventTriggerDefinition_tags_1)
		/sizeof(asn_DEF_E2SM_gNB_X2_eventTriggerDefinition_tags_1[0]), /* 1 */
	asn_DEF_E2SM_gNB_X2_eventTriggerDefinition_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_gNB_X2_eventTriggerDefinition_tags_1)
		/sizeof(asn_DEF_E2SM_gNB_X2_eventTriggerDefinition_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_gNB_X2_eventTriggerDefinition_1,
	4,	/* Elements count */
	&asn_SPC_E2SM_gNB_X2_eventTriggerDefinition_specs_1	/* Additional specs */
};

