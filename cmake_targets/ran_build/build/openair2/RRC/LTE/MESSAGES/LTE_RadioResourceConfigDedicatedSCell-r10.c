/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_RadioResourceConfigDedicatedSCell-r10.h"

static asn_TYPE_member_t asn_MBR_LTE_ext1_4[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext1, mac_MainConfigSCell_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MAC_MainConfigSCell_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-MainConfigSCell-r11"
		},
};
static const int asn_MAP_LTE_ext1_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mac-MainConfigSCell-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_4 = {
	sizeof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext1),
	offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_4,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_4 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_4,
	sizeof(asn_DEF_LTE_ext1_tags_4)
		/sizeof(asn_DEF_LTE_ext1_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_4)
		/sizeof(asn_DEF_LTE_ext1_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_4,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_6[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext2, naics_Info_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_NAICS_AssistanceInfo_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"naics-Info-r12"
		},
};
static const int asn_MAP_LTE_ext2_oms_6[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* naics-Info-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_6 = {
	sizeof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext2),
	offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_6 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_6,
	sizeof(asn_DEF_LTE_ext2_tags_6)
		/sizeof(asn_DEF_LTE_ext2_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_6)
		/sizeof(asn_DEF_LTE_ext2_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_6,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_8[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext3, neighCellsCRS_InfoSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_NeighCellsCRS_Info_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellsCRS-InfoSCell-r13"
		},
};
static const int asn_MAP_LTE_ext3_oms_8[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* neighCellsCRS-InfoSCell-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_8 = {
	sizeof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext3),
	offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_8,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_8 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_8,
	sizeof(asn_DEF_LTE_ext3_tags_8)
		/sizeof(asn_DEF_LTE_ext3_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_8)
		/sizeof(asn_DEF_LTE_ext3_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext3_8,
	1,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext4_10[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext4, physicalConfigDedicatedSCell_v1370),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysicalConfigDedicatedSCell_v1370,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalConfigDedicatedSCell-v1370"
		},
};
static const int asn_MAP_LTE_ext4_oms_10[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext4_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext4_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* physicalConfigDedicatedSCell-v1370 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext4_specs_10 = {
	sizeof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext4),
	offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext4, _asn_ctx),
	asn_MAP_LTE_ext4_tag2el_10,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext4_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext4_10 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext4_tags_10,
	sizeof(asn_DEF_LTE_ext4_tags_10)
		/sizeof(asn_DEF_LTE_ext4_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_ext4_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_ext4_tags_10)
		/sizeof(asn_DEF_LTE_ext4_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext4_10,
	1,	/* Elements count */
	&asn_SPC_LTE_ext4_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext5_12[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext5, crs_IntfMitigEnabled_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crs-IntfMitigEnabled-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext5, neighCellsCRS_Info_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_NeighCellsCRS_Info_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellsCRS-Info-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext5, sps_Config_v1530),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SPS_Config_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-Config-v1530"
		},
};
static const int asn_MAP_LTE_ext5_oms_12[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_ext5_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext5_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* crs-IntfMitigEnabled-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* neighCellsCRS-Info-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sps-Config-v1530 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext5_specs_12 = {
	sizeof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext5),
	offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10__ext5, _asn_ctx),
	asn_MAP_LTE_ext5_tag2el_12,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_ext5_oms_12,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext5_12 = {
	"ext5",
	"ext5",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext5_tags_12,
	sizeof(asn_DEF_LTE_ext5_tags_12)
		/sizeof(asn_DEF_LTE_ext5_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_ext5_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_ext5_tags_12)
		/sizeof(asn_DEF_LTE_ext5_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext5_12,
	3,	/* Elements count */
	&asn_SPC_LTE_ext5_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RadioResourceConfigDedicatedSCell_r10_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10, physicalConfigDedicatedSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysicalConfigDedicatedSCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalConfigDedicatedSCell-r10"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_ext1_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10, ext2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_ext2_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10, ext3),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext3_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10, ext4),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext4_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext4"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10, ext5),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LTE_ext5_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext5"
		},
};
static const int asn_MAP_LTE_RadioResourceConfigDedicatedSCell_r10_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_RadioResourceConfigDedicatedSCell_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RadioResourceConfigDedicatedSCell_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physicalConfigDedicatedSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext4 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext5 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RadioResourceConfigDedicatedSCell_r10_specs_1 = {
	sizeof(struct LTE_RadioResourceConfigDedicatedSCell_r10),
	offsetof(struct LTE_RadioResourceConfigDedicatedSCell_r10, _asn_ctx),
	asn_MAP_LTE_RadioResourceConfigDedicatedSCell_r10_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_RadioResourceConfigDedicatedSCell_r10_oms_1,	/* Optional members */
	1, 5,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RadioResourceConfigDedicatedSCell_r10 = {
	"RadioResourceConfigDedicatedSCell-r10",
	"RadioResourceConfigDedicatedSCell-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RadioResourceConfigDedicatedSCell_r10_tags_1,
	sizeof(asn_DEF_LTE_RadioResourceConfigDedicatedSCell_r10_tags_1)
		/sizeof(asn_DEF_LTE_RadioResourceConfigDedicatedSCell_r10_tags_1[0]), /* 1 */
	asn_DEF_LTE_RadioResourceConfigDedicatedSCell_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RadioResourceConfigDedicatedSCell_r10_tags_1)
		/sizeof(asn_DEF_LTE_RadioResourceConfigDedicatedSCell_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RadioResourceConfigDedicatedSCell_r10_1,
	6,	/* Elements count */
	&asn_SPC_LTE_RadioResourceConfigDedicatedSCell_r10_specs_1	/* Additional specs */
};

