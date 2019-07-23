/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_Pre_emptionCapability_H_
#define	_Pre_emptionCapability_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Pre_emptionCapability {
	Pre_emptionCapability_shall_not_trigger_pre_emption	= 0,
	Pre_emptionCapability_may_trigger_pre_emption	= 1
} e_Pre_emptionCapability;

/* Pre-emptionCapability */
typedef long	 Pre_emptionCapability_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Pre_emptionCapability_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Pre_emptionCapability;
extern const asn_INTEGER_specifics_t asn_SPC_Pre_emptionCapability_specs_1;
asn_struct_free_f Pre_emptionCapability_free;
asn_struct_print_f Pre_emptionCapability_print;
asn_constr_check_f Pre_emptionCapability_constraint;
ber_type_decoder_f Pre_emptionCapability_decode_ber;
der_type_encoder_f Pre_emptionCapability_encode_der;
xer_type_decoder_f Pre_emptionCapability_decode_xer;
xer_type_encoder_f Pre_emptionCapability_encode_xer;
oer_type_decoder_f Pre_emptionCapability_decode_oer;
oer_type_encoder_f Pre_emptionCapability_encode_oer;
per_type_decoder_f Pre_emptionCapability_decode_uper;
per_type_encoder_f Pre_emptionCapability_encode_uper;
per_type_decoder_f Pre_emptionCapability_decode_aper;
per_type_encoder_f Pre_emptionCapability_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Pre_emptionCapability_H_ */
#include <asn_internal.h>
