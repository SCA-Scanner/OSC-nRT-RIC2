/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_ProtectedEUTRAResourceIndication_H_
#define	_ProtectedEUTRAResourceIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "ProtectedResourceList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ProtectedEUTRAResourceIndication */
typedef struct ProtectedEUTRAResourceIndication {
	long	 activationSFN;
	ProtectedResourceList_t	 protectedResourceList;
	long	*mBSFNControlRegionLength;	/* OPTIONAL */
	long	*pDCCHRegionLength;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtectedEUTRAResourceIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtectedEUTRAResourceIndication;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtectedEUTRAResourceIndication_H_ */
#include <asn_internal.h>
