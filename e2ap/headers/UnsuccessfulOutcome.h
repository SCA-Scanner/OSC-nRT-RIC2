/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Descriptions"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_UnsuccessfulOutcome_H_
#define	_UnsuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCode.h"
#include "Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "HandoverRequest.h"
#include "HandoverRequestAcknowledge.h"
#include "HandoverPreparationFailure.h"
#include "ResetRequest.h"
#include "ResetResponse.h"
#include "X2SetupRequest.h"
#include "X2SetupResponse.h"
#include "X2SetupFailure.h"
#include "ResourceStatusRequest.h"
#include "ResourceStatusResponse.h"
#include "ResourceStatusFailure.h"
#include "ENBConfigurationUpdate.h"
#include "ENBConfigurationUpdateAcknowledge.h"
#include "ENBConfigurationUpdateFailure.h"
#include "MobilityChangeRequest.h"
#include "MobilityChangeAcknowledge.h"
#include "MobilityChangeFailure.h"
#include "CellActivationRequest.h"
#include "CellActivationResponse.h"
#include "CellActivationFailure.h"
#include "SeNBAdditionRequest.h"
#include "SeNBAdditionRequestAcknowledge.h"
#include "SeNBAdditionRequestReject.h"
#include "SeNBModificationRequest.h"
#include "SeNBModificationRequestAcknowledge.h"
#include "SeNBModificationRequestReject.h"
#include "SeNBModificationRequired.h"
#include "SeNBModificationConfirm.h"
#include "SeNBModificationRefuse.h"
#include "SeNBReleaseRequired.h"
#include "SeNBReleaseConfirm.h"
#include "X2RemovalRequest.h"
#include "X2RemovalResponse.h"
#include "X2RemovalFailure.h"
#include "RetrieveUEContextRequest.h"
#include "RetrieveUEContextResponse.h"
#include "RetrieveUEContextFailure.h"
#include "SgNBAdditionRequest.h"
#include "SgNBAdditionRequestAcknowledge.h"
#include "SgNBAdditionRequestReject.h"
#include "SgNBModificationRequest.h"
#include "SgNBModificationRequestAcknowledge.h"
#include "SgNBModificationRequestReject.h"
#include "SgNBModificationRequired.h"
#include "SgNBModificationConfirm.h"
#include "SgNBModificationRefuse.h"
#include "SgNBReleaseRequest.h"
#include "SgNBReleaseRequestAcknowledge.h"
#include "SgNBReleaseRequestReject.h"
#include "SgNBReleaseRequired.h"
#include "SgNBReleaseConfirm.h"
#include "SgNBChangeRequired.h"
#include "SgNBChangeConfirm.h"
#include "SgNBChangeRefuse.h"
#include "ENDCX2SetupRequest.h"
#include "ENDCX2SetupResponse.h"
#include "ENDCX2SetupFailure.h"
#include "ENDCConfigurationUpdate.h"
#include "ENDCConfigurationUpdateAcknowledge.h"
#include "ENDCConfigurationUpdateFailure.h"
#include "ENDCCellActivationRequest.h"
#include "ENDCCellActivationResponse.h"
#include "ENDCCellActivationFailure.h"
#include "ENDCPartialResetRequired.h"
#include "ENDCPartialResetConfirm.h"
#include "EUTRANRCellResourceCoordinationRequest.h"
#include "EUTRANRCellResourceCoordinationResponse.h"
#include "ENDCX2RemovalRequest.h"
#include "ENDCX2RemovalResponse.h"
#include "ENDCX2RemovalFailure.h"
#include "SNStatusTransfer.h"
#include "UEContextRelease.h"
#include "HandoverCancel.h"
#include "ErrorIndication.h"
#include "ResourceStatusUpdate.h"
#include "LoadInformation.h"
#include "PrivateMessage.h"
#include "RLFIndication.h"
#include "HandoverReport.h"
#include "X2Release.h"
#include "X2APMessageTransfer.h"
#include "SeNBReconfigurationComplete.h"
#include "SeNBReleaseRequest.h"
#include "SeNBCounterCheckRequest.h"
#include "SgNBReconfigurationComplete.h"
#include "SgNBCounterCheckRequest.h"
#include "RRCTransfer.h"
#include "SecondaryRATDataUsageReport.h"
#include "SgNBActivityNotification.h"
#include "DataForwardingAddressIndication.h"
#include "GNBStatusIndication.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UnsuccessfulOutcome__value_PR {
	UnsuccessfulOutcome__value_PR_NOTHING,	/* No components present */
	UnsuccessfulOutcome__value_PR_HandoverPreparationFailure,
	UnsuccessfulOutcome__value_PR_X2SetupFailure,
	UnsuccessfulOutcome__value_PR_ResourceStatusFailure,
	UnsuccessfulOutcome__value_PR_ENBConfigurationUpdateFailure,
	UnsuccessfulOutcome__value_PR_MobilityChangeFailure,
	UnsuccessfulOutcome__value_PR_CellActivationFailure,
	UnsuccessfulOutcome__value_PR_SeNBAdditionRequestReject,
	UnsuccessfulOutcome__value_PR_SeNBModificationRequestReject,
	UnsuccessfulOutcome__value_PR_SeNBModificationRefuse,
	UnsuccessfulOutcome__value_PR_X2RemovalFailure,
	UnsuccessfulOutcome__value_PR_RetrieveUEContextFailure,
	UnsuccessfulOutcome__value_PR_SgNBAdditionRequestReject,
	UnsuccessfulOutcome__value_PR_SgNBModificationRequestReject,
	UnsuccessfulOutcome__value_PR_SgNBModificationRefuse,
	UnsuccessfulOutcome__value_PR_SgNBReleaseRequestReject,
	UnsuccessfulOutcome__value_PR_SgNBChangeRefuse,
	UnsuccessfulOutcome__value_PR_ENDCX2SetupFailure,
	UnsuccessfulOutcome__value_PR_ENDCConfigurationUpdateFailure,
	UnsuccessfulOutcome__value_PR_ENDCCellActivationFailure,
	UnsuccessfulOutcome__value_PR_ENDCX2RemovalFailure
} UnsuccessfulOutcome__value_PR;

