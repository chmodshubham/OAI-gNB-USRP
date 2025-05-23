/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_BandSidelinkPC5_r16_H_
#define	_NR_BandSidelinkPC5_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_FreqBandIndicatorNR.h"
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BandSidelinkPC5_r16__sl_Reception_r16__harq_RxProcessSidelink_r16 {
	NR_BandSidelinkPC5_r16__sl_Reception_r16__harq_RxProcessSidelink_r16_n16	= 0,
	NR_BandSidelinkPC5_r16__sl_Reception_r16__harq_RxProcessSidelink_r16_n24	= 1,
	NR_BandSidelinkPC5_r16__sl_Reception_r16__harq_RxProcessSidelink_r16_n32	= 2,
	NR_BandSidelinkPC5_r16__sl_Reception_r16__harq_RxProcessSidelink_r16_n64	= 3
} e_NR_BandSidelinkPC5_r16__sl_Reception_r16__harq_RxProcessSidelink_r16;
typedef enum NR_BandSidelinkPC5_r16__sl_Reception_r16__pscch_RxSidelink_r16 {
	NR_BandSidelinkPC5_r16__sl_Reception_r16__pscch_RxSidelink_r16_value1	= 0,
	NR_BandSidelinkPC5_r16__sl_Reception_r16__pscch_RxSidelink_r16_value2	= 1
} e_NR_BandSidelinkPC5_r16__sl_Reception_r16__pscch_RxSidelink_r16;
typedef enum NR_BandSidelinkPC5_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16_PR {
	NR_BandSidelinkPC5_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16_PR_NOTHING,	/* No components present */
	NR_BandSidelinkPC5_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16_PR_fr1_r16,
	NR_BandSidelinkPC5_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16_PR_fr2_r16
} NR_BandSidelinkPC5_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16_PR;
typedef enum NR_BandSidelinkPC5_r16__sl_Reception_r16__extendedCP_RxSidelink_r16 {
	NR_BandSidelinkPC5_r16__sl_Reception_r16__extendedCP_RxSidelink_r16_supported	= 0
} e_NR_BandSidelinkPC5_r16__sl_Reception_r16__extendedCP_RxSidelink_r16;
typedef enum NR_BandSidelinkPC5_r16__sl_Tx_256QAM_r16 {
	NR_BandSidelinkPC5_r16__sl_Tx_256QAM_r16_supported	= 0
} e_NR_BandSidelinkPC5_r16__sl_Tx_256QAM_r16;
typedef enum NR_BandSidelinkPC5_r16__lowSE_64QAM_MCS_TableSidelink_r16 {
	NR_BandSidelinkPC5_r16__lowSE_64QAM_MCS_TableSidelink_r16_supported	= 0
} e_NR_BandSidelinkPC5_r16__lowSE_64QAM_MCS_TableSidelink_r16;
typedef enum NR_BandSidelinkPC5_r16__ext1__csi_ReportSidelink_r16__csi_RS_PortsSidelink_r16 {
	NR_BandSidelinkPC5_r16__ext1__csi_ReportSidelink_r16__csi_RS_PortsSidelink_r16_p1	= 0,
	NR_BandSidelinkPC5_r16__ext1__csi_ReportSidelink_r16__csi_RS_PortsSidelink_r16_p2	= 1
} e_NR_BandSidelinkPC5_r16__ext1__csi_ReportSidelink_r16__csi_RS_PortsSidelink_r16;
typedef enum NR_BandSidelinkPC5_r16__ext1__rankTwoReception_r16 {
	NR_BandSidelinkPC5_r16__ext1__rankTwoReception_r16_supported	= 0
} e_NR_BandSidelinkPC5_r16__ext1__rankTwoReception_r16;
typedef enum NR_BandSidelinkPC5_r16__ext1__sl_openLoopPC_RSRP_ReportSidelink_r16 {
	NR_BandSidelinkPC5_r16__ext1__sl_openLoopPC_RSRP_ReportSidelink_r16_supported	= 0
} e_NR_BandSidelinkPC5_r16__ext1__sl_openLoopPC_RSRP_ReportSidelink_r16;
typedef enum NR_BandSidelinkPC5_r16__ext1__sl_Rx_256QAM_r16 {
	NR_BandSidelinkPC5_r16__ext1__sl_Rx_256QAM_r16_supported	= 0
} e_NR_BandSidelinkPC5_r16__ext1__sl_Rx_256QAM_r16;

/* NR_BandSidelinkPC5-r16 */
typedef struct NR_BandSidelinkPC5_r16 {
	NR_FreqBandIndicatorNR_t	 freqBandSidelink_r16;
	struct NR_BandSidelinkPC5_r16__sl_Reception_r16 {
		long	 harq_RxProcessSidelink_r16;
		long	 pscch_RxSidelink_r16;
		struct NR_BandSidelinkPC5_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16 {
			NR_BandSidelinkPC5_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16_PR present;
			union NR_BandSidelinkPC5_r16__NR_sl_Reception_r16__NR_scs_CP_PatternRxSidelink_r16_u {
				struct NR_BandSidelinkPC5_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16__fr1_r16 {
					BIT_STRING_t	*scs_15kHz_r16;	/* OPTIONAL */
					BIT_STRING_t	*scs_30kHz_r16;	/* OPTIONAL */
					BIT_STRING_t	*scs_60kHz_r16;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr1_r16;
				struct NR_BandSidelinkPC5_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16__fr2_r16 {
					BIT_STRING_t	*scs_60kHz_r16;	/* OPTIONAL */
					BIT_STRING_t	*scs_120kHz_r16;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr2_r16;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs_CP_PatternRxSidelink_r16;
		long	*extendedCP_RxSidelink_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_Reception_r16;
	long	*sl_Tx_256QAM_r16;	/* OPTIONAL */
	long	*lowSE_64QAM_MCS_TableSidelink_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_BandSidelinkPC5_r16__ext1 {
		struct NR_BandSidelinkPC5_r16__ext1__csi_ReportSidelink_r16 {
			long	 csi_RS_PortsSidelink_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *csi_ReportSidelink_r16;
		long	*rankTwoReception_r16;	/* OPTIONAL */
		long	*sl_openLoopPC_RSRP_ReportSidelink_r16;	/* OPTIONAL */
		long	*sl_Rx_256QAM_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BandSidelinkPC5_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_harq_RxProcessSidelink_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pscch_RxSidelink_r16_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_extendedCP_RxSidelink_r16_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_Tx_256QAM_r16_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_lowSE_64QAM_MCS_TableSidelink_r16_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_csi_RS_PortsSidelink_r16_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rankTwoReception_r16_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_openLoopPC_RSRP_ReportSidelink_r16_34;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_Rx_256QAM_r16_36;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_BandSidelinkPC5_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BandSidelinkPC5_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BandSidelinkPC5_r16_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_BandSidelinkPC5_r16_H_ */
#include <asn_internal.h>
