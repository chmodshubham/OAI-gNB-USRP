/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_CSI-RS-ConfigNonPrecoded-v1480.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_codebookConfigN1_v1480_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_codebookConfigN2_r1480_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_codebookConfigN1_v1480_value2enum_3[] = {
	{ 0,	2,	"n5" },
	{ 1,	2,	"n6" },
	{ 2,	2,	"n7" },
	{ 3,	3,	"n10" },
	{ 4,	3,	"n12" },
	{ 5,	3,	"n14" },
	{ 6,	3,	"n16" }
};
static const unsigned int asn_MAP_LTE_codebookConfigN1_v1480_enum2value_3[] = {
	3,	/* n10(3) */
	4,	/* n12(4) */
	5,	/* n14(5) */
	6,	/* n16(6) */
	0,	/* n5(0) */
	1,	/* n6(1) */
	2	/* n7(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_codebookConfigN1_v1480_specs_3 = {
	asn_MAP_LTE_codebookConfigN1_v1480_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_codebookConfigN1_v1480_enum2value_3,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_codebookConfigN1_v1480_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_codebookConfigN1_v1480_3 = {
	"codebookConfigN1-v1480",
	"codebookConfigN1-v1480",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_codebookConfigN1_v1480_tags_3,
	sizeof(asn_DEF_LTE_codebookConfigN1_v1480_tags_3)
		/sizeof(asn_DEF_LTE_codebookConfigN1_v1480_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_codebookConfigN1_v1480_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_codebookConfigN1_v1480_tags_3)
		/sizeof(asn_DEF_LTE_codebookConfigN1_v1480_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_codebookConfigN1_v1480_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_codebookConfigN1_v1480_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_codebookConfigN2_r1480_value2enum_11[] = {
	{ 0,	2,	"n5" },
	{ 1,	2,	"n6" },
	{ 2,	2,	"n7" }
};
static const unsigned int asn_MAP_LTE_codebookConfigN2_r1480_enum2value_11[] = {
	0,	/* n5(0) */
	1,	/* n6(1) */
	2	/* n7(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_codebookConfigN2_r1480_specs_11 = {
	asn_MAP_LTE_codebookConfigN2_r1480_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_codebookConfigN2_r1480_enum2value_11,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_codebookConfigN2_r1480_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_codebookConfigN2_r1480_11 = {
	"codebookConfigN2-r1480",
	"codebookConfigN2-r1480",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_codebookConfigN2_r1480_tags_11,
	sizeof(asn_DEF_LTE_codebookConfigN2_r1480_tags_11)
		/sizeof(asn_DEF_LTE_codebookConfigN2_r1480_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_codebookConfigN2_r1480_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_codebookConfigN2_r1480_tags_11)
		/sizeof(asn_DEF_LTE_codebookConfigN2_r1480_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_codebookConfigN2_r1480_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_codebookConfigN2_r1480_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_CSI_RS_ConfigNonPrecoded_v1480_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_CSI_RS_ConfigNonPrecoded_v1480, csi_RS_ConfigNZP_EMIMO_v1480),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CSI_RS_ConfigNZP_EMIMO_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-ConfigNZP-EMIMO-v1480"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_CSI_RS_ConfigNonPrecoded_v1480, codebookConfigN1_v1480),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_codebookConfigN1_v1480_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codebookConfigN1-v1480"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CSI_RS_ConfigNonPrecoded_v1480, codebookConfigN2_r1480),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_codebookConfigN2_r1480_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codebookConfigN2-r1480"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CSI_RS_ConfigNonPrecoded_v1480, nzp_ResourceConfigTM9_Original_v1480),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CSI_RS_Config_NZP_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nzp-ResourceConfigTM9-Original-v1480"
		},
};
static const int asn_MAP_LTE_CSI_RS_ConfigNonPrecoded_v1480_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_CSI_RS_ConfigNonPrecoded_v1480_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CSI_RS_ConfigNonPrecoded_v1480_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-RS-ConfigNZP-EMIMO-v1480 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* codebookConfigN1-v1480 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* codebookConfigN2-r1480 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nzp-ResourceConfigTM9-Original-v1480 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CSI_RS_ConfigNonPrecoded_v1480_specs_1 = {
	sizeof(struct LTE_CSI_RS_ConfigNonPrecoded_v1480),
	offsetof(struct LTE_CSI_RS_ConfigNonPrecoded_v1480, _asn_ctx),
	asn_MAP_LTE_CSI_RS_ConfigNonPrecoded_v1480_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_CSI_RS_ConfigNonPrecoded_v1480_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_ConfigNonPrecoded_v1480 = {
	"CSI-RS-ConfigNonPrecoded-v1480",
	"CSI-RS-ConfigNonPrecoded-v1480",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CSI_RS_ConfigNonPrecoded_v1480_tags_1,
	sizeof(asn_DEF_LTE_CSI_RS_ConfigNonPrecoded_v1480_tags_1)
		/sizeof(asn_DEF_LTE_CSI_RS_ConfigNonPrecoded_v1480_tags_1[0]), /* 1 */
	asn_DEF_LTE_CSI_RS_ConfigNonPrecoded_v1480_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CSI_RS_ConfigNonPrecoded_v1480_tags_1)
		/sizeof(asn_DEF_LTE_CSI_RS_ConfigNonPrecoded_v1480_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CSI_RS_ConfigNonPrecoded_v1480_1,
	4,	/* Elements count */
	&asn_SPC_LTE_CSI_RS_ConfigNonPrecoded_v1480_specs_1	/* Additional specs */
};

