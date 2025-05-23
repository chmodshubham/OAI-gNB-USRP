/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SL-Preconfiguration-r12.h"

static asn_TYPE_member_t asn_MBR_LTE_preconfigComm_v1310_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_Preconfiguration_r12__ext1__preconfigComm_v1310, commRxPoolList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_PreconfigCommRxPoolList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commRxPoolList-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_Preconfiguration_r12__ext1__preconfigComm_v1310, commTxPoolList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_PreconfigCommTxPoolList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commTxPoolList-r13"
		},
};
static const int asn_MAP_LTE_preconfigComm_v1310_oms_7[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_preconfigComm_v1310_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_preconfigComm_v1310_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commRxPoolList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* commTxPoolList-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_preconfigComm_v1310_specs_7 = {
	sizeof(struct LTE_SL_Preconfiguration_r12__ext1__preconfigComm_v1310),
	offsetof(struct LTE_SL_Preconfiguration_r12__ext1__preconfigComm_v1310, _asn_ctx),
	asn_MAP_LTE_preconfigComm_v1310_tag2el_7,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_preconfigComm_v1310_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_preconfigComm_v1310_7 = {
	"preconfigComm-v1310",
	"preconfigComm-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_preconfigComm_v1310_tags_7,
	sizeof(asn_DEF_LTE_preconfigComm_v1310_tags_7)
		/sizeof(asn_DEF_LTE_preconfigComm_v1310_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_preconfigComm_v1310_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_preconfigComm_v1310_tags_7)
		/sizeof(asn_DEF_LTE_preconfigComm_v1310_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_preconfigComm_v1310_7,
	2,	/* Elements count */
	&asn_SPC_LTE_preconfigComm_v1310_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_preconfigDisc_r13_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_Preconfiguration_r12__ext1__preconfigDisc_r13, discRxPoolList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_PreconfigDiscRxPoolList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discRxPoolList-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_Preconfiguration_r12__ext1__preconfigDisc_r13, discTxPoolList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_PreconfigDiscTxPoolList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxPoolList-r13"
		},
};
static const int asn_MAP_LTE_preconfigDisc_r13_oms_10[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_preconfigDisc_r13_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_preconfigDisc_r13_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discRxPoolList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* discTxPoolList-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_preconfigDisc_r13_specs_10 = {
	sizeof(struct LTE_SL_Preconfiguration_r12__ext1__preconfigDisc_r13),
	offsetof(struct LTE_SL_Preconfiguration_r12__ext1__preconfigDisc_r13, _asn_ctx),
	asn_MAP_LTE_preconfigDisc_r13_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_preconfigDisc_r13_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_preconfigDisc_r13_10 = {
	"preconfigDisc-r13",
	"preconfigDisc-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_preconfigDisc_r13_tags_10,
	sizeof(asn_DEF_LTE_preconfigDisc_r13_tags_10)
		/sizeof(asn_DEF_LTE_preconfigDisc_r13_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_preconfigDisc_r13_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_preconfigDisc_r13_tags_10)
		/sizeof(asn_DEF_LTE_preconfigDisc_r13_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_preconfigDisc_r13_10,
	2,	/* Elements count */
	&asn_SPC_LTE_preconfigDisc_r13_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_6[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_SL_Preconfiguration_r12__ext1, preconfigComm_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_preconfigComm_v1310_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preconfigComm-v1310"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_Preconfiguration_r12__ext1, preconfigDisc_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_preconfigDisc_r13_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preconfigDisc-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_Preconfiguration_r12__ext1, preconfigRelay_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_PreconfigRelay_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preconfigRelay-r13"
		},
};
static const int asn_MAP_LTE_ext1_oms_6[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preconfigComm-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* preconfigDisc-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* preconfigRelay-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_6 = {
	sizeof(struct LTE_SL_Preconfiguration_r12__ext1),
	offsetof(struct LTE_SL_Preconfiguration_r12__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_6,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_6,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_6,
	sizeof(asn_DEF_LTE_ext1_tags_6)
		/sizeof(asn_DEF_LTE_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_6)
		/sizeof(asn_DEF_LTE_ext1_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_6,
	3,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_SL_Preconfiguration_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_Preconfiguration_r12, preconfigGeneral_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_PreconfigGeneral_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preconfigGeneral-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_Preconfiguration_r12, preconfigSync_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_PreconfigSync_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preconfigSync-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_Preconfiguration_r12, preconfigComm_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_PreconfigCommPoolList4_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preconfigComm-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_Preconfiguration_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_SL_Preconfiguration_r12_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_Preconfiguration_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_Preconfiguration_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preconfigGeneral-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* preconfigSync-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* preconfigComm-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_Preconfiguration_r12_specs_1 = {
	sizeof(struct LTE_SL_Preconfiguration_r12),
	offsetof(struct LTE_SL_Preconfiguration_r12, _asn_ctx),
	asn_MAP_LTE_SL_Preconfiguration_r12_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_SL_Preconfiguration_r12_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_Preconfiguration_r12 = {
	"SL-Preconfiguration-r12",
	"SL-Preconfiguration-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_Preconfiguration_r12_tags_1,
	sizeof(asn_DEF_LTE_SL_Preconfiguration_r12_tags_1)
		/sizeof(asn_DEF_LTE_SL_Preconfiguration_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_Preconfiguration_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_Preconfiguration_r12_tags_1)
		/sizeof(asn_DEF_LTE_SL_Preconfiguration_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SL_Preconfiguration_r12_1,
	4,	/* Elements count */
	&asn_SPC_LTE_SL_Preconfiguration_r12_specs_1	/* Additional specs */
};

