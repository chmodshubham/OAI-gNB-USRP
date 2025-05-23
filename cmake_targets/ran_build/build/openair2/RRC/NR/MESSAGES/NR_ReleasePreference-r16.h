/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_ReleasePreference_r16_H_
#define	_NR_ReleasePreference_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_ReleasePreference_r16__preferredRRC_State_r16 {
	NR_ReleasePreference_r16__preferredRRC_State_r16_idle	= 0,
	NR_ReleasePreference_r16__preferredRRC_State_r16_inactive	= 1,
	NR_ReleasePreference_r16__preferredRRC_State_r16_connected	= 2,
	NR_ReleasePreference_r16__preferredRRC_State_r16_outOfConnected	= 3
} e_NR_ReleasePreference_r16__preferredRRC_State_r16;

/* NR_ReleasePreference-r16 */
typedef struct NR_ReleasePreference_r16 {
	long	 preferredRRC_State_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ReleasePreference_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_preferredRRC_State_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_ReleasePreference_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ReleasePreference_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ReleasePreference_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_ReleasePreference_r16_H_ */
#include <asn_internal.h>
