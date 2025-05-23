/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Descriptions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_InitiatingMessage_H_
#define	_S1AP_InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_ProcedureCode.h"
#include "S1AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "S1AP_HandoverRequired.h"
#include "S1AP_HandoverCommand.h"
#include "S1AP_HandoverPreparationFailure.h"
#include "S1AP_HandoverRequest.h"
#include "S1AP_HandoverRequestAcknowledge.h"
#include "S1AP_HandoverFailure.h"
#include "S1AP_PathSwitchRequest.h"
#include "S1AP_PathSwitchRequestAcknowledge.h"
#include "S1AP_PathSwitchRequestFailure.h"
#include "S1AP_E-RABSetupRequest.h"
#include "S1AP_E-RABSetupResponse.h"
#include "S1AP_E-RABModifyRequest.h"
#include "S1AP_E-RABModifyResponse.h"
#include "S1AP_E-RABReleaseCommand.h"
#include "S1AP_E-RABReleaseResponse.h"
#include "S1AP_InitialContextSetupRequest.h"
#include "S1AP_InitialContextSetupResponse.h"
#include "S1AP_InitialContextSetupFailure.h"
#include "S1AP_HandoverCancel.h"
#include "S1AP_HandoverCancelAcknowledge.h"
#include "S1AP_KillRequest.h"
#include "S1AP_KillResponse.h"
#include "S1AP_Reset.h"
#include "S1AP_ResetAcknowledge.h"
#include "S1AP_S1SetupRequest.h"
#include "S1AP_S1SetupResponse.h"
#include "S1AP_S1SetupFailure.h"
#include "S1AP_UEContextModificationRequest.h"
#include "S1AP_UEContextModificationResponse.h"
#include "S1AP_UEContextModificationFailure.h"
#include "S1AP_UEContextReleaseCommand.h"
#include "S1AP_UEContextReleaseComplete.h"
#include "S1AP_ENBConfigurationUpdate.h"
#include "S1AP_ENBConfigurationUpdateAcknowledge.h"
#include "S1AP_ENBConfigurationUpdateFailure.h"
#include "S1AP_MMEConfigurationUpdate.h"
#include "S1AP_MMEConfigurationUpdateAcknowledge.h"
#include "S1AP_MMEConfigurationUpdateFailure.h"
#include "S1AP_WriteReplaceWarningRequest.h"
#include "S1AP_WriteReplaceWarningResponse.h"
#include "S1AP_UERadioCapabilityMatchRequest.h"
#include "S1AP_UERadioCapabilityMatchResponse.h"
#include "S1AP_E-RABModificationIndication.h"
#include "S1AP_E-RABModificationConfirm.h"
#include "S1AP_UEContextModificationIndication.h"
#include "S1AP_UEContextModificationConfirm.h"
#include "S1AP_UEContextSuspendRequest.h"
#include "S1AP_UEContextSuspendResponse.h"
#include "S1AP_UEContextResumeRequest.h"
#include "S1AP_UEContextResumeResponse.h"
#include "S1AP_UEContextResumeFailure.h"
#include "S1AP_HandoverNotify.h"
#include "S1AP_E-RABReleaseIndication.h"
#include "S1AP_Paging.h"
#include "S1AP_DownlinkNASTransport.h"
#include "S1AP_InitialUEMessage.h"
#include "S1AP_UplinkNASTransport.h"
#include "S1AP_ErrorIndication.h"
#include "S1AP_NASNonDeliveryIndication.h"
#include "S1AP_UEContextReleaseRequest.h"
#include "S1AP_DownlinkS1cdma2000tunnelling.h"
#include "S1AP_UplinkS1cdma2000tunnelling.h"
#include "S1AP_UECapabilityInfoIndication.h"
#include "S1AP_ENBStatusTransfer.h"
#include "S1AP_MMEStatusTransfer.h"
#include "S1AP_DeactivateTrace.h"
#include "S1AP_TraceStart.h"
#include "S1AP_TraceFailureIndication.h"
#include "S1AP_CellTrafficTrace.h"
#include "S1AP_LocationReportingControl.h"
#include "S1AP_LocationReportingFailureIndication.h"
#include "S1AP_LocationReport.h"
#include "S1AP_OverloadStart.h"
#include "S1AP_OverloadStop.h"
#include "S1AP_ENBDirectInformationTransfer.h"
#include "S1AP_MMEDirectInformationTransfer.h"
#include "S1AP_ENBConfigurationTransfer.h"
#include "S1AP_MMEConfigurationTransfer.h"
#include "S1AP_PrivateMessage.h"
#include "S1AP_DownlinkUEAssociatedLPPaTransport.h"
#include "S1AP_UplinkUEAssociatedLPPaTransport.h"
#include "S1AP_DownlinkNonUEAssociatedLPPaTransport.h"
#include "S1AP_UplinkNonUEAssociatedLPPaTransport.h"
#include "S1AP_PWSRestartIndication.h"
#include "S1AP_RerouteNASRequest.h"
#include "S1AP_PWSFailureIndication.h"
#include "S1AP_ConnectionEstablishmentIndication.h"
#include "S1AP_NASDeliveryIndication.h"
#include "S1AP_RetrieveUEInformation.h"
#include "S1AP_UEInformationTransfer.h"
#include "S1AP_ENBCPRelocationIndication.h"
#include "S1AP_MMECPRelocationIndication.h"
#include "S1AP_SecondaryRATDataUsageReport.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_InitiatingMessage__value_PR {
	S1AP_InitiatingMessage__value_PR_NOTHING,	/* No components present */
	S1AP_InitiatingMessage__value_PR_HandoverRequired,
	S1AP_InitiatingMessage__value_PR_HandoverRequest,
	S1AP_InitiatingMessage__value_PR_PathSwitchRequest,
	S1AP_InitiatingMessage__value_PR_E_RABSetupRequest,
	S1AP_InitiatingMessage__value_PR_E_RABModifyRequest,
	S1AP_InitiatingMessage__value_PR_E_RABReleaseCommand,
	S1AP_InitiatingMessage__value_PR_InitialContextSetupRequest,
	S1AP_InitiatingMessage__value_PR_HandoverCancel,
	S1AP_InitiatingMessage__value_PR_KillRequest,
	S1AP_InitiatingMessage__value_PR_Reset,
	S1AP_InitiatingMessage__value_PR_S1SetupRequest,
	S1AP_InitiatingMessage__value_PR_UEContextModificationRequest,
	S1AP_InitiatingMessage__value_PR_UEContextReleaseCommand,
	S1AP_InitiatingMessage__value_PR_ENBConfigurationUpdate,
	S1AP_InitiatingMessage__value_PR_MMEConfigurationUpdate,
	S1AP_InitiatingMessage__value_PR_WriteReplaceWarningRequest,
	S1AP_InitiatingMessage__value_PR_UERadioCapabilityMatchRequest,
	S1AP_InitiatingMessage__value_PR_E_RABModificationIndication,
	S1AP_InitiatingMessage__value_PR_UEContextModificationIndication,
	S1AP_InitiatingMessage__value_PR_UEContextSuspendRequest,
	S1AP_InitiatingMessage__value_PR_UEContextResumeRequest,
	S1AP_InitiatingMessage__value_PR_HandoverNotify,
	S1AP_InitiatingMessage__value_PR_E_RABReleaseIndication,
	S1AP_InitiatingMessage__value_PR_Paging,
	S1AP_InitiatingMessage__value_PR_DownlinkNASTransport,
	S1AP_InitiatingMessage__value_PR_InitialUEMessage,
	S1AP_InitiatingMessage__value_PR_UplinkNASTransport,
	S1AP_InitiatingMessage__value_PR_ErrorIndication,
	S1AP_InitiatingMessage__value_PR_NASNonDeliveryIndication,
	S1AP_InitiatingMessage__value_PR_UEContextReleaseRequest,
	S1AP_InitiatingMessage__value_PR_DownlinkS1cdma2000tunnelling,
	S1AP_InitiatingMessage__value_PR_UplinkS1cdma2000tunnelling,
	S1AP_InitiatingMessage__value_PR_UECapabilityInfoIndication,
	S1AP_InitiatingMessage__value_PR_ENBStatusTransfer,
	S1AP_InitiatingMessage__value_PR_MMEStatusTransfer,
	S1AP_InitiatingMessage__value_PR_DeactivateTrace,
	S1AP_InitiatingMessage__value_PR_TraceStart,
	S1AP_InitiatingMessage__value_PR_TraceFailureIndication,
	S1AP_InitiatingMessage__value_PR_CellTrafficTrace,
	S1AP_InitiatingMessage__value_PR_LocationReportingControl,
	S1AP_InitiatingMessage__value_PR_LocationReportingFailureIndication,
	S1AP_InitiatingMessage__value_PR_LocationReport,
	S1AP_InitiatingMessage__value_PR_OverloadStart,
	S1AP_InitiatingMessage__value_PR_OverloadStop,
	S1AP_InitiatingMessage__value_PR_ENBDirectInformationTransfer,
	S1AP_InitiatingMessage__value_PR_MMEDirectInformationTransfer,
	S1AP_InitiatingMessage__value_PR_ENBConfigurationTransfer,
	S1AP_InitiatingMessage__value_PR_MMEConfigurationTransfer,
	S1AP_InitiatingMessage__value_PR_PrivateMessage,
	S1AP_InitiatingMessage__value_PR_DownlinkUEAssociatedLPPaTransport,
	S1AP_InitiatingMessage__value_PR_UplinkUEAssociatedLPPaTransport,
	S1AP_InitiatingMessage__value_PR_DownlinkNonUEAssociatedLPPaTransport,
	S1AP_InitiatingMessage__value_PR_UplinkNonUEAssociatedLPPaTransport,
	S1AP_InitiatingMessage__value_PR_PWSRestartIndication,
	S1AP_InitiatingMessage__value_PR_RerouteNASRequest,
	S1AP_InitiatingMessage__value_PR_PWSFailureIndication,
	S1AP_InitiatingMessage__value_PR_ConnectionEstablishmentIndication,
	S1AP_InitiatingMessage__value_PR_NASDeliveryIndication,
	S1AP_InitiatingMessage__value_PR_RetrieveUEInformation,
	S1AP_InitiatingMessage__value_PR_UEInformationTransfer,
	S1AP_InitiatingMessage__value_PR_ENBCPRelocationIndication,
	S1AP_InitiatingMessage__value_PR_MMECPRelocationIndication,
	S1AP_InitiatingMessage__value_PR_SecondaryRATDataUsageReport
} S1AP_InitiatingMessage__value_PR;

