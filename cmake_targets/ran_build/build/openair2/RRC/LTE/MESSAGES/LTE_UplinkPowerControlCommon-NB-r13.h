/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UplinkPowerControlCommon_NB_r13_H_
#define	_LTE_UplinkPowerControlCommon_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UplinkPowerControlCommon_NB_r13__alpha_r13 {
	LTE_UplinkPowerControlCommon_NB_r13__alpha_r13_al0	= 0,
	LTE_UplinkPowerControlCommon_NB_r13__alpha_r13_al04	= 1,
	LTE_UplinkPowerControlCommon_NB_r13__alpha_r13_al05	= 2,
	LTE_UplinkPowerControlCommon_NB_r13__alpha_r13_al06	= 3,
	LTE_UplinkPowerControlCommon_NB_r13__alpha_r13_al07	= 4,
	LTE_UplinkPowerControlCommon_NB_r13__alpha_r13_al08	= 5,
	LTE_UplinkPowerControlCommon_NB_r13__alpha_r13_al09	= 6,
	LTE_UplinkPowerControlCommon_NB_r13__alpha_r13_al1	= 7
} e_LTE_UplinkPowerControlCommon_NB_r13__alpha_r13;

/* LTE_UplinkPowerControlCommon-NB-r13 */
typedef struct LTE_UplinkPowerControlCommon_NB_r13 {
	long	 p0_NominalNPUSCH_r13;
	long	 alpha_r13;
	long	 deltaPreambleMsg3_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UplinkPowerControlCommon_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_alpha_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UplinkPowerControlCommon_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UplinkPowerControlCommon_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UplinkPowerControlCommon_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UplinkPowerControlCommon_NB_r13_H_ */
#include <asn_internal.h>
