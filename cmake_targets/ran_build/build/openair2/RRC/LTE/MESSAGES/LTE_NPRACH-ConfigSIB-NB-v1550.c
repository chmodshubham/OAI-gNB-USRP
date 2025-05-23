/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_NPRACH-ConfigSIB-NB-v1550.h"

static asn_TYPE_member_t asn_MBR_LTE_tdd_Parameters_v1550_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1550__tdd_Parameters_v1550, nprach_ParametersListTDD_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NPRACH_ParametersListTDD_NB_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-ParametersListTDD-v1550"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_tdd_Parameters_v1550_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_tdd_Parameters_v1550_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nprach-ParametersListTDD-v1550 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_tdd_Parameters_v1550_specs_2 = {
	sizeof(struct LTE_NPRACH_ConfigSIB_NB_v1550__tdd_Parameters_v1550),
	offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1550__tdd_Parameters_v1550, _asn_ctx),
	asn_MAP_LTE_tdd_Parameters_v1550_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_tdd_Parameters_v1550_2 = {
	"tdd-Parameters-v1550",
	"tdd-Parameters-v1550",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_tdd_Parameters_v1550_tags_2,
	sizeof(asn_DEF_LTE_tdd_Parameters_v1550_tags_2)
		/sizeof(asn_DEF_LTE_tdd_Parameters_v1550_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_tdd_Parameters_v1550_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_tdd_Parameters_v1550_tags_2)
		/sizeof(asn_DEF_LTE_tdd_Parameters_v1550_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_tdd_Parameters_v1550_2,
	1,	/* Elements count */
	&asn_SPC_LTE_tdd_Parameters_v1550_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_NPRACH_ConfigSIB_NB_v1550_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1550, tdd_Parameters_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_tdd_Parameters_v1550_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Parameters-v1550"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1550_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_NPRACH_ConfigSIB_NB_v1550_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tdd-Parameters-v1550 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_NPRACH_ConfigSIB_NB_v1550_specs_1 = {
	sizeof(struct LTE_NPRACH_ConfigSIB_NB_v1550),
	offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1550, _asn_ctx),
	asn_MAP_LTE_NPRACH_ConfigSIB_NB_v1550_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1550 = {
	"NPRACH-ConfigSIB-NB-v1550",
	"NPRACH-ConfigSIB-NB-v1550",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1550_tags_1,
	sizeof(asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1550_tags_1)
		/sizeof(asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1550_tags_1[0]), /* 1 */
	asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1550_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1550_tags_1)
		/sizeof(asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1550_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_NPRACH_ConfigSIB_NB_v1550_1,
	1,	/* Elements count */
	&asn_SPC_LTE_NPRACH_ConfigSIB_NB_v1550_specs_1	/* Additional specs */
};