/* S1AP_InitiatingMessage */
typedef struct S1AP_InitiatingMessage {
	S1AP_ProcedureCode_t	 procedureCode;
	S1AP_Criticality_t	 criticality;
	struct S1AP_InitiatingMessage__value {
		S1AP_InitiatingMessage__value_PR present;
		union S1AP_InitiatingMessage__S1AP_value_u {
			S1AP_HandoverRequired_t	 HandoverRequired;
			S1AP_HandoverRequest_t	 HandoverRequest;
			S1AP_PathSwitchRequest_t	 PathSwitchRequest;
			S1AP_E_RABSetupRequest_t	 E_RABSetupRequest;
			S1AP_E_RABModifyRequest_t	 E_RABModifyRequest;
			S1AP_E_RABReleaseCommand_t	 E_RABReleaseCommand;
			S1AP_InitialContextSetupRequest_t	 InitialContextSetupRequest;
			S1AP_HandoverCancel_t	 HandoverCancel;
			S1AP_KillRequest_t	 KillRequest;
			S1AP_Reset_t	 Reset;
			S1AP_S1SetupRequest_t	 S1SetupRequest;
			S1AP_UEContextModificationRequest_t	 UEContextModificationRequest;
			S1AP_UEContextReleaseCommand_t	 UEContextReleaseCommand;
			S1AP_ENBConfigurationUpdate_t	 ENBConfigurationUpdate;
			S1AP_MMEConfigurationUpdate_t	 MMEConfigurationUpdate;
			S1AP_WriteReplaceWarningRequest_t	 WriteReplaceWarningRequest;
			S1AP_UERadioCapabilityMatchRequest_t	 UERadioCapabilityMatchRequest;
			S1AP_E_RABModificationIndication_t	 E_RABModificationIndication;
			S1AP_UEContextModificationIndication_t	 UEContextModificationIndication;
			S1AP_UEContextSuspendRequest_t	 UEContextSuspendRequest;
			S1AP_UEContextResumeRequest_t	 UEContextResumeRequest;
			S1AP_HandoverNotify_t	 HandoverNotify;
			S1AP_E_RABReleaseIndication_t	 E_RABReleaseIndication;
			S1AP_Paging_t	 Paging;
			S1AP_DownlinkNASTransport_t	 DownlinkNASTransport;
			S1AP_InitialUEMessage_t	 InitialUEMessage;
			S1AP_UplinkNASTransport_t	 UplinkNASTransport;
			S1AP_ErrorIndication_t	 ErrorIndication;
			S1AP_NASNonDeliveryIndication_t	 NASNonDeliveryIndication;
			S1AP_UEContextReleaseRequest_t	 UEContextReleaseRequest;
			S1AP_DownlinkS1cdma2000tunnelling_t	 DownlinkS1cdma2000tunnelling;
			S1AP_UplinkS1cdma2000tunnelling_t	 UplinkS1cdma2000tunnelling;
			S1AP_UECapabilityInfoIndication_t	 UECapabilityInfoIndication;
			S1AP_ENBStatusTransfer_t	 ENBStatusTransfer;
			S1AP_MMEStatusTransfer_t	 MMEStatusTransfer;
			S1AP_DeactivateTrace_t	 DeactivateTrace;
			S1AP_TraceStart_t	 TraceStart;
			S1AP_TraceFailureIndication_t	 TraceFailureIndication;
			S1AP_CellTrafficTrace_t	 CellTrafficTrace;
			S1AP_LocationReportingControl_t	 LocationReportingControl;
			S1AP_LocationReportingFailureIndication_t	 LocationReportingFailureIndication;
			S1AP_LocationReport_t	 LocationReport;
			S1AP_OverloadStart_t	 OverloadStart;
			S1AP_OverloadStop_t	 OverloadStop;
			S1AP_ENBDirectInformationTransfer_t	 ENBDirectInformationTransfer;
			S1AP_MMEDirectInformationTransfer_t	 MMEDirectInformationTransfer;
			S1AP_ENBConfigurationTransfer_t	 ENBConfigurationTransfer;
			S1AP_MMEConfigurationTransfer_t	 MMEConfigurationTransfer;
			S1AP_PrivateMessage_t	 PrivateMessage;
			S1AP_DownlinkUEAssociatedLPPaTransport_t	 DownlinkUEAssociatedLPPaTransport;
			S1AP_UplinkUEAssociatedLPPaTransport_t	 UplinkUEAssociatedLPPaTransport;
			S1AP_DownlinkNonUEAssociatedLPPaTransport_t	 DownlinkNonUEAssociatedLPPaTransport;
			S1AP_UplinkNonUEAssociatedLPPaTransport_t	 UplinkNonUEAssociatedLPPaTransport;
			S1AP_PWSRestartIndication_t	 PWSRestartIndication;
			S1AP_RerouteNASRequest_t	 RerouteNASRequest;
			S1AP_PWSFailureIndication_t	 PWSFailureIndication;
			S1AP_ConnectionEstablishmentIndication_t	 ConnectionEstablishmentIndication;
			S1AP_NASDeliveryIndication_t	 NASDeliveryIndication;
			S1AP_RetrieveUEInformation_t	 RetrieveUEInformation;
			S1AP_UEInformationTransfer_t	 UEInformationTransfer;
			S1AP_ENBCPRelocationIndication_t	 ENBCPRelocationIndication;
			S1AP_MMECPRelocationIndication_t	 MMECPRelocationIndication;
			S1AP_SecondaryRATDataUsageReport_t	 SecondaryRATDataUsageReport;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_InitiatingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_InitiatingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_InitiatingMessage_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_InitiatingMessage_H_ */
#include <asn_internal.h>
