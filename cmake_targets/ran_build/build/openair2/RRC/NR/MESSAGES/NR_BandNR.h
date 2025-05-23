/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_BandNR_H_
#define	_NR_BandNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_FreqBandIndicatorNR.h"
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BandNR__extendedCP {
	NR_BandNR__extendedCP_supported	= 0
} e_NR_BandNR__extendedCP;
typedef enum NR_BandNR__multipleTCI {
	NR_BandNR__multipleTCI_supported	= 0
} e_NR_BandNR__multipleTCI;
typedef enum NR_BandNR__bwp_WithoutRestriction {
	NR_BandNR__bwp_WithoutRestriction_supported	= 0
} e_NR_BandNR__bwp_WithoutRestriction;
typedef enum NR_BandNR__bwp_SameNumerology {
	NR_BandNR__bwp_SameNumerology_upto2	= 0,
	NR_BandNR__bwp_SameNumerology_upto4	= 1
} e_NR_BandNR__bwp_SameNumerology;
typedef enum NR_BandNR__bwp_DiffNumerology {
	NR_BandNR__bwp_DiffNumerology_upto4	= 0
} e_NR_BandNR__bwp_DiffNumerology;
typedef enum NR_BandNR__crossCarrierScheduling_SameSCS {
	NR_BandNR__crossCarrierScheduling_SameSCS_supported	= 0
} e_NR_BandNR__crossCarrierScheduling_SameSCS;
typedef enum NR_BandNR__pdsch_256QAM_FR2 {
	NR_BandNR__pdsch_256QAM_FR2_supported	= 0
} e_NR_BandNR__pdsch_256QAM_FR2;
typedef enum NR_BandNR__pusch_256QAM {
	NR_BandNR__pusch_256QAM_supported	= 0
} e_NR_BandNR__pusch_256QAM;
typedef enum NR_BandNR__ue_PowerClass {
	NR_BandNR__ue_PowerClass_pc1	= 0,
	NR_BandNR__ue_PowerClass_pc2	= 1,
	NR_BandNR__ue_PowerClass_pc3	= 2,
	NR_BandNR__ue_PowerClass_pc4	= 3
} e_NR_BandNR__ue_PowerClass;
typedef enum NR_BandNR__rateMatchingLTE_CRS {
	NR_BandNR__rateMatchingLTE_CRS_supported	= 0
} e_NR_BandNR__rateMatchingLTE_CRS;
typedef enum NR_BandNR__channelBWs_DL_PR {
	NR_BandNR__channelBWs_DL_PR_NOTHING,	/* No components present */
	NR_BandNR__channelBWs_DL_PR_fr1,
	NR_BandNR__channelBWs_DL_PR_fr2
} NR_BandNR__channelBWs_DL_PR;
typedef enum NR_BandNR__channelBWs_UL_PR {
	NR_BandNR__channelBWs_UL_PR_NOTHING,	/* No components present */
	NR_BandNR__channelBWs_UL_PR_fr1,
	NR_BandNR__channelBWs_UL_PR_fr2
} NR_BandNR__channelBWs_UL_PR;
typedef enum NR_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1 {
	NR_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1_n60	= 0,
	NR_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1_n70	= 1,
	NR_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1_n80	= 2,
	NR_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1_n90	= 3,
	NR_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1_n100	= 4
} e_NR_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1;
typedef enum NR_BandNR__ext2__pucch_SpatialRelInfoMAC_CE {
	NR_BandNR__ext2__pucch_SpatialRelInfoMAC_CE_supported	= 0
} e_NR_BandNR__ext2__pucch_SpatialRelInfoMAC_CE;
typedef enum NR_BandNR__ext2__powerBoosting_pi2BPSK {
	NR_BandNR__ext2__powerBoosting_pi2BPSK_supported	= 0
} e_NR_BandNR__ext2__powerBoosting_pi2BPSK;
typedef enum NR_BandNR__ext3__maxUplinkDutyCycle_FR2 {
	NR_BandNR__ext3__maxUplinkDutyCycle_FR2_n15	= 0,
	NR_BandNR__ext3__maxUplinkDutyCycle_FR2_n20	= 1,
	NR_BandNR__ext3__maxUplinkDutyCycle_FR2_n25	= 2,
	NR_BandNR__ext3__maxUplinkDutyCycle_FR2_n30	= 3,
	NR_BandNR__ext3__maxUplinkDutyCycle_FR2_n40	= 4,
	NR_BandNR__ext3__maxUplinkDutyCycle_FR2_n50	= 5,
	NR_BandNR__ext3__maxUplinkDutyCycle_FR2_n60	= 6,
	NR_BandNR__ext3__maxUplinkDutyCycle_FR2_n70	= 7,
	NR_BandNR__ext3__maxUplinkDutyCycle_FR2_n80	= 8,
	NR_BandNR__ext3__maxUplinkDutyCycle_FR2_n90	= 9,
	NR_BandNR__ext3__maxUplinkDutyCycle_FR2_n100	= 10
} e_NR_BandNR__ext3__maxUplinkDutyCycle_FR2;
typedef enum NR_BandNR__ext4__channelBWs_DL_v1590_PR {
	NR_BandNR__ext4__channelBWs_DL_v1590_PR_NOTHING,	/* No components present */
	NR_BandNR__ext4__channelBWs_DL_v1590_PR_fr1,
	NR_BandNR__ext4__channelBWs_DL_v1590_PR_fr2
} NR_BandNR__ext4__channelBWs_DL_v1590_PR;
typedef enum NR_BandNR__ext4__channelBWs_UL_v1590_PR {
	NR_BandNR__ext4__channelBWs_UL_v1590_PR_NOTHING,	/* No components present */
	NR_BandNR__ext4__channelBWs_UL_v1590_PR_fr1,
	NR_BandNR__ext4__channelBWs_UL_v1590_PR_fr2
} NR_BandNR__ext4__channelBWs_UL_v1590_PR;
typedef enum NR_BandNR__ext6__cancelOverlappingPUSCH_r16 {
	NR_BandNR__ext6__cancelOverlappingPUSCH_r16_supported	= 0
} e_NR_BandNR__ext6__cancelOverlappingPUSCH_r16;
typedef enum NR_BandNR__ext6__overlapRateMatchingEUTRA_CRS_r16 {
	NR_BandNR__ext6__overlapRateMatchingEUTRA_CRS_r16_supported	= 0
} e_NR_BandNR__ext6__overlapRateMatchingEUTRA_CRS_r16;
typedef enum NR_BandNR__ext6__pdsch_MappingTypeB_Alt_r16 {
	NR_BandNR__ext6__pdsch_MappingTypeB_Alt_r16_supported	= 0
} e_NR_BandNR__ext6__pdsch_MappingTypeB_Alt_r16;
typedef enum NR_BandNR__ext6__oneSlotPeriodicTRS_r16 {
	NR_BandNR__ext6__oneSlotPeriodicTRS_r16_supported	= 0
} e_NR_BandNR__ext6__oneSlotPeriodicTRS_r16;
typedef enum NR_BandNR__ext6__simulSRS_MIMO_TransWithinBand_r16 {
	NR_BandNR__ext6__simulSRS_MIMO_TransWithinBand_r16_n2	= 0
} e_NR_BandNR__ext6__simulSRS_MIMO_TransWithinBand_r16;
typedef enum NR_BandNR__ext6__channelBW_DL_IAB_r16_PR {
	NR_BandNR__ext6__channelBW_DL_IAB_r16_PR_NOTHING,	/* No components present */
	NR_BandNR__ext6__channelBW_DL_IAB_r16_PR_fr1_100mhz,
	NR_BandNR__ext6__channelBW_DL_IAB_r16_PR_fr2_200mhz
} NR_BandNR__ext6__channelBW_DL_IAB_r16_PR;
typedef enum NR_BandNR__ext6__channelBW_DL_IAB_r16__fr1_100mhz__scs_15kHz {
	NR_BandNR__ext6__channelBW_DL_IAB_r16__fr1_100mhz__scs_15kHz_supported	= 0
} e_NR_BandNR__ext6__channelBW_DL_IAB_r16__fr1_100mhz__scs_15kHz;
typedef enum NR_BandNR__ext6__channelBW_DL_IAB_r16__fr1_100mhz__scs_30kHz {
	NR_BandNR__ext6__channelBW_DL_IAB_r16__fr1_100mhz__scs_30kHz_supported	= 0
} e_NR_BandNR__ext6__channelBW_DL_IAB_r16__fr1_100mhz__scs_30kHz;
typedef enum NR_BandNR__ext6__channelBW_DL_IAB_r16__fr1_100mhz__scs_60kHz {
	NR_BandNR__ext6__channelBW_DL_IAB_r16__fr1_100mhz__scs_60kHz_supported	= 0
} e_NR_BandNR__ext6__channelBW_DL_IAB_r16__fr1_100mhz__scs_60kHz;
typedef enum NR_BandNR__ext6__channelBW_DL_IAB_r16__fr2_200mhz__scs_60kHz {
	NR_BandNR__ext6__channelBW_DL_IAB_r16__fr2_200mhz__scs_60kHz_supported	= 0
} e_NR_BandNR__ext6__channelBW_DL_IAB_r16__fr2_200mhz__scs_60kHz;
typedef enum NR_BandNR__ext6__channelBW_DL_IAB_r16__fr2_200mhz__scs_120kHz {
	NR_BandNR__ext6__channelBW_DL_IAB_r16__fr2_200mhz__scs_120kHz_supported	= 0
} e_NR_BandNR__ext6__channelBW_DL_IAB_r16__fr2_200mhz__scs_120kHz;
typedef enum NR_BandNR__ext6__channelBW_UL_IAB_r16_PR {
	NR_BandNR__ext6__channelBW_UL_IAB_r16_PR_NOTHING,	/* No components present */
	NR_BandNR__ext6__channelBW_UL_IAB_r16_PR_fr1_100mhz,
	NR_BandNR__ext6__channelBW_UL_IAB_r16_PR_fr2_200mhz
} NR_BandNR__ext6__channelBW_UL_IAB_r16_PR;
typedef enum NR_BandNR__ext6__channelBW_UL_IAB_r16__fr1_100mhz__scs_15kHz {
	NR_BandNR__ext6__channelBW_UL_IAB_r16__fr1_100mhz__scs_15kHz_supported	= 0
} e_NR_BandNR__ext6__channelBW_UL_IAB_r16__fr1_100mhz__scs_15kHz;
typedef enum NR_BandNR__ext6__channelBW_UL_IAB_r16__fr1_100mhz__scs_30kHz {
	NR_BandNR__ext6__channelBW_UL_IAB_r16__fr1_100mhz__scs_30kHz_supported	= 0
} e_NR_BandNR__ext6__channelBW_UL_IAB_r16__fr1_100mhz__scs_30kHz;
typedef enum NR_BandNR__ext6__channelBW_UL_IAB_r16__fr1_100mhz__scs_60kHz {
	NR_BandNR__ext6__channelBW_UL_IAB_r16__fr1_100mhz__scs_60kHz_supported	= 0
} e_NR_BandNR__ext6__channelBW_UL_IAB_r16__fr1_100mhz__scs_60kHz;
typedef enum NR_BandNR__ext6__channelBW_UL_IAB_r16__fr2_200mhz__scs_60kHz {
	NR_BandNR__ext6__channelBW_UL_IAB_r16__fr2_200mhz__scs_60kHz_supported	= 0
} e_NR_BandNR__ext6__channelBW_UL_IAB_r16__fr2_200mhz__scs_60kHz;
typedef enum NR_BandNR__ext6__channelBW_UL_IAB_r16__fr2_200mhz__scs_120kHz {
	NR_BandNR__ext6__channelBW_UL_IAB_r16__fr2_200mhz__scs_120kHz_supported	= 0
} e_NR_BandNR__ext6__channelBW_UL_IAB_r16__fr2_200mhz__scs_120kHz;
typedef enum NR_BandNR__ext6__rasterShift7dot5_IAB_r16 {
	NR_BandNR__ext6__rasterShift7dot5_IAB_r16_supported	= 0
} e_NR_BandNR__ext6__rasterShift7dot5_IAB_r16;
typedef enum NR_BandNR__ext6__ue_PowerClass_v1610 {
	NR_BandNR__ext6__ue_PowerClass_v1610_pc1dot5	= 0
} e_NR_BandNR__ext6__ue_PowerClass_v1610;
typedef enum NR_BandNR__ext6__condHandover_r16 {
	NR_BandNR__ext6__condHandover_r16_supported	= 0
} e_NR_BandNR__ext6__condHandover_r16;
typedef enum NR_BandNR__ext6__condHandoverFailure_r16 {
	NR_BandNR__ext6__condHandoverFailure_r16_supported	= 0
} e_NR_BandNR__ext6__condHandoverFailure_r16;
typedef enum NR_BandNR__ext6__condHandoverTwoTriggerEvents_r16 {
	NR_BandNR__ext6__condHandoverTwoTriggerEvents_r16_supported	= 0
} e_NR_BandNR__ext6__condHandoverTwoTriggerEvents_r16;
typedef enum NR_BandNR__ext6__condPSCellChange_r16 {
	NR_BandNR__ext6__condPSCellChange_r16_supported	= 0
} e_NR_BandNR__ext6__condPSCellChange_r16;
typedef enum NR_BandNR__ext6__condPSCellChangeTwoTriggerEvents_r16 {
	NR_BandNR__ext6__condPSCellChangeTwoTriggerEvents_r16_supported	= 0
} e_NR_BandNR__ext6__condPSCellChangeTwoTriggerEvents_r16;
typedef enum NR_BandNR__ext6__mpr_PowerBoost_FR2_r16 {
	NR_BandNR__ext6__mpr_PowerBoost_FR2_r16_supported	= 0
} e_NR_BandNR__ext6__mpr_PowerBoost_FR2_r16;
typedef enum NR_BandNR__ext6__activeConfiguredGrant_r16__maxNumberConfigsPerBWP_r16 {
	NR_BandNR__ext6__activeConfiguredGrant_r16__maxNumberConfigsPerBWP_r16_n1	= 0,
	NR_BandNR__ext6__activeConfiguredGrant_r16__maxNumberConfigsPerBWP_r16_n2	= 1,
	NR_BandNR__ext6__activeConfiguredGrant_r16__maxNumberConfigsPerBWP_r16_n4	= 2,
	NR_BandNR__ext6__activeConfiguredGrant_r16__maxNumberConfigsPerBWP_r16_n8	= 3,
	NR_BandNR__ext6__activeConfiguredGrant_r16__maxNumberConfigsPerBWP_r16_n12	= 4
} e_NR_BandNR__ext6__activeConfiguredGrant_r16__maxNumberConfigsPerBWP_r16;
typedef enum NR_BandNR__ext6__jointReleaseConfiguredGrantType2_r16 {
	NR_BandNR__ext6__jointReleaseConfiguredGrantType2_r16_supported	= 0
} e_NR_BandNR__ext6__jointReleaseConfiguredGrantType2_r16;
typedef enum NR_BandNR__ext6__jointReleaseSPS_r16 {
	NR_BandNR__ext6__jointReleaseSPS_r16_supported	= 0
} e_NR_BandNR__ext6__jointReleaseSPS_r16;
typedef enum NR_BandNR__ext6__simulSRS_TransWithinBand_r16 {
	NR_BandNR__ext6__simulSRS_TransWithinBand_r16_n2	= 0
} e_NR_BandNR__ext6__simulSRS_TransWithinBand_r16;
typedef enum NR_BandNR__ext6__trs_AdditionalBandwidth_r16 {
	NR_BandNR__ext6__trs_AdditionalBandwidth_r16_trs_AddBW_Set1	= 0,
	NR_BandNR__ext6__trs_AdditionalBandwidth_r16_trs_AddBW_Set2	= 1
} e_NR_BandNR__ext6__trs_AdditionalBandwidth_r16;
typedef enum NR_BandNR__ext6__handoverIntraF_IAB_r16 {
	NR_BandNR__ext6__handoverIntraF_IAB_r16_supported	= 0
} e_NR_BandNR__ext6__handoverIntraF_IAB_r16;
typedef enum NR_BandNR__ext8__handoverUTRA_FDD_r16 {
	NR_BandNR__ext8__handoverUTRA_FDD_r16_supported	= 0
} e_NR_BandNR__ext8__handoverUTRA_FDD_r16;
typedef enum NR_BandNR__ext8__enhancedUL_TransientPeriod_r16 {
	NR_BandNR__ext8__enhancedUL_TransientPeriod_r16_us2	= 0,
	NR_BandNR__ext8__enhancedUL_TransientPeriod_r16_us4	= 1,
	NR_BandNR__ext8__enhancedUL_TransientPeriod_r16_us7	= 2
} e_NR_BandNR__ext8__enhancedUL_TransientPeriod_r16;

