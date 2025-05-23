/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_NR_DL_PRS_AssistanceDataPerTRP_r16_H_
#define	_LPP_NR_DL_PRS_AssistanceDataPerTRP_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LPP_NR-PhysCellID-r16.h"
#include "LPP_ARFCN-ValueNR-r15.h"
#include "LPP_NR-DL-PRS-SFN0-Offset-r16.h"
#include "LPP_NR-DL-PRS-Info-r16.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_NR_DL_PRS_AssistanceDataPerTRP_r16__ext1__prs_OnlyTP_r16 {
	LPP_NR_DL_PRS_AssistanceDataPerTRP_r16__ext1__prs_OnlyTP_r16_true	= 0
} e_LPP_NR_DL_PRS_AssistanceDataPerTRP_r16__ext1__prs_OnlyTP_r16;

/* Forward declarations */
struct LPP_NCGI_r15;

/* LPP_NR-DL-PRS-AssistanceDataPerTRP-r16 */
typedef struct LPP_NR_DL_PRS_AssistanceDataPerTRP_r16 {
	long	 dl_PRS_ID_r16;
	LPP_NR_PhysCellID_r16_t	*nr_PhysCellID_r16;	/* OPTIONAL */
	struct LPP_NCGI_r15	*nr_CellGlobalID_r16;	/* OPTIONAL */
	LPP_ARFCN_ValueNR_r15_t	*nr_ARFCN_r16;	/* OPTIONAL */
	LPP_NR_DL_PRS_SFN0_Offset_r16_t	 nr_DL_PRS_SFN0_Offset_r16;
	long	 nr_DL_PRS_ExpectedRSTD_r16;
	long	 nr_DL_PRS_ExpectedRSTD_Uncertainty_r16;
	LPP_NR_DL_PRS_Info_r16_t	 nr_DL_PRS_Info_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_NR_DL_PRS_AssistanceDataPerTRP_r16__ext1 {
		long	*prs_OnlyTP_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_NR_DL_PRS_AssistanceDataPerTRP_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_prs_OnlyTP_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_NR_DL_PRS_AssistanceDataPerTRP_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_NR_DL_PRS_AssistanceDataPerTRP_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_NR_DL_PRS_AssistanceDataPerTRP_r16_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_NR_DL_PRS_AssistanceDataPerTRP_r16_H_ */
#include <asn_internal.h>
