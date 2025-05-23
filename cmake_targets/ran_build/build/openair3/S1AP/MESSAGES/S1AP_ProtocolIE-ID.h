/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-CommonDataTypes"
 * 	found in "/home/rcdu/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_ProtocolIE_ID_H_
#define	_S1AP_ProtocolIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_ProtocolIE-ID */
typedef long	 S1AP_ProtocolIE_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_ProtocolIE_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_ID;
asn_struct_free_f S1AP_ProtocolIE_ID_free;
asn_struct_print_f S1AP_ProtocolIE_ID_print;
asn_constr_check_f S1AP_ProtocolIE_ID_constraint;
ber_type_decoder_f S1AP_ProtocolIE_ID_decode_ber;
der_type_encoder_f S1AP_ProtocolIE_ID_encode_der;
xer_type_decoder_f S1AP_ProtocolIE_ID_decode_xer;
xer_type_encoder_f S1AP_ProtocolIE_ID_encode_xer;
per_type_decoder_f S1AP_ProtocolIE_ID_decode_uper;
per_type_encoder_f S1AP_ProtocolIE_ID_encode_uper;
per_type_decoder_f S1AP_ProtocolIE_ID_decode_aper;
per_type_encoder_f S1AP_ProtocolIE_ID_encode_aper;
#define S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID	((S1AP_ProtocolIE_ID_t)0)
#define S1AP_ProtocolIE_ID_id_HandoverType	((S1AP_ProtocolIE_ID_t)1)
#define S1AP_ProtocolIE_ID_id_Cause	((S1AP_ProtocolIE_ID_t)2)
#define S1AP_ProtocolIE_ID_id_SourceID	((S1AP_ProtocolIE_ID_t)3)
#define S1AP_ProtocolIE_ID_id_TargetID	((S1AP_ProtocolIE_ID_t)4)
#define S1AP_ProtocolIE_ID_id_eNB_UE_S1AP_ID	((S1AP_ProtocolIE_ID_t)8)
#define S1AP_ProtocolIE_ID_id_E_RABSubjecttoDataForwardingList	((S1AP_ProtocolIE_ID_t)12)
#define S1AP_ProtocolIE_ID_id_E_RABtoReleaseListHOCmd	((S1AP_ProtocolIE_ID_t)13)
#define S1AP_ProtocolIE_ID_id_E_RABDataForwardingItem	((S1AP_ProtocolIE_ID_t)14)
#define S1AP_ProtocolIE_ID_id_E_RABReleaseItemBearerRelComp	((S1AP_ProtocolIE_ID_t)15)
#define S1AP_ProtocolIE_ID_id_E_RABToBeSetupListBearerSUReq	((S1AP_ProtocolIE_ID_t)16)
#define S1AP_ProtocolIE_ID_id_E_RABToBeSetupItemBearerSUReq	((S1AP_ProtocolIE_ID_t)17)
#define S1AP_ProtocolIE_ID_id_E_RABAdmittedList	((S1AP_ProtocolIE_ID_t)18)
#define S1AP_ProtocolIE_ID_id_E_RABFailedToSetupListHOReqAck	((S1AP_ProtocolIE_ID_t)19)
#define S1AP_ProtocolIE_ID_id_E_RABAdmittedItem	((S1AP_ProtocolIE_ID_t)20)
#define S1AP_ProtocolIE_ID_id_E_RABFailedtoSetupItemHOReqAck	((S1AP_ProtocolIE_ID_t)21)
#define S1AP_ProtocolIE_ID_id_E_RABToBeSwitchedDLList	((S1AP_ProtocolIE_ID_t)22)
#define S1AP_ProtocolIE_ID_id_E_RABToBeSwitchedDLItem	((S1AP_ProtocolIE_ID_t)23)
#define S1AP_ProtocolIE_ID_id_E_RABToBeSetupListCtxtSUReq	((S1AP_ProtocolIE_ID_t)24)
#define S1AP_ProtocolIE_ID_id_TraceActivation	((S1AP_ProtocolIE_ID_t)25)
#define S1AP_ProtocolIE_ID_id_NAS_PDU	((S1AP_ProtocolIE_ID_t)26)
#define S1AP_ProtocolIE_ID_id_E_RABToBeSetupItemHOReq	((S1AP_ProtocolIE_ID_t)27)
#define S1AP_ProtocolIE_ID_id_E_RABSetupListBearerSURes	((S1AP_ProtocolIE_ID_t)28)
#define S1AP_ProtocolIE_ID_id_E_RABFailedToSetupListBearerSURes	((S1AP_ProtocolIE_ID_t)29)
#define S1AP_ProtocolIE_ID_id_E_RABToBeModifiedListBearerModReq	((S1AP_ProtocolIE_ID_t)30)
#define S1AP_ProtocolIE_ID_id_E_RABModifyListBearerModRes	((S1AP_ProtocolIE_ID_t)31)
#define S1AP_ProtocolIE_ID_id_E_RABFailedToModifyList	((S1AP_ProtocolIE_ID_t)32)
#define S1AP_ProtocolIE_ID_id_E_RABToBeReleasedList	((S1AP_ProtocolIE_ID_t)33)
#define S1AP_ProtocolIE_ID_id_E_RABFailedToReleaseList	((S1AP_ProtocolIE_ID_t)34)
#define S1AP_ProtocolIE_ID_id_E_RABItem	((S1AP_ProtocolIE_ID_t)35)
#define S1AP_ProtocolIE_ID_id_E_RABToBeModifiedItemBearerModReq	((S1AP_ProtocolIE_ID_t)36)
#define S1AP_ProtocolIE_ID_id_E_RABModifyItemBearerModRes	((S1AP_ProtocolIE_ID_t)37)
#define S1AP_ProtocolIE_ID_id_E_RABReleaseItem	((S1AP_ProtocolIE_ID_t)38)
#define S1AP_ProtocolIE_ID_id_E_RABSetupItemBearerSURes	((S1AP_ProtocolIE_ID_t)39)
#define S1AP_ProtocolIE_ID_id_SecurityContext	((S1AP_ProtocolIE_ID_t)40)
#define S1AP_ProtocolIE_ID_id_HandoverRestrictionList	((S1AP_ProtocolIE_ID_t)41)
#define S1AP_ProtocolIE_ID_id_UEPagingID	((S1AP_ProtocolIE_ID_t)43)
#define S1AP_ProtocolIE_ID_id_pagingDRX	((S1AP_ProtocolIE_ID_t)44)
#define S1AP_ProtocolIE_ID_id_TAIList	((S1AP_ProtocolIE_ID_t)46)
#define S1AP_ProtocolIE_ID_id_TAIItem	((S1AP_ProtocolIE_ID_t)47)
#define S1AP_ProtocolIE_ID_id_E_RABFailedToSetupListCtxtSURes	((S1AP_ProtocolIE_ID_t)48)
#define S1AP_ProtocolIE_ID_id_E_RABReleaseItemHOCmd	((S1AP_ProtocolIE_ID_t)49)
#define S1AP_ProtocolIE_ID_id_E_RABSetupItemCtxtSURes	((S1AP_ProtocolIE_ID_t)50)
#define S1AP_ProtocolIE_ID_id_E_RABSetupListCtxtSURes	((S1AP_ProtocolIE_ID_t)51)
#define S1AP_ProtocolIE_ID_id_E_RABToBeSetupItemCtxtSUReq	((S1AP_ProtocolIE_ID_t)52)
#define S1AP_ProtocolIE_ID_id_E_RABToBeSetupListHOReq	((S1AP_ProtocolIE_ID_t)53)
#define S1AP_ProtocolIE_ID_id_GERANtoLTEHOInformationRes	((S1AP_ProtocolIE_ID_t)55)
#define S1AP_ProtocolIE_ID_id_UTRANtoLTEHOInformationRes	((S1AP_ProtocolIE_ID_t)57)
#define S1AP_ProtocolIE_ID_id_CriticalityDiagnostics	((S1AP_ProtocolIE_ID_t)58)
#define S1AP_ProtocolIE_ID_id_Global_ENB_ID	((S1AP_ProtocolIE_ID_t)59)
#define S1AP_ProtocolIE_ID_id_eNBname	((S1AP_ProtocolIE_ID_t)60)
#define S1AP_ProtocolIE_ID_id_MMEname	((S1AP_ProtocolIE_ID_t)61)
#define S1AP_ProtocolIE_ID_id_ServedPLMNs	((S1AP_ProtocolIE_ID_t)63)
#define S1AP_ProtocolIE_ID_id_SupportedTAs	((S1AP_ProtocolIE_ID_t)64)
#define S1AP_ProtocolIE_ID_id_TimeToWait	((S1AP_ProtocolIE_ID_t)65)
#define S1AP_ProtocolIE_ID_id_uEaggregateMaximumBitrate	((S1AP_ProtocolIE_ID_t)66)
#define S1AP_ProtocolIE_ID_id_TAI	((S1AP_ProtocolIE_ID_t)67)
#define S1AP_ProtocolIE_ID_id_E_RABReleaseListBearerRelComp	((S1AP_ProtocolIE_ID_t)69)
#define S1AP_ProtocolIE_ID_id_cdma2000PDU	((S1AP_ProtocolIE_ID_t)70)
#define S1AP_ProtocolIE_ID_id_cdma2000RATType	((S1AP_ProtocolIE_ID_t)71)
#define S1AP_ProtocolIE_ID_id_cdma2000SectorID	((S1AP_ProtocolIE_ID_t)72)
#define S1AP_ProtocolIE_ID_id_SecurityKey	((S1AP_ProtocolIE_ID_t)73)
#define S1AP_ProtocolIE_ID_id_UERadioCapability	((S1AP_ProtocolIE_ID_t)74)
#define S1AP_ProtocolIE_ID_id_GUMMEI_ID	((S1AP_ProtocolIE_ID_t)75)
#define S1AP_ProtocolIE_ID_id_E_RABInformationListItem	((S1AP_ProtocolIE_ID_t)78)
#define S1AP_ProtocolIE_ID_id_Direct_Forwarding_Path_Availability	((S1AP_ProtocolIE_ID_t)79)
#define S1AP_ProtocolIE_ID_id_UEIdentityIndexValue	((S1AP_ProtocolIE_ID_t)80)
#define S1AP_ProtocolIE_ID_id_cdma2000HOStatus	((S1AP_ProtocolIE_ID_t)83)
#define S1AP_ProtocolIE_ID_id_cdma2000HORequiredIndication	((S1AP_ProtocolIE_ID_t)84)
#define S1AP_ProtocolIE_ID_id_E_UTRAN_Trace_ID	((S1AP_ProtocolIE_ID_t)86)
#define S1AP_ProtocolIE_ID_id_RelativeMMECapacity	((S1AP_ProtocolIE_ID_t)87)
#define S1AP_ProtocolIE_ID_id_SourceMME_UE_S1AP_ID	((S1AP_ProtocolIE_ID_t)88)
#define S1AP_ProtocolIE_ID_id_Bearers_SubjectToStatusTransfer_Item	((S1AP_ProtocolIE_ID_t)89)
#define S1AP_ProtocolIE_ID_id_eNB_StatusTransfer_TransparentContainer	((S1AP_ProtocolIE_ID_t)90)
#define S1AP_ProtocolIE_ID_id_UE_associatedLogicalS1_ConnectionItem	((S1AP_ProtocolIE_ID_t)91)
#define S1AP_ProtocolIE_ID_id_ResetType	((S1AP_ProtocolIE_ID_t)92)
#define S1AP_ProtocolIE_ID_id_UE_associatedLogicalS1_ConnectionListResAck	((S1AP_ProtocolIE_ID_t)93)
#define S1AP_ProtocolIE_ID_id_E_RABToBeSwitchedULItem	((S1AP_ProtocolIE_ID_t)94)
#define S1AP_ProtocolIE_ID_id_E_RABToBeSwitchedULList	((S1AP_ProtocolIE_ID_t)95)
#define S1AP_ProtocolIE_ID_id_S_TMSI	((S1AP_ProtocolIE_ID_t)96)
#define S1AP_ProtocolIE_ID_id_cdma2000OneXRAND	((S1AP_ProtocolIE_ID_t)97)
#define S1AP_ProtocolIE_ID_id_RequestType	((S1AP_ProtocolIE_ID_t)98)
#define S1AP_ProtocolIE_ID_id_UE_S1AP_IDs	((S1AP_ProtocolIE_ID_t)99)
#define S1AP_ProtocolIE_ID_id_EUTRAN_CGI	((S1AP_ProtocolIE_ID_t)100)
#define S1AP_ProtocolIE_ID_id_OverloadResponse	((S1AP_ProtocolIE_ID_t)101)
#define S1AP_ProtocolIE_ID_id_cdma2000OneXSRVCCInfo	((S1AP_ProtocolIE_ID_t)102)
#define S1AP_ProtocolIE_ID_id_E_RABFailedToBeReleasedList	((S1AP_ProtocolIE_ID_t)103)
#define S1AP_ProtocolIE_ID_id_Source_ToTarget_TransparentContainer	((S1AP_ProtocolIE_ID_t)104)
#define S1AP_ProtocolIE_ID_id_ServedGUMMEIs	((S1AP_ProtocolIE_ID_t)105)
#define S1AP_ProtocolIE_ID_id_SubscriberProfileIDforRFP	((S1AP_ProtocolIE_ID_t)106)
#define S1AP_ProtocolIE_ID_id_UESecurityCapabilities	((S1AP_ProtocolIE_ID_t)107)
#define S1AP_ProtocolIE_ID_id_CSFallbackIndicator	((S1AP_ProtocolIE_ID_t)108)
#define S1AP_ProtocolIE_ID_id_CNDomain	((S1AP_ProtocolIE_ID_t)109)
#define S1AP_ProtocolIE_ID_id_E_RABReleasedList	((S1AP_ProtocolIE_ID_t)110)
#define S1AP_ProtocolIE_ID_id_MessageIdentifier	((S1AP_ProtocolIE_ID_t)111)
#define S1AP_ProtocolIE_ID_id_SerialNumber	((S1AP_ProtocolIE_ID_t)112)
#define S1AP_ProtocolIE_ID_id_WarningAreaList	((S1AP_ProtocolIE_ID_t)113)
#define S1AP_ProtocolIE_ID_id_RepetitionPeriod	((S1AP_ProtocolIE_ID_t)114)
#define S1AP_ProtocolIE_ID_id_NumberofBroadcastRequest	((S1AP_ProtocolIE_ID_t)115)
#define S1AP_ProtocolIE_ID_id_WarningType	((S1AP_ProtocolIE_ID_t)116)
#define S1AP_ProtocolIE_ID_id_WarningSecurityInfo	((S1AP_ProtocolIE_ID_t)117)
#define S1AP_ProtocolIE_ID_id_DataCodingScheme	((S1AP_ProtocolIE_ID_t)118)
#define S1AP_ProtocolIE_ID_id_WarningMessageContents	((S1AP_ProtocolIE_ID_t)119)
#define S1AP_ProtocolIE_ID_id_BroadcastCompletedAreaList	((S1AP_ProtocolIE_ID_t)120)
#define S1AP_ProtocolIE_ID_id_Inter_SystemInformationTransferTypeEDT	((S1AP_ProtocolIE_ID_t)121)
#define S1AP_ProtocolIE_ID_id_Inter_SystemInformationTransferTypeMDT	((S1AP_ProtocolIE_ID_t)122)
#define S1AP_ProtocolIE_ID_id_Target_ToSource_TransparentContainer	((S1AP_ProtocolIE_ID_t)123)
#define S1AP_ProtocolIE_ID_id_SRVCCOperationPossible	((S1AP_ProtocolIE_ID_t)124)
#define S1AP_ProtocolIE_ID_id_SRVCCHOIndication	((S1AP_ProtocolIE_ID_t)125)
#define S1AP_ProtocolIE_ID_id_NAS_DownlinkCount	((S1AP_ProtocolIE_ID_t)126)
#define S1AP_ProtocolIE_ID_id_CSG_Id	((S1AP_ProtocolIE_ID_t)127)
#define S1AP_ProtocolIE_ID_id_CSG_IdList	((S1AP_ProtocolIE_ID_t)128)
#define S1AP_ProtocolIE_ID_id_SONConfigurationTransferECT	((S1AP_ProtocolIE_ID_t)129)
#define S1AP_ProtocolIE_ID_id_SONConfigurationTransferMCT	((S1AP_ProtocolIE_ID_t)130)
#define S1AP_ProtocolIE_ID_id_TraceCollectionEntityIPAddress	((S1AP_ProtocolIE_ID_t)131)
#define S1AP_ProtocolIE_ID_id_MSClassmark2	((S1AP_ProtocolIE_ID_t)132)
#define S1AP_ProtocolIE_ID_id_MSClassmark3	((S1AP_ProtocolIE_ID_t)133)
#define S1AP_ProtocolIE_ID_id_RRC_Establishment_Cause	((S1AP_ProtocolIE_ID_t)134)
#define S1AP_ProtocolIE_ID_id_NASSecurityParametersfromE_UTRAN	((S1AP_ProtocolIE_ID_t)135)
#define S1AP_ProtocolIE_ID_id_NASSecurityParameterstoE_UTRAN	((S1AP_ProtocolIE_ID_t)136)
#define S1AP_ProtocolIE_ID_id_DefaultPagingDRX	((S1AP_ProtocolIE_ID_t)137)
#define S1AP_ProtocolIE_ID_id_Source_ToTarget_TransparentContainer_Secondary	((S1AP_ProtocolIE_ID_t)138)
#define S1AP_ProtocolIE_ID_id_Target_ToSource_TransparentContainer_Secondary	((S1AP_ProtocolIE_ID_t)139)
#define S1AP_ProtocolIE_ID_id_EUTRANRoundTripDelayEstimationInfo	((S1AP_ProtocolIE_ID_t)140)
#define S1AP_ProtocolIE_ID_id_BroadcastCancelledAreaList	((S1AP_ProtocolIE_ID_t)141)
#define S1AP_ProtocolIE_ID_id_ConcurrentWarningMessageIndicator	((S1AP_ProtocolIE_ID_t)142)
#define S1AP_ProtocolIE_ID_id_Data_Forwarding_Not_Possible	((S1AP_ProtocolIE_ID_t)143)
#define S1AP_ProtocolIE_ID_id_ExtendedRepetitionPeriod	((S1AP_ProtocolIE_ID_t)144)
#define S1AP_ProtocolIE_ID_id_CellAccessMode	((S1AP_ProtocolIE_ID_t)145)
#define S1AP_ProtocolIE_ID_id_CSGMembershipStatus	((S1AP_ProtocolIE_ID_t)146)
#define S1AP_ProtocolIE_ID_id_LPPa_PDU	((S1AP_ProtocolIE_ID_t)147)
#define S1AP_ProtocolIE_ID_id_Routing_ID	((S1AP_ProtocolIE_ID_t)148)
#define S1AP_ProtocolIE_ID_id_Time_Synchronisation_Info	((S1AP_ProtocolIE_ID_t)149)
#define S1AP_ProtocolIE_ID_id_PS_ServiceNotAvailable	((S1AP_ProtocolIE_ID_t)150)
#define S1AP_ProtocolIE_ID_id_PagingPriority	((S1AP_ProtocolIE_ID_t)151)
#define S1AP_ProtocolIE_ID_id_x2TNLConfigurationInfo	((S1AP_ProtocolIE_ID_t)152)
#define S1AP_ProtocolIE_ID_id_eNBX2ExtendedTransportLayerAddresses	((S1AP_ProtocolIE_ID_t)153)
#define S1AP_ProtocolIE_ID_id_GUMMEIList	((S1AP_ProtocolIE_ID_t)154)
#define S1AP_ProtocolIE_ID_id_GW_TransportLayerAddress	((S1AP_ProtocolIE_ID_t)155)
#define S1AP_ProtocolIE_ID_id_Correlation_ID	((S1AP_ProtocolIE_ID_t)156)
#define S1AP_ProtocolIE_ID_id_SourceMME_GUMMEI	((S1AP_ProtocolIE_ID_t)157)
#define S1AP_ProtocolIE_ID_id_MME_UE_S1AP_ID_2	((S1AP_ProtocolIE_ID_t)158)
#define S1AP_ProtocolIE_ID_id_RegisteredLAI	((S1AP_ProtocolIE_ID_t)159)
#define S1AP_ProtocolIE_ID_id_RelayNode_Indicator	((S1AP_ProtocolIE_ID_t)160)
#define S1AP_ProtocolIE_ID_id_TrafficLoadReductionIndication	((S1AP_ProtocolIE_ID_t)161)
#define S1AP_ProtocolIE_ID_id_MDTConfiguration	((S1AP_ProtocolIE_ID_t)162)
#define S1AP_ProtocolIE_ID_id_MMERelaySupportIndicator	((S1AP_ProtocolIE_ID_t)163)
#define S1AP_ProtocolIE_ID_id_GWContextReleaseIndication	((S1AP_ProtocolIE_ID_t)164)
#define S1AP_ProtocolIE_ID_id_ManagementBasedMDTAllowed	((S1AP_ProtocolIE_ID_t)165)
#define S1AP_ProtocolIE_ID_id_PrivacyIndicator	((S1AP_ProtocolIE_ID_t)166)
#define S1AP_ProtocolIE_ID_id_Time_UE_StayedInCell_EnhancedGranularity	((S1AP_ProtocolIE_ID_t)167)
#define S1AP_ProtocolIE_ID_id_HO_Cause	((S1AP_ProtocolIE_ID_t)168)
#define S1AP_ProtocolIE_ID_id_VoiceSupportMatchIndicator	((S1AP_ProtocolIE_ID_t)169)
#define S1AP_ProtocolIE_ID_id_GUMMEIType	((S1AP_ProtocolIE_ID_t)170)
#define S1AP_ProtocolIE_ID_id_M3Configuration	((S1AP_ProtocolIE_ID_t)171)
#define S1AP_ProtocolIE_ID_id_M4Configuration	((S1AP_ProtocolIE_ID_t)172)
#define S1AP_ProtocolIE_ID_id_M5Configuration	((S1AP_ProtocolIE_ID_t)173)
#define S1AP_ProtocolIE_ID_id_MDT_Location_Info	((S1AP_ProtocolIE_ID_t)174)
#define S1AP_ProtocolIE_ID_id_MobilityInformation	((S1AP_ProtocolIE_ID_t)175)
#define S1AP_ProtocolIE_ID_id_Tunnel_Information_for_BBF	((S1AP_ProtocolIE_ID_t)176)
#define S1AP_ProtocolIE_ID_id_ManagementBasedMDTPLMNList	((S1AP_ProtocolIE_ID_t)177)
#define S1AP_ProtocolIE_ID_id_SignallingBasedMDTPLMNList	((S1AP_ProtocolIE_ID_t)178)
#define S1AP_ProtocolIE_ID_id_ULCOUNTValueExtended	((S1AP_ProtocolIE_ID_t)179)
#define S1AP_ProtocolIE_ID_id_DLCOUNTValueExtended	((S1AP_ProtocolIE_ID_t)180)
#define S1AP_ProtocolIE_ID_id_ReceiveStatusOfULPDCPSDUsExtended	((S1AP_ProtocolIE_ID_t)181)
#define S1AP_ProtocolIE_ID_id_ECGIListForRestart	((S1AP_ProtocolIE_ID_t)182)
#define S1AP_ProtocolIE_ID_id_SIPTO_Correlation_ID	((S1AP_ProtocolIE_ID_t)183)
#define S1AP_ProtocolIE_ID_id_SIPTO_L_GW_TransportLayerAddress	((S1AP_ProtocolIE_ID_t)184)
#define S1AP_ProtocolIE_ID_id_TransportInformation	((S1AP_ProtocolIE_ID_t)185)
#define S1AP_ProtocolIE_ID_id_LHN_ID	((S1AP_ProtocolIE_ID_t)186)
#define S1AP_ProtocolIE_ID_id_AdditionalCSFallbackIndicator	((S1AP_ProtocolIE_ID_t)187)
#define S1AP_ProtocolIE_ID_id_TAIListForRestart	((S1AP_ProtocolIE_ID_t)188)
#define S1AP_ProtocolIE_ID_id_UserLocationInformation	((S1AP_ProtocolIE_ID_t)189)
#define S1AP_ProtocolIE_ID_id_EmergencyAreaIDListForRestart	((S1AP_ProtocolIE_ID_t)190)
#define S1AP_ProtocolIE_ID_id_KillAllWarningMessages	((S1AP_ProtocolIE_ID_t)191)
#define S1AP_ProtocolIE_ID_id_Masked_IMEISV	((S1AP_ProtocolIE_ID_t)192)
#define S1AP_ProtocolIE_ID_id_eNBIndirectX2TransportLayerAddresses	((S1AP_ProtocolIE_ID_t)193)
#define S1AP_ProtocolIE_ID_id_uE_HistoryInformationFromTheUE	((S1AP_ProtocolIE_ID_t)194)
#define S1AP_ProtocolIE_ID_id_ProSeAuthorized	((S1AP_ProtocolIE_ID_t)195)
#define S1AP_ProtocolIE_ID_id_ExpectedUEBehaviour	((S1AP_ProtocolIE_ID_t)196)
#define S1AP_ProtocolIE_ID_id_LoggedMBSFNMDT	((S1AP_ProtocolIE_ID_t)197)
#define S1AP_ProtocolIE_ID_id_UERadioCapabilityForPaging	((S1AP_ProtocolIE_ID_t)198)
#define S1AP_ProtocolIE_ID_id_E_RABToBeModifiedListBearerModInd	((S1AP_ProtocolIE_ID_t)199)
#define S1AP_ProtocolIE_ID_id_E_RABToBeModifiedItemBearerModInd	((S1AP_ProtocolIE_ID_t)200)
#define S1AP_ProtocolIE_ID_id_E_RABNotToBeModifiedListBearerModInd	((S1AP_ProtocolIE_ID_t)201)
#define S1AP_ProtocolIE_ID_id_E_RABNotToBeModifiedItemBearerModInd	((S1AP_ProtocolIE_ID_t)202)
#define S1AP_ProtocolIE_ID_id_E_RABModifyListBearerModConf	((S1AP_ProtocolIE_ID_t)203)
#define S1AP_ProtocolIE_ID_id_E_RABModifyItemBearerModConf	((S1AP_ProtocolIE_ID_t)204)
#define S1AP_ProtocolIE_ID_id_E_RABFailedToModifyListBearerModConf	((S1AP_ProtocolIE_ID_t)205)
#define S1AP_ProtocolIE_ID_id_SON_Information_Report	((S1AP_ProtocolIE_ID_t)206)
#define S1AP_ProtocolIE_ID_id_Muting_Availability_Indication	((S1AP_ProtocolIE_ID_t)207)
#define S1AP_ProtocolIE_ID_id_Muting_Pattern_Information	((S1AP_ProtocolIE_ID_t)208)
#define S1AP_ProtocolIE_ID_id_Synchronisation_Information	((S1AP_ProtocolIE_ID_t)209)
#define S1AP_ProtocolIE_ID_id_E_RABToBeReleasedListBearerModConf	((S1AP_ProtocolIE_ID_t)210)
#define S1AP_ProtocolIE_ID_id_AssistanceDataForPaging	((S1AP_ProtocolIE_ID_t)211)
#define S1AP_ProtocolIE_ID_id_CellIdentifierAndCELevelForCECapableUEs	((S1AP_ProtocolIE_ID_t)212)
#define S1AP_ProtocolIE_ID_id_InformationOnRecommendedCellsAndENBsForPaging	((S1AP_ProtocolIE_ID_t)213)
#define S1AP_ProtocolIE_ID_id_RecommendedCellItem	((S1AP_ProtocolIE_ID_t)214)
#define S1AP_ProtocolIE_ID_id_RecommendedENBItem	((S1AP_ProtocolIE_ID_t)215)
#define S1AP_ProtocolIE_ID_id_ProSeUEtoNetworkRelaying	((S1AP_ProtocolIE_ID_t)216)
#define S1AP_ProtocolIE_ID_id_ULCOUNTValuePDCP_SNlength18	((S1AP_ProtocolIE_ID_t)217)
#define S1AP_ProtocolIE_ID_id_DLCOUNTValuePDCP_SNlength18	((S1AP_ProtocolIE_ID_t)218)
#define S1AP_ProtocolIE_ID_id_ReceiveStatusOfULPDCPSDUsPDCP_SNlength18	((S1AP_ProtocolIE_ID_t)219)
#define S1AP_ProtocolIE_ID_id_M6Configuration	((S1AP_ProtocolIE_ID_t)220)
#define S1AP_ProtocolIE_ID_id_M7Configuration	((S1AP_ProtocolIE_ID_t)221)
#define S1AP_ProtocolIE_ID_id_PWSfailedECGIList	((S1AP_ProtocolIE_ID_t)222)
#define S1AP_ProtocolIE_ID_id_MME_Group_ID	((S1AP_ProtocolIE_ID_t)223)
#define S1AP_ProtocolIE_ID_id_Additional_GUTI	((S1AP_ProtocolIE_ID_t)224)
#define S1AP_ProtocolIE_ID_id_S1_Message	((S1AP_ProtocolIE_ID_t)225)
#define S1AP_ProtocolIE_ID_id_CSGMembershipInfo	((S1AP_ProtocolIE_ID_t)226)
#define S1AP_ProtocolIE_ID_id_Paging_eDRXInformation	((S1AP_ProtocolIE_ID_t)227)
#define S1AP_ProtocolIE_ID_id_UE_RetentionInformation	((S1AP_ProtocolIE_ID_t)228)
#define S1AP_ProtocolIE_ID_id_UE_Usage_Type	((S1AP_ProtocolIE_ID_t)230)
#define S1AP_ProtocolIE_ID_id_extended_UEIdentityIndexValue	((S1AP_ProtocolIE_ID_t)231)
#define S1AP_ProtocolIE_ID_id_RAT_Type	((S1AP_ProtocolIE_ID_t)232)
#define S1AP_ProtocolIE_ID_id_BearerType	((S1AP_ProtocolIE_ID_t)233)
#define S1AP_ProtocolIE_ID_id_NB_IoT_DefaultPagingDRX	((S1AP_ProtocolIE_ID_t)234)
#define S1AP_ProtocolIE_ID_id_E_RABFailedToResumeListResumeReq	((S1AP_ProtocolIE_ID_t)235)
#define S1AP_ProtocolIE_ID_id_E_RABFailedToResumeItemResumeReq	((S1AP_ProtocolIE_ID_t)236)
#define S1AP_ProtocolIE_ID_id_E_RABFailedToResumeListResumeRes	((S1AP_ProtocolIE_ID_t)237)
#define S1AP_ProtocolIE_ID_id_E_RABFailedToResumeItemResumeRes	((S1AP_ProtocolIE_ID_t)238)
#define S1AP_ProtocolIE_ID_id_NB_IoT_Paging_eDRXInformation	((S1AP_ProtocolIE_ID_t)239)
#define S1AP_ProtocolIE_ID_id_V2XServicesAuthorized	((S1AP_ProtocolIE_ID_t)240)
#define S1AP_ProtocolIE_ID_id_UEUserPlaneCIoTSupportIndicator	((S1AP_ProtocolIE_ID_t)241)
#define S1AP_ProtocolIE_ID_id_CE_mode_B_SupportIndicator	((S1AP_ProtocolIE_ID_t)242)
#define S1AP_ProtocolIE_ID_id_SRVCCOperationNotPossible	((S1AP_ProtocolIE_ID_t)243)
#define S1AP_ProtocolIE_ID_id_NB_IoT_UEIdentityIndexValue	((S1AP_ProtocolIE_ID_t)244)
#define S1AP_ProtocolIE_ID_id_RRC_Resume_Cause	((S1AP_ProtocolIE_ID_t)245)
#define S1AP_ProtocolIE_ID_id_DCN_ID	((S1AP_ProtocolIE_ID_t)246)
#define S1AP_ProtocolIE_ID_id_ServedDCNs	((S1AP_ProtocolIE_ID_t)247)
#define S1AP_ProtocolIE_ID_id_UESidelinkAggregateMaximumBitrate	((S1AP_ProtocolIE_ID_t)248)
#define S1AP_ProtocolIE_ID_id_DLNASPDUDeliveryAckRequest	((S1AP_ProtocolIE_ID_t)249)
#define S1AP_ProtocolIE_ID_id_Coverage_Level	((S1AP_ProtocolIE_ID_t)250)
#define S1AP_ProtocolIE_ID_id_EnhancedCoverageRestricted	((S1AP_ProtocolIE_ID_t)251)
#define S1AP_ProtocolIE_ID_id_UE_Level_QoS_Parameters	((S1AP_ProtocolIE_ID_t)252)
#define S1AP_ProtocolIE_ID_id_DL_CP_SecurityInformation	((S1AP_ProtocolIE_ID_t)253)
#define S1AP_ProtocolIE_ID_id_UL_CP_SecurityInformation	((S1AP_ProtocolIE_ID_t)254)
#define S1AP_ProtocolIE_ID_id_extended_e_RAB_MaximumBitrateDL	((S1AP_ProtocolIE_ID_t)255)
#define S1AP_ProtocolIE_ID_id_extended_e_RAB_MaximumBitrateUL	((S1AP_ProtocolIE_ID_t)256)
#define S1AP_ProtocolIE_ID_id_extended_e_RAB_GuaranteedBitrateDL	((S1AP_ProtocolIE_ID_t)257)
#define S1AP_ProtocolIE_ID_id_extended_e_RAB_GuaranteedBitrateUL	((S1AP_ProtocolIE_ID_t)258)
#define S1AP_ProtocolIE_ID_id_extended_uEaggregateMaximumBitRateDL	((S1AP_ProtocolIE_ID_t)259)
#define S1AP_ProtocolIE_ID_id_extended_uEaggregateMaximumBitRateUL	((S1AP_ProtocolIE_ID_t)260)
#define S1AP_ProtocolIE_ID_id_NRrestrictioninEPSasSecondaryRAT	((S1AP_ProtocolIE_ID_t)261)
#define S1AP_ProtocolIE_ID_id_UEAppLayerMeasConfig	((S1AP_ProtocolIE_ID_t)262)
#define S1AP_ProtocolIE_ID_id_UE_Application_Layer_Measurement_Capability	((S1AP_ProtocolIE_ID_t)263)
#define S1AP_ProtocolIE_ID_id_SecondaryRATDataUsageReportList	((S1AP_ProtocolIE_ID_t)264)
#define S1AP_ProtocolIE_ID_id_SecondaryRATDataUsageReportItem	((S1AP_ProtocolIE_ID_t)265)
#define S1AP_ProtocolIE_ID_id_HandoverFlag	((S1AP_ProtocolIE_ID_t)266)
#define S1AP_ProtocolIE_ID_id_E_RABUsageReportItem	((S1AP_ProtocolIE_ID_t)267)
#define S1AP_ProtocolIE_ID_id_SecondaryRATDataUsageRequest	((S1AP_ProtocolIE_ID_t)268)
#define S1AP_ProtocolIE_ID_id_NRUESecurityCapabilities	((S1AP_ProtocolIE_ID_t)269)
#define S1AP_ProtocolIE_ID_id_UnlicensedSpectrumRestriction	((S1AP_ProtocolIE_ID_t)270)
#define S1AP_ProtocolIE_ID_id_CE_ModeBRestricted	((S1AP_ProtocolIE_ID_t)271)
#define S1AP_ProtocolIE_ID_id_LTE_M_Indication	((S1AP_ProtocolIE_ID_t)272)
#define S1AP_ProtocolIE_ID_id_DownlinkPacketLossRate	((S1AP_ProtocolIE_ID_t)273)
#define S1AP_ProtocolIE_ID_id_UplinkPacketLossRate	((S1AP_ProtocolIE_ID_t)274)
#define S1AP_ProtocolIE_ID_id_UECapabilityInfoRequest	((S1AP_ProtocolIE_ID_t)275)
#define S1AP_ProtocolIE_ID_id_serviceType	((S1AP_ProtocolIE_ID_t)276)
#define S1AP_ProtocolIE_ID_id_AerialUEsubscriptionInformation	((S1AP_ProtocolIE_ID_t)277)
#define S1AP_ProtocolIE_ID_id_Subscription_Based_UE_DifferentiationInfo	((S1AP_ProtocolIE_ID_t)278)
#define S1AP_ProtocolIE_ID_id_EndIndication	((S1AP_ProtocolIE_ID_t)280)
#define S1AP_ProtocolIE_ID_id_EDT_Session	((S1AP_ProtocolIE_ID_t)281)
#define S1AP_ProtocolIE_ID_id_CNTypeRestrictions	((S1AP_ProtocolIE_ID_t)282)
#define S1AP_ProtocolIE_ID_id_PendingDataIndication	((S1AP_ProtocolIE_ID_t)283)
#define S1AP_ProtocolIE_ID_id_BluetoothMeasurementConfiguration	((S1AP_ProtocolIE_ID_t)284)
#define S1AP_ProtocolIE_ID_id_WLANMeasurementConfiguration	((S1AP_ProtocolIE_ID_t)285)
#define S1AP_ProtocolIE_ID_id_WarningAreaCoordinates	((S1AP_ProtocolIE_ID_t)286)
#define S1AP_ProtocolIE_ID_id_NRrestrictionin5GS	((S1AP_ProtocolIE_ID_t)287)
#define S1AP_ProtocolIE_ID_id_PSCellInformation	((S1AP_ProtocolIE_ID_t)288)
#define S1AP_ProtocolIE_ID_id_LastNG_RANPLMNIdentity	((S1AP_ProtocolIE_ID_t)290)
#define S1AP_ProtocolIE_ID_id_ConnectedengNBList	((S1AP_ProtocolIE_ID_t)291)
#define S1AP_ProtocolIE_ID_id_ConnectedengNBToAddList	((S1AP_ProtocolIE_ID_t)292)
#define S1AP_ProtocolIE_ID_id_ConnectedengNBToRemoveList	((S1AP_ProtocolIE_ID_t)293)
#define S1AP_ProtocolIE_ID_id_EN_DCSONConfigurationTransfer_ECT	((S1AP_ProtocolIE_ID_t)294)
#define S1AP_ProtocolIE_ID_id_EN_DCSONConfigurationTransfer_MCT	((S1AP_ProtocolIE_ID_t)295)

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ProtocolIE_ID_H_ */
#include <asn_internal.h>
