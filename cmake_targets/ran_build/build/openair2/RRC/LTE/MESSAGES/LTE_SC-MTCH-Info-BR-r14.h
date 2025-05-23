/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SC_MTCH_Info_BR_r14_H_
#define	_LTE_SC_MTCH_Info_BR_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueEUTRA-r9.h"
#include "LTE_MBMSSessionInfo-r13.h"
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SC_MTCH_Info_BR_r14__mpdcch_NumRepetition_SC_MTCH_r14 {
	LTE_SC_MTCH_Info_BR_r14__mpdcch_NumRepetition_SC_MTCH_r14_r1	= 0,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_NumRepetition_SC_MTCH_r14_r2	= 1,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_NumRepetition_SC_MTCH_r14_r4	= 2,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_NumRepetition_SC_MTCH_r14_r8	= 3,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_NumRepetition_SC_MTCH_r14_r16	= 4,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_NumRepetition_SC_MTCH_r14_r32	= 5,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_NumRepetition_SC_MTCH_r14_r64	= 6,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_NumRepetition_SC_MTCH_r14_r128	= 7,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_NumRepetition_SC_MTCH_r14_r256	= 8
} e_LTE_SC_MTCH_Info_BR_r14__mpdcch_NumRepetition_SC_MTCH_r14;
typedef enum LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14_PR {
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14_PR_NOTHING,	/* No components present */
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14_PR_fdd_r14,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14_PR_tdd_r14
} LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14_PR;
typedef enum LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__fdd_r14 {
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__fdd_r14_v1	= 0,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__fdd_r14_v1dot5	= 1,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__fdd_r14_v2	= 2,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__fdd_r14_v2dot5	= 3,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__fdd_r14_v4	= 4,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__fdd_r14_v5	= 5,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__fdd_r14_v8	= 6,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__fdd_r14_v10	= 7
} e_LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__fdd_r14;
typedef enum LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__tdd_r14 {
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__tdd_r14_v1	= 0,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__tdd_r14_v2	= 1,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__tdd_r14_v4	= 2,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__tdd_r14_v5	= 3,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__tdd_r14_v8	= 4,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__tdd_r14_v10	= 5,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__tdd_r14_v20	= 6
} e_LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14__tdd_r14;
typedef enum LTE_SC_MTCH_Info_BR_r14__mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14 {
	LTE_SC_MTCH_Info_BR_r14__mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_on	= 0,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_off	= 1
} e_LTE_SC_MTCH_Info_BR_r14__mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14;
typedef enum LTE_SC_MTCH_Info_BR_r14__mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14 {
	LTE_SC_MTCH_Info_BR_r14__mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_ce_ModeA	= 0,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_ce_ModeB	= 1
} e_LTE_SC_MTCH_Info_BR_r14__mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14;
typedef enum LTE_SC_MTCH_Info_BR_r14__mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14 {
	LTE_SC_MTCH_Info_BR_r14__mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_bw1dot4	= 0,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_bw5	= 1
} e_LTE_SC_MTCH_Info_BR_r14__mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14;
typedef enum LTE_SC_MTCH_Info_BR_r14__mpdcch_Offset_SC_MTCH_r14 {
	LTE_SC_MTCH_Info_BR_r14__mpdcch_Offset_SC_MTCH_r14_zero	= 0,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_Offset_SC_MTCH_r14_oneEighth	= 1,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_Offset_SC_MTCH_r14_oneQuarter	= 2,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_Offset_SC_MTCH_r14_threeEighth	= 3,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_Offset_SC_MTCH_r14_oneHalf	= 4,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_Offset_SC_MTCH_r14_fiveEighth	= 5,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_Offset_SC_MTCH_r14_threeQuarter	= 6,
	LTE_SC_MTCH_Info_BR_r14__mpdcch_Offset_SC_MTCH_r14_sevenEighth	= 7
} e_LTE_SC_MTCH_Info_BR_r14__mpdcch_Offset_SC_MTCH_r14;
typedef enum LTE_SC_MTCH_Info_BR_r14__p_a_r14 {
	LTE_SC_MTCH_Info_BR_r14__p_a_r14_dB_6	= 0,
	LTE_SC_MTCH_Info_BR_r14__p_a_r14_dB_4dot77	= 1,
	LTE_SC_MTCH_Info_BR_r14__p_a_r14_dB_3	= 2,
	LTE_SC_MTCH_Info_BR_r14__p_a_r14_dB_1dot77	= 3,
	LTE_SC_MTCH_Info_BR_r14__p_a_r14_dB0	= 4,
	LTE_SC_MTCH_Info_BR_r14__p_a_r14_dB1	= 5,
	LTE_SC_MTCH_Info_BR_r14__p_a_r14_dB2	= 6,
	LTE_SC_MTCH_Info_BR_r14__p_a_r14_dB3	= 7
} e_LTE_SC_MTCH_Info_BR_r14__p_a_r14;

/* Forward declarations */
struct LTE_SC_MTCH_SchedulingInfo_BR_r14;

/* LTE_SC-MTCH-Info-BR-r14 */
typedef struct LTE_SC_MTCH_Info_BR_r14 {
	LTE_ARFCN_ValueEUTRA_r9_t	 sc_mtch_CarrierFreq_r14;
	LTE_MBMSSessionInfo_r13_t	 mbmsSessionInfo_r14;
	BIT_STRING_t	 g_RNTI_r14;
	struct LTE_SC_MTCH_SchedulingInfo_BR_r14	*sc_mtch_schedulingInfo_r14;	/* OPTIONAL */
	BIT_STRING_t	*sc_mtch_neighbourCell_r14;	/* OPTIONAL */
	long	 mpdcch_Narrowband_SC_MTCH_r14;
	long	 mpdcch_NumRepetition_SC_MTCH_r14;
	struct LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14 {
		LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14_PR present;
		union LTE_SC_MTCH_Info_BR_r14__LTE_mpdcch_StartSF_SC_MTCH_r14_u {
			long	 fdd_r14;
			long	 tdd_r14;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mpdcch_StartSF_SC_MTCH_r14;
	long	 mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14;
	long	 mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14;
	long	 mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14;
	long	 mpdcch_Offset_SC_MTCH_r14;
	long	*p_a_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SC_MTCH_Info_BR_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_NumRepetition_SC_MTCH_r14_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_fdd_r14_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_tdd_r14_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_36;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_42;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_Offset_SC_MTCH_r14_45;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_p_a_r14_54;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SC_MTCH_Info_BR_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SC_MTCH_Info_BR_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SC_MTCH_Info_BR_r14_1[13];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SC-MTCH-SchedulingInfo-BR-r14.h"

#endif	/* _LTE_SC_MTCH_Info_BR_r14_H_ */
#include <asn_internal.h>
