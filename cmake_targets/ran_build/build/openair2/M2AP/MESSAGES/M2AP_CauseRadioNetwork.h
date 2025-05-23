/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "/home/rcdu/openairinterface5g/openair2/M2AP/MESSAGES/ASN1/m2ap-14.0.0.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/M2AP/MESSAGES`
 */

#ifndef	_M2AP_CauseRadioNetwork_H_
#define	_M2AP_CauseRadioNetwork_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M2AP_CauseRadioNetwork {
	M2AP_CauseRadioNetwork_unknown_or_already_allocated_MCE_MBMS_M2AP_ID	= 0,
	M2AP_CauseRadioNetwork_unknown_or_already_allocated_eNB_MBMS_M2AP_ID	= 1,
	M2AP_CauseRadioNetwork_unknown_or_inconsistent_pair_of_MBMS_M2AP_IDs	= 2,
	M2AP_CauseRadioNetwork_radio_resources_not_available	= 3,
	M2AP_CauseRadioNetwork_interaction_with_other_procedure	= 4,
	M2AP_CauseRadioNetwork_unspecified	= 5,
	/*
	 * Enumeration is extensible
	 */
	M2AP_CauseRadioNetwork_invalid_QoS_combination	= 6,
	M2AP_CauseRadioNetwork_not_supported_QCI_value	= 7
} e_M2AP_CauseRadioNetwork;

/* M2AP_CauseRadioNetwork */
typedef long	 M2AP_CauseRadioNetwork_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M2AP_CauseRadioNetwork_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M2AP_CauseRadioNetwork;
extern const asn_INTEGER_specifics_t asn_SPC_M2AP_CauseRadioNetwork_specs_1;
asn_struct_free_f M2AP_CauseRadioNetwork_free;
asn_struct_print_f M2AP_CauseRadioNetwork_print;
asn_constr_check_f M2AP_CauseRadioNetwork_constraint;
ber_type_decoder_f M2AP_CauseRadioNetwork_decode_ber;
der_type_encoder_f M2AP_CauseRadioNetwork_encode_der;
xer_type_decoder_f M2AP_CauseRadioNetwork_decode_xer;
xer_type_encoder_f M2AP_CauseRadioNetwork_encode_xer;
per_type_decoder_f M2AP_CauseRadioNetwork_decode_uper;
per_type_encoder_f M2AP_CauseRadioNetwork_encode_uper;
per_type_decoder_f M2AP_CauseRadioNetwork_decode_aper;
per_type_encoder_f M2AP_CauseRadioNetwork_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_CauseRadioNetwork_H_ */
#include <asn_internal.h>
