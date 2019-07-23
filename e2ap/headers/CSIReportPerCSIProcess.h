/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_CSIReportPerCSIProcess_H_
#define	_CSIReportPerCSIProcess_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <NativeInteger.h>
#include "CSIReportPerCSIProcessItem.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* Forward definitions */
typedef struct CSIReportPerCSIProcess__Member {
	long	 cSIProcessConfigurationIndex;
	CSIReportPerCSIProcessItem_t	 cSIReportPerCSIProcessItem;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSIReportPerCSIProcess__Member;

/* CSIReportPerCSIProcess */
typedef struct CSIReportPerCSIProcess {
	A_SEQUENCE_OF(CSIReportPerCSIProcess__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSIReportPerCSIProcess_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSIReportPerCSIProcess;
extern asn_SET_OF_specifics_t asn_SPC_CSIReportPerCSIProcess_specs_1;
extern asn_TYPE_member_t asn_MBR_CSIReportPerCSIProcess_1[1];
extern asn_per_constraints_t asn_PER_type_CSIReportPerCSIProcess_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CSIReportPerCSIProcess_H_ */
#include <asn_internal.h>
