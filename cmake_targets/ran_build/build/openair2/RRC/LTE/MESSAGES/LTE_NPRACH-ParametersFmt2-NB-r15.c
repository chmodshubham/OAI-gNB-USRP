/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_NPRACH-ParametersFmt2-NB-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_npdcch_CarrierIndex_r15_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_nprach_Periodicity_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_nprach_StartTime_r15_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_nprach_SubcarrierOffset_r15_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_nprach_NumSubcarriers_r15_constr_38 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_nprach_SubcarrierMSG3_RangeStart_r15_constr_43 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_NumRepetitions_RA_r15_constr_48 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_StartSF_CSS_RA_r15_constr_65 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_Offset_RA_r15_constr_74 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_nprach_NumCBRA_StartSubcarriers_r15_constr_79 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_npdcch_CarrierIndex_r15_constr_96 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_Periodicity_r15_value2enum_3[] = {
	{ 0,	4,	"ms40" },
	{ 1,	4,	"ms80" },
	{ 2,	5,	"ms160" },
	{ 3,	5,	"ms320" },
	{ 4,	5,	"ms640" },
	{ 5,	6,	"ms1280" },
	{ 6,	6,	"ms2560" },
	{ 7,	6,	"ms5120" }
};
static const unsigned int asn_MAP_LTE_nprach_Periodicity_r15_enum2value_3[] = {
	5,	/* ms1280(5) */
	2,	/* ms160(2) */
	6,	/* ms2560(6) */
	3,	/* ms320(3) */
	0,	/* ms40(0) */
	7,	/* ms5120(7) */
	4,	/* ms640(4) */
	1	/* ms80(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_Periodicity_r15_specs_3 = {
	asn_MAP_LTE_nprach_Periodicity_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_Periodicity_r15_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_Periodicity_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_Periodicity_r15_3 = {
	"nprach-Periodicity-r15",
	"nprach-Periodicity-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_Periodicity_r15_tags_3,
	sizeof(asn_DEF_LTE_nprach_Periodicity_r15_tags_3)
		/sizeof(asn_DEF_LTE_nprach_Periodicity_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_Periodicity_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_Periodicity_r15_tags_3)
		/sizeof(asn_DEF_LTE_nprach_Periodicity_r15_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nprach_Periodicity_r15_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_Periodicity_r15_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_StartTime_r15_value2enum_12[] = {
	{ 0,	3,	"ms8" },
	{ 1,	4,	"ms16" },
	{ 2,	4,	"ms32" },
	{ 3,	4,	"ms64" },
	{ 4,	5,	"ms128" },
	{ 5,	5,	"ms256" },
	{ 6,	5,	"ms512" },
	{ 7,	6,	"ms1024" }
};
static const unsigned int asn_MAP_LTE_nprach_StartTime_r15_enum2value_12[] = {
	7,	/* ms1024(7) */
	4,	/* ms128(4) */
	1,	/* ms16(1) */
	5,	/* ms256(5) */
	2,	/* ms32(2) */
	6,	/* ms512(6) */
	3,	/* ms64(3) */
	0	/* ms8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_StartTime_r15_specs_12 = {
	asn_MAP_LTE_nprach_StartTime_r15_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_StartTime_r15_enum2value_12,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_StartTime_r15_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_StartTime_r15_12 = {
	"nprach-StartTime-r15",
	"nprach-StartTime-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_StartTime_r15_tags_12,
	sizeof(asn_DEF_LTE_nprach_StartTime_r15_tags_12)
		/sizeof(asn_DEF_LTE_nprach_StartTime_r15_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_StartTime_r15_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_StartTime_r15_tags_12)
		/sizeof(asn_DEF_LTE_nprach_StartTime_r15_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nprach_StartTime_r15_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_StartTime_r15_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_SubcarrierOffset_r15_value2enum_21[] = {
	{ 0,	2,	"n0" },
	{ 1,	3,	"n36" },
	{ 2,	3,	"n72" },
	{ 3,	4,	"n108" },
	{ 4,	2,	"n6" },
	{ 5,	3,	"n54" },
	{ 6,	4,	"n102" },
	{ 7,	3,	"n42" },
	{ 8,	3,	"n78" },
	{ 9,	3,	"n90" },
	{ 10,	3,	"n12" },
	{ 11,	3,	"n24" },
	{ 12,	3,	"n48" },
	{ 13,	3,	"n84" },
	{ 14,	3,	"n60" },
	{ 15,	3,	"n18" }
};
static const unsigned int asn_MAP_LTE_nprach_SubcarrierOffset_r15_enum2value_21[] = {
	0,	/* n0(0) */
	6,	/* n102(6) */
	3,	/* n108(3) */
	10,	/* n12(10) */
	15,	/* n18(15) */
	11,	/* n24(11) */
	1,	/* n36(1) */
	7,	/* n42(7) */
	12,	/* n48(12) */
	5,	/* n54(5) */
	4,	/* n6(4) */
	14,	/* n60(14) */
	2,	/* n72(2) */
	8,	/* n78(8) */
	13,	/* n84(13) */
	9	/* n90(9) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_SubcarrierOffset_r15_specs_21 = {
	asn_MAP_LTE_nprach_SubcarrierOffset_r15_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_SubcarrierOffset_r15_enum2value_21,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_SubcarrierOffset_r15_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_SubcarrierOffset_r15_21 = {
	"nprach-SubcarrierOffset-r15",
	"nprach-SubcarrierOffset-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_SubcarrierOffset_r15_tags_21,
	sizeof(asn_DEF_LTE_nprach_SubcarrierOffset_r15_tags_21)
		/sizeof(asn_DEF_LTE_nprach_SubcarrierOffset_r15_tags_21[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_SubcarrierOffset_r15_tags_21,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_SubcarrierOffset_r15_tags_21)
		/sizeof(asn_DEF_LTE_nprach_SubcarrierOffset_r15_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nprach_SubcarrierOffset_r15_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_SubcarrierOffset_r15_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_NumSubcarriers_r15_value2enum_38[] = {
	{ 0,	3,	"n36" },
	{ 1,	3,	"n72" },
	{ 2,	4,	"n108" },
	{ 3,	4,	"n144" }
};
static const unsigned int asn_MAP_LTE_nprach_NumSubcarriers_r15_enum2value_38[] = {
	2,	/* n108(2) */
	3,	/* n144(3) */
	0,	/* n36(0) */
	1	/* n72(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_NumSubcarriers_r15_specs_38 = {
	asn_MAP_LTE_nprach_NumSubcarriers_r15_value2enum_38,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_NumSubcarriers_r15_enum2value_38,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_NumSubcarriers_r15_tags_38[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_NumSubcarriers_r15_38 = {
	"nprach-NumSubcarriers-r15",
	"nprach-NumSubcarriers-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_NumSubcarriers_r15_tags_38,
	sizeof(asn_DEF_LTE_nprach_NumSubcarriers_r15_tags_38)
		/sizeof(asn_DEF_LTE_nprach_NumSubcarriers_r15_tags_38[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_NumSubcarriers_r15_tags_38,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_NumSubcarriers_r15_tags_38)
		/sizeof(asn_DEF_LTE_nprach_NumSubcarriers_r15_tags_38[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nprach_NumSubcarriers_r15_constr_38, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_NumSubcarriers_r15_specs_38	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_SubcarrierMSG3_RangeStart_r15_value2enum_43[] = {
	{ 0,	4,	"zero" },
	{ 1,	8,	"oneThird" },
	{ 2,	8,	"twoThird" },
	{ 3,	3,	"one" }
};
static const unsigned int asn_MAP_LTE_nprach_SubcarrierMSG3_RangeStart_r15_enum2value_43[] = {
	3,	/* one(3) */
	1,	/* oneThird(1) */
	2,	/* twoThird(2) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_SubcarrierMSG3_RangeStart_r15_specs_43 = {
	asn_MAP_LTE_nprach_SubcarrierMSG3_RangeStart_r15_value2enum_43,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_SubcarrierMSG3_RangeStart_r15_enum2value_43,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r15_tags_43[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r15_43 = {
	"nprach-SubcarrierMSG3-RangeStart-r15",
	"nprach-SubcarrierMSG3-RangeStart-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r15_tags_43,
	sizeof(asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r15_tags_43)
		/sizeof(asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r15_tags_43[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r15_tags_43,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r15_tags_43)
		/sizeof(asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r15_tags_43[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nprach_SubcarrierMSG3_RangeStart_r15_constr_43, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_SubcarrierMSG3_RangeStart_r15_specs_43	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_NumRepetitions_RA_r15_value2enum_48[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	4,	"r128" },
	{ 8,	4,	"r256" },
	{ 9,	4,	"r512" },
	{ 10,	5,	"r1024" },
	{ 11,	5,	"r2048" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_npdcch_NumRepetitions_RA_r15_enum2value_48[] = {
	0,	/* r1(0) */
	10,	/* r1024(10) */
	7,	/* r128(7) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	11,	/* r2048(11) */
	8,	/* r256(8) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	9,	/* r512(9) */
	6,	/* r64(6) */
	3,	/* r8(3) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12	/* spare4(12) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_NumRepetitions_RA_r15_specs_48 = {
	asn_MAP_LTE_npdcch_NumRepetitions_RA_r15_value2enum_48,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_NumRepetitions_RA_r15_enum2value_48,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_NumRepetitions_RA_r15_tags_48[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_NumRepetitions_RA_r15_48 = {
	"npdcch-NumRepetitions-RA-r15",
	"npdcch-NumRepetitions-RA-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_NumRepetitions_RA_r15_tags_48,
	sizeof(asn_DEF_LTE_npdcch_NumRepetitions_RA_r15_tags_48)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitions_RA_r15_tags_48[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_NumRepetitions_RA_r15_tags_48,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_NumRepetitions_RA_r15_tags_48)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitions_RA_r15_tags_48[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_NumRepetitions_RA_r15_constr_48, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_NumRepetitions_RA_r15_specs_48	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_StartSF_CSS_RA_r15_value2enum_65[] = {
	{ 0,	6,	"v1dot5" },
	{ 1,	2,	"v2" },
	{ 2,	2,	"v4" },
	{ 3,	2,	"v8" },
	{ 4,	3,	"v16" },
	{ 5,	3,	"v32" },
	{ 6,	3,	"v48" },
	{ 7,	3,	"v64" }
};
static const unsigned int asn_MAP_LTE_npdcch_StartSF_CSS_RA_r15_enum2value_65[] = {
	4,	/* v16(4) */
	0,	/* v1dot5(0) */
	1,	/* v2(1) */
	5,	/* v32(5) */
	2,	/* v4(2) */
	6,	/* v48(6) */
	7,	/* v64(7) */
	3	/* v8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_StartSF_CSS_RA_r15_specs_65 = {
	asn_MAP_LTE_npdcch_StartSF_CSS_RA_r15_value2enum_65,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_StartSF_CSS_RA_r15_enum2value_65,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_StartSF_CSS_RA_r15_tags_65[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_StartSF_CSS_RA_r15_65 = {
	"npdcch-StartSF-CSS-RA-r15",
	"npdcch-StartSF-CSS-RA-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_StartSF_CSS_RA_r15_tags_65,
	sizeof(asn_DEF_LTE_npdcch_StartSF_CSS_RA_r15_tags_65)
		/sizeof(asn_DEF_LTE_npdcch_StartSF_CSS_RA_r15_tags_65[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_StartSF_CSS_RA_r15_tags_65,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_StartSF_CSS_RA_r15_tags_65)
		/sizeof(asn_DEF_LTE_npdcch_StartSF_CSS_RA_r15_tags_65[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_StartSF_CSS_RA_r15_constr_65, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_StartSF_CSS_RA_r15_specs_65	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_Offset_RA_r15_value2enum_74[] = {
	{ 0,	4,	"zero" },
	{ 1,	9,	"oneEighth" },
	{ 2,	9,	"oneFourth" },
	{ 3,	11,	"threeEighth" }
};
static const unsigned int asn_MAP_LTE_npdcch_Offset_RA_r15_enum2value_74[] = {
	1,	/* oneEighth(1) */
	2,	/* oneFourth(2) */
	3,	/* threeEighth(3) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_Offset_RA_r15_specs_74 = {
	asn_MAP_LTE_npdcch_Offset_RA_r15_value2enum_74,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_Offset_RA_r15_enum2value_74,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_Offset_RA_r15_tags_74[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_Offset_RA_r15_74 = {
	"npdcch-Offset-RA-r15",
	"npdcch-Offset-RA-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_Offset_RA_r15_tags_74,
	sizeof(asn_DEF_LTE_npdcch_Offset_RA_r15_tags_74)
		/sizeof(asn_DEF_LTE_npdcch_Offset_RA_r15_tags_74[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_Offset_RA_r15_tags_74,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_Offset_RA_r15_tags_74)
		/sizeof(asn_DEF_LTE_npdcch_Offset_RA_r15_tags_74[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_Offset_RA_r15_constr_74, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_Offset_RA_r15_specs_74	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_NumCBRA_StartSubcarriers_r15_value2enum_79[] = {
	{ 0,	3,	"n24" },
	{ 1,	3,	"n30" },
	{ 2,	3,	"n33" },
	{ 3,	3,	"n36" },
	{ 4,	3,	"n60" },
	{ 5,	3,	"n66" },
	{ 6,	3,	"n69" },
	{ 7,	3,	"n72" },
	{ 8,	3,	"n96" },
	{ 9,	4,	"n102" },
	{ 10,	4,	"n105" },
	{ 11,	4,	"n108" },
	{ 12,	4,	"n120" },
	{ 13,	4,	"n132" },
	{ 14,	4,	"n138" },
	{ 15,	4,	"n144" }
};
static const unsigned int asn_MAP_LTE_nprach_NumCBRA_StartSubcarriers_r15_enum2value_79[] = {
	9,	/* n102(9) */
	10,	/* n105(10) */
	11,	/* n108(11) */
	12,	/* n120(12) */
	13,	/* n132(13) */
	14,	/* n138(14) */
	15,	/* n144(15) */
	0,	/* n24(0) */
	1,	/* n30(1) */
	2,	/* n33(2) */
	3,	/* n36(3) */
	4,	/* n60(4) */
	5,	/* n66(5) */
	6,	/* n69(6) */
	7,	/* n72(7) */
	8	/* n96(8) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_NumCBRA_StartSubcarriers_r15_specs_79 = {
	asn_MAP_LTE_nprach_NumCBRA_StartSubcarriers_r15_value2enum_79,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_NumCBRA_StartSubcarriers_r15_enum2value_79,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r15_tags_79[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r15_79 = {
	"nprach-NumCBRA-StartSubcarriers-r15",
	"nprach-NumCBRA-StartSubcarriers-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r15_tags_79,
	sizeof(asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r15_tags_79)
		/sizeof(asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r15_tags_79[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r15_tags_79,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r15_tags_79)
		/sizeof(asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r15_tags_79[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nprach_NumCBRA_StartSubcarriers_r15_constr_79, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_NumCBRA_StartSubcarriers_r15_specs_79	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_nprach_Parameters_r15_2[] = {
	{ ATF_POINTER, 10, offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15, nprach_Periodicity_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_Periodicity_r15_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Periodicity-r15"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15, nprach_StartTime_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_StartTime_r15_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-StartTime-r15"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15, nprach_SubcarrierOffset_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_SubcarrierOffset_r15_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-SubcarrierOffset-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15, nprach_NumSubcarriers_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_NumSubcarriers_r15_38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-NumSubcarriers-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15, nprach_SubcarrierMSG3_RangeStart_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r15_43,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-SubcarrierMSG3-RangeStart-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15, npdcch_NumRepetitions_RA_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_NumRepetitions_RA_r15_48,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-NumRepetitions-RA-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15, npdcch_StartSF_CSS_RA_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_StartSF_CSS_RA_r15_65,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-StartSF-CSS-RA-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15, npdcch_Offset_RA_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_Offset_RA_r15_74,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-Offset-RA-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15, nprach_NumCBRA_StartSubcarriers_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r15_79,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-NumCBRA-StartSubcarriers-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15, npdcch_CarrierIndex_r15),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_npdcch_CarrierIndex_r15_constr_96,  memb_LTE_npdcch_CarrierIndex_r15_constraint_2 },
		0, 0, /* No default value */
		"npdcch-CarrierIndex-r15"
		},
};
static const int asn_MAP_LTE_nprach_Parameters_r15_oms_2[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_LTE_nprach_Parameters_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_nprach_Parameters_r15_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nprach-Periodicity-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nprach-StartTime-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nprach-SubcarrierOffset-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nprach-NumSubcarriers-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* nprach-SubcarrierMSG3-RangeStart-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* npdcch-NumRepetitions-RA-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* npdcch-StartSF-CSS-RA-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* npdcch-Offset-RA-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* nprach-NumCBRA-StartSubcarriers-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* npdcch-CarrierIndex-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nprach_Parameters_r15_specs_2 = {
	sizeof(struct LTE_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15),
	offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15__nprach_Parameters_r15, _asn_ctx),
	asn_MAP_LTE_nprach_Parameters_r15_tag2el_2,
	10,	/* Count of tags in the map */
	asn_MAP_LTE_nprach_Parameters_r15_oms_2,	/* Optional members */
	10, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_Parameters_r15_2 = {
	"nprach-Parameters-r15",
	"nprach-Parameters-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nprach_Parameters_r15_tags_2,
	sizeof(asn_DEF_LTE_nprach_Parameters_r15_tags_2)
		/sizeof(asn_DEF_LTE_nprach_Parameters_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_Parameters_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_Parameters_r15_tags_2)
		/sizeof(asn_DEF_LTE_nprach_Parameters_r15_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_nprach_Parameters_r15_2,
	10,	/* Elements count */
	&asn_SPC_LTE_nprach_Parameters_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_NPRACH_ParametersFmt2_NB_r15_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15, nprach_Parameters_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_nprach_Parameters_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Parameters-r15"
		},
};
static const int asn_MAP_LTE_NPRACH_ParametersFmt2_NB_r15_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_NPRACH_ParametersFmt2_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_NPRACH_ParametersFmt2_NB_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nprach-Parameters-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_NPRACH_ParametersFmt2_NB_r15_specs_1 = {
	sizeof(struct LTE_NPRACH_ParametersFmt2_NB_r15),
	offsetof(struct LTE_NPRACH_ParametersFmt2_NB_r15, _asn_ctx),
	asn_MAP_LTE_NPRACH_ParametersFmt2_NB_r15_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_NPRACH_ParametersFmt2_NB_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_NPRACH_ParametersFmt2_NB_r15 = {
	"NPRACH-ParametersFmt2-NB-r15",
	"NPRACH-ParametersFmt2-NB-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_NPRACH_ParametersFmt2_NB_r15_tags_1,
	sizeof(asn_DEF_LTE_NPRACH_ParametersFmt2_NB_r15_tags_1)
		/sizeof(asn_DEF_LTE_NPRACH_ParametersFmt2_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_LTE_NPRACH_ParametersFmt2_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_NPRACH_ParametersFmt2_NB_r15_tags_1)
		/sizeof(asn_DEF_LTE_NPRACH_ParametersFmt2_NB_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_NPRACH_ParametersFmt2_NB_r15_1,
	1,	/* Elements count */
	&asn_SPC_LTE_NPRACH_ParametersFmt2_NB_r15_specs_1	/* Additional specs */
};

