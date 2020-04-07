/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-NRT-IEs"
 * 	found in "spec/e2sm-gNB-NRT-v401.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_E2_NRT_TableRecord_H_
#define	_E2_NRT_TableRecord_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2_NRT-TableRecord */
typedef OCTET_STRING_t	 E2_NRT_TableRecord_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2_NRT_TableRecord;
asn_struct_free_f E2_NRT_TableRecord_free;
asn_struct_print_f E2_NRT_TableRecord_print;
asn_constr_check_f E2_NRT_TableRecord_constraint;
ber_type_decoder_f E2_NRT_TableRecord_decode_ber;
der_type_encoder_f E2_NRT_TableRecord_encode_der;
xer_type_decoder_f E2_NRT_TableRecord_decode_xer;
xer_type_encoder_f E2_NRT_TableRecord_encode_xer;
per_type_decoder_f E2_NRT_TableRecord_decode_uper;
per_type_encoder_f E2_NRT_TableRecord_encode_uper;
per_type_decoder_f E2_NRT_TableRecord_decode_aper;
per_type_encoder_f E2_NRT_TableRecord_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E2_NRT_TableRecord_H_ */
#include "asn_internal.h"
