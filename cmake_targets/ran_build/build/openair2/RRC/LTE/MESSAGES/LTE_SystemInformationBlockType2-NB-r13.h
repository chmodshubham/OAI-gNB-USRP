/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SystemInformationBlockType2_NB_r13_H_
#define	_LTE_SystemInformationBlockType2_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RadioResourceConfigCommonSIB-NB-r13.h"
#include "LTE_UE-TimersAndConstants-NB-r13.h"
#include "LTE_TimeAlignmentTimer.h"
#include <OCTET_STRING.h>
#include "LTE_AdditionalSpectrumEmission.h"
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeEnumerated.h>
#include "LTE_TDD-UL-DL-AlignmentOffset-NB-r15.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType2_NB_r13__ext1__cp_Reestablishment_r14 {
	LTE_SystemInformationBlockType2_NB_r13__ext1__cp_Reestablishment_r14_true	= 0
} e_LTE_SystemInformationBlockType2_NB_r13__ext1__cp_Reestablishment_r14;
typedef enum LTE_SystemInformationBlockType2_NB_r13__ext2__servingCellMeasInfo_r14 {
	LTE_SystemInformationBlockType2_NB_r13__ext2__servingCellMeasInfo_r14_true	= 0
} e_LTE_SystemInformationBlockType2_NB_r13__ext2__servingCellMeasInfo_r14;
typedef enum LTE_SystemInformationBlockType2_NB_r13__ext2__cqi_Reporting_r14 {
	LTE_SystemInformationBlockType2_NB_r13__ext2__cqi_Reporting_r14_true	= 0
} e_LTE_SystemInformationBlockType2_NB_r13__ext2__cqi_Reporting_r14;
typedef enum LTE_SystemInformationBlockType2_NB_r13__ext3__enhancedPHR_r15 {
	LTE_SystemInformationBlockType2_NB_r13__ext3__enhancedPHR_r15_true	= 0
} e_LTE_SystemInformationBlockType2_NB_r13__ext3__enhancedPHR_r15;
typedef enum LTE_SystemInformationBlockType2_NB_r13__ext3__cp_EDT_r15 {
	LTE_SystemInformationBlockType2_NB_r13__ext3__cp_EDT_r15_true	= 0
} e_LTE_SystemInformationBlockType2_NB_r13__ext3__cp_EDT_r15;
typedef enum LTE_SystemInformationBlockType2_NB_r13__ext3__up_EDT_r15 {
	LTE_SystemInformationBlockType2_NB_r13__ext3__up_EDT_r15_true	= 0
} e_LTE_SystemInformationBlockType2_NB_r13__ext3__up_EDT_r15;

/* Forward declarations */
struct LTE_CarrierFreq_NB_r13;

/* LTE_SystemInformationBlockType2-NB-r13 */
typedef struct LTE_SystemInformationBlockType2_NB_r13 {
	LTE_RadioResourceConfigCommonSIB_NB_r13_t	 radioResourceConfigCommon_r13;
	LTE_UE_TimersAndConstants_NB_r13_t	 ue_TimersAndConstants_r13;
	struct LTE_SystemInformationBlockType2_NB_r13__freqInfo_r13 {
		struct LTE_CarrierFreq_NB_r13	*ul_CarrierFreq_r13;	/* OPTIONAL */
		LTE_AdditionalSpectrumEmission_t	 additionalSpectrumEmission_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} freqInfo_r13;
	LTE_TimeAlignmentTimer_t	 timeAlignmentTimerCommon_r13;
	struct LTE_SystemInformationBlockType2_NB_r13__multiBandInfoList_r13 {
		A_SEQUENCE_OF(LTE_AdditionalSpectrumEmission_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *multiBandInfoList_r13;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SystemInformationBlockType2_NB_r13__ext1 {
		long	*cp_Reestablishment_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_SystemInformationBlockType2_NB_r13__ext2 {
		long	*servingCellMeasInfo_r14;	/* OPTIONAL */
		long	*cqi_Reporting_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_SystemInformationBlockType2_NB_r13__ext3 {
		long	*enhancedPHR_r15;	/* OPTIONAL */
		struct LTE_SystemInformationBlockType2_NB_r13__ext3__freqInfo_v1530 {
			LTE_TDD_UL_DL_AlignmentOffset_NB_r15_t	 tdd_UL_DL_AlignmentOffset_r15;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *freqInfo_v1530;
		long	*cp_EDT_r15;	/* OPTIONAL */
		long	*up_EDT_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType2_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cp_Reestablishment_r14_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_servingCellMeasInfo_r14_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cqi_Reporting_r14_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_enhancedPHR_r15_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cp_EDT_r15_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_up_EDT_r15_27;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType2_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType2_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType2_NB_r13_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CarrierFreq-NB-r13.h"

#endif	/* _LTE_SystemInformationBlockType2_NB_r13_H_ */
#include <asn_internal.h>
