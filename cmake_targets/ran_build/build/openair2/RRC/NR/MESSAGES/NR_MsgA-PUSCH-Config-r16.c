/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_MsgA-PUSCH-Config-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_msgA_DataScramblingIndex_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
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
memb_NR_msgA_DeltaPreamble_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_msgA_TransformPrecoder_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_msgA_DataScramblingIndex_r16_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_msgA_DeltaPreamble_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -1,  6 }	/* (-1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_msgA_TransformPrecoder_r16_value2enum_4[] = {
	{ 0,	7,	"enabled" },
	{ 1,	8,	"disabled" }
};
static const unsigned int asn_MAP_NR_msgA_TransformPrecoder_r16_enum2value_4[] = {
	1,	/* disabled(1) */
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_msgA_TransformPrecoder_r16_specs_4 = {
	asn_MAP_NR_msgA_TransformPrecoder_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_msgA_TransformPrecoder_r16_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_msgA_TransformPrecoder_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_msgA_TransformPrecoder_r16_4 = {
	"msgA-TransformPrecoder-r16",
	"msgA-TransformPrecoder-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_msgA_TransformPrecoder_r16_tags_4,
	sizeof(asn_DEF_NR_msgA_TransformPrecoder_r16_tags_4)
		/sizeof(asn_DEF_NR_msgA_TransformPrecoder_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_msgA_TransformPrecoder_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_msgA_TransformPrecoder_r16_tags_4)
		/sizeof(asn_DEF_NR_msgA_TransformPrecoder_r16_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_msgA_TransformPrecoder_r16_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_msgA_TransformPrecoder_r16_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_MsgA_PUSCH_Config_r16_1[] = {
	{ ATF_POINTER, 5, offsetof(struct NR_MsgA_PUSCH_Config_r16, msgA_PUSCH_ResourceGroupA_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MsgA_PUSCH_Resource_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgA-PUSCH-ResourceGroupA-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_MsgA_PUSCH_Config_r16, msgA_PUSCH_ResourceGroupB_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MsgA_PUSCH_Resource_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgA-PUSCH-ResourceGroupB-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_MsgA_PUSCH_Config_r16, msgA_TransformPrecoder_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_msgA_TransformPrecoder_r16_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgA-TransformPrecoder-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_MsgA_PUSCH_Config_r16, msgA_DataScramblingIndex_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_msgA_DataScramblingIndex_r16_constr_7,  memb_NR_msgA_DataScramblingIndex_r16_constraint_1 },
		0, 0, /* No default value */
		"msgA-DataScramblingIndex-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MsgA_PUSCH_Config_r16, msgA_DeltaPreamble_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_msgA_DeltaPreamble_r16_constr_8,  memb_NR_msgA_DeltaPreamble_r16_constraint_1 },
		0, 0, /* No default value */
		"msgA-DeltaPreamble-r16"
		},
};
static const int asn_MAP_NR_MsgA_PUSCH_Config_r16_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NR_MsgA_PUSCH_Config_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MsgA_PUSCH_Config_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msgA-PUSCH-ResourceGroupA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* msgA-PUSCH-ResourceGroupB-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* msgA-TransformPrecoder-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* msgA-DataScramblingIndex-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* msgA-DeltaPreamble-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MsgA_PUSCH_Config_r16_specs_1 = {
	sizeof(struct NR_MsgA_PUSCH_Config_r16),
	offsetof(struct NR_MsgA_PUSCH_Config_r16, _asn_ctx),
	asn_MAP_NR_MsgA_PUSCH_Config_r16_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NR_MsgA_PUSCH_Config_r16_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MsgA_PUSCH_Config_r16 = {
	"MsgA-PUSCH-Config-r16",
	"MsgA-PUSCH-Config-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MsgA_PUSCH_Config_r16_tags_1,
	sizeof(asn_DEF_NR_MsgA_PUSCH_Config_r16_tags_1)
		/sizeof(asn_DEF_NR_MsgA_PUSCH_Config_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_MsgA_PUSCH_Config_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MsgA_PUSCH_Config_r16_tags_1)
		/sizeof(asn_DEF_NR_MsgA_PUSCH_Config_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_MsgA_PUSCH_Config_r16_1,
	5,	/* Elements count */
	&asn_SPC_NR_MsgA_PUSCH_Config_r16_specs_1	/* Additional specs */
};

