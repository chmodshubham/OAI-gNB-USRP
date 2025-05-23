/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MeasConfig_H_
#define	_LTE_MeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RSRP-Range.h"
#include <NULL.h>
#include "LTE_MobilityStateParameters.h"
#include "LTE_SpeedStateScaleFactors.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include <BOOLEAN.h>
#include "LTE_MeasScaleFactor-r12.h"
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasConfig__speedStatePars_PR {
	LTE_MeasConfig__speedStatePars_PR_NOTHING,	/* No components present */
	LTE_MeasConfig__speedStatePars_PR_release,
	LTE_MeasConfig__speedStatePars_PR_setup
} LTE_MeasConfig__speedStatePars_PR;
typedef enum LTE_MeasConfig__ext3__measScaleFactor_r12_PR {
	LTE_MeasConfig__ext3__measScaleFactor_r12_PR_NOTHING,	/* No components present */
	LTE_MeasConfig__ext3__measScaleFactor_r12_PR_release,
	LTE_MeasConfig__ext3__measScaleFactor_r12_PR_setup
} LTE_MeasConfig__ext3__measScaleFactor_r12_PR;
typedef enum LTE_MeasConfig__ext7__heightThreshRef_r15_PR {
	LTE_MeasConfig__ext7__heightThreshRef_r15_PR_NOTHING,	/* No components present */
	LTE_MeasConfig__ext7__heightThreshRef_r15_PR_release,
	LTE_MeasConfig__ext7__heightThreshRef_r15_PR_setup
} LTE_MeasConfig__ext7__heightThreshRef_r15_PR;

/* Forward declarations */
struct LTE_MeasObjectToRemoveList;
struct LTE_MeasObjectToAddModList;
struct LTE_ReportConfigToRemoveList;
struct LTE_ReportConfigToAddModList;
struct LTE_MeasIdToRemoveList;
struct LTE_MeasIdToAddModList;
struct LTE_QuantityConfig;
struct LTE_MeasGapConfig;
struct LTE_PreRegistrationInfoHRPD;
struct LTE_MeasObjectToAddModList_v9e0;
struct LTE_MeasIdToRemoveListExt_r12;
struct LTE_MeasIdToAddModListExt_r12;
struct LTE_MeasObjectToRemoveListExt_r13;
struct LTE_MeasObjectToAddModListExt_r13;
struct LTE_MeasIdToAddModList_v1310;
struct LTE_MeasIdToAddModListExt_v1310;
struct LTE_MeasGapConfigPerCC_List_r14;
struct LTE_MeasGapSharingConfig_r14;
struct LTE_MeasGapConfigDensePRS_r15;

