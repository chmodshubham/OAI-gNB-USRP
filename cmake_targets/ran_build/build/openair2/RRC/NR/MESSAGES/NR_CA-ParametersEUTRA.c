/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_CA-ParametersEUTRA.h"

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
memb_NR_supportedNAICS_2CRS_AP_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
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
memb_NR_supportedBandwidthCombinationSetEUTRA_v1530_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_multipleTimingAdvance_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_simultaneousRx_Tx_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_additionalRx_Tx_PerformanceReq_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_ue_CA_PowerClass_N_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_supportedNAICS_2CRS_AP_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_supportedBandwidthCombinationSetEUTRA_v1530_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_multipleTimingAdvance_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_multipleTimingAdvance_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_multipleTimingAdvance_specs_2 = {
	asn_MAP_NR_multipleTimingAdvance_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_multipleTimingAdvance_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_multipleTimingAdvance_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_multipleTimingAdvance_2 = {
	"multipleTimingAdvance",
	"multipleTimingAdvance",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_multipleTimingAdvance_tags_2,
	sizeof(asn_DEF_NR_multipleTimingAdvance_tags_2)
		/sizeof(asn_DEF_NR_multipleTimingAdvance_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_multipleTimingAdvance_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_multipleTimingAdvance_tags_2)
		/sizeof(asn_DEF_NR_multipleTimingAdvance_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_multipleTimingAdvance_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_multipleTimingAdvance_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_simultaneousRx_Tx_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_simultaneousRx_Tx_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_simultaneousRx_Tx_specs_4 = {
	asn_MAP_NR_simultaneousRx_Tx_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_simultaneousRx_Tx_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_simultaneousRx_Tx_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_simultaneousRx_Tx_4 = {
	"simultaneousRx-Tx",
	"simultaneousRx-Tx",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_simultaneousRx_Tx_tags_4,
	sizeof(asn_DEF_NR_simultaneousRx_Tx_tags_4)
		/sizeof(asn_DEF_NR_simultaneousRx_Tx_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_simultaneousRx_Tx_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_simultaneousRx_Tx_tags_4)
		/sizeof(asn_DEF_NR_simultaneousRx_Tx_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_simultaneousRx_Tx_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_simultaneousRx_Tx_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_additionalRx_Tx_PerformanceReq_value2enum_7[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_additionalRx_Tx_PerformanceReq_enum2value_7[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_additionalRx_Tx_PerformanceReq_specs_7 = {
	asn_MAP_NR_additionalRx_Tx_PerformanceReq_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_additionalRx_Tx_PerformanceReq_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_additionalRx_Tx_PerformanceReq_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_additionalRx_Tx_PerformanceReq_7 = {
	"additionalRx-Tx-PerformanceReq",
	"additionalRx-Tx-PerformanceReq",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_additionalRx_Tx_PerformanceReq_tags_7,
	sizeof(asn_DEF_NR_additionalRx_Tx_PerformanceReq_tags_7)
		/sizeof(asn_DEF_NR_additionalRx_Tx_PerformanceReq_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_additionalRx_Tx_PerformanceReq_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_additionalRx_Tx_PerformanceReq_tags_7)
		/sizeof(asn_DEF_NR_additionalRx_Tx_PerformanceReq_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_NR_additionalRx_Tx_PerformanceReq_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_additionalRx_Tx_PerformanceReq_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_ue_CA_PowerClass_N_value2enum_9[] = {
	{ 0,	6,	"class2" }
};
static const unsigned int asn_MAP_NR_ue_CA_PowerClass_N_enum2value_9[] = {
	0	/* class2(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_ue_CA_PowerClass_N_specs_9 = {
	asn_MAP_NR_ue_CA_PowerClass_N_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_ue_CA_PowerClass_N_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_ue_CA_PowerClass_N_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ue_CA_PowerClass_N_9 = {
	"ue-CA-PowerClass-N",
	"ue-CA-PowerClass-N",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_ue_CA_PowerClass_N_tags_9,
	sizeof(asn_DEF_NR_ue_CA_PowerClass_N_tags_9)
		/sizeof(asn_DEF_NR_ue_CA_PowerClass_N_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_ue_CA_PowerClass_N_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_ue_CA_PowerClass_N_tags_9)
		/sizeof(asn_DEF_NR_ue_CA_PowerClass_N_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_NR_ue_CA_PowerClass_N_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_ue_CA_PowerClass_N_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_CA_ParametersEUTRA_1[] = {
	{ ATF_POINTER, 6, offsetof(struct NR_CA_ParametersEUTRA, multipleTimingAdvance),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_multipleTimingAdvance_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multipleTimingAdvance"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_CA_ParametersEUTRA, simultaneousRx_Tx),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_simultaneousRx_Tx_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"simultaneousRx-Tx"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_CA_ParametersEUTRA, supportedNAICS_2CRS_AP),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_supportedNAICS_2CRS_AP_constr_6,  memb_NR_supportedNAICS_2CRS_AP_constraint_1 },
		0, 0, /* No default value */
		"supportedNAICS-2CRS-AP"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_CA_ParametersEUTRA, additionalRx_Tx_PerformanceReq),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_additionalRx_Tx_PerformanceReq_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalRx-Tx-PerformanceReq"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_CA_ParametersEUTRA, ue_CA_PowerClass_N),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ue_CA_PowerClass_N_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CA-PowerClass-N"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_CA_ParametersEUTRA, supportedBandwidthCombinationSetEUTRA_v1530),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_supportedBandwidthCombinationSetEUTRA_v1530_constr_11,  memb_NR_supportedBandwidthCombinationSetEUTRA_v1530_constraint_1 },
		0, 0, /* No default value */
		"supportedBandwidthCombinationSetEUTRA-v1530"
		},
};
static const int asn_MAP_NR_CA_ParametersEUTRA_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_CA_ParametersEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CA_ParametersEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* multipleTimingAdvance */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* simultaneousRx-Tx */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* supportedNAICS-2CRS-AP */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* additionalRx-Tx-PerformanceReq */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ue-CA-PowerClass-N */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* supportedBandwidthCombinationSetEUTRA-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CA_ParametersEUTRA_specs_1 = {
	sizeof(struct NR_CA_ParametersEUTRA),
	offsetof(struct NR_CA_ParametersEUTRA, _asn_ctx),
	asn_MAP_NR_CA_ParametersEUTRA_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_CA_ParametersEUTRA_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CA_ParametersEUTRA = {
	"CA-ParametersEUTRA",
	"CA-ParametersEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CA_ParametersEUTRA_tags_1,
	sizeof(asn_DEF_NR_CA_ParametersEUTRA_tags_1)
		/sizeof(asn_DEF_NR_CA_ParametersEUTRA_tags_1[0]), /* 1 */
	asn_DEF_NR_CA_ParametersEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CA_ParametersEUTRA_tags_1)
		/sizeof(asn_DEF_NR_CA_ParametersEUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_CA_ParametersEUTRA_1,
	6,	/* Elements count */
	&asn_SPC_NR_CA_ParametersEUTRA_specs_1	/* Additional specs */
};

