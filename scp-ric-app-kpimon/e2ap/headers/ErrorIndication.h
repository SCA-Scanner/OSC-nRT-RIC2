/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "E2AP-PDU-Contents-v01.00.asn"
 * 	`asn1c -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_ErrorIndication_H_
#define	_ErrorIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ErrorIndication */
typedef struct ErrorIndication {
	ProtocolIE_Container_87P10_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ErrorIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ErrorIndication;

#ifdef __cplusplus
}
#endif

#endif	/* _ErrorIndication_H_ */
#include <asn_internal.h>