/* Forward declarations */
struct NR_MIMO_ParametersPerBand;
struct NR_SharedSpectrumChAccessParamsPerBand_r16;
struct NR_OLPC_SRS_Pos_r16;
struct NR_SpatialRelationsSRS_Pos_r16;
struct NR_SimulSRS_ForAntennaSwitching_r16;
struct NR_SharedSpectrumChAccessParamsPerBand_v1630;
struct NR_SharedSpectrumChAccessParamsPerBand_v1640;

/* NR_BandNR */
typedef struct NR_BandNR {
	NR_FreqBandIndicatorNR_t	 bandNR;
	BIT_STRING_t	*modifiedMPR_Behaviour;	/* OPTIONAL */
	struct NR_MIMO_ParametersPerBand	*mimo_ParametersPerBand;	/* OPTIONAL */
	long	*extendedCP;	/* OPTIONAL */
	long	*multipleTCI;	/* OPTIONAL */
	long	*bwp_WithoutRestriction;	/* OPTIONAL */
	long	*bwp_SameNumerology;	/* OPTIONAL */
	long	*bwp_DiffNumerology;	/* OPTIONAL */
	long	*crossCarrierScheduling_SameSCS;	/* OPTIONAL */
	long	*pdsch_256QAM_FR2;	/* OPTIONAL */
	long	*pusch_256QAM;	/* OPTIONAL */
	long	*ue_PowerClass;	/* OPTIONAL */
	long	*rateMatchingLTE_CRS;	/* OPTIONAL */
	struct NR_BandNR__channelBWs_DL {
		NR_BandNR__channelBWs_DL_PR present;
		union NR_BandNR__NR_channelBWs_DL_u {
			struct NR_BandNR__channelBWs_DL__fr1 {
				BIT_STRING_t	*scs_15kHz;	/* OPTIONAL */
				BIT_STRING_t	*scs_30kHz;	/* OPTIONAL */
				BIT_STRING_t	*scs_60kHz;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *fr1;
			struct NR_BandNR__channelBWs_DL__fr2 {
				BIT_STRING_t	*scs_60kHz;	/* OPTIONAL */
				BIT_STRING_t	*scs_120kHz;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *fr2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *channelBWs_DL;
	struct NR_BandNR__channelBWs_UL {
		NR_BandNR__channelBWs_UL_PR present;
		union NR_BandNR__NR_channelBWs_UL_u {
			struct NR_BandNR__channelBWs_UL__fr1 {
				BIT_STRING_t	*scs_15kHz;	/* OPTIONAL */
				BIT_STRING_t	*scs_30kHz;	/* OPTIONAL */
				BIT_STRING_t	*scs_60kHz;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *fr1;
			struct NR_BandNR__channelBWs_UL__fr2 {
				BIT_STRING_t	*scs_60kHz;	/* OPTIONAL */
				BIT_STRING_t	*scs_120kHz;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *fr2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *channelBWs_UL;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_BandNR__ext1 {
		long	*maxUplinkDutyCycle_PC2_FR1;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_BandNR__ext2 {
		long	*pucch_SpatialRelInfoMAC_CE;	/* OPTIONAL */
		long	*powerBoosting_pi2BPSK;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_BandNR__ext3 {
		long	*maxUplinkDutyCycle_FR2;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct NR_BandNR__ext4 {
		struct NR_BandNR__ext4__channelBWs_DL_v1590 {
			NR_BandNR__ext4__channelBWs_DL_v1590_PR present;
			union NR_BandNR__NR_ext4__NR_channelBWs_DL_v1590_u {
				struct NR_BandNR__ext4__channelBWs_DL_v1590__fr1 {
					BIT_STRING_t	*scs_15kHz;	/* OPTIONAL */
					BIT_STRING_t	*scs_30kHz;	/* OPTIONAL */
					BIT_STRING_t	*scs_60kHz;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr1;
				struct NR_BandNR__ext4__channelBWs_DL_v1590__fr2 {
					BIT_STRING_t	*scs_60kHz;	/* OPTIONAL */
					BIT_STRING_t	*scs_120kHz;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr2;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *channelBWs_DL_v1590;
		struct NR_BandNR__ext4__channelBWs_UL_v1590 {
			NR_BandNR__ext4__channelBWs_UL_v1590_PR present;
			union NR_BandNR__NR_ext4__NR_channelBWs_UL_v1590_u {
				struct NR_BandNR__ext4__channelBWs_UL_v1590__fr1 {
					BIT_STRING_t	*scs_15kHz;	/* OPTIONAL */
					BIT_STRING_t	*scs_30kHz;	/* OPTIONAL */
					BIT_STRING_t	*scs_60kHz;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr1;
				struct NR_BandNR__ext4__channelBWs_UL_v1590__fr2 {
					BIT_STRING_t	*scs_60kHz;	/* OPTIONAL */
					BIT_STRING_t	*scs_120kHz;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr2;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *channelBWs_UL_v1590;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct NR_BandNR__ext5 {
		BIT_STRING_t	*asymmetricBandwidthCombinationSet;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct NR_BandNR__ext6 {
		struct NR_SharedSpectrumChAccessParamsPerBand_r16	*sharedSpectrumChAccessParamsPerBand_r16;	/* OPTIONAL */
		long	*cancelOverlappingPUSCH_r16;	/* OPTIONAL */
		struct NR_BandNR__ext6__multipleRateMatchingEUTRA_CRS_r16 {
			long	 maxNumberPatterns_r16;
			long	 maxNumberNon_OverlapPatterns_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *multipleRateMatchingEUTRA_CRS_r16;
		long	*overlapRateMatchingEUTRA_CRS_r16;	/* OPTIONAL */
		long	*pdsch_MappingTypeB_Alt_r16;	/* OPTIONAL */
		long	*oneSlotPeriodicTRS_r16;	/* OPTIONAL */
		struct NR_OLPC_SRS_Pos_r16	*olpc_SRS_Pos_r16;	/* OPTIONAL */
		struct NR_SpatialRelationsSRS_Pos_r16	*spatialRelationsSRS_Pos_r16;	/* OPTIONAL */
		long	*simulSRS_MIMO_TransWithinBand_r16;	/* OPTIONAL */
		struct NR_BandNR__ext6__channelBW_DL_IAB_r16 {
			NR_BandNR__ext6__channelBW_DL_IAB_r16_PR present;
			union NR_BandNR__NR_ext6__NR_channelBW_DL_IAB_r16_u {
				struct NR_BandNR__ext6__channelBW_DL_IAB_r16__fr1_100mhz {
					long	*scs_15kHz;	/* OPTIONAL */
					long	*scs_30kHz;	/* OPTIONAL */
					long	*scs_60kHz;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr1_100mhz;
				struct NR_BandNR__ext6__channelBW_DL_IAB_r16__fr2_200mhz {
					long	*scs_60kHz;	/* OPTIONAL */
					long	*scs_120kHz;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr2_200mhz;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *channelBW_DL_IAB_r16;
		struct NR_BandNR__ext6__channelBW_UL_IAB_r16 {
			NR_BandNR__ext6__channelBW_UL_IAB_r16_PR present;
			union NR_BandNR__NR_ext6__NR_channelBW_UL_IAB_r16_u {
				struct NR_BandNR__ext6__channelBW_UL_IAB_r16__fr1_100mhz {
					long	*scs_15kHz;	/* OPTIONAL */
					long	*scs_30kHz;	/* OPTIONAL */
					long	*scs_60kHz;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr1_100mhz;
				struct NR_BandNR__ext6__channelBW_UL_IAB_r16__fr2_200mhz {
					long	*scs_60kHz;	/* OPTIONAL */
					long	*scs_120kHz;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr2_200mhz;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *channelBW_UL_IAB_r16;
		long	*rasterShift7dot5_IAB_r16;	/* OPTIONAL */
		long	*ue_PowerClass_v1610;	/* OPTIONAL */
		long	*condHandover_r16;	/* OPTIONAL */
		long	*condHandoverFailure_r16;	/* OPTIONAL */
		long	*condHandoverTwoTriggerEvents_r16;	/* OPTIONAL */
		long	*condPSCellChange_r16;	/* OPTIONAL */
		long	*condPSCellChangeTwoTriggerEvents_r16;	/* OPTIONAL */
		long	*mpr_PowerBoost_FR2_r16;	/* OPTIONAL */
		struct NR_BandNR__ext6__activeConfiguredGrant_r16 {
			long	 maxNumberConfigsPerBWP_r16;
			long	 maxNumberConfigsAllCC_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *activeConfiguredGrant_r16;
		long	*jointReleaseConfiguredGrantType2_r16;	/* OPTIONAL */
		struct NR_BandNR__ext6__sps_r16 {
			long	 maxNumberConfigsPerBWP_r16;
			long	 maxNumberConfigsAllCC_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *sps_r16;
		long	*jointReleaseSPS_r16;	/* OPTIONAL */
		long	*simulSRS_TransWithinBand_r16;	/* OPTIONAL */
		long	*trs_AdditionalBandwidth_r16;	/* OPTIONAL */
		long	*handoverIntraF_IAB_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	struct NR_BandNR__ext7 {
		struct NR_SimulSRS_ForAntennaSwitching_r16	*simulTX_SRS_AntSwitchingIntraBandUL_CA_r16;	/* OPTIONAL */
		struct NR_SharedSpectrumChAccessParamsPerBand_v1630	*sharedSpectrumChAccessParamsPerBand_v1630;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext7;
	struct NR_BandNR__ext8 {
		long	*handoverUTRA_FDD_r16;	/* OPTIONAL */
		long	*enhancedUL_TransientPeriod_r16;	/* OPTIONAL */
		struct NR_SharedSpectrumChAccessParamsPerBand_v1640	*sharedSpectrumChAccessParamsPerBand_v1640;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext8;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BandNR_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_extendedCP_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_multipleTCI_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_bwp_WithoutRestriction_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_bwp_SameNumerology_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_bwp_DiffNumerology_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_crossCarrierScheduling_SameSCS_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdsch_256QAM_FR2_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_256QAM_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ue_PowerClass_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rateMatchingLTE_CRS_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxUplinkDutyCycle_PC2_FR1_47;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pucch_SpatialRelInfoMAC_CE_54;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_powerBoosting_pi2BPSK_56;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxUplinkDutyCycle_FR2_59;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_cancelOverlappingPUSCH_r16_92;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_overlapRateMatchingEUTRA_CRS_r16_97;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdsch_MappingTypeB_Alt_r16_99;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_oneSlotPeriodicTRS_r16_101;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_simulSRS_MIMO_TransWithinBand_r16_105;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_15kHz_109;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_30kHz_111;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_60kHz_113;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_60kHz_116;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_120kHz_118;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_15kHz_122;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_30kHz_124;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_60kHz_126;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_60kHz_129;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_120kHz_131;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rasterShift7dot5_IAB_r16_133;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ue_PowerClass_v1610_135;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_condHandover_r16_137;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_condHandoverFailure_r16_139;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_condHandoverTwoTriggerEvents_r16_141;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_condPSCellChange_r16_143;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_condPSCellChangeTwoTriggerEvents_r16_145;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mpr_PowerBoost_FR2_r16_147;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberConfigsPerBWP_r16_150;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_jointReleaseConfiguredGrantType2_r16_157;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_jointReleaseSPS_r16_162;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_simulSRS_TransWithinBand_r16_164;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_trs_AdditionalBandwidth_r16_166;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_handoverIntraF_IAB_r16_169;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_handoverUTRA_FDD_r16_175;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_enhancedUL_TransientPeriod_r16_177;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_BandNR;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BandNR_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BandNR_1[23];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MIMO-ParametersPerBand.h"
#include "NR_SharedSpectrumChAccessParamsPerBand-r16.h"
#include "NR_OLPC-SRS-Pos-r16.h"
#include "NR_SpatialRelationsSRS-Pos-r16.h"
#include "NR_SimulSRS-ForAntennaSwitching-r16.h"
#include "NR_SharedSpectrumChAccessParamsPerBand-v1630.h"
#include "NR_SharedSpectrumChAccessParamsPerBand-v1640.h"

#endif	/* _NR_BandNR_H_ */
#include <asn_internal.h>
