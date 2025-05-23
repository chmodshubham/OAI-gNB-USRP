/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UE_EUTRA_Capability_v13e0_IEs_H_
#define	_LTE_UE_EUTRA_Capability_v13e0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PhyLayerParameters-v13e0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_UE-EUTRA-Capability-v13e0-IEs */
typedef struct LTE_UE_EUTRA_Capability_v13e0_IEs {
	LTE_PhyLayerParameters_v13e0_t	 phyLayerParameters_v13e0;
	struct LTE_UE_EUTRA_Capability_v13e0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_Capability_v13e0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v13e0_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UE_EUTRA_Capability_v13e0_IEs_H_ */
#include <asn_internal.h>
