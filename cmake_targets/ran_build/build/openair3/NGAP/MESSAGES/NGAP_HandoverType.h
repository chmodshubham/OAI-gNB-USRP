/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_HandoverType_H_
#define	_NGAP_HandoverType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_HandoverType {
	NGAP_HandoverType_intra5gs	= 0,
	NGAP_HandoverType_fivegs_to_eps	= 1,
	NGAP_HandoverType_eps_to_5gs	= 2
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_HandoverType;

/* NGAP_HandoverType */
typedef long	 NGAP_HandoverType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_HandoverType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_HandoverType;
extern const asn_INTEGER_specifics_t asn_SPC_NGAP_HandoverType_specs_1;
asn_struct_free_f NGAP_HandoverType_free;
asn_struct_print_f NGAP_HandoverType_print;
asn_constr_check_f NGAP_HandoverType_constraint;
ber_type_decoder_f NGAP_HandoverType_decode_ber;
der_type_encoder_f NGAP_HandoverType_encode_der;
xer_type_decoder_f NGAP_HandoverType_decode_xer;
xer_type_encoder_f NGAP_HandoverType_encode_xer;
per_type_decoder_f NGAP_HandoverType_decode_uper;
per_type_encoder_f NGAP_HandoverType_encode_uper;
per_type_decoder_f NGAP_HandoverType_decode_aper;
per_type_encoder_f NGAP_HandoverType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_HandoverType_H_ */
#include <asn_internal.h>
