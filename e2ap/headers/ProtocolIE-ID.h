/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-CommonDataTypes"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_ProtocolIE_ID_H_
#define	_ProtocolIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ProtocolIE-ID */
typedef long	 ProtocolIE_ID_t;

/* Implementation */
#define ProtocolIE_ID_id_RANfunction_Item	((ProtocolIE_ID_t)60001)
#define ProtocolIE_ID_id_RANfunctionDefinition	((ProtocolIE_ID_t)60002)
#define ProtocolIE_ID_id_RANfunctionID	((ProtocolIE_ID_t)60003)
#define ProtocolIE_ID_id_RANfunctionID_Item	((ProtocolIE_ID_t)60004)
#define ProtocolIE_ID_id_RANfunctionIEcause_Item	((ProtocolIE_ID_t)60005)
#define ProtocolIE_ID_id_RANfunctionsAccepted	((ProtocolIE_ID_t)60006)
#define ProtocolIE_ID_id_RANfunctionsAdded	((ProtocolIE_ID_t)60007)
#define ProtocolIE_ID_id_RANfunctionsDeleted	((ProtocolIE_ID_t)60008)
#define ProtocolIE_ID_id_RANfunctionsModified	((ProtocolIE_ID_t)60009)
#define ProtocolIE_ID_id_RANfunctionsRejected	((ProtocolIE_ID_t)60010)
#define ProtocolIE_ID_id_RICaction_ToBeSetup_Item	((ProtocolIE_ID_t)60011)
#define ProtocolIE_ID_id_RICactions_Admitted	((ProtocolIE_ID_t)60012)
#define ProtocolIE_ID_id_RICaction_Admitted_Item	((ProtocolIE_ID_t)60013)
#define ProtocolIE_ID_id_RICactions_NotAdmitted	((ProtocolIE_ID_t)60014)
#define ProtocolIE_ID_id_RICaction_NotAdmitted_Item	((ProtocolIE_ID_t)60015)
#define ProtocolIE_ID_id_RICactionDefinition	((ProtocolIE_ID_t)60016)
#define ProtocolIE_ID_id_RICactionID	((ProtocolIE_ID_t)60017)
#define ProtocolIE_ID_id_RICactionType	((ProtocolIE_ID_t)60018)
#define ProtocolIE_ID_id_RICcallProcessID	((ProtocolIE_ID_t)60019)
#define ProtocolIE_ID_id_RICcause	((ProtocolIE_ID_t)60020)
#define ProtocolIE_ID_id_RICcontrolAckRequest	((ProtocolIE_ID_t)60021)
#define ProtocolIE_ID_id_RICcontrolHeader	((ProtocolIE_ID_t)60022)
#define ProtocolIE_ID_id_RICcontrolMessage	((ProtocolIE_ID_t)60023)
#define ProtocolIE_ID_id_RICcontrolStatus	((ProtocolIE_ID_t)60024)
#define ProtocolIE_ID_id_RICeventTriggerDefinition	((ProtocolIE_ID_t)60025)
#define ProtocolIE_ID_id_RICindicationHeader	((ProtocolIE_ID_t)60026)
#define ProtocolIE_ID_id_RICindicationMessage	((ProtocolIE_ID_t)60027)
#define ProtocolIE_ID_id_RICindicationSN	((ProtocolIE_ID_t)60028)
#define ProtocolIE_ID_id_RICindicationType	((ProtocolIE_ID_t)60029)
#define ProtocolIE_ID_id_RICrequestID	((ProtocolIE_ID_t)60030)
#define ProtocolIE_ID_id_RICrequestorID	((ProtocolIE_ID_t)60031)
#define ProtocolIE_ID_id_RICrequestSequenceNumber	((ProtocolIE_ID_t)60032)
#define ProtocolIE_ID_id_RICsubscription	((ProtocolIE_ID_t)60033)
#define ProtocolIE_ID_id_RICsubsequentAction	((ProtocolIE_ID_t)60034)
#define ProtocolIE_ID_id_RICsubsequentActionType	((ProtocolIE_ID_t)60035)
#define ProtocolIE_ID_id_RICtimeToWait	((ProtocolIE_ID_t)60036)
extern asn_per_constraints_t asn_PER_type_ProtocolIE_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_ID;
asn_struct_free_f ProtocolIE_ID_free;
asn_struct_print_f ProtocolIE_ID_print;
asn_constr_check_f ProtocolIE_ID_constraint;
ber_type_decoder_f ProtocolIE_ID_decode_ber;
der_type_encoder_f ProtocolIE_ID_encode_der;
xer_type_decoder_f ProtocolIE_ID_decode_xer;
xer_type_encoder_f ProtocolIE_ID_encode_xer;
oer_type_decoder_f ProtocolIE_ID_decode_oer;
oer_type_encoder_f ProtocolIE_ID_encode_oer;
per_type_decoder_f ProtocolIE_ID_decode_uper;
per_type_encoder_f ProtocolIE_ID_encode_uper;
per_type_decoder_f ProtocolIE_ID_decode_aper;
per_type_encoder_f ProtocolIE_ID_encode_aper;
#define ProtocolIE_ID_id_E_RABs_Admitted_Item	((ProtocolIE_ID_t)0)
#define ProtocolIE_ID_id_E_RABs_Admitted_List	((ProtocolIE_ID_t)1)
#define ProtocolIE_ID_id_E_RAB_Item	((ProtocolIE_ID_t)2)
#define ProtocolIE_ID_id_E_RABs_NotAdmitted_List	((ProtocolIE_ID_t)3)
#define ProtocolIE_ID_id_E_RABs_ToBeSetup_Item	((ProtocolIE_ID_t)4)
#define ProtocolIE_ID_id_Cause	((ProtocolIE_ID_t)5)
#define ProtocolIE_ID_id_CellInformation	((ProtocolIE_ID_t)6)
#define ProtocolIE_ID_id_CellInformation_Item	((ProtocolIE_ID_t)7)
#define ProtocolIE_ID_id_New_eNB_UE_X2AP_ID	((ProtocolIE_ID_t)9)
#define ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID	((ProtocolIE_ID_t)10)
#define ProtocolIE_ID_id_TargetCell_ID	((ProtocolIE_ID_t)11)
#define ProtocolIE_ID_id_TargeteNBtoSource_eNBTransparentContainer	((ProtocolIE_ID_t)12)
#define ProtocolIE_ID_id_TraceActivation	((ProtocolIE_ID_t)13)
#define ProtocolIE_ID_id_UE_ContextInformation	((ProtocolIE_ID_t)14)
#define ProtocolIE_ID_id_UE_HistoryInformation	((ProtocolIE_ID_t)15)
#define ProtocolIE_ID_id_UE_X2AP_ID	((ProtocolIE_ID_t)16)
#define ProtocolIE_ID_id_CriticalityDiagnostics	((ProtocolIE_ID_t)17)
#define ProtocolIE_ID_id_E_RABs_SubjectToStatusTransfer_List	((ProtocolIE_ID_t)18)
#define ProtocolIE_ID_id_E_RABs_SubjectToStatusTransfer_Item	((ProtocolIE_ID_t)19)
#define ProtocolIE_ID_id_ServedCells	((ProtocolIE_ID_t)20)
#define ProtocolIE_ID_id_GlobalENB_ID	((ProtocolIE_ID_t)21)
#define ProtocolIE_ID_id_TimeToWait	((ProtocolIE_ID_t)22)
#define ProtocolIE_ID_id_GUMMEI_ID	((ProtocolIE_ID_t)23)
#define ProtocolIE_ID_id_GUGroupIDList	((ProtocolIE_ID_t)24)
#define ProtocolIE_ID_id_ServedCellsToAdd	((ProtocolIE_ID_t)25)
#define ProtocolIE_ID_id_ServedCellsToModify	((ProtocolIE_ID_t)26)
#define ProtocolIE_ID_id_ServedCellsToDelete	((ProtocolIE_ID_t)27)
#define ProtocolIE_ID_id_Registration_Request	((ProtocolIE_ID_t)28)
#define ProtocolIE_ID_id_CellToReport	((ProtocolIE_ID_t)29)
#define ProtocolIE_ID_id_ReportingPeriodicity	((ProtocolIE_ID_t)30)
#define ProtocolIE_ID_id_CellToReport_Item	((ProtocolIE_ID_t)31)
#define ProtocolIE_ID_id_CellMeasurementResult	((ProtocolIE_ID_t)32)
#define ProtocolIE_ID_id_CellMeasurementResult_Item	((ProtocolIE_ID_t)33)
#define ProtocolIE_ID_id_GUGroupIDToAddList	((ProtocolIE_ID_t)34)
#define ProtocolIE_ID_id_GUGroupIDToDeleteList	((ProtocolIE_ID_t)35)
#define ProtocolIE_ID_id_SRVCCOperationPossible	((ProtocolIE_ID_t)36)
#define ProtocolIE_ID_id_Measurement_ID	((ProtocolIE_ID_t)37)
#define ProtocolIE_ID_id_ReportCharacteristics	((ProtocolIE_ID_t)38)
#define ProtocolIE_ID_id_ENB1_Measurement_ID	((ProtocolIE_ID_t)39)
#define ProtocolIE_ID_id_ENB2_Measurement_ID	((ProtocolIE_ID_t)40)
#define ProtocolIE_ID_id_Number_of_Antennaports	((ProtocolIE_ID_t)41)
#define ProtocolIE_ID_id_CompositeAvailableCapacityGroup	((ProtocolIE_ID_t)42)
#define ProtocolIE_ID_id_ENB1_Cell_ID	((ProtocolIE_ID_t)43)
#define ProtocolIE_ID_id_ENB2_Cell_ID	((ProtocolIE_ID_t)44)
#define ProtocolIE_ID_id_ENB2_Proposed_Mobility_Parameters	((ProtocolIE_ID_t)45)
#define ProtocolIE_ID_id_ENB1_Mobility_Parameters	((ProtocolIE_ID_t)46)
#define ProtocolIE_ID_id_ENB2_Mobility_Parameters_Modification_Range	((ProtocolIE_ID_t)47)
#define ProtocolIE_ID_id_FailureCellPCI	((ProtocolIE_ID_t)48)
#define ProtocolIE_ID_id_Re_establishmentCellECGI	((ProtocolIE_ID_t)49)
#define ProtocolIE_ID_id_FailureCellCRNTI	((ProtocolIE_ID_t)50)
#define ProtocolIE_ID_id_ShortMAC_I	((ProtocolIE_ID_t)51)
#define ProtocolIE_ID_id_SourceCellECGI	((ProtocolIE_ID_t)52)
#define ProtocolIE_ID_id_FailureCellECGI	((ProtocolIE_ID_t)53)
#define ProtocolIE_ID_id_HandoverReportType	((ProtocolIE_ID_t)54)
#define ProtocolIE_ID_id_PRACH_Configuration	((ProtocolIE_ID_t)55)
#define ProtocolIE_ID_id_MBSFN_Subframe_Info	((ProtocolIE_ID_t)56)
#define ProtocolIE_ID_id_ServedCellsToActivate	((ProtocolIE_ID_t)57)
#define ProtocolIE_ID_id_ActivatedCellList	((ProtocolIE_ID_t)58)
#define ProtocolIE_ID_id_DeactivationIndication	((ProtocolIE_ID_t)59)
#define ProtocolIE_ID_id_UE_RLF_Report_Container	((ProtocolIE_ID_t)60)
#define ProtocolIE_ID_id_ABSInformation	((ProtocolIE_ID_t)61)
#define ProtocolIE_ID_id_InvokeIndication	((ProtocolIE_ID_t)62)
#define ProtocolIE_ID_id_ABS_Status	((ProtocolIE_ID_t)63)
#define ProtocolIE_ID_id_PartialSuccessIndicator	((ProtocolIE_ID_t)64)
#define ProtocolIE_ID_id_MeasurementInitiationResult_List	((ProtocolIE_ID_t)65)
#define ProtocolIE_ID_id_MeasurementInitiationResult_Item	((ProtocolIE_ID_t)66)
#define ProtocolIE_ID_id_MeasurementFailureCause_Item	((ProtocolIE_ID_t)67)
#define ProtocolIE_ID_id_CompleteFailureCauseInformation_List	((ProtocolIE_ID_t)68)
#define ProtocolIE_ID_id_CompleteFailureCauseInformation_Item	((ProtocolIE_ID_t)69)
#define ProtocolIE_ID_id_CSG_Id	((ProtocolIE_ID_t)70)
#define ProtocolIE_ID_id_CSGMembershipStatus	((ProtocolIE_ID_t)71)
#define ProtocolIE_ID_id_MDTConfiguration	((ProtocolIE_ID_t)72)
#define ProtocolIE_ID_id_ManagementBasedMDTallowed	((ProtocolIE_ID_t)74)
#define ProtocolIE_ID_id_RRCConnSetupIndicator	((ProtocolIE_ID_t)75)
#define ProtocolIE_ID_id_NeighbourTAC	((ProtocolIE_ID_t)76)
#define ProtocolIE_ID_id_Time_UE_StayedInCell_EnhancedGranularity	((ProtocolIE_ID_t)77)
#define ProtocolIE_ID_id_RRCConnReestabIndicator	((ProtocolIE_ID_t)78)
#define ProtocolIE_ID_id_MBMS_Service_Area_List	((ProtocolIE_ID_t)79)
#define ProtocolIE_ID_id_HO_cause	((ProtocolIE_ID_t)80)
#define ProtocolIE_ID_id_TargetCellInUTRAN	((ProtocolIE_ID_t)81)
#define ProtocolIE_ID_id_MobilityInformation	((ProtocolIE_ID_t)82)
#define ProtocolIE_ID_id_SourceCellCRNTI	((ProtocolIE_ID_t)83)
#define ProtocolIE_ID_id_MultibandInfoList	((ProtocolIE_ID_t)84)
#define ProtocolIE_ID_id_M3Configuration	((ProtocolIE_ID_t)85)
#define ProtocolIE_ID_id_M4Configuration	((ProtocolIE_ID_t)86)
#define ProtocolIE_ID_id_M5Configuration	((ProtocolIE_ID_t)87)
#define ProtocolIE_ID_id_MDT_Location_Info	((ProtocolIE_ID_t)88)
#define ProtocolIE_ID_id_ManagementBasedMDTPLMNList	((ProtocolIE_ID_t)89)
#define ProtocolIE_ID_id_SignallingBasedMDTPLMNList	((ProtocolIE_ID_t)90)
#define ProtocolIE_ID_id_ReceiveStatusOfULPDCPSDUsExtended	((ProtocolIE_ID_t)91)
#define ProtocolIE_ID_id_ULCOUNTValueExtended	((ProtocolIE_ID_t)92)
#define ProtocolIE_ID_id_DLCOUNTValueExtended	((ProtocolIE_ID_t)93)
#define ProtocolIE_ID_id_eARFCNExtension	((ProtocolIE_ID_t)94)
#define ProtocolIE_ID_id_UL_EARFCNExtension	((ProtocolIE_ID_t)95)
#define ProtocolIE_ID_id_DL_EARFCNExtension	((ProtocolIE_ID_t)96)
#define ProtocolIE_ID_id_AdditionalSpecialSubframe_Info	((ProtocolIE_ID_t)97)
#define ProtocolIE_ID_id_Masked_IMEISV	((ProtocolIE_ID_t)98)
#define ProtocolIE_ID_id_IntendedULDLConfiguration	((ProtocolIE_ID_t)99)
#define ProtocolIE_ID_id_ExtendedULInterferenceOverloadInfo	((ProtocolIE_ID_t)100)
#define ProtocolIE_ID_id_RNL_Header	((ProtocolIE_ID_t)101)
#define ProtocolIE_ID_id_x2APMessage	((ProtocolIE_ID_t)102)
#define ProtocolIE_ID_id_ProSeAuthorized	((ProtocolIE_ID_t)103)
#define ProtocolIE_ID_id_ExpectedUEBehaviour	((ProtocolIE_ID_t)104)
#define ProtocolIE_ID_id_UE_HistoryInformationFromTheUE	((ProtocolIE_ID_t)105)
#define ProtocolIE_ID_id_DynamicDLTransmissionInformation	((ProtocolIE_ID_t)106)
#define ProtocolIE_ID_id_UE_RLF_Report_Container_for_extended_bands	((ProtocolIE_ID_t)107)
#define ProtocolIE_ID_id_CoMPInformation	((ProtocolIE_ID_t)108)
#define ProtocolIE_ID_id_ReportingPeriodicityRSRPMR	((ProtocolIE_ID_t)109)
#define ProtocolIE_ID_id_RSRPMRList	((ProtocolIE_ID_t)110)
#define ProtocolIE_ID_id_MeNB_UE_X2AP_ID	((ProtocolIE_ID_t)111)
#define ProtocolIE_ID_id_SeNB_UE_X2AP_ID	((ProtocolIE_ID_t)112)
#define ProtocolIE_ID_id_UE_SecurityCapabilities	((ProtocolIE_ID_t)113)
#define ProtocolIE_ID_id_SeNBSecurityKey	((ProtocolIE_ID_t)114)
#define ProtocolIE_ID_id_SeNBUEAggregateMaximumBitRate	((ProtocolIE_ID_t)115)
#define ProtocolIE_ID_id_ServingPLMN	((ProtocolIE_ID_t)116)
#define ProtocolIE_ID_id_E_RABs_ToBeAdded_List	((ProtocolIE_ID_t)117)
#define ProtocolIE_ID_id_E_RABs_ToBeAdded_Item	((ProtocolIE_ID_t)118)
#define ProtocolIE_ID_id_MeNBtoSeNBContainer	((ProtocolIE_ID_t)119)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeAdded_List	((ProtocolIE_ID_t)120)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeAdded_Item	((ProtocolIE_ID_t)121)
#define ProtocolIE_ID_id_SeNBtoMeNBContainer	((ProtocolIE_ID_t)122)
#define ProtocolIE_ID_id_ResponseInformationSeNBReconfComp	((ProtocolIE_ID_t)123)
#define ProtocolIE_ID_id_UE_ContextInformationSeNBModReq	((ProtocolIE_ID_t)124)
#define ProtocolIE_ID_id_E_RABs_ToBeAdded_ModReqItem	((ProtocolIE_ID_t)125)
#define ProtocolIE_ID_id_E_RABs_ToBeModified_ModReqItem	((ProtocolIE_ID_t)126)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_ModReqItem	((ProtocolIE_ID_t)127)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeAdded_ModAckList	((ProtocolIE_ID_t)128)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeModified_ModAckList	((ProtocolIE_ID_t)129)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeReleased_ModAckList	((ProtocolIE_ID_t)130)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeAdded_ModAckItem	((ProtocolIE_ID_t)131)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeModified_ModAckItem	((ProtocolIE_ID_t)132)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeReleased_ModAckItem	((ProtocolIE_ID_t)133)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_ModReqd	((ProtocolIE_ID_t)134)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_ModReqdItem	((ProtocolIE_ID_t)135)
#define ProtocolIE_ID_id_SCGChangeIndication	((ProtocolIE_ID_t)136)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_List_RelReq	((ProtocolIE_ID_t)137)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_RelReqItem	((ProtocolIE_ID_t)138)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_List_RelConf	((ProtocolIE_ID_t)139)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_RelConfItem	((ProtocolIE_ID_t)140)
#define ProtocolIE_ID_id_E_RABs_SubjectToCounterCheck_List	((ProtocolIE_ID_t)141)
#define ProtocolIE_ID_id_E_RABs_SubjectToCounterCheckItem	((ProtocolIE_ID_t)142)
#define ProtocolIE_ID_id_CoverageModificationList	((ProtocolIE_ID_t)143)
#define ProtocolIE_ID_id_ReportingPeriodicityCSIR	((ProtocolIE_ID_t)145)
#define ProtocolIE_ID_id_CSIReportList	((ProtocolIE_ID_t)146)
#define ProtocolIE_ID_id_UEID	((ProtocolIE_ID_t)147)
#define ProtocolIE_ID_id_enhancedRNTP	((ProtocolIE_ID_t)148)
#define ProtocolIE_ID_id_ProSeUEtoNetworkRelaying	((ProtocolIE_ID_t)149)
#define ProtocolIE_ID_id_ReceiveStatusOfULPDCPSDUsPDCP_SNlength18	((ProtocolIE_ID_t)150)
#define ProtocolIE_ID_id_ULCOUNTValuePDCP_SNlength18	((ProtocolIE_ID_t)151)
#define ProtocolIE_ID_id_DLCOUNTValuePDCP_SNlength18	((ProtocolIE_ID_t)152)
#define ProtocolIE_ID_id_UE_ContextReferenceAtSeNB	((ProtocolIE_ID_t)153)
#define ProtocolIE_ID_id_UE_ContextKeptIndicator	((ProtocolIE_ID_t)154)
#define ProtocolIE_ID_id_New_eNB_UE_X2AP_ID_Extension	((ProtocolIE_ID_t)155)
#define ProtocolIE_ID_id_Old_eNB_UE_X2AP_ID_Extension	((ProtocolIE_ID_t)156)
#define ProtocolIE_ID_id_MeNB_UE_X2AP_ID_Extension	((ProtocolIE_ID_t)157)
#define ProtocolIE_ID_id_SeNB_UE_X2AP_ID_Extension	((ProtocolIE_ID_t)158)
#define ProtocolIE_ID_id_LHN_ID	((ProtocolIE_ID_t)159)
#define ProtocolIE_ID_id_FreqBandIndicatorPriority	((ProtocolIE_ID_t)160)
#define ProtocolIE_ID_id_M6Configuration	((ProtocolIE_ID_t)161)
#define ProtocolIE_ID_id_M7Configuration	((ProtocolIE_ID_t)162)
#define ProtocolIE_ID_id_Tunnel_Information_for_BBF	((ProtocolIE_ID_t)163)
#define ProtocolIE_ID_id_SIPTO_BearerDeactivationIndication	((ProtocolIE_ID_t)164)
#define ProtocolIE_ID_id_GW_TransportLayerAddress	((ProtocolIE_ID_t)165)
#define ProtocolIE_ID_id_Correlation_ID	((ProtocolIE_ID_t)166)
#define ProtocolIE_ID_id_SIPTO_Correlation_ID	((ProtocolIE_ID_t)167)
#define ProtocolIE_ID_id_SIPTO_L_GW_TransportLayerAddress	((ProtocolIE_ID_t)168)
#define ProtocolIE_ID_id_X2RemovalThreshold	((ProtocolIE_ID_t)169)
#define ProtocolIE_ID_id_CellReportingIndicator	((ProtocolIE_ID_t)170)
#define ProtocolIE_ID_id_BearerType	((ProtocolIE_ID_t)171)
#define ProtocolIE_ID_id_resumeID	((ProtocolIE_ID_t)172)
#define ProtocolIE_ID_id_UE_ContextInformationRetrieve	((ProtocolIE_ID_t)173)
#define ProtocolIE_ID_id_E_RABs_ToBeSetupRetrieve_Item	((ProtocolIE_ID_t)174)
#define ProtocolIE_ID_id_NewEUTRANCellIdentifier	((ProtocolIE_ID_t)175)
#define ProtocolIE_ID_id_V2XServicesAuthorized	((ProtocolIE_ID_t)176)
#define ProtocolIE_ID_id_OffsetOfNbiotChannelNumberToDL_EARFCN	((ProtocolIE_ID_t)177)
#define ProtocolIE_ID_id_OffsetOfNbiotChannelNumberToUL_EARFCN	((ProtocolIE_ID_t)178)
#define ProtocolIE_ID_id_AdditionalSpecialSubframeExtension_Info	((ProtocolIE_ID_t)179)
#define ProtocolIE_ID_id_BandwidthReducedSI	((ProtocolIE_ID_t)180)
#define ProtocolIE_ID_id_MakeBeforeBreakIndicator	((ProtocolIE_ID_t)181)
#define ProtocolIE_ID_id_UE_ContextReferenceAtWT	((ProtocolIE_ID_t)182)
#define ProtocolIE_ID_id_WT_UE_ContextKeptIndicator	((ProtocolIE_ID_t)183)
#define ProtocolIE_ID_id_UESidelinkAggregateMaximumBitRate	((ProtocolIE_ID_t)184)
#define ProtocolIE_ID_id_uL_GTPtunnelEndpoint	((ProtocolIE_ID_t)185)
#define ProtocolIE_ID_id_DL_scheduling_PDCCH_CCE_usage	((ProtocolIE_ID_t)193)
#define ProtocolIE_ID_id_UL_scheduling_PDCCH_CCE_usage	((ProtocolIE_ID_t)194)
#define ProtocolIE_ID_id_UEAppLayerMeasConfig	((ProtocolIE_ID_t)195)
#define ProtocolIE_ID_id_extended_e_RAB_MaximumBitrateDL	((ProtocolIE_ID_t)196)
#define ProtocolIE_ID_id_extended_e_RAB_MaximumBitrateUL	((ProtocolIE_ID_t)197)
#define ProtocolIE_ID_id_extended_e_RAB_GuaranteedBitrateDL	((ProtocolIE_ID_t)198)
#define ProtocolIE_ID_id_extended_e_RAB_GuaranteedBitrateUL	((ProtocolIE_ID_t)199)
#define ProtocolIE_ID_id_extended_uEaggregateMaximumBitRateDownlink	((ProtocolIE_ID_t)200)
#define ProtocolIE_ID_id_extended_uEaggregateMaximumBitRateUplink	((ProtocolIE_ID_t)201)
#define ProtocolIE_ID_id_NRrestrictioninEPSasSecondaryRAT	((ProtocolIE_ID_t)202)
#define ProtocolIE_ID_id_SgNBSecurityKey	((ProtocolIE_ID_t)203)
#define ProtocolIE_ID_id_SgNBUEAggregateMaximumBitRate	((ProtocolIE_ID_t)204)
#define ProtocolIE_ID_id_E_RABs_ToBeAdded_SgNBAddReqList	((ProtocolIE_ID_t)205)
#define ProtocolIE_ID_id_MeNBtoSgNBContainer	((ProtocolIE_ID_t)206)
#define ProtocolIE_ID_id_SgNB_UE_X2AP_ID	((ProtocolIE_ID_t)207)
#define ProtocolIE_ID_id_RequestedSplitSRBs	((ProtocolIE_ID_t)208)
#define ProtocolIE_ID_id_E_RABs_ToBeAdded_SgNBAddReq_Item	((ProtocolIE_ID_t)209)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeAdded_SgNBAddReqAckList	((ProtocolIE_ID_t)210)
#define ProtocolIE_ID_id_SgNBtoMeNBContainer	((ProtocolIE_ID_t)211)
#define ProtocolIE_ID_id_AdmittedSplitSRBs	((ProtocolIE_ID_t)212)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeAdded_SgNBAddReqAck_Item	((ProtocolIE_ID_t)213)
#define ProtocolIE_ID_id_ResponseInformationSgNBReconfComp	((ProtocolIE_ID_t)214)
#define ProtocolIE_ID_id_UE_ContextInformation_SgNBModReq	((ProtocolIE_ID_t)215)
#define ProtocolIE_ID_id_E_RABs_ToBeAdded_SgNBModReq_Item	((ProtocolIE_ID_t)216)
#define ProtocolIE_ID_id_E_RABs_ToBeModified_SgNBModReq_Item	((ProtocolIE_ID_t)217)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_SgNBModReq_Item	((ProtocolIE_ID_t)218)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeAdded_SgNBModAckList	((ProtocolIE_ID_t)219)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeModified_SgNBModAckList	((ProtocolIE_ID_t)220)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeReleased_SgNBModAckList	((ProtocolIE_ID_t)221)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item	((ProtocolIE_ID_t)222)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeModified_SgNBModAck_Item	((ProtocolIE_ID_t)223)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeReleased_SgNBModAck_Item	((ProtocolIE_ID_t)224)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_SgNBModReqdList	((ProtocolIE_ID_t)225)
#define ProtocolIE_ID_id_E_RABs_ToBeModified_SgNBModReqdList	((ProtocolIE_ID_t)226)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_SgNBModReqd_Item	((ProtocolIE_ID_t)227)
#define ProtocolIE_ID_id_E_RABs_ToBeModified_SgNBModReqd_Item	((ProtocolIE_ID_t)228)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_SgNBChaConfList	((ProtocolIE_ID_t)229)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_SgNBChaConf_Item	((ProtocolIE_ID_t)230)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_SgNBRelReqList	((ProtocolIE_ID_t)231)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_SgNBRelReq_Item	((ProtocolIE_ID_t)232)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_SgNBRelConfList	((ProtocolIE_ID_t)233)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_SgNBRelConf_Item	((ProtocolIE_ID_t)234)
#define ProtocolIE_ID_id_E_RABs_SubjectToSgNBCounterCheck_List	((ProtocolIE_ID_t)235)
#define ProtocolIE_ID_id_E_RABs_SubjectToSgNBCounterCheck_Item	((ProtocolIE_ID_t)236)
#define ProtocolIE_ID_id_RRCContainer	((ProtocolIE_ID_t)237)
#define ProtocolIE_ID_id_SRBType	((ProtocolIE_ID_t)238)
#define ProtocolIE_ID_id_Target_SgNB_ID	((ProtocolIE_ID_t)239)
#define ProtocolIE_ID_id_HandoverRestrictionList	((ProtocolIE_ID_t)240)
#define ProtocolIE_ID_id_SCGConfigurationQuery	((ProtocolIE_ID_t)241)
#define ProtocolIE_ID_id_SplitSRB	((ProtocolIE_ID_t)242)
#define ProtocolIE_ID_id_UENRMeasurement	((ProtocolIE_ID_t)243)
#define ProtocolIE_ID_id_InitiatingNodeType_EndcX2Setup	((ProtocolIE_ID_t)244)
#define ProtocolIE_ID_id_InitiatingNodeType_EndcConfigUpdate	((ProtocolIE_ID_t)245)
#define ProtocolIE_ID_id_RespondingNodeType_EndcX2Setup	((ProtocolIE_ID_t)246)
#define ProtocolIE_ID_id_RespondingNodeType_EndcConfigUpdate	((ProtocolIE_ID_t)247)
#define ProtocolIE_ID_id_NRUESecurityCapabilities	((ProtocolIE_ID_t)248)
#define ProtocolIE_ID_id_PDCPChangeIndication	((ProtocolIE_ID_t)249)
#define ProtocolIE_ID_id_ServedEUTRAcellsENDCX2ManagementList	((ProtocolIE_ID_t)250)
#define ProtocolIE_ID_id_CellAssistanceInformation	((ProtocolIE_ID_t)251)
#define ProtocolIE_ID_id_Globalen_gNB_ID	((ProtocolIE_ID_t)252)
#define ProtocolIE_ID_id_ServedNRcellsENDCX2ManagementList	((ProtocolIE_ID_t)253)
#define ProtocolIE_ID_id_UE_ContextReferenceAtSgNB	((ProtocolIE_ID_t)254)
#define ProtocolIE_ID_id_SecondaryRATUsageReport	((ProtocolIE_ID_t)255)
#define ProtocolIE_ID_id_ActivationID	((ProtocolIE_ID_t)256)
#define ProtocolIE_ID_id_MeNBResourceCoordinationInformation	((ProtocolIE_ID_t)257)
#define ProtocolIE_ID_id_SgNBResourceCoordinationInformation	((ProtocolIE_ID_t)258)
#define ProtocolIE_ID_id_ServedEUTRAcellsToModifyListENDCConfUpd	((ProtocolIE_ID_t)259)
#define ProtocolIE_ID_id_ServedEUTRAcellsToDeleteListENDCConfUpd	((ProtocolIE_ID_t)260)
#define ProtocolIE_ID_id_ServedNRcellsToModifyListENDCConfUpd	((ProtocolIE_ID_t)261)
#define ProtocolIE_ID_id_ServedNRcellsToDeleteListENDCConfUpd	((ProtocolIE_ID_t)262)
#define ProtocolIE_ID_id_E_RABUsageReport_Item	((ProtocolIE_ID_t)263)
#define ProtocolIE_ID_id_Old_SgNB_UE_X2AP_ID	((ProtocolIE_ID_t)264)
#define ProtocolIE_ID_id_SecondaryRATUsageReportList	((ProtocolIE_ID_t)265)
#define ProtocolIE_ID_id_SecondaryRATUsageReport_Item	((ProtocolIE_ID_t)266)
#define ProtocolIE_ID_id_ServedNRCellsToActivate	((ProtocolIE_ID_t)267)
#define ProtocolIE_ID_id_ActivatedNRCellList	((ProtocolIE_ID_t)268)
#define ProtocolIE_ID_id_SelectedPLMN	((ProtocolIE_ID_t)269)
#define ProtocolIE_ID_id_UEs_ToBeReset	((ProtocolIE_ID_t)270)
#define ProtocolIE_ID_id_UEs_Admitted_ToBeReset	((ProtocolIE_ID_t)271)
#define ProtocolIE_ID_id_RRCConfigIndication	((ProtocolIE_ID_t)272)
#define ProtocolIE_ID_id_DownlinkPacketLossRate	((ProtocolIE_ID_t)273)
#define ProtocolIE_ID_id_UplinkPacketLossRate	((ProtocolIE_ID_t)274)
#define ProtocolIE_ID_id_SubscriberProfileIDforRFP	((ProtocolIE_ID_t)275)
#define ProtocolIE_ID_id_serviceType	((ProtocolIE_ID_t)276)
#define ProtocolIE_ID_id_AerialUEsubscriptionInformation	((ProtocolIE_ID_t)277)
#define ProtocolIE_ID_id_SGNB_Addition_Trigger_Ind	((ProtocolIE_ID_t)278)
#define ProtocolIE_ID_id_MeNBCell_ID	((ProtocolIE_ID_t)279)
#define ProtocolIE_ID_id_RequestedSplitSRBsrelease	((ProtocolIE_ID_t)280)
#define ProtocolIE_ID_id_AdmittedSplitSRBsrelease	((ProtocolIE_ID_t)281)
#define ProtocolIE_ID_id_NRS_NSSS_PowerOffset	((ProtocolIE_ID_t)282)
#define ProtocolIE_ID_id_NSSS_NumOccasionDifferentPrecoder	((ProtocolIE_ID_t)283)
#define ProtocolIE_ID_id_ProtectedEUTRAResourceIndication	((ProtocolIE_ID_t)284)
#define ProtocolIE_ID_id_InitiatingNodeType_EutranrCellResourceCoordination	((ProtocolIE_ID_t)285)
#define ProtocolIE_ID_id_RespondingNodeType_EutranrCellResourceCoordination	((ProtocolIE_ID_t)286)
#define ProtocolIE_ID_id_DataTrafficResourceIndication	((ProtocolIE_ID_t)287)
#define ProtocolIE_ID_id_SpectrumSharingGroupID	((ProtocolIE_ID_t)288)
#define ProtocolIE_ID_id_ListofEUTRACellsinEUTRACoordinationReq	((ProtocolIE_ID_t)289)
#define ProtocolIE_ID_id_ListofEUTRACellsinEUTRACoordinationResp	((ProtocolIE_ID_t)290)
#define ProtocolIE_ID_id_ListofEUTRACellsinNRCoordinationReq	((ProtocolIE_ID_t)291)
#define ProtocolIE_ID_id_ListofNRCellsinNRCoordinationReq	((ProtocolIE_ID_t)292)
#define ProtocolIE_ID_id_ListofNRCellsinNRCoordinationResp	((ProtocolIE_ID_t)293)
#define ProtocolIE_ID_id_E_RABs_AdmittedToBeModified_SgNBModConfList	((ProtocolIE_ID_t)294)
#define ProtocolIE_ID_id_E_RABs_AdmittedToBeModified_SgNBModConf_Item	((ProtocolIE_ID_t)295)
#define ProtocolIE_ID_id_UEContextLevelUserPlaneActivity	((ProtocolIE_ID_t)296)
#define ProtocolIE_ID_id_ERABActivityNotifyItemList	((ProtocolIE_ID_t)297)
#define ProtocolIE_ID_id_InitiatingNodeType_EndcX2Removal	((ProtocolIE_ID_t)298)
#define ProtocolIE_ID_id_RespondingNodeType_EndcX2Removal	((ProtocolIE_ID_t)299)
#define ProtocolIE_ID_id_RLC_Status	((ProtocolIE_ID_t)300)
#define ProtocolIE_ID_id_CNTypeRestrictions	((ProtocolIE_ID_t)301)
#define ProtocolIE_ID_id_uLpDCPSnLength	((ProtocolIE_ID_t)302)
#define ProtocolIE_ID_id_BluetoothMeasurementConfiguration	((ProtocolIE_ID_t)303)
#define ProtocolIE_ID_id_WLANMeasurementConfiguration	((ProtocolIE_ID_t)304)
#define ProtocolIE_ID_id_NRrestrictionin5GS	((ProtocolIE_ID_t)305)
#define ProtocolIE_ID_id_dL_Forwarding	((ProtocolIE_ID_t)306)
#define ProtocolIE_ID_id_E_RABs_DataForwardingAddress_List	((ProtocolIE_ID_t)307)
#define ProtocolIE_ID_id_E_RABs_DataForwardingAddress_Item	((ProtocolIE_ID_t)308)
#define ProtocolIE_ID_id_Subscription_Based_UE_DifferentiationInfo	((ProtocolIE_ID_t)309)
#define ProtocolIE_ID_id_GNBOverloadInformation	((ProtocolIE_ID_t)310)
#define ProtocolIE_ID_id_dLPDCPSnLength	((ProtocolIE_ID_t)311)
#define ProtocolIE_ID_id_secondarysgNBDLGTPTEIDatPDCP	((ProtocolIE_ID_t)312)
#define ProtocolIE_ID_id_secondarymeNBULGTPTEIDatPDCP	((ProtocolIE_ID_t)313)
#define ProtocolIE_ID_id_lCID	((ProtocolIE_ID_t)314)
#define ProtocolIE_ID_id_duplicationActivation	((ProtocolIE_ID_t)315)
#define ProtocolIE_ID_id_ECGI	((ProtocolIE_ID_t)316)
#define ProtocolIE_ID_id_RLCMode_transferred	((ProtocolIE_ID_t)317)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList	((ProtocolIE_ID_t)318)
#define ProtocolIE_ID_id_E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item	((ProtocolIE_ID_t)319)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_SgNBRelReqdList	((ProtocolIE_ID_t)320)
#define ProtocolIE_ID_id_E_RABs_ToBeReleased_SgNBRelReqd_Item	((ProtocolIE_ID_t)321)
#define ProtocolIE_ID_id_NRCGI	((ProtocolIE_ID_t)322)
#define ProtocolIE_ID_id_MeNBCoordinationAssistanceInformation	((ProtocolIE_ID_t)323)
#define ProtocolIE_ID_id_SgNBCoordinationAssistanceInformation	((ProtocolIE_ID_t)324)
#define ProtocolIE_ID_id_new_drb_ID_req	((ProtocolIE_ID_t)325)

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolIE_ID_H_ */
#include <asn_internal.h>
