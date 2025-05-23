/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_AffectedCarrierFreq-r11.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_interferenceDirection_r11_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_interferenceDirection_r11_value2enum_3[] = {
	{ 0,	5,	"eutra" },
	{ 1,	5,	"other" },
	{ 2,	4,	"both" },
	{ 3,	5,	"spare" }
};
static const unsigned int asn_MAP_LTE_interferenceDirection_r11_enum2value_3[] = {
	2,	/* both(2) */
	0,	/* eutra(0) */
	1,	/* other(1) */
	3	/* spare(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interferenceDirection_r11_specs_3 = {
	asn_MAP_LTE_interferenceDirection_r11_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interferenceDirection_r11_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interferenceDirection_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interferenceDirection_r11_3 = {
	"interferenceDirection-r11",
	"interferenceDirection-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interferenceDirection_r11_tags_3,
	sizeof(asn_DEF_LTE_interferenceDirection_r11_tags_3)
		/sizeof(asn_DEF_LTE_interferenceDirection_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_interferenceDirection_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_interferenceDirection_r11_tags_3)
		/sizeof(asn_DEF_LTE_interferenceDirection_r11_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_interferenceDirection_r11_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interferenceDirection_r11_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_AffectedCarrierFreq_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_AffectedCarrierFreq_r11, carrierFreq_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasObjectId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_AffectedCarrierFreq_r11, interferenceDirection_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interferenceDirection_r11_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interferenceDirection-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_AffectedCarrierFreq_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_AffectedCarrierFreq_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interferenceDirection-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_AffectedCarrierFreq_r11_specs_1 = {
	sizeof(struct LTE_AffectedCarrierFreq_r11),
	offsetof(struct LTE_AffectedCarrierFreq_r11, _asn_ctx),
	asn_MAP_LTE_AffectedCarrierFreq_r11_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_AffectedCarrierFreq_r11 = {
	"AffectedCarrierFreq-r11",
	"AffectedCarrierFreq-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_AffectedCarrierFreq_r11_tags_1,
	sizeof(asn_DEF_LTE_AffectedCarrierFreq_r11_tags_1)
		/sizeof(asn_DEF_LTE_AffectedCarrierFreq_r11_tags_1[0]), /* 1 */
	asn_DEF_LTE_AffectedCarrierFreq_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_AffectedCarrierFreq_r11_tags_1)
		/sizeof(asn_DEF_LTE_AffectedCarrierFreq_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_AffectedCarrierFreq_r11_1,
	2,	/* Elements count */
	&asn_SPC_LTE_AffectedCarrierFreq_r11_specs_1	/* Additional specs */
};

