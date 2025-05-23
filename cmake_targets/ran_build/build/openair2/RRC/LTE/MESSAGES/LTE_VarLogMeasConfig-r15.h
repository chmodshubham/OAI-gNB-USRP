/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_VarLogMeasConfig_r15_H_
#define	_LTE_VarLogMeasConfig_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_LoggingDuration-r10.h"
#include "LTE_LoggingInterval-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_AreaConfiguration_r10;
struct LTE_AreaConfiguration_v1130;
struct LTE_TargetMBSFN_AreaList_r12;
struct LTE_BT_NameList_r15;
struct LTE_WLAN_NameList_r15;

/* LTE_VarLogMeasConfig-r15 */
typedef struct LTE_VarLogMeasConfig_r15 {
	struct LTE_AreaConfiguration_r10	*areaConfiguration_r10;	/* OPTIONAL */
	struct LTE_AreaConfiguration_v1130	*areaConfiguration_v1130;	/* OPTIONAL */
	LTE_LoggingDuration_r10_t	 loggingDuration_r10;
	LTE_LoggingInterval_r10_t	 loggingInterval_r10;
	struct LTE_TargetMBSFN_AreaList_r12	*targetMBSFN_AreaList_r12;	/* OPTIONAL */
	struct LTE_BT_NameList_r15	*bt_NameList_r15;	/* OPTIONAL */
	struct LTE_WLAN_NameList_r15	*wlan_NameList_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VarLogMeasConfig_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VarLogMeasConfig_r15;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_AreaConfiguration-r10.h"
#include "LTE_AreaConfiguration-v1130.h"
#include "LTE_TargetMBSFN-AreaList-r12.h"
#include "LTE_BT-NameList-r15.h"
#include "LTE_WLAN-NameList-r15.h"

#endif	/* _LTE_VarLogMeasConfig_r15_H_ */
#include <asn_internal.h>
