/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_EUTRA_ParametersCommon_H_
#define	_NR_EUTRA_ParametersCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_EUTRA_ParametersCommon__mfbi_EUTRA {
	NR_EUTRA_ParametersCommon__mfbi_EUTRA_supported	= 0
} e_NR_EUTRA_ParametersCommon__mfbi_EUTRA;
typedef enum NR_EUTRA_ParametersCommon__multiNS_Pmax_EUTRA {
	NR_EUTRA_ParametersCommon__multiNS_Pmax_EUTRA_supported	= 0
} e_NR_EUTRA_ParametersCommon__multiNS_Pmax_EUTRA;
typedef enum NR_EUTRA_ParametersCommon__rs_SINR_MeasEUTRA {
	NR_EUTRA_ParametersCommon__rs_SINR_MeasEUTRA_supported	= 0
} e_NR_EUTRA_ParametersCommon__rs_SINR_MeasEUTRA;
typedef enum NR_EUTRA_ParametersCommon__ext1__ne_DC {
	NR_EUTRA_ParametersCommon__ext1__ne_DC_supported	= 0
} e_NR_EUTRA_ParametersCommon__ext1__ne_DC;
typedef enum NR_EUTRA_ParametersCommon__ext2__nr_HO_ToEN_DC_r16 {
	NR_EUTRA_ParametersCommon__ext2__nr_HO_ToEN_DC_r16_supported	= 0
} e_NR_EUTRA_ParametersCommon__ext2__nr_HO_ToEN_DC_r16;

/* NR_EUTRA-ParametersCommon */
typedef struct NR_EUTRA_ParametersCommon {
	long	*mfbi_EUTRA;	/* OPTIONAL */
	BIT_STRING_t	*modifiedMPR_BehaviorEUTRA;	/* OPTIONAL */
	long	*multiNS_Pmax_EUTRA;	/* OPTIONAL */
	long	*rs_SINR_MeasEUTRA;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_EUTRA_ParametersCommon__ext1 {
		long	*ne_DC;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_EUTRA_ParametersCommon__ext2 {
		long	*nr_HO_ToEN_DC_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_EUTRA_ParametersCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mfbi_EUTRA_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_multiNS_Pmax_EUTRA_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rs_SINR_MeasEUTRA_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ne_DC_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_nr_HO_ToEN_DC_r16_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_EUTRA_ParametersCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_EUTRA_ParametersCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_EUTRA_ParametersCommon_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_EUTRA_ParametersCommon_H_ */
#include <asn_internal.h>
