/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SRS_SpatialRelationInfoPos_r16_H_
#define	_NR_SRS_SpatialRelationInfoPos_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ServCellIndex.h"
#include "NR_SSB-Index.h"
#include "NR_NZP-CSI-RS-ResourceId.h"
#include "NR_BWP-Id.h"
#include "NR_SRS-ResourceId.h"
#include "NR_SRS-PosResourceId-r16.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SRS_SpatialRelationInfoPos_r16_PR {
	NR_SRS_SpatialRelationInfoPos_r16_PR_NOTHING,	/* No components present */
	NR_SRS_SpatialRelationInfoPos_r16_PR_servingRS_r16,
	NR_SRS_SpatialRelationInfoPos_r16_PR_ssb_Ncell_r16,
	NR_SRS_SpatialRelationInfoPos_r16_PR_dl_PRS_r16
} NR_SRS_SpatialRelationInfoPos_r16_PR;
typedef enum NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16_PR {
	NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16_PR_NOTHING,	/* No components present */
	NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16_PR_ssb_IndexServing_r16,
	NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16_PR_csi_RS_IndexServing_r16,
	NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16_PR_srs_SpatialRelation_r16
} NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16_PR;
typedef enum NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16_PR {
	NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16_PR_NOTHING,	/* No components present */
	NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16_PR_srs_ResourceId_r16,
	NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16_PR_srs_PosResourceId_r16
} NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16_PR;

/* Forward declarations */
struct NR_SSB_InfoNcell_r16;
struct NR_DL_PRS_Info_r16;

/* NR_SRS-SpatialRelationInfoPos-r16 */
typedef struct NR_SRS_SpatialRelationInfoPos_r16 {
	NR_SRS_SpatialRelationInfoPos_r16_PR present;
	union NR_SRS_SpatialRelationInfoPos_r16_u {
		struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16 {
			NR_ServCellIndex_t	*servingCellId;	/* OPTIONAL */
			struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16 {
				NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16_PR present;
				union NR_SRS_SpatialRelationInfoPos_r16__NR_servingRS_r16__NR_referenceSignal_r16_u {
					NR_SSB_Index_t	 ssb_IndexServing_r16;
					NR_NZP_CSI_RS_ResourceId_t	 csi_RS_IndexServing_r16;
					struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16 {
						struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16 {
							NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16_PR present;
							union NR_SRS_SpatialRelationInfoPos_r16__NR_servingRS_r16__NR_referenceSignal_r16__NR_srs_SpatialRelation_r16__NR_resourceSelection_r16_u {
								NR_SRS_ResourceId_t	 srs_ResourceId_r16;
								NR_SRS_PosResourceId_r16_t	 srs_PosResourceId_r16;
							} choice;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} resourceSelection_r16;
						NR_BWP_Id_t	 uplinkBWP_r16;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *srs_SpatialRelation_r16;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} referenceSignal_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *servingRS_r16;
		struct NR_SSB_InfoNcell_r16	*ssb_Ncell_r16;
		struct NR_DL_PRS_Info_r16	*dl_PRS_r16;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SRS_SpatialRelationInfoPos_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SRS_SpatialRelationInfoPos_r16;
extern asn_CHOICE_specifics_t asn_SPC_NR_SRS_SpatialRelationInfoPos_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SRS_SpatialRelationInfoPos_r16_1[3];
extern asn_per_constraints_t asn_PER_type_NR_SRS_SpatialRelationInfoPos_r16_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SSB-InfoNcell-r16.h"
#include "NR_DL-PRS-Info-r16.h"

#endif	/* _NR_SRS_SpatialRelationInfoPos_r16_H_ */
#include <asn_internal.h>
