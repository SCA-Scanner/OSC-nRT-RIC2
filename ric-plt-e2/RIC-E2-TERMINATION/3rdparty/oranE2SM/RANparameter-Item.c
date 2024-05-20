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

#include "RANparameter-Item.h"

asn_TYPE_member_t asn_MBR_RANparameter_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANparameter_Item, ranParameter_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANparameter_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranParameter-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANparameter_Item, ranParameter_Value),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RANparameter_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranParameter-Value"
		},
};
static const ber_tlv_tag_t asn_DEF_RANparameter_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANparameter_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ranParameter-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ranParameter-Value */
};
asn_SEQUENCE_specifics_t asn_SPC_RANparameter_Item_specs_1 = {
	sizeof(struct RANparameter_Item),
	offsetof(struct RANparameter_Item, _asn_ctx),
	asn_MAP_RANparameter_Item_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RANparameter_Item = {
	"RANparameter-Item",
	"RANparameter-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_RANparameter_Item_tags_1,
	sizeof(asn_DEF_RANparameter_Item_tags_1)
		/sizeof(asn_DEF_RANparameter_Item_tags_1[0]), /* 1 */
	asn_DEF_RANparameter_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANparameter_Item_tags_1)
		/sizeof(asn_DEF_RANparameter_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RANparameter_Item_1,
	2,	/* Elements count */
	&asn_SPC_RANparameter_Item_specs_1	/* Additional specs */
};

