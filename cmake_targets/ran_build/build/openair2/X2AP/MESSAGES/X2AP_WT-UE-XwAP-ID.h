/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#ifndef	_X2AP_WT_UE_XwAP_ID_H_
#define	_X2AP_WT_UE_XwAP_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2AP_WT-UE-XwAP-ID */
typedef OCTET_STRING_t	 X2AP_WT_UE_XwAP_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_WT_UE_XwAP_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_WT_UE_XwAP_ID;
asn_struct_free_f X2AP_WT_UE_XwAP_ID_free;
asn_struct_print_f X2AP_WT_UE_XwAP_ID_print;
asn_constr_check_f X2AP_WT_UE_XwAP_ID_constraint;
ber_type_decoder_f X2AP_WT_UE_XwAP_ID_decode_ber;
der_type_encoder_f X2AP_WT_UE_XwAP_ID_encode_der;
xer_type_decoder_f X2AP_WT_UE_XwAP_ID_decode_xer;
xer_type_encoder_f X2AP_WT_UE_XwAP_ID_encode_xer;
per_type_decoder_f X2AP_WT_UE_XwAP_ID_decode_uper;
per_type_encoder_f X2AP_WT_UE_XwAP_ID_encode_uper;
per_type_decoder_f X2AP_WT_UE_XwAP_ID_decode_aper;
per_type_encoder_f X2AP_WT_UE_XwAP_ID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_WT_UE_XwAP_ID_H_ */
#include <asn_internal.h>
