/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair3/M3AP/MESSAGES/ASN1/m3ap-14.0.0.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/M3AP/MESSAGES`
 */

#ifndef	_M3AP_ExtendedMCE_ID_H_
#define	_M3AP_ExtendedMCE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* M3AP_ExtendedMCE-ID */
typedef OCTET_STRING_t	 M3AP_ExtendedMCE_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M3AP_ExtendedMCE_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ExtendedMCE_ID;
asn_struct_free_f M3AP_ExtendedMCE_ID_free;
asn_struct_print_f M3AP_ExtendedMCE_ID_print;
asn_constr_check_f M3AP_ExtendedMCE_ID_constraint;
ber_type_decoder_f M3AP_ExtendedMCE_ID_decode_ber;
der_type_encoder_f M3AP_ExtendedMCE_ID_encode_der;
xer_type_decoder_f M3AP_ExtendedMCE_ID_decode_xer;
xer_type_encoder_f M3AP_ExtendedMCE_ID_encode_xer;
per_type_decoder_f M3AP_ExtendedMCE_ID_decode_uper;
per_type_encoder_f M3AP_ExtendedMCE_ID_encode_uper;
per_type_decoder_f M3AP_ExtendedMCE_ID_decode_aper;
per_type_encoder_f M3AP_ExtendedMCE_ID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_ExtendedMCE_ID_H_ */
#include <asn_internal.h>
