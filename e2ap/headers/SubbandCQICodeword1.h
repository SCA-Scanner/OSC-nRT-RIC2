/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SubbandCQICodeword1_H_
#define	_SubbandCQICodeword1_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SubbandCQICodeword1_PR {
	SubbandCQICodeword1_PR_NOTHING,	/* No components present */
	SubbandCQICodeword1_PR_four_bitCQI,
	SubbandCQICodeword1_PR_three_bitSpatialDifferentialCQI,
	SubbandCQICodeword1_PR_two_bitSubbandDifferentialCQI,
	SubbandCQICodeword1_PR_two_bitDifferentialCQI
	/* Extensions may appear below */
	
} SubbandCQICodeword1_PR;

/* SubbandCQICodeword1 */
typedef struct SubbandCQICodeword1 {
	SubbandCQICodeword1_PR present;
	union SubbandCQICodeword1_u {
		long	 four_bitCQI;
		long	 three_bitSpatialDifferentialCQI;
		long	 two_bitSubbandDifferentialCQI;
		long	 two_bitDifferentialCQI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SubbandCQICodeword1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SubbandCQICodeword1;
extern asn_CHOICE_specifics_t asn_SPC_SubbandCQICodeword1_specs_1;
extern asn_TYPE_member_t asn_MBR_SubbandCQICodeword1_1[4];
extern asn_per_constraints_t asn_PER_type_SubbandCQICodeword1_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SubbandCQICodeword1_H_ */
#include <asn_internal.h>
