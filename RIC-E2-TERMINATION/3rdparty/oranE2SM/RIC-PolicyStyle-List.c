/*
 *
 * Copyright 2020 AT&T Intellectual Property
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-NRT-IEs"
 * 	found in "../asnTextFiles/e2sm-gNB-NRT-v401.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "RIC-PolicyStyle-List.h"

#include "RANparameterDef-Item.h"
static int
memb_ric_PolicyRanParameterDef_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_ric_PolicyRanParameterDef_List_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ric_PolicyRanParameterDef_List_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ric_PolicyRanParameterDef_List_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RANparameterDef_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ric_PolicyRanParameterDef_List_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ric_PolicyRanParameterDef_List_specs_5 = {
	sizeof(struct RIC_PolicyStyle_List__ric_PolicyRanParameterDef_List),
	offsetof(struct RIC_PolicyStyle_List__ric_PolicyRanParameterDef_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ric_PolicyRanParameterDef_List_5 = {
	"ric-PolicyRanParameterDef-List",
	"ric-PolicyRanParameterDef-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ric_PolicyRanParameterDef_List_tags_5,
	sizeof(asn_DEF_ric_PolicyRanParameterDef_List_tags_5)
		/sizeof(asn_DEF_ric_PolicyRanParameterDef_List_tags_5[0]) - 1, /* 1 */
	asn_DEF_ric_PolicyRanParameterDef_List_tags_5,	/* Same as above */
	sizeof(asn_DEF_ric_PolicyRanParameterDef_List_tags_5)
		/sizeof(asn_DEF_ric_PolicyRanParameterDef_List_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_ric_PolicyRanParameterDef_List_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_ric_PolicyRanParameterDef_List_5,
	1,	/* Single element */
	&asn_SPC_ric_PolicyRanParameterDef_List_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RIC_PolicyStyle_List_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RIC_PolicyStyle_List, ric_PolicyStyle_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RIC_Style_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-PolicyStyle-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RIC_PolicyStyle_List, ric_PolicyStyle_Name),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RIC_Style_Name,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-PolicyStyle-Name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RIC_PolicyStyle_List, ric_PolicyActionFormat_Type),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RIC_Format_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-PolicyActionFormat-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RIC_PolicyStyle_List, ric_PolicyRanParameterDef_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ric_PolicyRanParameterDef_List_5,
		0,
		{ 0, &asn_PER_memb_ric_PolicyRanParameterDef_List_constr_5,  memb_ric_PolicyRanParameterDef_List_constraint_1 },
		0, 0, /* No default value */
		"ric-PolicyRanParameterDef-List"
		},
};
static const ber_tlv_tag_t asn_DEF_RIC_PolicyStyle_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RIC_PolicyStyle_List_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ric-PolicyStyle-Type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ric-PolicyStyle-Name */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ric-PolicyActionFormat-Type */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ric-PolicyRanParameterDef-List */
};
asn_SEQUENCE_specifics_t asn_SPC_RIC_PolicyStyle_List_specs_1 = {
	sizeof(struct RIC_PolicyStyle_List),
	offsetof(struct RIC_PolicyStyle_List, _asn_ctx),
	asn_MAP_RIC_PolicyStyle_List_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RIC_PolicyStyle_List = {
	"RIC-PolicyStyle-List",
	"RIC-PolicyStyle-List",
	&asn_OP_SEQUENCE,
	asn_DEF_RIC_PolicyStyle_List_tags_1,
	sizeof(asn_DEF_RIC_PolicyStyle_List_tags_1)
		/sizeof(asn_DEF_RIC_PolicyStyle_List_tags_1[0]), /* 1 */
	asn_DEF_RIC_PolicyStyle_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_RIC_PolicyStyle_List_tags_1)
		/sizeof(asn_DEF_RIC_PolicyStyle_List_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RIC_PolicyStyle_List_1,
	4,	/* Elements count */
	&asn_SPC_RIC_PolicyStyle_List_specs_1	/* Additional specs */
};

