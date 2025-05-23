/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_FreqBandInformationEUTRA_H_
#define	_NR_FreqBandInformationEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_FreqBandIndicatorEUTRA.h"
#include "NR_CA-BandwidthClassEUTRA.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_FreqBandInformationEUTRA */
typedef struct NR_FreqBandInformationEUTRA {
	NR_FreqBandIndicatorEUTRA_t	 bandEUTRA;
	NR_CA_BandwidthClassEUTRA_t	*ca_BandwidthClassDL_EUTRA;	/* OPTIONAL */
	NR_CA_BandwidthClassEUTRA_t	*ca_BandwidthClassUL_EUTRA;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_FreqBandInformationEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_FreqBandInformationEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_FreqBandInformationEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_FreqBandInformationEUTRA_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_FreqBandInformationEUTRA_H_ */
#include <asn_internal.h>