/* LTE_MeasConfig */
typedef struct LTE_MeasConfig {
	struct LTE_MeasObjectToRemoveList	*measObjectToRemoveList;	/* OPTIONAL */
	struct LTE_MeasObjectToAddModList	*measObjectToAddModList;	/* OPTIONAL */
	struct LTE_ReportConfigToRemoveList	*reportConfigToRemoveList;	/* OPTIONAL */
	struct LTE_ReportConfigToAddModList	*reportConfigToAddModList;	/* OPTIONAL */
	struct LTE_MeasIdToRemoveList	*measIdToRemoveList;	/* OPTIONAL */
	struct LTE_MeasIdToAddModList	*measIdToAddModList;	/* OPTIONAL */
	struct LTE_QuantityConfig	*quantityConfig;	/* OPTIONAL */
	struct LTE_MeasGapConfig	*measGapConfig;	/* OPTIONAL */
	LTE_RSRP_Range_t	*s_Measure;	/* OPTIONAL */
	struct LTE_PreRegistrationInfoHRPD	*preRegistrationInfoHRPD;	/* OPTIONAL */
	struct LTE_MeasConfig__speedStatePars {
		LTE_MeasConfig__speedStatePars_PR present;
		union LTE_MeasConfig__LTE_speedStatePars_u {
			NULL_t	 release;
			struct LTE_MeasConfig__speedStatePars__setup {
				LTE_MobilityStateParameters_t	 mobilityStateParameters;
				LTE_SpeedStateScaleFactors_t	 timeToTrigger_SF;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *speedStatePars;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_MeasConfig__ext1 {
		struct LTE_MeasObjectToAddModList_v9e0	*measObjectToAddModList_v9e0;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_MeasConfig__ext2 {
		BOOLEAN_t	*allowInterruptions_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_MeasConfig__ext3 {
		struct LTE_MeasConfig__ext3__measScaleFactor_r12 {
			LTE_MeasConfig__ext3__measScaleFactor_r12_PR present;
			union LTE_MeasConfig__LTE_ext3__LTE_measScaleFactor_r12_u {
				NULL_t	 release;
				LTE_MeasScaleFactor_r12_t	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *measScaleFactor_r12;
		struct LTE_MeasIdToRemoveListExt_r12	*measIdToRemoveListExt_r12;	/* OPTIONAL */
		struct LTE_MeasIdToAddModListExt_r12	*measIdToAddModListExt_r12;	/* OPTIONAL */
		BOOLEAN_t	*measRSRQ_OnAllSymbols_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_MeasConfig__ext4 {
		struct LTE_MeasObjectToRemoveListExt_r13	*measObjectToRemoveListExt_r13;	/* OPTIONAL */
		struct LTE_MeasObjectToAddModListExt_r13	*measObjectToAddModListExt_r13;	/* OPTIONAL */
		struct LTE_MeasIdToAddModList_v1310	*measIdToAddModList_v1310;	/* OPTIONAL */
		struct LTE_MeasIdToAddModListExt_v1310	*measIdToAddModListExt_v1310;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_MeasConfig__ext5 {
		struct LTE_MeasGapConfigPerCC_List_r14	*measGapConfigPerCC_List_r14;	/* OPTIONAL */
		struct LTE_MeasGapSharingConfig_r14	*measGapSharingConfig_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct LTE_MeasConfig__ext6 {
		BOOLEAN_t	*fr1_Gap_r15;	/* OPTIONAL */
		BOOLEAN_t	*mgta_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	struct LTE_MeasConfig__ext7 {
		struct LTE_MeasGapConfigDensePRS_r15	*measGapConfigDensePRS_r15;	/* OPTIONAL */
		struct LTE_MeasConfig__ext7__heightThreshRef_r15 {
			LTE_MeasConfig__ext7__heightThreshRef_r15_PR present;
			union LTE_MeasConfig__LTE_ext7__LTE_heightThreshRef_r15_u {
				NULL_t	 release;
				long	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *heightThreshRef_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext7;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasConfig_1[18];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasObjectToRemoveList.h"
#include "LTE_MeasObjectToAddModList.h"
#include "LTE_ReportConfigToRemoveList.h"
#include "LTE_ReportConfigToAddModList.h"
#include "LTE_MeasIdToRemoveList.h"
#include "LTE_MeasIdToAddModList.h"
#include "LTE_QuantityConfig.h"
#include "LTE_MeasGapConfig.h"
#include "LTE_PreRegistrationInfoHRPD.h"
#include "LTE_MeasObjectToAddModList-v9e0.h"
#include "LTE_MeasIdToRemoveListExt-r12.h"
#include "LTE_MeasIdToAddModListExt-r12.h"
#include "LTE_MeasObjectToRemoveListExt-r13.h"
#include "LTE_MeasObjectToAddModListExt-r13.h"
#include "LTE_MeasIdToAddModList-v1310.h"
#include "LTE_MeasIdToAddModListExt-v1310.h"
#include "LTE_MeasGapConfigPerCC-List-r14.h"
#include "LTE_MeasGapSharingConfig-r14.h"
#include "LTE_MeasGapConfigDensePRS-r15.h"

#endif	/* _LTE_MeasConfig_H_ */
#include <asn_internal.h>
