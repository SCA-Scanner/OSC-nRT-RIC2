/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_ABSInformationTDD_H_
#define	_ABSInformationTDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ABSInformationTDD__numberOfCellSpecificAntennaPorts {
	ABSInformationTDD__numberOfCellSpecificAntennaPorts_one	= 0,
	ABSInformationTDD__numberOfCellSpecificAntennaPorts_two	= 1,
	ABSInformationTDD__numberOfCellSpecificAntennaPorts_four	= 2
	/*
	 * Enumeration is extensible
	 */
} e_ABSInformationTDD__numberOfCellSpecificAntennaPorts;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ABSInformationTDD */
typedef struct ABSInformationTDD {
	BIT_STRING_t	 abs_pattern_info;
	long	 numberOfCellSpecificAntennaPorts;
	BIT_STRING_t	 measurement_subset;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ABSInformationTDD_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_numberOfCellSpecificAntennaPorts_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ABSInformationTDD;
extern asn_SEQUENCE_specifics_t asn_SPC_ABSInformationTDD_specs_1;
extern asn_TYPE_member_t asn_MBR_ABSInformationTDD_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ABSInformationTDD_H_ */
#include <asn_internal.h>
