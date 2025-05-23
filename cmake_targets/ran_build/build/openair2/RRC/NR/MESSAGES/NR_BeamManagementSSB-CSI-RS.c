/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_BeamManagementSSB-CSI-RS.h"

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
static asn_per_constraints_t asn_PER_type_NR_maxNumberSSB_CSI_RS_ResourceOneTx_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_maxNumberCSI_RS_Resource_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_maxNumberCSI_RS_ResourceTwoTx_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_supportedCSI_RS_Density_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_maxNumberAperiodicCSI_RS_Resource_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_maxNumberSSB_CSI_RS_ResourceOneTx_value2enum_2[] = {
	{ 0,	2,	"n0" },
	{ 1,	2,	"n8" },
	{ 2,	3,	"n16" },
	{ 3,	3,	"n32" },
	{ 4,	3,	"n64" }
};
static const unsigned int asn_MAP_NR_maxNumberSSB_CSI_RS_ResourceOneTx_enum2value_2[] = {
	0,	/* n0(0) */
	2,	/* n16(2) */
	3,	/* n32(3) */
	4,	/* n64(4) */
	1	/* n8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_maxNumberSSB_CSI_RS_ResourceOneTx_specs_2 = {
	asn_MAP_NR_maxNumberSSB_CSI_RS_ResourceOneTx_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_maxNumberSSB_CSI_RS_ResourceOneTx_enum2value_2,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_maxNumberSSB_CSI_RS_ResourceOneTx_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_maxNumberSSB_CSI_RS_ResourceOneTx_2 = {
	"maxNumberSSB-CSI-RS-ResourceOneTx",
	"maxNumberSSB-CSI-RS-ResourceOneTx",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_maxNumberSSB_CSI_RS_ResourceOneTx_tags_2,
	sizeof(asn_DEF_NR_maxNumberSSB_CSI_RS_ResourceOneTx_tags_2)
		/sizeof(asn_DEF_NR_maxNumberSSB_CSI_RS_ResourceOneTx_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_maxNumberSSB_CSI_RS_ResourceOneTx_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_maxNumberSSB_CSI_RS_ResourceOneTx_tags_2)
		/sizeof(asn_DEF_NR_maxNumberSSB_CSI_RS_ResourceOneTx_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_maxNumberSSB_CSI_RS_ResourceOneTx_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_maxNumberSSB_CSI_RS_ResourceOneTx_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_maxNumberCSI_RS_Resource_value2enum_8[] = {
	{ 0,	2,	"n0" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n8" },
	{ 3,	3,	"n16" },
	{ 4,	3,	"n32" },
	{ 5,	3,	"n64" }
};
static const unsigned int asn_MAP_NR_maxNumberCSI_RS_Resource_enum2value_8[] = {
	0,	/* n0(0) */
	3,	/* n16(3) */
	4,	/* n32(4) */
	1,	/* n4(1) */
	5,	/* n64(5) */
	2	/* n8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_maxNumberCSI_RS_Resource_specs_8 = {
	asn_MAP_NR_maxNumberCSI_RS_Resource_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_maxNumberCSI_RS_Resource_enum2value_8,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_maxNumberCSI_RS_Resource_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_maxNumberCSI_RS_Resource_8 = {
	"maxNumberCSI-RS-Resource",
	"maxNumberCSI-RS-Resource",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_maxNumberCSI_RS_Resource_tags_8,
	sizeof(asn_DEF_NR_maxNumberCSI_RS_Resource_tags_8)
		/sizeof(asn_DEF_NR_maxNumberCSI_RS_Resource_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_maxNumberCSI_RS_Resource_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_maxNumberCSI_RS_Resource_tags_8)
		/sizeof(asn_DEF_NR_maxNumberCSI_RS_Resource_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_NR_maxNumberCSI_RS_Resource_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_maxNumberCSI_RS_Resource_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_maxNumberCSI_RS_ResourceTwoTx_value2enum_15[] = {
	{ 0,	2,	"n0" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n8" },
	{ 3,	3,	"n16" },
	{ 4,	3,	"n32" },
	{ 5,	3,	"n64" }
};
static const unsigned int asn_MAP_NR_maxNumberCSI_RS_ResourceTwoTx_enum2value_15[] = {
	0,	/* n0(0) */
	3,	/* n16(3) */
	4,	/* n32(4) */
	1,	/* n4(1) */
	5,	/* n64(5) */
	2	/* n8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_maxNumberCSI_RS_ResourceTwoTx_specs_15 = {
	asn_MAP_NR_maxNumberCSI_RS_ResourceTwoTx_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_maxNumberCSI_RS_ResourceTwoTx_enum2value_15,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_maxNumberCSI_RS_ResourceTwoTx_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_maxNumberCSI_RS_ResourceTwoTx_15 = {
	"maxNumberCSI-RS-ResourceTwoTx",
	"maxNumberCSI-RS-ResourceTwoTx",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_maxNumberCSI_RS_ResourceTwoTx_tags_15,
	sizeof(asn_DEF_NR_maxNumberCSI_RS_ResourceTwoTx_tags_15)
		/sizeof(asn_DEF_NR_maxNumberCSI_RS_ResourceTwoTx_tags_15[0]) - 1, /* 1 */
	asn_DEF_NR_maxNumberCSI_RS_ResourceTwoTx_tags_15,	/* Same as above */
	sizeof(asn_DEF_NR_maxNumberCSI_RS_ResourceTwoTx_tags_15)
		/sizeof(asn_DEF_NR_maxNumberCSI_RS_ResourceTwoTx_tags_15[0]), /* 2 */
	{ 0, &asn_PER_type_NR_maxNumberCSI_RS_ResourceTwoTx_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_maxNumberCSI_RS_ResourceTwoTx_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_supportedCSI_RS_Density_value2enum_22[] = {
	{ 0,	3,	"one" },
	{ 1,	5,	"three" },
	{ 2,	11,	"oneAndThree" }
};
static const unsigned int asn_MAP_NR_supportedCSI_RS_Density_enum2value_22[] = {
	0,	/* one(0) */
	2,	/* oneAndThree(2) */
	1	/* three(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_supportedCSI_RS_Density_specs_22 = {
	asn_MAP_NR_supportedCSI_RS_Density_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_supportedCSI_RS_Density_enum2value_22,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_supportedCSI_RS_Density_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_supportedCSI_RS_Density_22 = {
	"supportedCSI-RS-Density",
	"supportedCSI-RS-Density",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_supportedCSI_RS_Density_tags_22,
	sizeof(asn_DEF_NR_supportedCSI_RS_Density_tags_22)
		/sizeof(asn_DEF_NR_supportedCSI_RS_Density_tags_22[0]) - 1, /* 1 */
	asn_DEF_NR_supportedCSI_RS_Density_tags_22,	/* Same as above */
	sizeof(asn_DEF_NR_supportedCSI_RS_Density_tags_22)
		/sizeof(asn_DEF_NR_supportedCSI_RS_Density_tags_22[0]), /* 2 */
	{ 0, &asn_PER_type_NR_supportedCSI_RS_Density_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_supportedCSI_RS_Density_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_maxNumberAperiodicCSI_RS_Resource_value2enum_26[] = {
	{ 0,	2,	"n0" },
	{ 1,	2,	"n1" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" }
};
static const unsigned int asn_MAP_NR_maxNumberAperiodicCSI_RS_Resource_enum2value_26[] = {
	0,	/* n0(0) */
	1,	/* n1(1) */
	4,	/* n16(4) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_maxNumberAperiodicCSI_RS_Resource_specs_26 = {
	asn_MAP_NR_maxNumberAperiodicCSI_RS_Resource_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_maxNumberAperiodicCSI_RS_Resource_enum2value_26,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_maxNumberAperiodicCSI_RS_Resource_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_maxNumberAperiodicCSI_RS_Resource_26 = {
	"maxNumberAperiodicCSI-RS-Resource",
	"maxNumberAperiodicCSI-RS-Resource",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_maxNumberAperiodicCSI_RS_Resource_tags_26,
	sizeof(asn_DEF_NR_maxNumberAperiodicCSI_RS_Resource_tags_26)
		/sizeof(asn_DEF_NR_maxNumberAperiodicCSI_RS_Resource_tags_26[0]) - 1, /* 1 */
	asn_DEF_NR_maxNumberAperiodicCSI_RS_Resource_tags_26,	/* Same as above */
	sizeof(asn_DEF_NR_maxNumberAperiodicCSI_RS_Resource_tags_26)
		/sizeof(asn_DEF_NR_maxNumberAperiodicCSI_RS_Resource_tags_26[0]), /* 2 */
	{ 0, &asn_PER_type_NR_maxNumberAperiodicCSI_RS_Resource_constr_26, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_maxNumberAperiodicCSI_RS_Resource_specs_26	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_BeamManagementSSB_CSI_RS_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BeamManagementSSB_CSI_RS, maxNumberSSB_CSI_RS_ResourceOneTx),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_maxNumberSSB_CSI_RS_ResourceOneTx_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberSSB-CSI-RS-ResourceOneTx"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BeamManagementSSB_CSI_RS, maxNumberCSI_RS_Resource),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_maxNumberCSI_RS_Resource_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberCSI-RS-Resource"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BeamManagementSSB_CSI_RS, maxNumberCSI_RS_ResourceTwoTx),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_maxNumberCSI_RS_ResourceTwoTx_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberCSI-RS-ResourceTwoTx"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_BeamManagementSSB_CSI_RS, supportedCSI_RS_Density),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_supportedCSI_RS_Density_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedCSI-RS-Density"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BeamManagementSSB_CSI_RS, maxNumberAperiodicCSI_RS_Resource),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_maxNumberAperiodicCSI_RS_Resource_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberAperiodicCSI-RS-Resource"
		},
};
static const int asn_MAP_NR_BeamManagementSSB_CSI_RS_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_NR_BeamManagementSSB_CSI_RS_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_BeamManagementSSB_CSI_RS_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberSSB-CSI-RS-ResourceOneTx */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNumberCSI-RS-Resource */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxNumberCSI-RS-ResourceTwoTx */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* supportedCSI-RS-Density */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* maxNumberAperiodicCSI-RS-Resource */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_BeamManagementSSB_CSI_RS_specs_1 = {
	sizeof(struct NR_BeamManagementSSB_CSI_RS),
	offsetof(struct NR_BeamManagementSSB_CSI_RS, _asn_ctx),
	asn_MAP_NR_BeamManagementSSB_CSI_RS_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NR_BeamManagementSSB_CSI_RS_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_BeamManagementSSB_CSI_RS = {
	"BeamManagementSSB-CSI-RS",
	"BeamManagementSSB-CSI-RS",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_BeamManagementSSB_CSI_RS_tags_1,
	sizeof(asn_DEF_NR_BeamManagementSSB_CSI_RS_tags_1)
		/sizeof(asn_DEF_NR_BeamManagementSSB_CSI_RS_tags_1[0]), /* 1 */
	asn_DEF_NR_BeamManagementSSB_CSI_RS_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_BeamManagementSSB_CSI_RS_tags_1)
		/sizeof(asn_DEF_NR_BeamManagementSSB_CSI_RS_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_BeamManagementSSB_CSI_RS_1,
	5,	/* Elements count */
	&asn_SPC_NR_BeamManagementSSB_CSI_RS_specs_1	/* Additional specs */
};

