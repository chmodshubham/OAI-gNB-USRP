/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_DummyG_H_
#define	_NR_DummyG_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DummyG__maxNumberSSB_CSI_RS_ResourceOneTx {
	NR_DummyG__maxNumberSSB_CSI_RS_ResourceOneTx_n8	= 0,
	NR_DummyG__maxNumberSSB_CSI_RS_ResourceOneTx_n16	= 1,
	NR_DummyG__maxNumberSSB_CSI_RS_ResourceOneTx_n32	= 2,
	NR_DummyG__maxNumberSSB_CSI_RS_ResourceOneTx_n64	= 3
} e_NR_DummyG__maxNumberSSB_CSI_RS_ResourceOneTx;
typedef enum NR_DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx {
	NR_DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx_n0	= 0,
	NR_DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx_n4	= 1,
	NR_DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx_n8	= 2,
	NR_DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx_n16	= 3,
	NR_DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx_n32	= 4,
	NR_DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx_n64	= 5
} e_NR_DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx;
typedef enum NR_DummyG__supportedCSI_RS_Density {
	NR_DummyG__supportedCSI_RS_Density_one	= 0,
	NR_DummyG__supportedCSI_RS_Density_three	= 1,
	NR_DummyG__supportedCSI_RS_Density_oneAndThree	= 2
} e_NR_DummyG__supportedCSI_RS_Density;

/* NR_DummyG */
typedef struct NR_DummyG {
	long	 maxNumberSSB_CSI_RS_ResourceOneTx;
	long	 maxNumberSSB_CSI_RS_ResourceTwoTx;
	long	 supportedCSI_RS_Density;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DummyG_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberSSB_CSI_RS_ResourceOneTx_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberSSB_CSI_RS_ResourceTwoTx_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_supportedCSI_RS_Density_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DummyG;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DummyG_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DummyG_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DummyG_H_ */
#include <asn_internal.h>
