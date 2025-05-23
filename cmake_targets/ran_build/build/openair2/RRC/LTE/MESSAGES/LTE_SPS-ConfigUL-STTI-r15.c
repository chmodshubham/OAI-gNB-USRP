/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SPS-ConfigUL-STTI-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_p0_NominalSPUSCH_Persistent_r15_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -126 && value <= 24)) {
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
memb_LTE_p0_UE_SPUSCH_Persistent_r15_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= 7)) {
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
static int
memb_LTE_p0_NominalSPUSCH_PersistentSubframeSet2_r15_constraint_33(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -126 && value <= 24)) {
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
memb_LTE_p0_UE_SPUSCH_PersistentSubframeSet2_r15_constraint_33(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= 7)) {
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
memb_LTE_numberOfConfUL_SPS_Processes_STTI_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 12)) {
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
memb_LTE_sTTI_StartTimeUL_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 5)) {
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
memb_LTE_harq_ProcID_offset_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_LTE_semiPersistSchedIntervalUL_STTI_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_implicitReleaseAfter_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_p0_NominalSPUSCH_Persistent_r15_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_p0_UE_SPUSCH_Persistent_r15_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4, -8,  7 }	/* (-8..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_twoIntervalsConfig_r15_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_p0_NominalSPUSCH_PersistentSubframeSet2_r15_constr_34 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_p0_UE_SPUSCH_PersistentSubframeSet2_r15_constr_35 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4, -8,  7 }	/* (-8..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_p0_PersistentSubframeSet2_r15_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_cyclicShiftSPS_sTTI_r15_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_rv_SPS_STTI_UL_Repetitions_r15_constr_50 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_constr_55 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_constr_58 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_numberOfConfUL_SPS_Processes_STTI_r15_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (1..12) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sTTI_StartTimeUL_r15_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_harq_ProcID_offset_r15_constr_49 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_SPS_ConfigUL_STTI_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_semiPersistSchedIntervalUL_STTI_r15_value2enum_4[] = {
	{ 0,	5,	"sTTI1" },
	{ 1,	5,	"sTTI2" },
	{ 2,	5,	"sTTI3" },
	{ 3,	5,	"sTTI4" },
	{ 4,	5,	"sTTI6" },
	{ 5,	5,	"sTTI8" },
	{ 6,	6,	"sTTI12" },
	{ 7,	6,	"sTTI16" },
	{ 8,	6,	"sTTI20" },
	{ 9,	6,	"sTTI40" },
	{ 10,	6,	"sTTI60" },
	{ 11,	6,	"sTTI80" },
	{ 12,	7,	"sTTI120" },
	{ 13,	7,	"sTTI240" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_semiPersistSchedIntervalUL_STTI_r15_enum2value_4[] = {
	0,	/* sTTI1(0) */
	6,	/* sTTI12(6) */
	12,	/* sTTI120(12) */
	7,	/* sTTI16(7) */
	1,	/* sTTI2(1) */
	8,	/* sTTI20(8) */
	13,	/* sTTI240(13) */
	2,	/* sTTI3(2) */
	3,	/* sTTI4(3) */
	9,	/* sTTI40(9) */
	4,	/* sTTI6(4) */
	10,	/* sTTI60(10) */
	5,	/* sTTI8(5) */
	11,	/* sTTI80(11) */
	15,	/* spare1(15) */
	14	/* spare2(14) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_semiPersistSchedIntervalUL_STTI_r15_specs_4 = {
	asn_MAP_LTE_semiPersistSchedIntervalUL_STTI_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_semiPersistSchedIntervalUL_STTI_r15_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_semiPersistSchedIntervalUL_STTI_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_semiPersistSchedIntervalUL_STTI_r15_4 = {
	"semiPersistSchedIntervalUL-STTI-r15",
	"semiPersistSchedIntervalUL-STTI-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_semiPersistSchedIntervalUL_STTI_r15_tags_4,
	sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_STTI_r15_tags_4)
		/sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_STTI_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_semiPersistSchedIntervalUL_STTI_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_STTI_r15_tags_4)
		/sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_STTI_r15_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_semiPersistSchedIntervalUL_STTI_r15_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_semiPersistSchedIntervalUL_STTI_r15_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_implicitReleaseAfter_value2enum_21[] = {
	{ 0,	2,	"e2" },
	{ 1,	2,	"e3" },
	{ 2,	2,	"e4" },
	{ 3,	2,	"e8" }
};
static const unsigned int asn_MAP_LTE_implicitReleaseAfter_enum2value_21[] = {
	0,	/* e2(0) */
	1,	/* e3(1) */
	2,	/* e4(2) */
	3	/* e8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_implicitReleaseAfter_specs_21 = {
	asn_MAP_LTE_implicitReleaseAfter_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_implicitReleaseAfter_enum2value_21,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_implicitReleaseAfter_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_implicitReleaseAfter_21 = {
	"implicitReleaseAfter",
	"implicitReleaseAfter",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_implicitReleaseAfter_tags_21,
	sizeof(asn_DEF_LTE_implicitReleaseAfter_tags_21)
		/sizeof(asn_DEF_LTE_implicitReleaseAfter_tags_21[0]) - 1, /* 1 */
	asn_DEF_LTE_implicitReleaseAfter_tags_21,	/* Same as above */
	sizeof(asn_DEF_LTE_implicitReleaseAfter_tags_21)
		/sizeof(asn_DEF_LTE_implicitReleaseAfter_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_implicitReleaseAfter_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_implicitReleaseAfter_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_p0_Persistent_r15_26[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_Persistent_r15, p0_NominalSPUSCH_Persistent_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p0_NominalSPUSCH_Persistent_r15_constr_27,  memb_LTE_p0_NominalSPUSCH_Persistent_r15_constraint_26 },
		0, 0, /* No default value */
		"p0-NominalSPUSCH-Persistent-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_Persistent_r15, p0_UE_SPUSCH_Persistent_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p0_UE_SPUSCH_Persistent_r15_constr_28,  memb_LTE_p0_UE_SPUSCH_Persistent_r15_constraint_26 },
		0, 0, /* No default value */
		"p0-UE-SPUSCH-Persistent-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_p0_Persistent_r15_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_p0_Persistent_r15_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-NominalSPUSCH-Persistent-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* p0-UE-SPUSCH-Persistent-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_p0_Persistent_r15_specs_26 = {
	sizeof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_Persistent_r15),
	offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_Persistent_r15, _asn_ctx),
	asn_MAP_LTE_p0_Persistent_r15_tag2el_26,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_p0_Persistent_r15_26 = {
	"p0-Persistent-r15",
	"p0-Persistent-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_p0_Persistent_r15_tags_26,
	sizeof(asn_DEF_LTE_p0_Persistent_r15_tags_26)
		/sizeof(asn_DEF_LTE_p0_Persistent_r15_tags_26[0]) - 1, /* 1 */
	asn_DEF_LTE_p0_Persistent_r15_tags_26,	/* Same as above */
	sizeof(asn_DEF_LTE_p0_Persistent_r15_tags_26)
		/sizeof(asn_DEF_LTE_p0_Persistent_r15_tags_26[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_p0_Persistent_r15_26,
	2,	/* Elements count */
	&asn_SPC_LTE_p0_Persistent_r15_specs_26	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_twoIntervalsConfig_r15_value2enum_29[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_twoIntervalsConfig_r15_enum2value_29[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_twoIntervalsConfig_r15_specs_29 = {
	asn_MAP_LTE_twoIntervalsConfig_r15_value2enum_29,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_twoIntervalsConfig_r15_enum2value_29,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_twoIntervalsConfig_r15_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_twoIntervalsConfig_r15_29 = {
	"twoIntervalsConfig-r15",
	"twoIntervalsConfig-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_twoIntervalsConfig_r15_tags_29,
	sizeof(asn_DEF_LTE_twoIntervalsConfig_r15_tags_29)
		/sizeof(asn_DEF_LTE_twoIntervalsConfig_r15_tags_29[0]) - 1, /* 1 */
	asn_DEF_LTE_twoIntervalsConfig_r15_tags_29,	/* Same as above */
	sizeof(asn_DEF_LTE_twoIntervalsConfig_r15_tags_29)
		/sizeof(asn_DEF_LTE_twoIntervalsConfig_r15_tags_29[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_twoIntervalsConfig_r15_constr_29, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_twoIntervalsConfig_r15_specs_29	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_33[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15__setup, p0_NominalSPUSCH_PersistentSubframeSet2_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p0_NominalSPUSCH_PersistentSubframeSet2_r15_constr_34,  memb_LTE_p0_NominalSPUSCH_PersistentSubframeSet2_r15_constraint_33 },
		0, 0, /* No default value */
		"p0-NominalSPUSCH-PersistentSubframeSet2-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15__setup, p0_UE_SPUSCH_PersistentSubframeSet2_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p0_UE_SPUSCH_PersistentSubframeSet2_r15_constr_35,  memb_LTE_p0_UE_SPUSCH_PersistentSubframeSet2_r15_constraint_33 },
		0, 0, /* No default value */
		"p0-UE-SPUSCH-PersistentSubframeSet2-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_33[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_33[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-NominalSPUSCH-PersistentSubframeSet2-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* p0-UE-SPUSCH-PersistentSubframeSet2-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_33 = {
	sizeof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15__setup),
	offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_33,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_33 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_33,
	sizeof(asn_DEF_LTE_setup_tags_33)
		/sizeof(asn_DEF_LTE_setup_tags_33[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_33,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_33)
		/sizeof(asn_DEF_LTE_setup_tags_33[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_33,
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_p0_PersistentSubframeSet2_r15_31[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_33,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_p0_PersistentSubframeSet2_r15_tag2el_31[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_p0_PersistentSubframeSet2_r15_specs_31 = {
	sizeof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15),
	offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15, _asn_ctx),
	offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15, present),
	sizeof(((struct LTE_SPS_ConfigUL_STTI_r15__setup__p0_PersistentSubframeSet2_r15 *)0)->present),
	asn_MAP_LTE_p0_PersistentSubframeSet2_r15_tag2el_31,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_p0_PersistentSubframeSet2_r15_31 = {
	"p0-PersistentSubframeSet2-r15",
	"p0-PersistentSubframeSet2-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_p0_PersistentSubframeSet2_r15_constr_31, CHOICE_constraint },
	asn_MBR_LTE_p0_PersistentSubframeSet2_r15_31,
	2,	/* Elements count */
	&asn_SPC_LTE_p0_PersistentSubframeSet2_r15_specs_31	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_cyclicShiftSPS_sTTI_r15_value2enum_39[] = {
	{ 0,	3,	"cs0" },
	{ 1,	3,	"cs1" },
	{ 2,	3,	"cs2" },
	{ 3,	3,	"cs3" },
	{ 4,	3,	"cs4" },
	{ 5,	3,	"cs5" },
	{ 6,	3,	"cs6" },
	{ 7,	3,	"cs7" }
};
static const unsigned int asn_MAP_LTE_cyclicShiftSPS_sTTI_r15_enum2value_39[] = {
	0,	/* cs0(0) */
	1,	/* cs1(1) */
	2,	/* cs2(2) */
	3,	/* cs3(3) */
	4,	/* cs4(4) */
	5,	/* cs5(5) */
	6,	/* cs6(6) */
	7	/* cs7(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_cyclicShiftSPS_sTTI_r15_specs_39 = {
	asn_MAP_LTE_cyclicShiftSPS_sTTI_r15_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_cyclicShiftSPS_sTTI_r15_enum2value_39,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_cyclicShiftSPS_sTTI_r15_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cyclicShiftSPS_sTTI_r15_39 = {
	"cyclicShiftSPS-sTTI-r15",
	"cyclicShiftSPS-sTTI-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_cyclicShiftSPS_sTTI_r15_tags_39,
	sizeof(asn_DEF_LTE_cyclicShiftSPS_sTTI_r15_tags_39)
		/sizeof(asn_DEF_LTE_cyclicShiftSPS_sTTI_r15_tags_39[0]) - 1, /* 1 */
	asn_DEF_LTE_cyclicShiftSPS_sTTI_r15_tags_39,	/* Same as above */
	sizeof(asn_DEF_LTE_cyclicShiftSPS_sTTI_r15_tags_39)
		/sizeof(asn_DEF_LTE_cyclicShiftSPS_sTTI_r15_tags_39[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_cyclicShiftSPS_sTTI_r15_constr_39, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_cyclicShiftSPS_sTTI_r15_specs_39	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_rv_SPS_STTI_UL_Repetitions_r15_value2enum_50[] = {
	{ 0,	8,	"ulrvseq1" },
	{ 1,	8,	"ulrvseq2" },
	{ 2,	8,	"ulrvseq3" }
};
static const unsigned int asn_MAP_LTE_rv_SPS_STTI_UL_Repetitions_r15_enum2value_50[] = {
	0,	/* ulrvseq1(0) */
	1,	/* ulrvseq2(1) */
	2	/* ulrvseq3(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_rv_SPS_STTI_UL_Repetitions_r15_specs_50 = {
	asn_MAP_LTE_rv_SPS_STTI_UL_Repetitions_r15_value2enum_50,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_rv_SPS_STTI_UL_Repetitions_r15_enum2value_50,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_rv_SPS_STTI_UL_Repetitions_r15_tags_50[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rv_SPS_STTI_UL_Repetitions_r15_50 = {
	"rv-SPS-STTI-UL-Repetitions-r15",
	"rv-SPS-STTI-UL-Repetitions-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_rv_SPS_STTI_UL_Repetitions_r15_tags_50,
	sizeof(asn_DEF_LTE_rv_SPS_STTI_UL_Repetitions_r15_tags_50)
		/sizeof(asn_DEF_LTE_rv_SPS_STTI_UL_Repetitions_r15_tags_50[0]) - 1, /* 1 */
	asn_DEF_LTE_rv_SPS_STTI_UL_Repetitions_r15_tags_50,	/* Same as above */
	sizeof(asn_DEF_LTE_rv_SPS_STTI_UL_Repetitions_r15_tags_50)
		/sizeof(asn_DEF_LTE_rv_SPS_STTI_UL_Repetitions_r15_tags_50[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_rv_SPS_STTI_UL_Repetitions_r15_constr_50, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_rv_SPS_STTI_UL_Repetitions_r15_specs_50	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_value2enum_55[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n12" }
};
static const unsigned int asn_MAP_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_enum2value_55[] = {
	1,	/* n12(1) */
	0	/* n6(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_specs_55 = {
	asn_MAP_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_value2enum_55,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_enum2value_55,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_tags_55[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_55 = {
	"tbs-scalingFactorSubslotSPS-UL-Repetitions-r15",
	"tbs-scalingFactorSubslotSPS-UL-Repetitions-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_tags_55,
	sizeof(asn_DEF_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_tags_55)
		/sizeof(asn_DEF_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_tags_55[0]) - 1, /* 1 */
	asn_DEF_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_tags_55,	/* Same as above */
	sizeof(asn_DEF_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_tags_55)
		/sizeof(asn_DEF_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_tags_55[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_constr_55, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_specs_55	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_value2enum_58[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n6" }
};
static const unsigned int asn_MAP_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_enum2value_58[] = {
	0,	/* n2(0) */
	1,	/* n3(1) */
	2,	/* n4(2) */
	3	/* n6(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_specs_58 = {
	asn_MAP_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_value2enum_58,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_enum2value_58,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_tags_58[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_58 = {
	"totalNumberPUSCH-SPS-STTI-UL-Repetitions-r15",
	"totalNumberPUSCH-SPS-STTI-UL-Repetitions-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_tags_58,
	sizeof(asn_DEF_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_tags_58)
		/sizeof(asn_DEF_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_tags_58[0]) - 1, /* 1 */
	asn_DEF_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_tags_58,	/* Same as above */
	sizeof(asn_DEF_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_tags_58)
		/sizeof(asn_DEF_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_tags_58[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_constr_58, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_specs_58	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, semiPersistSchedIntervalUL_STTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_semiPersistSchedIntervalUL_STTI_r15_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"semiPersistSchedIntervalUL-STTI-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, implicitReleaseAfter),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_implicitReleaseAfter_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"implicitReleaseAfter"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, p0_Persistent_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_p0_Persistent_r15_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p0-Persistent-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, twoIntervalsConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_twoIntervalsConfig_r15_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoIntervalsConfig-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, p0_PersistentSubframeSet2_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_p0_PersistentSubframeSet2_r15_31,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p0-PersistentSubframeSet2-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, numberOfConfUL_SPS_Processes_STTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_numberOfConfUL_SPS_Processes_STTI_r15_constr_36,  memb_LTE_numberOfConfUL_SPS_Processes_STTI_r15_constraint_3 },
		0, 0, /* No default value */
		"numberOfConfUL-SPS-Processes-STTI-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, sTTI_StartTimeUL_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sTTI_StartTimeUL_r15_constr_37,  memb_LTE_sTTI_StartTimeUL_r15_constraint_3 },
		0, 0, /* No default value */
		"sTTI-StartTimeUL-r15"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, tpc_PDCCH_ConfigPUSCH_SPS_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_TPC_PDCCH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tpc-PDCCH-ConfigPUSCH-SPS-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, cyclicShiftSPS_sTTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_cyclicShiftSPS_sTTI_r15_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cyclicShiftSPS-sTTI-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, ifdma_Config_SPS_r15),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ifdma-Config-SPS-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, harq_ProcID_offset_r15),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_harq_ProcID_offset_r15_constr_49,  memb_LTE_harq_ProcID_offset_r15_constraint_3 },
		0, 0, /* No default value */
		"harq-ProcID-offset-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, rv_SPS_STTI_UL_Repetitions_r15),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_rv_SPS_STTI_UL_Repetitions_r15_50,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rv-SPS-STTI-UL-Repetitions-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, sps_ConfigIndex_r15),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SPS_ConfigIndex_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-ConfigIndex-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, tbs_scalingFactorSubslotSPS_UL_Repetitions_r15),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_tbs_scalingFactorSubslotSPS_UL_Repetitions_r15_55,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tbs-scalingFactorSubslotSPS-UL-Repetitions-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_totalNumberPUSCH_SPS_STTI_UL_Repetitions_r15_58,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"totalNumberPUSCH-SPS-STTI-UL-Repetitions-r15"
		},
};
static const int asn_MAP_LTE_setup_oms_3[] = { 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* semiPersistSchedIntervalUL-STTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* implicitReleaseAfter */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p0-Persistent-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* twoIntervalsConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* p0-PersistentSubframeSet2-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* numberOfConfUL-SPS-Processes-STTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sTTI-StartTimeUL-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* tpc-PDCCH-ConfigPUSCH-SPS-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* cyclicShiftSPS-sTTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ifdma-Config-SPS-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* harq-ProcID-offset-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* rv-SPS-STTI-UL-Repetitions-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* sps-ConfigIndex-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* tbs-scalingFactorSubslotSPS-UL-Repetitions-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 } /* totalNumberPUSCH-SPS-STTI-UL-Repetitions-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_SPS_ConfigUL_STTI_r15__setup),
	offsetof(struct LTE_SPS_ConfigUL_STTI_r15__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	15,	/* Count of tags in the map */
	asn_MAP_LTE_setup_oms_3,	/* Optional members */
	12, 0,	/* Root/Additions */
	15,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_3,
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_3,
	15,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SPS_ConfigUL_STTI_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL_STTI_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL_STTI_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SPS_ConfigUL_STTI_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_SPS_ConfigUL_STTI_r15_specs_1 = {
	sizeof(struct LTE_SPS_ConfigUL_STTI_r15),
	offsetof(struct LTE_SPS_ConfigUL_STTI_r15, _asn_ctx),
	offsetof(struct LTE_SPS_ConfigUL_STTI_r15, present),
	sizeof(((struct LTE_SPS_ConfigUL_STTI_r15 *)0)->present),
	asn_MAP_LTE_SPS_ConfigUL_STTI_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SPS_ConfigUL_STTI_r15 = {
	"SPS-ConfigUL-STTI-r15",
	"SPS-ConfigUL-STTI-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_SPS_ConfigUL_STTI_r15_constr_1, CHOICE_constraint },
	asn_MBR_LTE_SPS_ConfigUL_STTI_r15_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SPS_ConfigUL_STTI_r15_specs_1	/* Additional specs */
};

