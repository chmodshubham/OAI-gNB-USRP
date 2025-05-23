/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_NR_RS_Type_H_
#define	_NR_NR_RS_Type_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_NR_RS_Type {
	NR_NR_RS_Type_ssb	= 0,
	NR_NR_RS_Type_csi_rs	= 1
} e_NR_NR_RS_Type;

/* NR_NR-RS-Type */
typedef long	 NR_NR_RS_Type_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_NR_RS_Type_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_NR_RS_Type;
extern const asn_INTEGER_specifics_t asn_SPC_NR_NR_RS_Type_specs_1;
asn_struct_free_f NR_NR_RS_Type_free;
asn_struct_print_f NR_NR_RS_Type_print;
asn_constr_check_f NR_NR_RS_Type_constraint;
ber_type_decoder_f NR_NR_RS_Type_decode_ber;
der_type_encoder_f NR_NR_RS_Type_encode_der;
xer_type_decoder_f NR_NR_RS_Type_decode_xer;
xer_type_encoder_f NR_NR_RS_Type_encode_xer;
per_type_decoder_f NR_NR_RS_Type_decode_uper;
per_type_encoder_f NR_NR_RS_Type_encode_uper;
per_type_decoder_f NR_NR_RS_Type_decode_aper;
per_type_encoder_f NR_NR_RS_Type_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_NR_RS_Type_H_ */
#include <asn_internal.h>
