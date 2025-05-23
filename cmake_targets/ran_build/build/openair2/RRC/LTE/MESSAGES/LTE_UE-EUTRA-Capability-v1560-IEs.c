/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_UE-EUTRA-Capability-v1560-IEs.h"

static const ber_tlv_tag_t asn_DEF_LTE_nonCriticalExtension_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nonCriticalExtension_specs_7 = {
	sizeof(struct LTE_UE_EUTRA_Capability_v1560_IEs__nonCriticalExtension),
	offsetof(struct LTE_UE_EUTRA_Capability_v1560_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nonCriticalExtension_7 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nonCriticalExtension_tags_7,
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_7)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_nonCriticalExtension_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_7)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_LTE_nonCriticalExtension_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v1560_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_EUTRA_Capability_v1560_IEs, pdcp_ParametersNR_v1560),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PDCP_ParametersNR_v1560,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-ParametersNR-v1560"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_EUTRA_Capability_v1560_IEs, irat_ParametersNR_v1560),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IRAT_ParametersNR_v1560,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"irat-ParametersNR-v1560"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_EUTRA_Capability_v1560_IEs, appliedCapabilityFilterCommon_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"appliedCapabilityFilterCommon-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_EUTRA_Capability_v1560_IEs, fdd_Add_UE_EUTRA_Capabilities_v1560),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1560,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-EUTRA-Capabilities-v1560"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_EUTRA_Capability_v1560_IEs, tdd_Add_UE_EUTRA_Capabilities_v1560),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1560,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-EUTRA-Capabilities-v1560"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_EUTRA_Capability_v1560_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LTE_nonCriticalExtension_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_UE_EUTRA_Capability_v1560_IEs_oms_1[] = { 2, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_UE_EUTRA_Capability_v1560_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UE_EUTRA_Capability_v1560_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcp-ParametersNR-v1560 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* irat-ParametersNR-v1560 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* appliedCapabilityFilterCommon-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* fdd-Add-UE-EUTRA-Capabilities-v1560 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tdd-Add-UE-EUTRA-Capabilities-v1560 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v1560_IEs_specs_1 = {
	sizeof(struct LTE_UE_EUTRA_Capability_v1560_IEs),
	offsetof(struct LTE_UE_EUTRA_Capability_v1560_IEs, _asn_ctx),
	asn_MAP_LTE_UE_EUTRA_Capability_v1560_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_UE_EUTRA_Capability_v1560_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v1560_IEs = {
	"UE-EUTRA-Capability-v1560-IEs",
	"UE-EUTRA-Capability-v1560-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UE_EUTRA_Capability_v1560_IEs_tags_1,
	sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1560_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1560_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_UE_EUTRA_Capability_v1560_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1560_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1560_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UE_EUTRA_Capability_v1560_IEs_1,
	6,	/* Elements count */
	&asn_SPC_LTE_UE_EUTRA_Capability_v1560_IEs_specs_1	/* Additional specs */
};

