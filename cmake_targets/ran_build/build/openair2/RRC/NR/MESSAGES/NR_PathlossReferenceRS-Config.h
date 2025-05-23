/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PathlossReferenceRS_Config_H_
#define	_NR_PathlossReferenceRS_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_SSB-Index.h"
#include "NR_NZP-CSI-RS-ResourceId.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PathlossReferenceRS_Config_PR {
	NR_PathlossReferenceRS_Config_PR_NOTHING,	/* No components present */
	NR_PathlossReferenceRS_Config_PR_ssb_Index,
	NR_PathlossReferenceRS_Config_PR_csi_RS_Index
} NR_PathlossReferenceRS_Config_PR;

/* NR_PathlossReferenceRS-Config */
typedef struct NR_PathlossReferenceRS_Config {
	NR_PathlossReferenceRS_Config_PR present;
	union NR_PathlossReferenceRS_Config_u {
		NR_SSB_Index_t	 ssb_Index;
		NR_NZP_CSI_RS_ResourceId_t	 csi_RS_Index;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PathlossReferenceRS_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PathlossReferenceRS_Config;
extern asn_CHOICE_specifics_t asn_SPC_NR_PathlossReferenceRS_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PathlossReferenceRS_Config_1[2];
extern asn_per_constraints_t asn_PER_type_NR_PathlossReferenceRS_Config_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PathlossReferenceRS_Config_H_ */
#include <asn_internal.h>
