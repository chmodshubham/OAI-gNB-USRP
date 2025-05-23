/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SC-MTCH-Info-NB-r14.h"

static int
memb_LTE_dl_CarrierIndex_r14_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

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
memb_LTE_g_RNTI_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sc_mtch_NeighbourCell_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_dl_CarrierIndex_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_sc_mtch_CarrierConfig_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_NumRepetitions_SC_MTCH_r14_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_StartSF_SC_MTCH_r14_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_Offset_SC_MTCH_r14_constr_38 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_g_RNTI_r14_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sc_mtch_NeighbourCell_r14_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_sc_mtch_CarrierConfig_r14_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14, choice.dl_CarrierConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DL_CarrierConfigCommon_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierConfig-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14, choice.dl_CarrierIndex_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_dl_CarrierIndex_r14_constr_4,  memb_LTE_dl_CarrierIndex_r14_constraint_2 },
		0, 0, /* No default value */
		"dl-CarrierIndex-r14"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_sc_mtch_CarrierConfig_r14_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-CarrierConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-CarrierIndex-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_sc_mtch_CarrierConfig_r14_specs_2 = {
	sizeof(struct LTE_SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14),
	offsetof(struct LTE_SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14, _asn_ctx),
	offsetof(struct LTE_SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14, present),
	sizeof(((struct LTE_SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14 *)0)->present),
	asn_MAP_LTE_sc_mtch_CarrierConfig_r14_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_sc_mtch_CarrierConfig_r14_2 = {
	"sc-mtch-CarrierConfig-r14",
	"sc-mtch-CarrierConfig-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_sc_mtch_CarrierConfig_r14_constr_2, CHOICE_constraint },
	asn_MBR_LTE_sc_mtch_CarrierConfig_r14_2,
	2,	/* Elements count */
	&asn_SPC_LTE_sc_mtch_CarrierConfig_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_value2enum_9[] = {
	{ 0,	4,	"n680" },
	{ 1,	5,	"n2536" }
};
static const unsigned int asn_MAP_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_enum2value_9[] = {
	1,	/* n2536(1) */
	0	/* n680(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_specs_9 = {
	asn_MAP_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_enum2value_9,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_9 = {
	"npdcch-NPDSCH-MaxTBS-SC-MTCH-r14",
	"npdcch-NPDSCH-MaxTBS-SC-MTCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_tags_9,
	sizeof(asn_DEF_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_tags_9)
		/sizeof(asn_DEF_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_tags_9)
		/sizeof(asn_DEF_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_NumRepetitions_SC_MTCH_r14_value2enum_12[] = {
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
static const unsigned int asn_MAP_LTE_npdcch_NumRepetitions_SC_MTCH_r14_enum2value_12[] = {
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
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_NumRepetitions_SC_MTCH_r14_specs_12 = {
	asn_MAP_LTE_npdcch_NumRepetitions_SC_MTCH_r14_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_NumRepetitions_SC_MTCH_r14_enum2value_12,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_NumRepetitions_SC_MTCH_r14_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_NumRepetitions_SC_MTCH_r14_12 = {
	"npdcch-NumRepetitions-SC-MTCH-r14",
	"npdcch-NumRepetitions-SC-MTCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_NumRepetitions_SC_MTCH_r14_tags_12,
	sizeof(asn_DEF_LTE_npdcch_NumRepetitions_SC_MTCH_r14_tags_12)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitions_SC_MTCH_r14_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_NumRepetitions_SC_MTCH_r14_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_NumRepetitions_SC_MTCH_r14_tags_12)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitions_SC_MTCH_r14_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_NumRepetitions_SC_MTCH_r14_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_NumRepetitions_SC_MTCH_r14_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_StartSF_SC_MTCH_r14_value2enum_29[] = {
	{ 0,	6,	"v1dot5" },
	{ 1,	2,	"v2" },
	{ 2,	2,	"v4" },
	{ 3,	2,	"v8" },
	{ 4,	3,	"v16" },
	{ 5,	3,	"v32" },
	{ 6,	3,	"v48" },
	{ 7,	3,	"v64" }
};
static const unsigned int asn_MAP_LTE_npdcch_StartSF_SC_MTCH_r14_enum2value_29[] = {
	4,	/* v16(4) */
	0,	/* v1dot5(0) */
	1,	/* v2(1) */
	5,	/* v32(5) */
	2,	/* v4(2) */
	6,	/* v48(6) */
	7,	/* v64(7) */
	3	/* v8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_StartSF_SC_MTCH_r14_specs_29 = {
	asn_MAP_LTE_npdcch_StartSF_SC_MTCH_r14_value2enum_29,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_StartSF_SC_MTCH_r14_enum2value_29,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_StartSF_SC_MTCH_r14_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_StartSF_SC_MTCH_r14_29 = {
	"npdcch-StartSF-SC-MTCH-r14",
	"npdcch-StartSF-SC-MTCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_StartSF_SC_MTCH_r14_tags_29,
	sizeof(asn_DEF_LTE_npdcch_StartSF_SC_MTCH_r14_tags_29)
		/sizeof(asn_DEF_LTE_npdcch_StartSF_SC_MTCH_r14_tags_29[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_StartSF_SC_MTCH_r14_tags_29,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_StartSF_SC_MTCH_r14_tags_29)
		/sizeof(asn_DEF_LTE_npdcch_StartSF_SC_MTCH_r14_tags_29[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_StartSF_SC_MTCH_r14_constr_29, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_StartSF_SC_MTCH_r14_specs_29	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_Offset_SC_MTCH_r14_value2enum_38[] = {
	{ 0,	4,	"zero" },
	{ 1,	9,	"oneEighth" },
	{ 2,	10,	"oneQuarter" },
	{ 3,	11,	"threeEighth" },
	{ 4,	7,	"oneHalf" },
	{ 5,	10,	"fiveEighth" },
	{ 6,	12,	"threeQuarter" },
	{ 7,	11,	"sevenEighth" }
};
static const unsigned int asn_MAP_LTE_npdcch_Offset_SC_MTCH_r14_enum2value_38[] = {
	5,	/* fiveEighth(5) */
	1,	/* oneEighth(1) */
	4,	/* oneHalf(4) */
	2,	/* oneQuarter(2) */
	7,	/* sevenEighth(7) */
	3,	/* threeEighth(3) */
	6,	/* threeQuarter(6) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_Offset_SC_MTCH_r14_specs_38 = {
	asn_MAP_LTE_npdcch_Offset_SC_MTCH_r14_value2enum_38,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_Offset_SC_MTCH_r14_enum2value_38,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_Offset_SC_MTCH_r14_tags_38[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_Offset_SC_MTCH_r14_38 = {
	"npdcch-Offset-SC-MTCH-r14",
	"npdcch-Offset-SC-MTCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_Offset_SC_MTCH_r14_tags_38,
	sizeof(asn_DEF_LTE_npdcch_Offset_SC_MTCH_r14_tags_38)
		/sizeof(asn_DEF_LTE_npdcch_Offset_SC_MTCH_r14_tags_38[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_Offset_SC_MTCH_r14_tags_38,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_Offset_SC_MTCH_r14_tags_38)
		/sizeof(asn_DEF_LTE_npdcch_Offset_SC_MTCH_r14_tags_38[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_Offset_SC_MTCH_r14_constr_38, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_Offset_SC_MTCH_r14_specs_38	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SC_MTCH_Info_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_NB_r14, sc_mtch_CarrierConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_sc_mtch_CarrierConfig_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-mtch-CarrierConfig-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_NB_r14, mbmsSessionInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MBMSSessionInfo_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbmsSessionInfo-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_NB_r14, g_RNTI_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_g_RNTI_r14_constr_6,  memb_LTE_g_RNTI_r14_constraint_1 },
		0, 0, /* No default value */
		"g-RNTI-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SC_MTCH_Info_NB_r14, sc_mtch_SchedulingInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SC_MTCH_SchedulingInfo_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-mtch-SchedulingInfo-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SC_MTCH_Info_NB_r14, sc_mtch_NeighbourCell_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_sc_mtch_NeighbourCell_r14_constr_8,  memb_LTE_sc_mtch_NeighbourCell_r14_constraint_1 },
		0, 0, /* No default value */
		"sc-mtch-NeighbourCell-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_NB_r14, npdcch_NPDSCH_MaxTBS_SC_MTCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-NPDSCH-MaxTBS-SC-MTCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_NB_r14, npdcch_NumRepetitions_SC_MTCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_NumRepetitions_SC_MTCH_r14_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-NumRepetitions-SC-MTCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_NB_r14, npdcch_StartSF_SC_MTCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_StartSF_SC_MTCH_r14_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-StartSF-SC-MTCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_NB_r14, npdcch_Offset_SC_MTCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_Offset_SC_MTCH_r14_38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-Offset-SC-MTCH-r14"
		},
};
static const int asn_MAP_LTE_SC_MTCH_Info_NB_r14_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_SC_MTCH_Info_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SC_MTCH_Info_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sc-mtch-CarrierConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbmsSessionInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* g-RNTI-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sc-mtch-SchedulingInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sc-mtch-NeighbourCell-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* npdcch-NPDSCH-MaxTBS-SC-MTCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* npdcch-NumRepetitions-SC-MTCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* npdcch-StartSF-SC-MTCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* npdcch-Offset-SC-MTCH-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SC_MTCH_Info_NB_r14_specs_1 = {
	sizeof(struct LTE_SC_MTCH_Info_NB_r14),
	offsetof(struct LTE_SC_MTCH_Info_NB_r14, _asn_ctx),
	asn_MAP_LTE_SC_MTCH_Info_NB_r14_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_LTE_SC_MTCH_Info_NB_r14_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SC_MTCH_Info_NB_r14 = {
	"SC-MTCH-Info-NB-r14",
	"SC-MTCH-Info-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SC_MTCH_Info_NB_r14_tags_1,
	sizeof(asn_DEF_LTE_SC_MTCH_Info_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_SC_MTCH_Info_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SC_MTCH_Info_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SC_MTCH_Info_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_SC_MTCH_Info_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SC_MTCH_Info_NB_r14_1,
	9,	/* Elements count */
	&asn_SPC_LTE_SC_MTCH_Info_NB_r14_specs_1	/* Additional specs */
};

