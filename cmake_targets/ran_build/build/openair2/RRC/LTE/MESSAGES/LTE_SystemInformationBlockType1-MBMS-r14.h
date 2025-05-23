/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SystemInformationBlockType1_MBMS_r14_H_
#define	_LTE_SystemInformationBlockType1_MBMS_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_FreqBandIndicator-r11.h"
#include "LTE_SchedulingInfoList-MBMS-r14.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "LTE_PDSCH-ConfigCommon.h"
#include "LTE_PLMN-IdentityList-MBMS-r14.h"
#include "LTE_TrackingAreaCode.h"
#include "LTE_CellIdentity.h"
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14 {
	LTE_SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms1	= 0,
	LTE_SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms2	= 1,
	LTE_SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms5	= 2,
	LTE_SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms10	= 3,
	LTE_SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms15	= 4,
	LTE_SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms20	= 5,
	LTE_SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms40	= 6,
	LTE_SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms80	= 7
} e_LTE_SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14;

/* Forward declarations */
struct LTE_MultiBandInfoList_r11;
struct LTE_NonMBSFN_SubframeConfig_r14;
struct LTE_SystemInformationBlockType13_r9;
struct LTE_CellAccessRelatedInfo_r14;

/* LTE_SystemInformationBlockType1-MBMS-r14 */
typedef struct LTE_SystemInformationBlockType1_MBMS_r14 {
	struct LTE_SystemInformationBlockType1_MBMS_r14__cellAccessRelatedInfo_r14 {
		LTE_PLMN_IdentityList_MBMS_r14_t	 plmn_IdentityList_r14;
		LTE_TrackingAreaCode_t	 trackingAreaCode_r14;
		LTE_CellIdentity_t	 cellIdentity_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellAccessRelatedInfo_r14;
	LTE_FreqBandIndicator_r11_t	 freqBandIndicator_r14;
	struct LTE_MultiBandInfoList_r11	*multiBandInfoList_r14;	/* OPTIONAL */
	LTE_SchedulingInfoList_MBMS_r14_t	 schedulingInfoList_MBMS_r14;
	long	 si_WindowLength_r14;
	long	 systemInfoValueTag_r14;
	struct LTE_NonMBSFN_SubframeConfig_r14	*nonMBSFN_SubframeConfig_r14;	/* OPTIONAL */
	LTE_PDSCH_ConfigCommon_t	 pdsch_ConfigCommon_r14;
	struct LTE_SystemInformationBlockType13_r9	*systemInformationBlockType13_r14;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_MBMS_r14__cellAccessRelatedInfoList_r14 {
		A_SEQUENCE_OF(struct LTE_CellAccessRelatedInfo_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellAccessRelatedInfoList_r14;
	struct LTE_SystemInformationBlockType1_MBMS_r14__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_MBMS_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_si_WindowLength_r14_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_MBMS_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_MBMS_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_MBMS_r14_1[11];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MultiBandInfoList-r11.h"
#include "LTE_NonMBSFN-SubframeConfig-r14.h"
#include "LTE_SystemInformationBlockType13-r9.h"
#include "LTE_CellAccessRelatedInfo-r14.h"

#endif	/* _LTE_SystemInformationBlockType1_MBMS_r14_H_ */
#include <asn_internal.h>
