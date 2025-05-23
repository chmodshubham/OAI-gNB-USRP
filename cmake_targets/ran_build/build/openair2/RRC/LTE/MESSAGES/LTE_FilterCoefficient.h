/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_FilterCoefficient_H_
#define	_LTE_FilterCoefficient_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_FilterCoefficient {
	LTE_FilterCoefficient_fc0	= 0,
	LTE_FilterCoefficient_fc1	= 1,
	LTE_FilterCoefficient_fc2	= 2,
	LTE_FilterCoefficient_fc3	= 3,
	LTE_FilterCoefficient_fc4	= 4,
	LTE_FilterCoefficient_fc5	= 5,
	LTE_FilterCoefficient_fc6	= 6,
	LTE_FilterCoefficient_fc7	= 7,
	LTE_FilterCoefficient_fc8	= 8,
	LTE_FilterCoefficient_fc9	= 9,
	LTE_FilterCoefficient_fc11	= 10,
	LTE_FilterCoefficient_fc13	= 11,
	LTE_FilterCoefficient_fc15	= 12,
	LTE_FilterCoefficient_fc17	= 13,
	LTE_FilterCoefficient_fc19	= 14,
	LTE_FilterCoefficient_spare1	= 15
	/*
	 * Enumeration is extensible
	 */
} e_LTE_FilterCoefficient;

/* LTE_FilterCoefficient */
typedef long	 LTE_FilterCoefficient_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_FilterCoefficient_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_FilterCoefficient;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_FilterCoefficient_specs_1;
asn_struct_free_f LTE_FilterCoefficient_free;
asn_struct_print_f LTE_FilterCoefficient_print;
asn_constr_check_f LTE_FilterCoefficient_constraint;
ber_type_decoder_f LTE_FilterCoefficient_decode_ber;
der_type_encoder_f LTE_FilterCoefficient_encode_der;
xer_type_decoder_f LTE_FilterCoefficient_decode_xer;
xer_type_encoder_f LTE_FilterCoefficient_encode_xer;
per_type_decoder_f LTE_FilterCoefficient_decode_uper;
per_type_encoder_f LTE_FilterCoefficient_encode_uper;
per_type_decoder_f LTE_FilterCoefficient_decode_aper;
per_type_encoder_f LTE_FilterCoefficient_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_FilterCoefficient_H_ */
#include <asn_internal.h>
