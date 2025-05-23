/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SL_CommConfig_r12_H_
#define	_LTE_SL_CommConfig_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "LTE_C-RNTI.h"
#include "LTE_MAC-MainConfigSL-r12.h"
#include "LTE_SL-CommResourcePool-r12.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include <BOOLEAN.h>
#include "LTE_LogicalChGroupInfoList-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_CommConfig_r12__commTxResources_r12_PR {
	LTE_SL_CommConfig_r12__commTxResources_r12_PR_NOTHING,	/* No components present */
	LTE_SL_CommConfig_r12__commTxResources_r12_PR_release,
	LTE_SL_CommConfig_r12__commTxResources_r12_PR_setup
} LTE_SL_CommConfig_r12__commTxResources_r12_PR;
typedef enum LTE_SL_CommConfig_r12__commTxResources_r12__setup_PR {
	LTE_SL_CommConfig_r12__commTxResources_r12__setup_PR_NOTHING,	/* No components present */
	LTE_SL_CommConfig_r12__commTxResources_r12__setup_PR_scheduled_r12,
	LTE_SL_CommConfig_r12__commTxResources_r12__setup_PR_ue_Selected_r12
} LTE_SL_CommConfig_r12__commTxResources_r12__setup_PR;
typedef enum LTE_SL_CommConfig_r12__ext1__commTxResources_v1310_PR {
	LTE_SL_CommConfig_r12__ext1__commTxResources_v1310_PR_NOTHING,	/* No components present */
	LTE_SL_CommConfig_r12__ext1__commTxResources_v1310_PR_release,
	LTE_SL_CommConfig_r12__ext1__commTxResources_v1310_PR_setup
} LTE_SL_CommConfig_r12__ext1__commTxResources_v1310_PR;
typedef enum LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup_PR {
	LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup_PR_NOTHING,	/* No components present */
	LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup_PR_scheduled_v1310,
	LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup_PR_ue_Selected_v1310
} LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup_PR;

/* Forward declarations */
struct LTE_SL_TxPoolToReleaseList_r12;
struct LTE_SL_CommTxPoolToAddModList_r12;
struct LTE_SL_TxPoolToReleaseListExt_r13;
struct LTE_SL_CommTxPoolToAddModListExt_r13;

/* LTE_SL-CommConfig-r12 */
typedef struct LTE_SL_CommConfig_r12 {
	struct LTE_SL_CommConfig_r12__commTxResources_r12 {
		LTE_SL_CommConfig_r12__commTxResources_r12_PR present;
		union LTE_SL_CommConfig_r12__LTE_commTxResources_r12_u {
			NULL_t	 release;
			struct LTE_SL_CommConfig_r12__commTxResources_r12__setup {
				LTE_SL_CommConfig_r12__commTxResources_r12__setup_PR present;
				union LTE_SL_CommConfig_r12__LTE_commTxResources_r12__LTE_setup_u {
					struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__scheduled_r12 {
						LTE_C_RNTI_t	 sl_RNTI_r12;
						LTE_MAC_MainConfigSL_r12_t	 mac_MainConfig_r12;
						LTE_SL_CommResourcePool_r12_t	 sc_CommTxConfig_r12;
						long	*mcs_r12;	/* OPTIONAL */
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} scheduled_r12;
					struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__ue_Selected_r12 {
						struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__ue_Selected_r12__commTxPoolNormalDedicated_r12 {
							struct LTE_SL_TxPoolToReleaseList_r12	*poolToReleaseList_r12;	/* OPTIONAL */
							struct LTE_SL_CommTxPoolToAddModList_r12	*poolToAddModList_r12;	/* OPTIONAL */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} commTxPoolNormalDedicated_r12;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} ue_Selected_r12;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *commTxResources_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SL_CommConfig_r12__ext1 {
		struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310 {
			LTE_SL_CommConfig_r12__ext1__commTxResources_v1310_PR present;
			union LTE_SL_CommConfig_r12__LTE_ext1__LTE_commTxResources_v1310_u {
				NULL_t	 release;
				struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup {
					LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup_PR present;
					union LTE_SL_CommConfig_r12__LTE_ext1__LTE_commTxResources_v1310__LTE_setup_u {
						struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__scheduled_v1310 {
							LTE_LogicalChGroupInfoList_r13_t	 logicalChGroupInfoList_r13;
							BOOLEAN_t	 multipleTx_r13;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} scheduled_v1310;
						struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__ue_Selected_v1310 {
							struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__ue_Selected_v1310__commTxPoolNormalDedicatedExt_r13 {
								struct LTE_SL_TxPoolToReleaseListExt_r13	*poolToReleaseListExt_r13;	/* OPTIONAL */
								struct LTE_SL_CommTxPoolToAddModListExt_r13	*poolToAddModListExt_r13;	/* OPTIONAL */
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} commTxPoolNormalDedicatedExt_r13;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} ue_Selected_v1310;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *commTxResources_v1310;
		BOOLEAN_t	*commTxAllowRelayDedicated_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_CommConfig_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_CommConfig_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_CommConfig_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_CommConfig_r12_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SL-TxPoolToReleaseList-r12.h"
#include "LTE_SL-CommTxPoolToAddModList-r12.h"
#include "LTE_SL-TxPoolToReleaseListExt-r13.h"
#include "LTE_SL-CommTxPoolToAddModListExt-r13.h"

#endif	/* _LTE_SL_CommConfig_r12_H_ */
#include <asn_internal.h>
