/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SRBType_H_
#define	_SRBType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRBType {
	SRBType_srb1	= 0,
	SRBType_srb2	= 1
	/*
	 * Enumeration is extensible
	 */
} e_SRBType;

/* SRBType */
typedef long	 SRBType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SRBType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SRBType;
extern const asn_INTEGER_specifics_t asn_SPC_SRBType_specs_1;
asn_struct_free_f SRBType_free;
asn_struct_print_f SRBType_print;
asn_constr_check_f SRBType_constraint;
ber_type_decoder_f SRBType_decode_ber;
der_type_encoder_f SRBType_encode_der;
xer_type_decoder_f SRBType_decode_xer;
xer_type_encoder_f SRBType_encode_xer;
oer_type_decoder_f SRBType_decode_oer;
oer_type_encoder_f SRBType_encode_oer;
per_type_decoder_f SRBType_decode_uper;
per_type_encoder_f SRBType_encode_uper;
per_type_decoder_f SRBType_decode_aper;
per_type_encoder_f SRBType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SRBType_H_ */
#include <asn_internal.h>
