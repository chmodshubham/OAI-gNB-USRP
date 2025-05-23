/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_NPRACH-Parameters-NB-r14.h"

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
memb_LTE_npdcch_CarrierIndex_r14_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_LTE_nprach_Periodicity_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_nprach_StartTime_r14_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_nprach_SubcarrierOffset_r14_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_nprach_NumSubcarriers_r14_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_nprach_SubcarrierMSG3_RangeStart_r14_constr_35 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_NumRepetitions_RA_r14_constr_40 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_StartSF_CSS_RA_r14_constr_57 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_Offset_RA_r14_constr_66 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_nprach_NumCBRA_StartSubcarriers_r14_constr_71 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_npdcch_CarrierIndex_r14_constr_88 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_Periodicity_r14_value2enum_3[] = {
	{ 0,	4,	"ms40" },
	{ 1,	4,	"ms80" },
	{ 2,	5,	"ms160" },
	{ 3,	5,	"ms240" },
	{ 4,	5,	"ms320" },
	{ 5,	5,	"ms640" },
	{ 6,	6,	"ms1280" },
	{ 7,	6,	"ms2560" }
};
static const unsigned int asn_MAP_LTE_nprach_Periodicity_r14_enum2value_3[] = {
	6,	/* ms1280(6) */
	2,	/* ms160(2) */
	3,	/* ms240(3) */
	7,	/* ms2560(7) */
	4,	/* ms320(4) */
	0,	/* ms40(0) */
	5,	/* ms640(5) */
	1	/* ms80(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_Periodicity_r14_specs_3 = {
	asn_MAP_LTE_nprach_Periodicity_r14_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_Periodicity_r14_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_Periodicity_r14_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_Periodicity_r14_3 = {
	"nprach-Periodicity-r14",
	"nprach-Periodicity-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_Periodicity_r14_tags_3,
	sizeof(asn_DEF_LTE_nprach_Periodicity_r14_tags_3)
		/sizeof(asn_DEF_LTE_nprach_Periodicity_r14_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_Periodicity_r14_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_Periodicity_r14_tags_3)
		/sizeof(asn_DEF_LTE_nprach_Periodicity_r14_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nprach_Periodicity_r14_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_Periodicity_r14_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_StartTime_r14_value2enum_12[] = {
	{ 0,	3,	"ms8" },
	{ 1,	4,	"ms16" },
	{ 2,	4,	"ms32" },
	{ 3,	4,	"ms64" },
	{ 4,	5,	"ms128" },
	{ 5,	5,	"ms256" },
	{ 6,	5,	"ms512" },
	{ 7,	6,	"ms1024" }
};
static const unsigned int asn_MAP_LTE_nprach_StartTime_r14_enum2value_12[] = {
	7,	/* ms1024(7) */
	4,	/* ms128(4) */
	1,	/* ms16(1) */
	5,	/* ms256(5) */
	2,	/* ms32(2) */
	6,	/* ms512(6) */
	3,	/* ms64(3) */
	0	/* ms8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_StartTime_r14_specs_12 = {
	asn_MAP_LTE_nprach_StartTime_r14_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_StartTime_r14_enum2value_12,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_StartTime_r14_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_StartTime_r14_12 = {
	"nprach-StartTime-r14",
	"nprach-StartTime-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_StartTime_r14_tags_12,
	sizeof(asn_DEF_LTE_nprach_StartTime_r14_tags_12)
		/sizeof(asn_DEF_LTE_nprach_StartTime_r14_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_StartTime_r14_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_StartTime_r14_tags_12)
		/sizeof(asn_DEF_LTE_nprach_StartTime_r14_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nprach_StartTime_r14_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_StartTime_r14_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_SubcarrierOffset_r14_value2enum_21[] = {
	{ 0,	2,	"n0" },
	{ 1,	3,	"n12" },
	{ 2,	3,	"n24" },
	{ 3,	3,	"n36" },
	{ 4,	2,	"n2" },
	{ 5,	3,	"n18" },
	{ 6,	3,	"n34" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_nprach_SubcarrierOffset_r14_enum2value_21[] = {
	0,	/* n0(0) */
	1,	/* n12(1) */
	5,	/* n18(5) */
	4,	/* n2(4) */
	2,	/* n24(2) */
	6,	/* n34(6) */
	3,	/* n36(3) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_SubcarrierOffset_r14_specs_21 = {
	asn_MAP_LTE_nprach_SubcarrierOffset_r14_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_SubcarrierOffset_r14_enum2value_21,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_SubcarrierOffset_r14_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_SubcarrierOffset_r14_21 = {
	"nprach-SubcarrierOffset-r14",
	"nprach-SubcarrierOffset-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_SubcarrierOffset_r14_tags_21,
	sizeof(asn_DEF_LTE_nprach_SubcarrierOffset_r14_tags_21)
		/sizeof(asn_DEF_LTE_nprach_SubcarrierOffset_r14_tags_21[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_SubcarrierOffset_r14_tags_21,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_SubcarrierOffset_r14_tags_21)
		/sizeof(asn_DEF_LTE_nprach_SubcarrierOffset_r14_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nprach_SubcarrierOffset_r14_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_SubcarrierOffset_r14_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_NumSubcarriers_r14_value2enum_30[] = {
	{ 0,	3,	"n12" },
	{ 1,	3,	"n24" },
	{ 2,	3,	"n36" },
	{ 3,	3,	"n48" }
};
static const unsigned int asn_MAP_LTE_nprach_NumSubcarriers_r14_enum2value_30[] = {
	0,	/* n12(0) */
	1,	/* n24(1) */
	2,	/* n36(2) */
	3	/* n48(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_NumSubcarriers_r14_specs_30 = {
	asn_MAP_LTE_nprach_NumSubcarriers_r14_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_NumSubcarriers_r14_enum2value_30,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_NumSubcarriers_r14_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_NumSubcarriers_r14_30 = {
	"nprach-NumSubcarriers-r14",
	"nprach-NumSubcarriers-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_NumSubcarriers_r14_tags_30,
	sizeof(asn_DEF_LTE_nprach_NumSubcarriers_r14_tags_30)
		/sizeof(asn_DEF_LTE_nprach_NumSubcarriers_r14_tags_30[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_NumSubcarriers_r14_tags_30,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_NumSubcarriers_r14_tags_30)
		/sizeof(asn_DEF_LTE_nprach_NumSubcarriers_r14_tags_30[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nprach_NumSubcarriers_r14_constr_30, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_NumSubcarriers_r14_specs_30	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_SubcarrierMSG3_RangeStart_r14_value2enum_35[] = {
	{ 0,	4,	"zero" },
	{ 1,	8,	"oneThird" },
	{ 2,	8,	"twoThird" },
	{ 3,	3,	"one" }
};
static const unsigned int asn_MAP_LTE_nprach_SubcarrierMSG3_RangeStart_r14_enum2value_35[] = {
	3,	/* one(3) */
	1,	/* oneThird(1) */
	2,	/* twoThird(2) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_SubcarrierMSG3_RangeStart_r14_specs_35 = {
	asn_MAP_LTE_nprach_SubcarrierMSG3_RangeStart_r14_value2enum_35,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_SubcarrierMSG3_RangeStart_r14_enum2value_35,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r14_tags_35[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r14_35 = {
	"nprach-SubcarrierMSG3-RangeStart-r14",
	"nprach-SubcarrierMSG3-RangeStart-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r14_tags_35,
	sizeof(asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r14_tags_35)
		/sizeof(asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r14_tags_35[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r14_tags_35,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r14_tags_35)
		/sizeof(asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r14_tags_35[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nprach_SubcarrierMSG3_RangeStart_r14_constr_35, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_SubcarrierMSG3_RangeStart_r14_specs_35	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_NumRepetitions_RA_r14_value2enum_40[] = {
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
static const unsigned int asn_MAP_LTE_npdcch_NumRepetitions_RA_r14_enum2value_40[] = {
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
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_NumRepetitions_RA_r14_specs_40 = {
	asn_MAP_LTE_npdcch_NumRepetitions_RA_r14_value2enum_40,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_NumRepetitions_RA_r14_enum2value_40,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_NumRepetitions_RA_r14_tags_40[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_NumRepetitions_RA_r14_40 = {
	"npdcch-NumRepetitions-RA-r14",
	"npdcch-NumRepetitions-RA-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_NumRepetitions_RA_r14_tags_40,
	sizeof(asn_DEF_LTE_npdcch_NumRepetitions_RA_r14_tags_40)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitions_RA_r14_tags_40[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_NumRepetitions_RA_r14_tags_40,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_NumRepetitions_RA_r14_tags_40)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitions_RA_r14_tags_40[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_NumRepetitions_RA_r14_constr_40, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_NumRepetitions_RA_r14_specs_40	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_StartSF_CSS_RA_r14_value2enum_57[] = {
	{ 0,	6,	"v1dot5" },
	{ 1,	2,	"v2" },
	{ 2,	2,	"v4" },
	{ 3,	2,	"v8" },
	{ 4,	3,	"v16" },
	{ 5,	3,	"v32" },
	{ 6,	3,	"v48" },
	{ 7,	3,	"v64" }
};
static const unsigned int asn_MAP_LTE_npdcch_StartSF_CSS_RA_r14_enum2value_57[] = {
	4,	/* v16(4) */
	0,	/* v1dot5(0) */
	1,	/* v2(1) */
	5,	/* v32(5) */
	2,	/* v4(2) */
	6,	/* v48(6) */
	7,	/* v64(7) */
	3	/* v8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_StartSF_CSS_RA_r14_specs_57 = {
	asn_MAP_LTE_npdcch_StartSF_CSS_RA_r14_value2enum_57,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_StartSF_CSS_RA_r14_enum2value_57,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_StartSF_CSS_RA_r14_tags_57[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_StartSF_CSS_RA_r14_57 = {
	"npdcch-StartSF-CSS-RA-r14",
	"npdcch-StartSF-CSS-RA-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_StartSF_CSS_RA_r14_tags_57,
	sizeof(asn_DEF_LTE_npdcch_StartSF_CSS_RA_r14_tags_57)
		/sizeof(asn_DEF_LTE_npdcch_StartSF_CSS_RA_r14_tags_57[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_StartSF_CSS_RA_r14_tags_57,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_StartSF_CSS_RA_r14_tags_57)
		/sizeof(asn_DEF_LTE_npdcch_StartSF_CSS_RA_r14_tags_57[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_StartSF_CSS_RA_r14_constr_57, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_StartSF_CSS_RA_r14_specs_57	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_Offset_RA_r14_value2enum_66[] = {
	{ 0,	4,	"zero" },
	{ 1,	9,	"oneEighth" },
	{ 2,	9,	"oneFourth" },
	{ 3,	11,	"threeEighth" }
};
static const unsigned int asn_MAP_LTE_npdcch_Offset_RA_r14_enum2value_66[] = {
	1,	/* oneEighth(1) */
	2,	/* oneFourth(2) */
	3,	/* threeEighth(3) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_Offset_RA_r14_specs_66 = {
	asn_MAP_LTE_npdcch_Offset_RA_r14_value2enum_66,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_Offset_RA_r14_enum2value_66,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_Offset_RA_r14_tags_66[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_Offset_RA_r14_66 = {
	"npdcch-Offset-RA-r14",
	"npdcch-Offset-RA-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_Offset_RA_r14_tags_66,
	sizeof(asn_DEF_LTE_npdcch_Offset_RA_r14_tags_66)
		/sizeof(asn_DEF_LTE_npdcch_Offset_RA_r14_tags_66[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_Offset_RA_r14_tags_66,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_Offset_RA_r14_tags_66)
		/sizeof(asn_DEF_LTE_npdcch_Offset_RA_r14_tags_66[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_Offset_RA_r14_constr_66, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_Offset_RA_r14_specs_66	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_NumCBRA_StartSubcarriers_r14_value2enum_71[] = {
	{ 0,	2,	"n8" },
	{ 1,	3,	"n10" },
	{ 2,	3,	"n11" },
	{ 3,	3,	"n12" },
	{ 4,	3,	"n20" },
	{ 5,	3,	"n22" },
	{ 6,	3,	"n23" },
	{ 7,	3,	"n24" },
	{ 8,	3,	"n32" },
	{ 9,	3,	"n34" },
	{ 10,	3,	"n35" },
	{ 11,	3,	"n36" },
	{ 12,	3,	"n40" },
	{ 13,	3,	"n44" },
	{ 14,	3,	"n46" },
	{ 15,	3,	"n48" }
};
static const unsigned int asn_MAP_LTE_nprach_NumCBRA_StartSubcarriers_r14_enum2value_71[] = {
	1,	/* n10(1) */
	2,	/* n11(2) */
	3,	/* n12(3) */
	4,	/* n20(4) */
	5,	/* n22(5) */
	6,	/* n23(6) */
	7,	/* n24(7) */
	8,	/* n32(8) */
	9,	/* n34(9) */
	10,	/* n35(10) */
	11,	/* n36(11) */
	12,	/* n40(12) */
	13,	/* n44(13) */
	14,	/* n46(14) */
	15,	/* n48(15) */
	0	/* n8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_NumCBRA_StartSubcarriers_r14_specs_71 = {
	asn_MAP_LTE_nprach_NumCBRA_StartSubcarriers_r14_value2enum_71,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_NumCBRA_StartSubcarriers_r14_enum2value_71,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r14_tags_71[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r14_71 = {
	"nprach-NumCBRA-StartSubcarriers-r14",
	"nprach-NumCBRA-StartSubcarriers-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r14_tags_71,
	sizeof(asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r14_tags_71)
		/sizeof(asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r14_tags_71[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r14_tags_71,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r14_tags_71)
		/sizeof(asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r14_tags_71[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nprach_NumCBRA_StartSubcarriers_r14_constr_71, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_NumCBRA_StartSubcarriers_r14_specs_71	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_nprach_Parameters_r14_2[] = {
	{ ATF_POINTER, 10, offsetof(struct LTE_NPRACH_Parameters_NB_r14__nprach_Parameters_r14, nprach_Periodicity_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_Periodicity_r14_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Periodicity-r14"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_NPRACH_Parameters_NB_r14__nprach_Parameters_r14, nprach_StartTime_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_StartTime_r14_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-StartTime-r14"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_NPRACH_Parameters_NB_r14__nprach_Parameters_r14, nprach_SubcarrierOffset_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_SubcarrierOffset_r14_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-SubcarrierOffset-r14"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_NPRACH_Parameters_NB_r14__nprach_Parameters_r14, nprach_NumSubcarriers_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_NumSubcarriers_r14_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-NumSubcarriers-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_NPRACH_Parameters_NB_r14__nprach_Parameters_r14, nprach_SubcarrierMSG3_RangeStart_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_SubcarrierMSG3_RangeStart_r14_35,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-SubcarrierMSG3-RangeStart-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_NPRACH_Parameters_NB_r14__nprach_Parameters_r14, npdcch_NumRepetitions_RA_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_NumRepetitions_RA_r14_40,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-NumRepetitions-RA-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_NPRACH_Parameters_NB_r14__nprach_Parameters_r14, npdcch_StartSF_CSS_RA_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_StartSF_CSS_RA_r14_57,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-StartSF-CSS-RA-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_NPRACH_Parameters_NB_r14__nprach_Parameters_r14, npdcch_Offset_RA_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_Offset_RA_r14_66,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-Offset-RA-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_NPRACH_Parameters_NB_r14__nprach_Parameters_r14, nprach_NumCBRA_StartSubcarriers_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_NumCBRA_StartSubcarriers_r14_71,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-NumCBRA-StartSubcarriers-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_NPRACH_Parameters_NB_r14__nprach_Parameters_r14, npdcch_CarrierIndex_r14),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_npdcch_CarrierIndex_r14_constr_88,  memb_LTE_npdcch_CarrierIndex_r14_constraint_2 },
		0, 0, /* No default value */
		"npdcch-CarrierIndex-r14"
		},
};
static const int asn_MAP_LTE_nprach_Parameters_r14_oms_2[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_LTE_nprach_Parameters_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_nprach_Parameters_r14_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nprach-Periodicity-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nprach-StartTime-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nprach-SubcarrierOffset-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nprach-NumSubcarriers-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* nprach-SubcarrierMSG3-RangeStart-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* npdcch-NumRepetitions-RA-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* npdcch-StartSF-CSS-RA-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* npdcch-Offset-RA-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* nprach-NumCBRA-StartSubcarriers-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* npdcch-CarrierIndex-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nprach_Parameters_r14_specs_2 = {
	sizeof(struct LTE_NPRACH_Parameters_NB_r14__nprach_Parameters_r14),
	offsetof(struct LTE_NPRACH_Parameters_NB_r14__nprach_Parameters_r14, _asn_ctx),
	asn_MAP_LTE_nprach_Parameters_r14_tag2el_2,
	10,	/* Count of tags in the map */
	asn_MAP_LTE_nprach_Parameters_r14_oms_2,	/* Optional members */
	10, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_Parameters_r14_2 = {
	"nprach-Parameters-r14",
	"nprach-Parameters-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nprach_Parameters_r14_tags_2,
	sizeof(asn_DEF_LTE_nprach_Parameters_r14_tags_2)
		/sizeof(asn_DEF_LTE_nprach_Parameters_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_Parameters_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_Parameters_r14_tags_2)
		/sizeof(asn_DEF_LTE_nprach_Parameters_r14_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_nprach_Parameters_r14_2,
	10,	/* Elements count */
	&asn_SPC_LTE_nprach_Parameters_r14_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_NPRACH_Parameters_NB_r14_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_NPRACH_Parameters_NB_r14, nprach_Parameters_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_nprach_Parameters_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Parameters-r14"
		},
};
static const int asn_MAP_LTE_NPRACH_Parameters_NB_r14_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_NPRACH_Parameters_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_NPRACH_Parameters_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nprach-Parameters-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_NPRACH_Parameters_NB_r14_specs_1 = {
	sizeof(struct LTE_NPRACH_Parameters_NB_r14),
	offsetof(struct LTE_NPRACH_Parameters_NB_r14, _asn_ctx),
	asn_MAP_LTE_NPRACH_Parameters_NB_r14_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_NPRACH_Parameters_NB_r14_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_NPRACH_Parameters_NB_r14 = {
	"NPRACH-Parameters-NB-r14",
	"NPRACH-Parameters-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_NPRACH_Parameters_NB_r14_tags_1,
	sizeof(asn_DEF_LTE_NPRACH_Parameters_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_NPRACH_Parameters_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_NPRACH_Parameters_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_NPRACH_Parameters_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_NPRACH_Parameters_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_NPRACH_Parameters_NB_r14_1,
	1,	/* Elements count */
	&asn_SPC_LTE_NPRACH_Parameters_NB_r14_specs_1	/* Additional specs */
};

