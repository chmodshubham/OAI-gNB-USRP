/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_BandParameters_v1610_H_
#define	_NR_BandParameters_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BandParameters_v1610__srs_TxSwitch_v1610__supportedSRS_TxPortSwitch_v1610 {
	NR_BandParameters_v1610__srs_TxSwitch_v1610__supportedSRS_TxPortSwitch_v1610_t1r1_t1r2	= 0,
	NR_BandParameters_v1610__srs_TxSwitch_v1610__supportedSRS_TxPortSwitch_v1610_t1r1_t1r2_t1r4	= 1,
	NR_BandParameters_v1610__srs_TxSwitch_v1610__supportedSRS_TxPortSwitch_v1610_t1r1_t1r2_t2r2_t2r4	= 2,
	NR_BandParameters_v1610__srs_TxSwitch_v1610__supportedSRS_TxPortSwitch_v1610_t1r1_t1r2_t2r2_t1r4_t2r4	= 3,
	NR_BandParameters_v1610__srs_TxSwitch_v1610__supportedSRS_TxPortSwitch_v1610_t1r1_t2r2	= 4,
	NR_BandParameters_v1610__srs_TxSwitch_v1610__supportedSRS_TxPortSwitch_v1610_t1r1_t2r2_t4r4	= 5
} e_NR_BandParameters_v1610__srs_TxSwitch_v1610__supportedSRS_TxPortSwitch_v1610;

/* NR_BandParameters-v1610 */
typedef struct NR_BandParameters_v1610 {
	struct NR_BandParameters_v1610__srs_TxSwitch_v1610 {
		long	 supportedSRS_TxPortSwitch_v1610;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_TxSwitch_v1610;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BandParameters_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_supportedSRS_TxPortSwitch_v1610_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_BandParameters_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BandParameters_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BandParameters_v1610_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_BandParameters_v1610_H_ */
#include <asn_internal.h>
