/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_CriticalityDiagnostics_H_
#define	_CriticalityDiagnostics_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCode.h"
#include "TriggeringMessage.h"
#include "Criticality.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CriticalityDiagnostics_IE_List;
struct ProtocolExtensionContainer;

/* CriticalityDiagnostics */
typedef struct CriticalityDiagnostics {
	ProcedureCode_t	*procedureCode;	/* OPTIONAL */
	TriggeringMessage_t	*triggeringMessage;	/* OPTIONAL */
	Criticality_t	*procedureCriticality;	/* OPTIONAL */
	struct CriticalityDiagnostics_IE_List	*iEsCriticalityDiagnostics;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CriticalityDiagnostics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CriticalityDiagnostics;

#ifdef __cplusplus
}
#endif

#endif	/* _CriticalityDiagnostics_H_ */
#include <asn_internal.h>
