/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MeasResultEUTRA_H_
#define	_LTE_MeasResultEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PhysCellId.h"
#include "LTE_CellGlobalIdEUTRA.h"
#include "LTE_TrackingAreaCode.h"
#include <constr_SEQUENCE.h>
#include "LTE_RSRP-Range.h"
#include "LTE_RSRQ-Range.h"
#include <NativeEnumerated.h>
#include "LTE_RSRQ-Range-v1250.h"
#include "LTE_RS-SINR-Range-r13.h"
#include "LTE_FreqBandIndicator-r11.h"
#include "LTE_RSRP-Range-v1360.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasResultEUTRA__measResult__ext2__primaryPLMN_Suitable_r12 {
	LTE_MeasResultEUTRA__measResult__ext2__primaryPLMN_Suitable_r12_true	= 0
} e_LTE_MeasResultEUTRA__measResult__ext2__primaryPLMN_Suitable_r12;
typedef enum LTE_MeasResultEUTRA__measResult__ext3__cgi_Info_v1310__freqBandIndicatorPriority_r13 {
	LTE_MeasResultEUTRA__measResult__ext3__cgi_Info_v1310__freqBandIndicatorPriority_r13_true	= 0
} e_LTE_MeasResultEUTRA__measResult__ext3__cgi_Info_v1310__freqBandIndicatorPriority_r13;

/* Forward declarations */
struct LTE_PLMN_IdentityList2;
struct LTE_AdditionalSI_Info_r9;
struct LTE_MultiBandInfoList_r11;
struct LTE_CellAccessRelatedInfo_5GC_r15;

/* LTE_MeasResultEUTRA */
typedef struct LTE_MeasResultEUTRA {
	LTE_PhysCellId_t	 physCellId;
	struct LTE_MeasResultEUTRA__cgi_Info {
		LTE_CellGlobalIdEUTRA_t	 cellGlobalId;
		LTE_TrackingAreaCode_t	 trackingAreaCode;
		struct LTE_PLMN_IdentityList2	*plmn_IdentityList;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cgi_Info;
	struct LTE_MeasResultEUTRA__measResult {
		LTE_RSRP_Range_t	*rsrpResult;	/* OPTIONAL */
		LTE_RSRQ_Range_t	*rsrqResult;	/* OPTIONAL */
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct LTE_MeasResultEUTRA__measResult__ext1 {
			struct LTE_AdditionalSI_Info_r9	*additionalSI_Info_r9;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext1;
		struct LTE_MeasResultEUTRA__measResult__ext2 {
			long	*primaryPLMN_Suitable_r12;	/* OPTIONAL */
			LTE_RSRQ_Range_v1250_t	*measResult_v1250;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext2;
		struct LTE_MeasResultEUTRA__measResult__ext3 {
			LTE_RS_SINR_Range_r13_t	*rs_sinr_Result_r13;	/* OPTIONAL */
			struct LTE_MeasResultEUTRA__measResult__ext3__cgi_Info_v1310 {
				LTE_FreqBandIndicator_r11_t	*freqBandIndicator_r13;	/* OPTIONAL */
				struct LTE_MultiBandInfoList_r11	*multiBandInfoList_r13;	/* OPTIONAL */
				long	*freqBandIndicatorPriority_r13;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *cgi_Info_v1310;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext3;
		struct LTE_MeasResultEUTRA__measResult__ext4 {
			LTE_RSRP_Range_v1360_t	*measResult_v1360;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext4;
		struct LTE_MeasResultEUTRA__measResult__ext5 {
			struct LTE_MeasResultEUTRA__measResult__ext5__cgi_Info_5GC_r15 {
				A_SEQUENCE_OF(struct LTE_CellAccessRelatedInfo_5GC_r15) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *cgi_Info_5GC_r15;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext5;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasResultEUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_primaryPLMN_Suitable_r12_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_freqBandIndicatorPriority_r13_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasResultEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResultEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasResultEUTRA_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PLMN-IdentityList2.h"
#include "LTE_AdditionalSI-Info-r9.h"
#include "LTE_MultiBandInfoList-r11.h"
#include "LTE_CellAccessRelatedInfo-5GC-r15.h"

#endif	/* _LTE_MeasResultEUTRA_H_ */
#include <asn_internal.h>
