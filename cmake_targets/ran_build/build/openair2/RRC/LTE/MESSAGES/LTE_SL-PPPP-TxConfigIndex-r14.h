/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SL_PPPP_TxConfigIndex_r14_H_
#define	_LTE_SL_PPPP_TxConfigIndex_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SL-Priority-r13.h"
#include <NativeInteger.h>
#include "LTE_Tx-ConfigIndex-r14.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_SL-PPPP-TxConfigIndex-r14 */
typedef struct LTE_SL_PPPP_TxConfigIndex_r14 {
	LTE_SL_Priority_r13_t	 priorityThreshold_r14;
	long	 defaultTxConfigIndex_r14;
	long	 cbr_ConfigIndex_r14;
	struct LTE_SL_PPPP_TxConfigIndex_r14__tx_ConfigIndexList_r14 {
		A_SEQUENCE_OF(LTE_Tx_ConfigIndex_r14_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tx_ConfigIndexList_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_PPPP_TxConfigIndex_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_PPPP_TxConfigIndex_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_PPPP_TxConfigIndex_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_PPPP_TxConfigIndex_r14_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_PPPP_TxConfigIndex_r14_H_ */
#include <asn_internal.h>
