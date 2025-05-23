/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_DRX-Config-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_drx_RetransmissionTimerShortTTI_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_drx_UL_RetransmissionTimerShortTTI_r15_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  16 }	/* (0..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_drx_RetransmissionTimerShortTTI_r15_value2enum_2[] = {
	{ 0,	5,	"tti10" },
	{ 1,	5,	"tti20" },
	{ 2,	5,	"tti40" },
	{ 3,	5,	"tti64" },
	{ 4,	5,	"tti80" },
	{ 5,	5,	"tti96" },
	{ 6,	6,	"tti112" },
	{ 7,	6,	"tti128" },
	{ 8,	6,	"tti160" },
	{ 9,	6,	"tti320" }
};
static const unsigned int asn_MAP_LTE_drx_RetransmissionTimerShortTTI_r15_enum2value_2[] = {
	0,	/* tti10(0) */
	6,	/* tti112(6) */
	7,	/* tti128(7) */
	8,	/* tti160(8) */
	1,	/* tti20(1) */
	9,	/* tti320(9) */
	2,	/* tti40(2) */
	3,	/* tti64(3) */
	4,	/* tti80(4) */
	5	/* tti96(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_drx_RetransmissionTimerShortTTI_r15_specs_2 = {
	asn_MAP_LTE_drx_RetransmissionTimerShortTTI_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_drx_RetransmissionTimerShortTTI_r15_enum2value_2,	/* N => "tag"; sorted by N */
	10,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_drx_RetransmissionTimerShortTTI_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_drx_RetransmissionTimerShortTTI_r15_2 = {
	"drx-RetransmissionTimerShortTTI-r15",
	"drx-RetransmissionTimerShortTTI-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_drx_RetransmissionTimerShortTTI_r15_tags_2,
	sizeof(asn_DEF_LTE_drx_RetransmissionTimerShortTTI_r15_tags_2)
		/sizeof(asn_DEF_LTE_drx_RetransmissionTimerShortTTI_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_drx_RetransmissionTimerShortTTI_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_drx_RetransmissionTimerShortTTI_r15_tags_2)
		/sizeof(asn_DEF_LTE_drx_RetransmissionTimerShortTTI_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_drx_RetransmissionTimerShortTTI_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_drx_RetransmissionTimerShortTTI_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_drx_UL_RetransmissionTimerShortTTI_r15_value2enum_13[] = {
	{ 0,	4,	"tti0" },
	{ 1,	4,	"tti1" },
	{ 2,	4,	"tti2" },
	{ 3,	4,	"tti4" },
	{ 4,	4,	"tti6" },
	{ 5,	4,	"tti8" },
	{ 6,	5,	"tti16" },
	{ 7,	5,	"tti24" },
	{ 8,	5,	"tti33" },
	{ 9,	5,	"tti40" },
	{ 10,	5,	"tti64" },
	{ 11,	5,	"tti80" },
	{ 12,	5,	"tti96" },
	{ 13,	6,	"tti112" },
	{ 14,	6,	"tti128" },
	{ 15,	6,	"tti160" },
	{ 16,	6,	"tti320" }
};
static const unsigned int asn_MAP_LTE_drx_UL_RetransmissionTimerShortTTI_r15_enum2value_13[] = {
	0,	/* tti0(0) */
	1,	/* tti1(1) */
	13,	/* tti112(13) */
	14,	/* tti128(14) */
	6,	/* tti16(6) */
	15,	/* tti160(15) */
	2,	/* tti2(2) */
	7,	/* tti24(7) */
	16,	/* tti320(16) */
	8,	/* tti33(8) */
	3,	/* tti4(3) */
	9,	/* tti40(9) */
	4,	/* tti6(4) */
	10,	/* tti64(10) */
	5,	/* tti8(5) */
	11,	/* tti80(11) */
	12	/* tti96(12) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_drx_UL_RetransmissionTimerShortTTI_r15_specs_13 = {
	asn_MAP_LTE_drx_UL_RetransmissionTimerShortTTI_r15_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_drx_UL_RetransmissionTimerShortTTI_r15_enum2value_13,	/* N => "tag"; sorted by N */
	17,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_drx_UL_RetransmissionTimerShortTTI_r15_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_drx_UL_RetransmissionTimerShortTTI_r15_13 = {
	"drx-UL-RetransmissionTimerShortTTI-r15",
	"drx-UL-RetransmissionTimerShortTTI-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_drx_UL_RetransmissionTimerShortTTI_r15_tags_13,
	sizeof(asn_DEF_LTE_drx_UL_RetransmissionTimerShortTTI_r15_tags_13)
		/sizeof(asn_DEF_LTE_drx_UL_RetransmissionTimerShortTTI_r15_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_drx_UL_RetransmissionTimerShortTTI_r15_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_drx_UL_RetransmissionTimerShortTTI_r15_tags_13)
		/sizeof(asn_DEF_LTE_drx_UL_RetransmissionTimerShortTTI_r15_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_drx_UL_RetransmissionTimerShortTTI_r15_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_drx_UL_RetransmissionTimerShortTTI_r15_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_DRX_Config_r15_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_DRX_Config_r15, drx_RetransmissionTimerShortTTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_drx_RetransmissionTimerShortTTI_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-RetransmissionTimerShortTTI-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_DRX_Config_r15, drx_UL_RetransmissionTimerShortTTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_drx_UL_RetransmissionTimerShortTTI_r15_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-UL-RetransmissionTimerShortTTI-r15"
		},
};
static const int asn_MAP_LTE_DRX_Config_r15_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_DRX_Config_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_DRX_Config_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drx-RetransmissionTimerShortTTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* drx-UL-RetransmissionTimerShortTTI-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_DRX_Config_r15_specs_1 = {
	sizeof(struct LTE_DRX_Config_r15),
	offsetof(struct LTE_DRX_Config_r15, _asn_ctx),
	asn_MAP_LTE_DRX_Config_r15_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_DRX_Config_r15_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_DRX_Config_r15 = {
	"DRX-Config-r15",
	"DRX-Config-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_DRX_Config_r15_tags_1,
	sizeof(asn_DEF_LTE_DRX_Config_r15_tags_1)
		/sizeof(asn_DEF_LTE_DRX_Config_r15_tags_1[0]), /* 1 */
	asn_DEF_LTE_DRX_Config_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_DRX_Config_r15_tags_1)
		/sizeof(asn_DEF_LTE_DRX_Config_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_DRX_Config_r15_1,
	2,	/* Elements count */
	&asn_SPC_LTE_DRX_Config_r15_specs_1	/* Additional specs */
};

