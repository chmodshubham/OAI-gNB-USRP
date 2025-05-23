/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CrossCarrierSchedulingConfig_r10_H_
#define	_LTE_CrossCarrierSchedulingConfig_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include "LTE_ServCellIndex-r10.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CrossCarrierSchedulingConfig_r10__schedulingCellInfo_r10_PR {
	LTE_CrossCarrierSchedulingConfig_r10__schedulingCellInfo_r10_PR_NOTHING,	/* No components present */
	LTE_CrossCarrierSchedulingConfig_r10__schedulingCellInfo_r10_PR_own_r10,
	LTE_CrossCarrierSchedulingConfig_r10__schedulingCellInfo_r10_PR_other_r10
} LTE_CrossCarrierSchedulingConfig_r10__schedulingCellInfo_r10_PR;

/* LTE_CrossCarrierSchedulingConfig-r10 */
typedef struct LTE_CrossCarrierSchedulingConfig_r10 {
	struct LTE_CrossCarrierSchedulingConfig_r10__schedulingCellInfo_r10 {
		LTE_CrossCarrierSchedulingConfig_r10__schedulingCellInfo_r10_PR present;
		union LTE_CrossCarrierSchedulingConfig_r10__LTE_schedulingCellInfo_r10_u {
			struct LTE_CrossCarrierSchedulingConfig_r10__schedulingCellInfo_r10__own_r10 {
				BOOLEAN_t	 cif_Presence_r10;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} own_r10;
			struct LTE_CrossCarrierSchedulingConfig_r10__schedulingCellInfo_r10__other_r10 {
				LTE_ServCellIndex_r10_t	 schedulingCellId_r10;
				long	 pdsch_Start_r10;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} other_r10;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} schedulingCellInfo_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CrossCarrierSchedulingConfig_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CrossCarrierSchedulingConfig_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CrossCarrierSchedulingConfig_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CrossCarrierSchedulingConfig_r10_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CrossCarrierSchedulingConfig_r10_H_ */
#include <asn_internal.h>
