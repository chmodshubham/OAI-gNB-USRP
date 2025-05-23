/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#ifndef	_X2AP_SpecialSubframePatterns_H_
#define	_X2AP_SpecialSubframePatterns_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_SpecialSubframePatterns {
	X2AP_SpecialSubframePatterns_ssp0	= 0,
	X2AP_SpecialSubframePatterns_ssp1	= 1,
	X2AP_SpecialSubframePatterns_ssp2	= 2,
	X2AP_SpecialSubframePatterns_ssp3	= 3,
	X2AP_SpecialSubframePatterns_ssp4	= 4,
	X2AP_SpecialSubframePatterns_ssp5	= 5,
	X2AP_SpecialSubframePatterns_ssp6	= 6,
	X2AP_SpecialSubframePatterns_ssp7	= 7,
	X2AP_SpecialSubframePatterns_ssp8	= 8
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_SpecialSubframePatterns;

/* X2AP_SpecialSubframePatterns */
typedef long	 X2AP_SpecialSubframePatterns_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_SpecialSubframePatterns_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_SpecialSubframePatterns;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_SpecialSubframePatterns_specs_1;
asn_struct_free_f X2AP_SpecialSubframePatterns_free;
asn_struct_print_f X2AP_SpecialSubframePatterns_print;
asn_constr_check_f X2AP_SpecialSubframePatterns_constraint;
ber_type_decoder_f X2AP_SpecialSubframePatterns_decode_ber;
der_type_encoder_f X2AP_SpecialSubframePatterns_encode_der;
xer_type_decoder_f X2AP_SpecialSubframePatterns_decode_xer;
xer_type_encoder_f X2AP_SpecialSubframePatterns_encode_xer;
per_type_decoder_f X2AP_SpecialSubframePatterns_decode_uper;
per_type_encoder_f X2AP_SpecialSubframePatterns_encode_uper;
per_type_decoder_f X2AP_SpecialSubframePatterns_decode_aper;
per_type_encoder_f X2AP_SpecialSubframePatterns_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_SpecialSubframePatterns_H_ */
#include <asn_internal.h>
