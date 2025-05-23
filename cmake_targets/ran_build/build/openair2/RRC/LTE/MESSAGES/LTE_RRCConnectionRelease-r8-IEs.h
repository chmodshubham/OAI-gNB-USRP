/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RRCConnectionRelease_r8_IEs_H_
#define	_LTE_RRCConnectionRelease_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ReleaseCause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_RedirectedCarrierInfo;
struct LTE_IdleModeMobilityControlInfo;
struct LTE_RRCConnectionRelease_v890_IEs;

/* LTE_RRCConnectionRelease-r8-IEs */
typedef struct LTE_RRCConnectionRelease_r8_IEs {
	LTE_ReleaseCause_t	 releaseCause;
	struct LTE_RedirectedCarrierInfo	*redirectedCarrierInfo;	/* OPTIONAL */
	struct LTE_IdleModeMobilityControlInfo	*idleModeMobilityControlInfo;	/* OPTIONAL */
	struct LTE_RRCConnectionRelease_v890_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionRelease_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionRelease_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionRelease_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionRelease_r8_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RedirectedCarrierInfo.h"
#include "LTE_IdleModeMobilityControlInfo.h"
#include "LTE_RRCConnectionRelease-v890-IEs.h"

#endif	/* _LTE_RRCConnectionRelease_r8_IEs_H_ */
#include <asn_internal.h>
