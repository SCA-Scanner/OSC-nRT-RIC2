/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_E_RABs_SubjectToSgNBCounterCheck_List_H_
#define	_E_RABs_SubjectToSgNBCounterCheck_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolIE_Single_Container;

/* E-RABs-SubjectToSgNBCounterCheck-List */
typedef struct E_RABs_SubjectToSgNBCounterCheck_List {
	A_SEQUENCE_OF(struct ProtocolIE_Single_Container) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABs_SubjectToSgNBCounterCheck_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABs_SubjectToSgNBCounterCheck_List;

#ifdef __cplusplus
}
#endif

#endif	/* _E_RABs_SubjectToSgNBCounterCheck_List_H_ */
#include <asn_internal.h>
