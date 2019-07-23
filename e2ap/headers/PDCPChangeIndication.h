/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_PDCPChangeIndication_H_
#define	_PDCPChangeIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCPChangeIndication {
	PDCPChangeIndication_s_KgNB_update_required	= 0,
	PDCPChangeIndication_pDCP_data_recovery_required	= 1
	/*
	 * Enumeration is extensible
	 */
} e_PDCPChangeIndication;

/* PDCPChangeIndication */
typedef long	 PDCPChangeIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDCPChangeIndication;
asn_struct_free_f PDCPChangeIndication_free;
asn_struct_print_f PDCPChangeIndication_print;
asn_constr_check_f PDCPChangeIndication_constraint;
ber_type_decoder_f PDCPChangeIndication_decode_ber;
der_type_encoder_f PDCPChangeIndication_encode_der;
xer_type_decoder_f PDCPChangeIndication_decode_xer;
xer_type_encoder_f PDCPChangeIndication_encode_xer;
oer_type_decoder_f PDCPChangeIndication_decode_oer;
oer_type_encoder_f PDCPChangeIndication_encode_oer;
per_type_decoder_f PDCPChangeIndication_decode_uper;
per_type_encoder_f PDCPChangeIndication_encode_uper;
per_type_decoder_f PDCPChangeIndication_decode_aper;
per_type_encoder_f PDCPChangeIndication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PDCPChangeIndication_H_ */
#include <asn_internal.h>
