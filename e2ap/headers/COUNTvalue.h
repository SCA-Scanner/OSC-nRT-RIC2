/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_COUNTvalue_H_
#define	_COUNTvalue_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDCP-SN.h"
#include "HFN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* COUNTvalue */
typedef struct COUNTvalue {
	PDCP_SN_t	 pDCP_SN;
	HFN_t	 hFN;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} COUNTvalue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_COUNTvalue;
extern asn_SEQUENCE_specifics_t asn_SPC_COUNTvalue_specs_1;
extern asn_TYPE_member_t asn_MBR_COUNTvalue_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _COUNTvalue_H_ */
#include <asn_internal.h>
