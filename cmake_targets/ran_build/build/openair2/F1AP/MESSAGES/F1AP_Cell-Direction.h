/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_Cell_Direction_H_
#define	_F1AP_Cell_Direction_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_Cell_Direction {
	F1AP_Cell_Direction_dl_only	= 0,
	F1AP_Cell_Direction_ul_only	= 1
} e_F1AP_Cell_Direction;

/* F1AP_Cell-Direction */
typedef long	 F1AP_Cell_Direction_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_Cell_Direction_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_Cell_Direction;
extern const asn_INTEGER_specifics_t asn_SPC_F1AP_Cell_Direction_specs_1;
asn_struct_free_f F1AP_Cell_Direction_free;
asn_struct_print_f F1AP_Cell_Direction_print;
asn_constr_check_f F1AP_Cell_Direction_constraint;
ber_type_decoder_f F1AP_Cell_Direction_decode_ber;
der_type_encoder_f F1AP_Cell_Direction_encode_der;
xer_type_decoder_f F1AP_Cell_Direction_decode_xer;
xer_type_encoder_f F1AP_Cell_Direction_encode_xer;
per_type_decoder_f F1AP_Cell_Direction_decode_uper;
per_type_encoder_f F1AP_Cell_Direction_encode_uper;
per_type_decoder_f F1AP_Cell_Direction_decode_aper;
per_type_encoder_f F1AP_Cell_Direction_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_Cell_Direction_H_ */
#include <asn_internal.h>
