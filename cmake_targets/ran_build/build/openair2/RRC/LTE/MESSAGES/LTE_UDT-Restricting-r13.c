/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_UDT-Restricting-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_udt_Restricting_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_udt_RestrictingTime_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_udt_Restricting_r13_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_udt_Restricting_r13_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_udt_Restricting_r13_specs_2 = {
	asn_MAP_LTE_udt_Restricting_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_udt_Restricting_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_udt_Restricting_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_udt_Restricting_r13_2 = {
	"udt-Restricting-r13",
	"udt-Restricting-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_udt_Restricting_r13_tags_2,
	sizeof(asn_DEF_LTE_udt_Restricting_r13_tags_2)
		/sizeof(asn_DEF_LTE_udt_Restricting_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_udt_Restricting_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_udt_Restricting_r13_tags_2)
		/sizeof(asn_DEF_LTE_udt_Restricting_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_udt_Restricting_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_udt_Restricting_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_udt_RestrictingTime_r13_value2enum_4[] = {
	{ 0,	2,	"s4" },
	{ 1,	2,	"s8" },
	{ 2,	3,	"s16" },
	{ 3,	3,	"s32" },
	{ 4,	3,	"s64" },
	{ 5,	4,	"s128" },
	{ 6,	4,	"s256" },
	{ 7,	4,	"s512" }
};
static const unsigned int asn_MAP_LTE_udt_RestrictingTime_r13_enum2value_4[] = {
	5,	/* s128(5) */
	2,	/* s16(2) */
	6,	/* s256(6) */
	3,	/* s32(3) */
	0,	/* s4(0) */
	7,	/* s512(7) */
	4,	/* s64(4) */
	1	/* s8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_udt_RestrictingTime_r13_specs_4 = {
	asn_MAP_LTE_udt_RestrictingTime_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_udt_RestrictingTime_r13_enum2value_4,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_udt_RestrictingTime_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_udt_RestrictingTime_r13_4 = {
	"udt-RestrictingTime-r13",
	"udt-RestrictingTime-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_udt_RestrictingTime_r13_tags_4,
	sizeof(asn_DEF_LTE_udt_RestrictingTime_r13_tags_4)
		/sizeof(asn_DEF_LTE_udt_RestrictingTime_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_udt_RestrictingTime_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_udt_RestrictingTime_r13_tags_4)
		/sizeof(asn_DEF_LTE_udt_RestrictingTime_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_udt_RestrictingTime_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_udt_RestrictingTime_r13_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UDT_Restricting_r13_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_UDT_Restricting_r13, udt_Restricting_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_udt_Restricting_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"udt-Restricting-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UDT_Restricting_r13, udt_RestrictingTime_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_udt_RestrictingTime_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"udt-RestrictingTime-r13"
		},
};
static const int asn_MAP_LTE_UDT_Restricting_r13_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_UDT_Restricting_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UDT_Restricting_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* udt-Restricting-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* udt-RestrictingTime-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UDT_Restricting_r13_specs_1 = {
	sizeof(struct LTE_UDT_Restricting_r13),
	offsetof(struct LTE_UDT_Restricting_r13, _asn_ctx),
	asn_MAP_LTE_UDT_Restricting_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_UDT_Restricting_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UDT_Restricting_r13 = {
	"UDT-Restricting-r13",
	"UDT-Restricting-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UDT_Restricting_r13_tags_1,
	sizeof(asn_DEF_LTE_UDT_Restricting_r13_tags_1)
		/sizeof(asn_DEF_LTE_UDT_Restricting_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_UDT_Restricting_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UDT_Restricting_r13_tags_1)
		/sizeof(asn_DEF_LTE_UDT_Restricting_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UDT_Restricting_r13_1,
	2,	/* Elements count */
	&asn_SPC_LTE_UDT_Restricting_r13_specs_1	/* Additional specs */
};

