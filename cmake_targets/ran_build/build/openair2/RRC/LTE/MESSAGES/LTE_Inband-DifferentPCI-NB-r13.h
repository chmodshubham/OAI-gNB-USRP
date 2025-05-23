/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_Inband_DifferentPCI_NB_r13_H_
#define	_LTE_Inband_DifferentPCI_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_ChannelRasterOffset-NB-r13.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_Inband_DifferentPCI_NB_r13__eutra_NumCRS_Ports_r13 {
	LTE_Inband_DifferentPCI_NB_r13__eutra_NumCRS_Ports_r13_same	= 0,
	LTE_Inband_DifferentPCI_NB_r13__eutra_NumCRS_Ports_r13_four	= 1
} e_LTE_Inband_DifferentPCI_NB_r13__eutra_NumCRS_Ports_r13;

/* LTE_Inband-DifferentPCI-NB-r13 */
typedef struct LTE_Inband_DifferentPCI_NB_r13 {
	long	 eutra_NumCRS_Ports_r13;
	LTE_ChannelRasterOffset_NB_r13_t	 rasterOffset_r13;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_Inband_DifferentPCI_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_eutra_NumCRS_Ports_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_Inband_DifferentPCI_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_Inband_DifferentPCI_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_Inband_DifferentPCI_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_Inband_DifferentPCI_NB_r13_H_ */
#include <asn_internal.h>
