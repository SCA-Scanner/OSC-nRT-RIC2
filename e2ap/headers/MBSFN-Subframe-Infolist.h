/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_MBSFN_Subframe_Infolist_H_
#define	_MBSFN_Subframe_Infolist_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBSFN_Subframe_Info;

/* MBSFN-Subframe-Infolist */
typedef struct MBSFN_Subframe_Infolist {
	A_SEQUENCE_OF(struct MBSFN_Subframe_Info) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_Subframe_Infolist_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_Subframe_Infolist;

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFN_Subframe_Infolist_H_ */
#include <asn_internal.h>
