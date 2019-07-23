/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_BandInfo_H_
#define	_BandInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* BandInfo */
typedef struct BandInfo {
	FreqBandIndicator_t	 freqBandIndicator;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_BandInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_BandInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BandInfo_H_ */
#include <asn_internal.h>
