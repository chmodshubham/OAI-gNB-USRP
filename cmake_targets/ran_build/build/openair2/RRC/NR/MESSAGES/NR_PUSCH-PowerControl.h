/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PUSCH_PowerControl_H_
#define	_NR_PUSCH_PowerControl_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "NR_Alpha.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "NR_PUSCH-PathlossReferenceRS-Id.h"
#include "NR_SRI-PUSCH-PowerControlId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PUSCH_PowerControl__tpc_Accumulation {
	NR_PUSCH_PowerControl__tpc_Accumulation_disabled	= 0
} e_NR_PUSCH_PowerControl__tpc_Accumulation;
typedef enum NR_PUSCH_PowerControl__twoPUSCH_PC_AdjustmentStates {
	NR_PUSCH_PowerControl__twoPUSCH_PC_AdjustmentStates_twoStates	= 0
} e_NR_PUSCH_PowerControl__twoPUSCH_PC_AdjustmentStates;
typedef enum NR_PUSCH_PowerControl__deltaMCS {
	NR_PUSCH_PowerControl__deltaMCS_enabled	= 0
} e_NR_PUSCH_PowerControl__deltaMCS;

/* Forward declarations */
struct NR_P0_PUSCH_AlphaSet;
struct NR_PUSCH_PathlossReferenceRS;
struct NR_SRI_PUSCH_PowerControl;

/* NR_PUSCH-PowerControl */
typedef struct NR_PUSCH_PowerControl {
	long	*tpc_Accumulation;	/* OPTIONAL */
	NR_Alpha_t	*msg3_Alpha;	/* OPTIONAL */
	long	*p0_NominalWithoutGrant;	/* OPTIONAL */
	struct NR_PUSCH_PowerControl__p0_AlphaSets {
		A_SEQUENCE_OF(struct NR_P0_PUSCH_AlphaSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *p0_AlphaSets;
	struct NR_PUSCH_PowerControl__pathlossReferenceRSToAddModList {
		A_SEQUENCE_OF(struct NR_PUSCH_PathlossReferenceRS) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pathlossReferenceRSToAddModList;
	struct NR_PUSCH_PowerControl__pathlossReferenceRSToReleaseList {
		A_SEQUENCE_OF(NR_PUSCH_PathlossReferenceRS_Id_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pathlossReferenceRSToReleaseList;
	long	*twoPUSCH_PC_AdjustmentStates;	/* OPTIONAL */
	long	*deltaMCS;	/* OPTIONAL */
	struct NR_PUSCH_PowerControl__sri_PUSCH_MappingToAddModList {
		A_SEQUENCE_OF(struct NR_SRI_PUSCH_PowerControl) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sri_PUSCH_MappingToAddModList;
	struct NR_PUSCH_PowerControl__sri_PUSCH_MappingToReleaseList {
		A_SEQUENCE_OF(NR_SRI_PUSCH_PowerControlId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sri_PUSCH_MappingToReleaseList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PUSCH_PowerControl_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_tpc_Accumulation_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_twoPUSCH_PC_AdjustmentStates_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_deltaMCS_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PUSCH_PowerControl;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PUSCH_PowerControl_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PUSCH_PowerControl_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_P0-PUSCH-AlphaSet.h"
#include "NR_PUSCH-PathlossReferenceRS.h"
#include "NR_SRI-PUSCH-PowerControl.h"

#endif	/* _NR_PUSCH_PowerControl_H_ */
#include <asn_internal.h>
