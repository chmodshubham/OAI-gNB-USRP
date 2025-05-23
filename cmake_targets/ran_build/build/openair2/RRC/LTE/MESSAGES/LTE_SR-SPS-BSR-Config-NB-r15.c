/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SR-SPS-BSR-Config-NB-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_semiPersistSchedIntervalUL_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_SR_SPS_BSR_Config_NB_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_semiPersistSchedIntervalUL_r15_value2enum_5[] = {
	{ 0,	5,	"sf128" },
	{ 1,	5,	"sf256" },
	{ 2,	5,	"sf512" },
	{ 3,	6,	"sf1024" },
	{ 4,	6,	"sf1280" },
	{ 5,	6,	"sf2048" },
	{ 6,	6,	"sf2560" },
	{ 7,	6,	"sf5120" }
};
static const unsigned int asn_MAP_LTE_semiPersistSchedIntervalUL_r15_enum2value_5[] = {
	3,	/* sf1024(3) */
	0,	/* sf128(0) */
	4,	/* sf1280(4) */
	5,	/* sf2048(5) */
	1,	/* sf256(1) */
	6,	/* sf2560(6) */
	2,	/* sf512(2) */
	7	/* sf5120(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_semiPersistSchedIntervalUL_r15_specs_5 = {
	asn_MAP_LTE_semiPersistSchedIntervalUL_r15_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_semiPersistSchedIntervalUL_r15_enum2value_5,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_semiPersistSchedIntervalUL_r15_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_semiPersistSchedIntervalUL_r15_5 = {
	"semiPersistSchedIntervalUL-r15",
	"semiPersistSchedIntervalUL-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_semiPersistSchedIntervalUL_r15_tags_5,
	sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_r15_tags_5)
		/sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_r15_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_semiPersistSchedIntervalUL_r15_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_r15_tags_5)
		/sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_r15_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_semiPersistSchedIntervalUL_r15_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_semiPersistSchedIntervalUL_r15_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SR_SPS_BSR_Config_NB_r15__setup, semiPersistSchedC_RNTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"semiPersistSchedC-RNTI-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SR_SPS_BSR_Config_NB_r15__setup, semiPersistSchedIntervalUL_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_semiPersistSchedIntervalUL_r15_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"semiPersistSchedIntervalUL-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* semiPersistSchedC-RNTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* semiPersistSchedIntervalUL-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_SR_SPS_BSR_Config_NB_r15__setup),
	offsetof(struct LTE_SR_SPS_BSR_Config_NB_r15__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
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
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SR_SPS_BSR_Config_NB_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SR_SPS_BSR_Config_NB_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SR_SPS_BSR_Config_NB_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SR_SPS_BSR_Config_NB_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_SR_SPS_BSR_Config_NB_r15_specs_1 = {
	sizeof(struct LTE_SR_SPS_BSR_Config_NB_r15),
	offsetof(struct LTE_SR_SPS_BSR_Config_NB_r15, _asn_ctx),
	offsetof(struct LTE_SR_SPS_BSR_Config_NB_r15, present),
	sizeof(((struct LTE_SR_SPS_BSR_Config_NB_r15 *)0)->present),
	asn_MAP_LTE_SR_SPS_BSR_Config_NB_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SR_SPS_BSR_Config_NB_r15 = {
	"SR-SPS-BSR-Config-NB-r15",
	"SR-SPS-BSR-Config-NB-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_SR_SPS_BSR_Config_NB_r15_constr_1, CHOICE_constraint },
	asn_MBR_LTE_SR_SPS_BSR_Config_NB_r15_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SR_SPS_BSR_Config_NB_r15_specs_1	/* Additional specs */
};

