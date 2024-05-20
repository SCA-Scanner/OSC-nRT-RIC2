/*
 * Copyright 2019 AT&T Intellectual Property
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * This source code is part of the near-RT RIC (RAN Intelligent Controller)
 * platform project (RICP).
 */



/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asnFiles/X2AP-PDU-Contents.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_ServedEUTRAcellsToDeleteListENDCConfUpd_H_
#define	_ServedEUTRAcellsToDeleteListENDCConfUpd_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ECGI;

/* ServedEUTRAcellsToDeleteListENDCConfUpd */
typedef struct ServedEUTRAcellsToDeleteListENDCConfUpd {
	A_SEQUENCE_OF(struct ECGI) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedEUTRAcellsToDeleteListENDCConfUpd_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServedEUTRAcellsToDeleteListENDCConfUpd;

#ifdef __cplusplus
}
#endif

#endif	/* _ServedEUTRAcellsToDeleteListENDCConfUpd_H_ */
#include "asn_internal.h"
