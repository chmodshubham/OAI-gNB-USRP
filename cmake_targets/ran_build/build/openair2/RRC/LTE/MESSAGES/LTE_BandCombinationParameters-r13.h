/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_BandCombinationParameters_r13_H_
#define	_LTE_BandCombinationParameters_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_SupportedBandwidthCombinationSet-r10.h"
#include "LTE_BandInfoEUTRA.h"
#include <BIT_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_BandCombinationParameters_r13__differentFallbackSupported_r13 {
	LTE_BandCombinationParameters_r13__differentFallbackSupported_r13_true	= 0
} e_LTE_BandCombinationParameters_r13__differentFallbackSupported_r13;
typedef enum LTE_BandCombinationParameters_r13__multipleTimingAdvance_r13 {
	LTE_BandCombinationParameters_r13__multipleTimingAdvance_r13_supported	= 0
} e_LTE_BandCombinationParameters_r13__multipleTimingAdvance_r13;
typedef enum LTE_BandCombinationParameters_r13__simultaneousRx_Tx_r13 {
	LTE_BandCombinationParameters_r13__simultaneousRx_Tx_r13_supported	= 0
} e_LTE_BandCombinationParameters_r13__simultaneousRx_Tx_r13;
typedef enum LTE_BandCombinationParameters_r13__dc_Support_r13__asynchronous_r13 {
	LTE_BandCombinationParameters_r13__dc_Support_r13__asynchronous_r13_supported	= 0
} e_LTE_BandCombinationParameters_r13__dc_Support_r13__asynchronous_r13;
typedef enum LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR {
	LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR_NOTHING,	/* No components present */
	LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR_threeEntries_r13,
	LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR_fourEntries_r13,
	LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR_fiveEntries_r13
} LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR;

/* Forward declarations */
struct LTE_BandParameters_r13;

/* LTE_BandCombinationParameters-r13 */
typedef struct LTE_BandCombinationParameters_r13 {
	long	*differentFallbackSupported_r13;	/* OPTIONAL */
	struct LTE_BandCombinationParameters_r13__bandParameterList_r13 {
		A_SEQUENCE_OF(struct LTE_BandParameters_r13) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} bandParameterList_r13;
	LTE_SupportedBandwidthCombinationSet_r10_t	*supportedBandwidthCombinationSet_r13;	/* OPTIONAL */
	long	*multipleTimingAdvance_r13;	/* OPTIONAL */
	long	*simultaneousRx_Tx_r13;	/* OPTIONAL */
	LTE_BandInfoEUTRA_t	 bandInfoEUTRA_r13;
	struct LTE_BandCombinationParameters_r13__dc_Support_r13 {
		long	*asynchronous_r13;	/* OPTIONAL */
		struct LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13 {
			LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13_PR present;
			union LTE_BandCombinationParameters_r13__LTE_dc_Support_r13__LTE_supportedCellGrouping_r13_u {
				BIT_STRING_t	 threeEntries_r13;
				BIT_STRING_t	 fourEntries_r13;
				BIT_STRING_t	 fiveEntries_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *supportedCellGrouping_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dc_Support_r13;
	BIT_STRING_t	*supportedNAICS_2CRS_AP_r13;	/* OPTIONAL */
	BIT_STRING_t	*commSupportedBandsPerBC_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandCombinationParameters_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_differentFallbackSupported_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_multipleTimingAdvance_r13_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_simultaneousRx_Tx_r13_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_asynchronous_r13_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandCombinationParameters_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandCombinationParameters_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandCombinationParameters_r13_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_BandParameters-r13.h"

#endif	/* _LTE_BandCombinationParameters_r13_H_ */
#include <asn_internal.h>