/* UnsuccessfulOutcome */
typedef struct UnsuccessfulOutcome {
	ProcedureCode_t	 procedureCode;
	Criticality_t	 criticality;
	struct UnsuccessfulOutcome__value {
		UnsuccessfulOutcome__value_PR present;
		union UnsuccessfulOutcome__value_u {
			HandoverPreparationFailure_t	 HandoverPreparationFailure;
			X2SetupFailure_t	 X2SetupFailure;
			ResourceStatusFailure_t	 ResourceStatusFailure;
			ENBConfigurationUpdateFailure_t	 ENBConfigurationUpdateFailure;
			MobilityChangeFailure_t	 MobilityChangeFailure;
			CellActivationFailure_t	 CellActivationFailure;
			SeNBAdditionRequestReject_t	 SeNBAdditionRequestReject;
			SeNBModificationRequestReject_t	 SeNBModificationRequestReject;
			SeNBModificationRefuse_t	 SeNBModificationRefuse;
			X2RemovalFailure_t	 X2RemovalFailure;
			RetrieveUEContextFailure_t	 RetrieveUEContextFailure;
			SgNBAdditionRequestReject_t	 SgNBAdditionRequestReject;
			SgNBModificationRequestReject_t	 SgNBModificationRequestReject;
			SgNBModificationRefuse_t	 SgNBModificationRefuse;
			SgNBReleaseRequestReject_t	 SgNBReleaseRequestReject;
			SgNBChangeRefuse_t	 SgNBChangeRefuse;
			ENDCX2SetupFailure_t	 ENDCX2SetupFailure;
			ENDCConfigurationUpdateFailure_t	 ENDCConfigurationUpdateFailure;
			ENDCCellActivationFailure_t	 ENDCCellActivationFailure;
			ENDCX2RemovalFailure_t	 ENDCX2RemovalFailure;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UnsuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UnsuccessfulOutcome;
extern asn_SEQUENCE_specifics_t asn_SPC_UnsuccessfulOutcome_specs_1;
extern asn_TYPE_member_t asn_MBR_UnsuccessfulOutcome_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UnsuccessfulOutcome_H_ */
#include <asn_internal.h>
