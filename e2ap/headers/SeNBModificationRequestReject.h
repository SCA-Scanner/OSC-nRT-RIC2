/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SeNBModificationRequestReject_H_
#define	_SeNBModificationRequestReject_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SeNBModificationRequestReject */
typedef struct SeNBModificationRequestReject {
	ProtocolIE_Container_9515P50_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeNBModificationRequestReject_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeNBModificationRequestReject;
extern asn_SEQUENCE_specifics_t asn_SPC_SeNBModificationRequestReject_specs_1;
extern asn_TYPE_member_t asn_MBR_SeNBModificationRequestReject_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SeNBModificationRequestReject_H_ */
#include <asn_internal.h>
