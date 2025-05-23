/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SL-TimeOffsetEUTRA-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_NR_SL_TimeOffsetEUTRA_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  17 }	/* (0..17) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_SL_TimeOffsetEUTRA_r16_value2enum_1[] = {
	{ 0,	3,	"ms0" },
	{ 1,	8,	"ms0dot25" },
	{ 2,	7,	"ms0dot5" },
	{ 3,	9,	"ms0dot625" },
	{ 4,	8,	"ms0dot75" },
	{ 5,	3,	"ms1" },
	{ 6,	8,	"ms1dot25" },
	{ 7,	7,	"ms1dot5" },
	{ 8,	8,	"ms1dot75" },
	{ 9,	3,	"ms2" },
	{ 10,	7,	"ms2dot5" },
	{ 11,	3,	"ms3" },
	{ 12,	3,	"ms4" },
	{ 13,	3,	"ms5" },
	{ 14,	3,	"ms6" },
	{ 15,	3,	"ms8" },
	{ 16,	4,	"ms10" },
	{ 17,	4,	"ms20" }
};
static const unsigned int asn_MAP_NR_SL_TimeOffsetEUTRA_r16_enum2value_1[] = {
	0,	/* ms0(0) */
	1,	/* ms0dot25(1) */
	2,	/* ms0dot5(2) */
	3,	/* ms0dot625(3) */
	4,	/* ms0dot75(4) */
	5,	/* ms1(5) */
	16,	/* ms10(16) */
	6,	/* ms1dot25(6) */
	7,	/* ms1dot5(7) */
	8,	/* ms1dot75(8) */
	9,	/* ms2(9) */
	17,	/* ms20(17) */
	10,	/* ms2dot5(10) */
	11,	/* ms3(11) */
	12,	/* ms4(12) */
	13,	/* ms5(13) */
	14,	/* ms6(14) */
	15	/* ms8(15) */
};
const asn_INTEGER_specifics_t asn_SPC_NR_SL_TimeOffsetEUTRA_r16_specs_1 = {
	asn_MAP_NR_SL_TimeOffsetEUTRA_r16_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_SL_TimeOffsetEUTRA_r16_enum2value_1,	/* N => "tag"; sorted by N */
	18,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_SL_TimeOffsetEUTRA_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_TimeOffsetEUTRA_r16 = {
	"SL-TimeOffsetEUTRA-r16",
	"SL-TimeOffsetEUTRA-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_SL_TimeOffsetEUTRA_r16_tags_1,
	sizeof(asn_DEF_NR_SL_TimeOffsetEUTRA_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_TimeOffsetEUTRA_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_TimeOffsetEUTRA_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_TimeOffsetEUTRA_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_TimeOffsetEUTRA_r16_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_NR_SL_TimeOffsetEUTRA_r16_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_SL_TimeOffsetEUTRA_r16_specs_1	/* Additional specs */
};

