/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "/home/rcdu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_AperiodicSRS_H_
#define	_F1AP_AperiodicSRS_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_AperiodicSRS__aperiodic {
	F1AP_AperiodicSRS__aperiodic_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_AperiodicSRS__aperiodic;

/* Forward declarations */
struct F1AP_SRSResourceTrigger;
struct F1AP_ProtocolExtensionContainer;

/* F1AP_AperiodicSRS */
typedef struct F1AP_AperiodicSRS {
	long	 aperiodic;
	struct F1AP_SRSResourceTrigger	*sRSResourceTrigger;	/* OPTIONAL */
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_AperiodicSRS_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_aperiodic_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_AperiodicSRS;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_AperiodicSRS_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_AperiodicSRS_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_AperiodicSRS_H_ */
#include <asn_internal.h>
