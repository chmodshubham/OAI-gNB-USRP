/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_HSNATransmissionPeriodicity.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_F1AP_HSNATransmissionPeriodicity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  11 }	/* (0..11,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_HSNATransmissionPeriodicity_value2enum_1[] = {
	{ 0,	5,	"ms0p5" },
	{ 1,	7,	"ms0p625" },
	{ 2,	3,	"ms1" },
	{ 3,	6,	"ms1p25" },
	{ 4,	3,	"ms2" },
	{ 5,	5,	"ms2p5" },
	{ 6,	3,	"ms5" },
	{ 7,	4,	"ms10" },
	{ 8,	4,	"ms20" },
	{ 9,	4,	"ms40" },
	{ 10,	4,	"ms80" },
	{ 11,	5,	"ms160" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_HSNATransmissionPeriodicity_enum2value_1[] = {
	0,	/* ms0p5(0) */
	1,	/* ms0p625(1) */
	2,	/* ms1(2) */
	7,	/* ms10(7) */
	11,	/* ms160(11) */
	3,	/* ms1p25(3) */
	4,	/* ms2(4) */
	8,	/* ms20(8) */
	5,	/* ms2p5(5) */
	9,	/* ms40(9) */
	6,	/* ms5(6) */
	10	/* ms80(10) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_F1AP_HSNATransmissionPeriodicity_specs_1 = {
	asn_MAP_F1AP_HSNATransmissionPeriodicity_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_HSNATransmissionPeriodicity_enum2value_1,	/* N => "tag"; sorted by N */
	12,	/* Number of elements in the maps */
	13,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_HSNATransmissionPeriodicity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_HSNATransmissionPeriodicity = {
	"HSNATransmissionPeriodicity",
	"HSNATransmissionPeriodicity",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_HSNATransmissionPeriodicity_tags_1,
	sizeof(asn_DEF_F1AP_HSNATransmissionPeriodicity_tags_1)
		/sizeof(asn_DEF_F1AP_HSNATransmissionPeriodicity_tags_1[0]), /* 1 */
	asn_DEF_F1AP_HSNATransmissionPeriodicity_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_HSNATransmissionPeriodicity_tags_1)
		/sizeof(asn_DEF_F1AP_HSNATransmissionPeriodicity_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_F1AP_HSNATransmissionPeriodicity_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_HSNATransmissionPeriodicity_specs_1	/* Additional specs */
};

