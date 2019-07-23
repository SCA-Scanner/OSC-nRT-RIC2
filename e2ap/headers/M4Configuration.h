/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_M4Configuration_H_
#define	_M4Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M4period.h"
#include "Links-to-log.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* M4Configuration */
typedef struct M4Configuration {
	M4period_t	 m4period;
	Links_to_log_t	 m4_links_to_log;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M4Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M4Configuration;

#ifdef __cplusplus
}
#endif

#endif	/* _M4Configuration_H_ */
#include <asn_internal.h>
