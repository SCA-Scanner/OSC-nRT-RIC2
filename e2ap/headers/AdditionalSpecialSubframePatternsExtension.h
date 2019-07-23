/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_AdditionalSpecialSubframePatternsExtension_H_
#define	_AdditionalSpecialSubframePatternsExtension_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AdditionalSpecialSubframePatternsExtension {
	AdditionalSpecialSubframePatternsExtension_ssp10	= 0
	/*
	 * Enumeration is extensible
	 */
} e_AdditionalSpecialSubframePatternsExtension;

/* AdditionalSpecialSubframePatternsExtension */
typedef long	 AdditionalSpecialSubframePatternsExtension_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AdditionalSpecialSubframePatternsExtension_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AdditionalSpecialSubframePatternsExtension;
extern const asn_INTEGER_specifics_t asn_SPC_AdditionalSpecialSubframePatternsExtension_specs_1;
asn_struct_free_f AdditionalSpecialSubframePatternsExtension_free;
asn_struct_print_f AdditionalSpecialSubframePatternsExtension_print;
asn_constr_check_f AdditionalSpecialSubframePatternsExtension_constraint;
ber_type_decoder_f AdditionalSpecialSubframePatternsExtension_decode_ber;
der_type_encoder_f AdditionalSpecialSubframePatternsExtension_encode_der;
xer_type_decoder_f AdditionalSpecialSubframePatternsExtension_decode_xer;
xer_type_encoder_f AdditionalSpecialSubframePatternsExtension_encode_xer;
oer_type_decoder_f AdditionalSpecialSubframePatternsExtension_decode_oer;
oer_type_encoder_f AdditionalSpecialSubframePatternsExtension_encode_oer;
per_type_decoder_f AdditionalSpecialSubframePatternsExtension_decode_uper;
per_type_encoder_f AdditionalSpecialSubframePatternsExtension_encode_uper;
per_type_decoder_f AdditionalSpecialSubframePatternsExtension_decode_aper;
per_type_encoder_f AdditionalSpecialSubframePatternsExtension_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AdditionalSpecialSubframePatternsExtension_H_ */
#include <asn_internal.h>
