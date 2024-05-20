/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-oran-wg3-v01.00.asn"
 * 	`asn1c -fno-include-deps -fcompound-names -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_CauseRICservice_H_
#define	_CauseRICservice_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CauseRICservice {
	CauseRICservice_function_not_required	= 0,
	CauseRICservice_excessive_functions	= 1,
	CauseRICservice_ric_resource_limit	= 2
	/*
	 * Enumeration is extensible
	 */
} e_CauseRICservice;

/* CauseRICservice */
typedef long	 CauseRICservice_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CauseRICservice_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CauseRICservice;
extern const asn_INTEGER_specifics_t asn_SPC_CauseRICservice_specs_1;
asn_struct_free_f CauseRICservice_free;
asn_struct_print_f CauseRICservice_print;
asn_constr_check_f CauseRICservice_constraint;
ber_type_decoder_f CauseRICservice_decode_ber;
der_type_encoder_f CauseRICservice_encode_der;
xer_type_decoder_f CauseRICservice_decode_xer;
xer_type_encoder_f CauseRICservice_encode_xer;
per_type_decoder_f CauseRICservice_decode_uper;
per_type_encoder_f CauseRICservice_encode_uper;
per_type_decoder_f CauseRICservice_decode_aper;
per_type_encoder_f CauseRICservice_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseRICservice_H_ */
#include <asn_internal.h>
