/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MAC_MainConfig_NB_r13_H_
#define	_LTE_MAC_MainConfig_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_TimeAlignmentTimer.h"
#include "LTE_PeriodicBSR-Timer-NB-r13.h"
#include "LTE_RetxBSR-Timer-NB-r13.h"
#include <constr_SEQUENCE.h>
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include "LTE_DataInactivityTimer-r14.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13_PR {
	LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13_PR_NOTHING,	/* No components present */
	LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13_PR_release,
	LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13_PR_setup
} LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13_PR;
typedef enum LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup__logicalChannelSR_ProhibitTimer_r13 {
	LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup__logicalChannelSR_ProhibitTimer_r13_pp2	= 0,
	LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup__logicalChannelSR_ProhibitTimer_r13_pp8	= 1,
	LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup__logicalChannelSR_ProhibitTimer_r13_pp32	= 2,
	LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup__logicalChannelSR_ProhibitTimer_r13_pp128	= 3,
	LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup__logicalChannelSR_ProhibitTimer_r13_pp512	= 4,
	LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup__logicalChannelSR_ProhibitTimer_r13_pp1024	= 5,
	LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup__logicalChannelSR_ProhibitTimer_r13_pp2048	= 6,
	LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup__logicalChannelSR_ProhibitTimer_r13_spare	= 7
} e_LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup__logicalChannelSR_ProhibitTimer_r13;
typedef enum LTE_MAC_MainConfig_NB_r13__ext1__rai_Activation_r14 {
	LTE_MAC_MainConfig_NB_r13__ext1__rai_Activation_r14_true	= 0
} e_LTE_MAC_MainConfig_NB_r13__ext1__rai_Activation_r14;
typedef enum LTE_MAC_MainConfig_NB_r13__ext1__dataInactivityTimerConfig_r14_PR {
	LTE_MAC_MainConfig_NB_r13__ext1__dataInactivityTimerConfig_r14_PR_NOTHING,	/* No components present */
	LTE_MAC_MainConfig_NB_r13__ext1__dataInactivityTimerConfig_r14_PR_release,
	LTE_MAC_MainConfig_NB_r13__ext1__dataInactivityTimerConfig_r14_PR_setup
} LTE_MAC_MainConfig_NB_r13__ext1__dataInactivityTimerConfig_r14_PR;
typedef enum LTE_MAC_MainConfig_NB_r13__ext2__drx_Cycle_v1430 {
	LTE_MAC_MainConfig_NB_r13__ext2__drx_Cycle_v1430_sf1280	= 0,
	LTE_MAC_MainConfig_NB_r13__ext2__drx_Cycle_v1430_sf2560	= 1,
	LTE_MAC_MainConfig_NB_r13__ext2__drx_Cycle_v1430_sf5120	= 2,
	LTE_MAC_MainConfig_NB_r13__ext2__drx_Cycle_v1430_sf10240	= 3
} e_LTE_MAC_MainConfig_NB_r13__ext2__drx_Cycle_v1430;
typedef enum LTE_MAC_MainConfig_NB_r13__ext3__ra_CFRA_Config_r14 {
	LTE_MAC_MainConfig_NB_r13__ext3__ra_CFRA_Config_r14_true	= 0
} e_LTE_MAC_MainConfig_NB_r13__ext3__ra_CFRA_Config_r14;

/* Forward declarations */
struct LTE_DRX_Config_NB_r13;

/* LTE_MAC-MainConfig-NB-r13 */
typedef struct LTE_MAC_MainConfig_NB_r13 {
	struct LTE_MAC_MainConfig_NB_r13__ul_SCH_Config_r13 {
		LTE_PeriodicBSR_Timer_NB_r13_t	*periodicBSR_Timer_r13;	/* OPTIONAL */
		LTE_RetxBSR_Timer_NB_r13_t	 retxBSR_Timer_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_SCH_Config_r13;
	struct LTE_DRX_Config_NB_r13	*drx_Config_r13;	/* OPTIONAL */
	LTE_TimeAlignmentTimer_t	 timeAlignmentTimerDedicated_r13;
	struct LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13 {
		LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13_PR present;
		union LTE_MAC_MainConfig_NB_r13__LTE_logicalChannelSR_Config_r13_u {
			NULL_t	 release;
			struct LTE_MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup {
				long	 logicalChannelSR_ProhibitTimer_r13;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *logicalChannelSR_Config_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_MAC_MainConfig_NB_r13__ext1 {
		long	*rai_Activation_r14;	/* OPTIONAL */
		struct LTE_MAC_MainConfig_NB_r13__ext1__dataInactivityTimerConfig_r14 {
			LTE_MAC_MainConfig_NB_r13__ext1__dataInactivityTimerConfig_r14_PR present;
			union LTE_MAC_MainConfig_NB_r13__LTE_ext1__LTE_dataInactivityTimerConfig_r14_u {
				NULL_t	 release;
				struct LTE_MAC_MainConfig_NB_r13__ext1__dataInactivityTimerConfig_r14__setup {
					LTE_DataInactivityTimer_r14_t	 dataInactivityTimer_r14;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *dataInactivityTimerConfig_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_MAC_MainConfig_NB_r13__ext2 {
		long	*drx_Cycle_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_MAC_MainConfig_NB_r13__ext3 {
		long	*ra_CFRA_Config_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MAC_MainConfig_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_logicalChannelSR_ProhibitTimer_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rai_Activation_r14_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drx_Cycle_v1430_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ra_CFRA_Config_r14_34;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MAC_MainConfig_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MAC_MainConfig_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MAC_MainConfig_NB_r13_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_DRX-Config-NB-r13.h"

#endif	/* _LTE_MAC_MainConfig_NB_r13_H_ */
#include <asn_internal.h>
