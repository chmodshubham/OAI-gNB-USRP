/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_CSI-IM-ConfigExt-r12.h"

static int
memb_LTE_resourceConfig_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_subframeConfig_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 154)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_resourceConfig_r12_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_subframeConfig_r12_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  154 }	/* (0..154) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_ext1_6[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_CSI_IM_ConfigExt_r12__ext1, interferenceMeasRestriction_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interferenceMeasRestriction-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CSI_IM_ConfigExt_r12__ext1, csi_IM_ConfigId_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CSI_IM_ConfigId_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-IM-ConfigId-v1310"
		},
};
static const int asn_MAP_LTE_ext1_oms_6[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interferenceMeasRestriction-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* csi-IM-ConfigId-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_6 = {
	sizeof(struct LTE_CSI_IM_ConfigExt_r12__ext1),
	offsetof(struct LTE_CSI_IM_ConfigExt_r12__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_6,	/* Optional members */
	2, 0,	/* Root/Additions */
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
	2,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_CSI_IM_ConfigExt_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CSI_IM_ConfigExt_r12, csi_IM_ConfigId_v1250),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CSI_IM_ConfigId_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-IM-ConfigId-v1250"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CSI_IM_ConfigExt_r12, resourceConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_resourceConfig_r12_constr_3,  memb_LTE_resourceConfig_r12_constraint_1 },
		0, 0, /* No default value */
		"resourceConfig-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CSI_IM_ConfigExt_r12, subframeConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_subframeConfig_r12_constr_4,  memb_LTE_subframeConfig_r12_constraint_1 },
		0, 0, /* No default value */
		"subframeConfig-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CSI_IM_ConfigExt_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_CSI_IM_ConfigExt_r12_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_LTE_CSI_IM_ConfigExt_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CSI_IM_ConfigExt_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-IM-ConfigId-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* resourceConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* subframeConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CSI_IM_ConfigExt_r12_specs_1 = {
	sizeof(struct LTE_CSI_IM_ConfigExt_r12),
	offsetof(struct LTE_CSI_IM_ConfigExt_r12, _asn_ctx),
	asn_MAP_LTE_CSI_IM_ConfigExt_r12_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_CSI_IM_ConfigExt_r12_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CSI_IM_ConfigExt_r12 = {
	"CSI-IM-ConfigExt-r12",
	"CSI-IM-ConfigExt-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CSI_IM_ConfigExt_r12_tags_1,
	sizeof(asn_DEF_LTE_CSI_IM_ConfigExt_r12_tags_1)
		/sizeof(asn_DEF_LTE_CSI_IM_ConfigExt_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_CSI_IM_ConfigExt_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CSI_IM_ConfigExt_r12_tags_1)
		/sizeof(asn_DEF_LTE_CSI_IM_ConfigExt_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CSI_IM_ConfigExt_r12_1,
	4,	/* Elements count */
	&asn_SPC_LTE_CSI_IM_ConfigExt_r12_specs_1	/* Additional specs */
};

