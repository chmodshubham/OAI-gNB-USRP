/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_LoggingInterval-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_NR_LoggingInterval_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_LoggingInterval_r16_value2enum_1[] = {
	{ 0,	5,	"ms320" },
	{ 1,	5,	"ms640" },
	{ 2,	6,	"ms1280" },
	{ 3,	6,	"ms2560" },
	{ 4,	6,	"ms5120" },
	{ 5,	7,	"ms10240" },
	{ 6,	7,	"ms20480" },
	{ 7,	7,	"ms30720" },
	{ 8,	7,	"ms40960" },
	{ 9,	7,	"ms61440" },
	{ 10,	8,	"infinity" }
};
static const unsigned int asn_MAP_NR_LoggingInterval_r16_enum2value_1[] = {
	10,	/* infinity(10) */
	5,	/* ms10240(5) */
	2,	/* ms1280(2) */
	6,	/* ms20480(6) */
	3,	/* ms2560(3) */
	7,	/* ms30720(7) */
	0,	/* ms320(0) */
	8,	/* ms40960(8) */
	4,	/* ms5120(4) */
	9,	/* ms61440(9) */
	1	/* ms640(1) */
};
const asn_INTEGER_specifics_t asn_SPC_NR_LoggingInterval_r16_specs_1 = {
	asn_MAP_NR_LoggingInterval_r16_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_LoggingInterval_r16_enum2value_1,	/* N => "tag"; sorted by N */
	11,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_LoggingInterval_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NR_LoggingInterval_r16 = {
	"LoggingInterval-r16",
	"LoggingInterval-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_LoggingInterval_r16_tags_1,
	sizeof(asn_DEF_NR_LoggingInterval_r16_tags_1)
		/sizeof(asn_DEF_NR_LoggingInterval_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_LoggingInterval_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_LoggingInterval_r16_tags_1)
		/sizeof(asn_DEF_NR_LoggingInterval_r16_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_NR_LoggingInterval_r16_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_LoggingInterval_r16_specs_1	/* Additional specs */
};

