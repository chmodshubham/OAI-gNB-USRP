/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SDAP_Parameters_H_
#define	_NR_SDAP_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SDAP_Parameters__as_ReflectiveQoS {
	NR_SDAP_Parameters__as_ReflectiveQoS_true	= 0
} e_NR_SDAP_Parameters__as_ReflectiveQoS;
typedef enum NR_SDAP_Parameters__ext1__sdap_QOS_IAB_r16 {
	NR_SDAP_Parameters__ext1__sdap_QOS_IAB_r16_supported	= 0
} e_NR_SDAP_Parameters__ext1__sdap_QOS_IAB_r16;
typedef enum NR_SDAP_Parameters__ext1__sdapHeaderIAB_r16 {
	NR_SDAP_Parameters__ext1__sdapHeaderIAB_r16_supported	= 0
} e_NR_SDAP_Parameters__ext1__sdapHeaderIAB_r16;

/* NR_SDAP-Parameters */
typedef struct NR_SDAP_Parameters {
	long	*as_ReflectiveQoS;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_SDAP_Parameters__ext1 {
		long	*sdap_QOS_IAB_r16;	/* OPTIONAL */
		long	*sdapHeaderIAB_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SDAP_Parameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_as_ReflectiveQoS_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sdap_QOS_IAB_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sdapHeaderIAB_r16_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SDAP_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SDAP_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SDAP_Parameters_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SDAP_Parameters_H_ */
#include <asn_internal.h>
