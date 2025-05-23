/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_SourceToTarget_TransparentContainer_H_
#define	_NGAP_SourceToTarget_TransparentContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NGAP_SourceToTarget-TransparentContainer */
typedef OCTET_STRING_t	 NGAP_SourceToTarget_TransparentContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_SourceToTarget_TransparentContainer;
asn_struct_free_f NGAP_SourceToTarget_TransparentContainer_free;
asn_struct_print_f NGAP_SourceToTarget_TransparentContainer_print;
asn_constr_check_f NGAP_SourceToTarget_TransparentContainer_constraint;
ber_type_decoder_f NGAP_SourceToTarget_TransparentContainer_decode_ber;
der_type_encoder_f NGAP_SourceToTarget_TransparentContainer_encode_der;
xer_type_decoder_f NGAP_SourceToTarget_TransparentContainer_decode_xer;
xer_type_encoder_f NGAP_SourceToTarget_TransparentContainer_encode_xer;
per_type_decoder_f NGAP_SourceToTarget_TransparentContainer_decode_uper;
per_type_encoder_f NGAP_SourceToTarget_TransparentContainer_encode_uper;
per_type_decoder_f NGAP_SourceToTarget_TransparentContainer_decode_aper;
per_type_encoder_f NGAP_SourceToTarget_TransparentContainer_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_SourceToTarget_TransparentContainer_H_ */
#include <asn_internal.h>
