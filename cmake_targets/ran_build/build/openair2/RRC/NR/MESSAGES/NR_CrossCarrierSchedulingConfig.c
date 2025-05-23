/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_CrossCarrierSchedulingConfig.h"

static int
memb_NR_cif_InSchedulingCell_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 7)) {
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
memb_NR_carrierIndicatorSizeDCI_1_2_r16_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
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
memb_NR_carrierIndicatorSizeDCI_0_2_r16_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_memb_NR_cif_InSchedulingCell_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  7 }	/* (1..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_schedulingCellInfo_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_carrierIndicatorSizeDCI_1_2_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_carrierIndicatorSizeDCI_0_2_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_enableDefaultBeamForCCS_r16_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_own_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo__own, cif_Presence),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cif-Presence"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_own_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_own_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cif-Presence */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_own_specs_3 = {
	sizeof(struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo__own),
	offsetof(struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo__own, _asn_ctx),
	asn_MAP_NR_own_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_own_3 = {
	"own",
	"own",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_own_tags_3,
	sizeof(asn_DEF_NR_own_tags_3)
		/sizeof(asn_DEF_NR_own_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_own_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_own_tags_3)
		/sizeof(asn_DEF_NR_own_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_own_3,
	1,	/* Elements count */
	&asn_SPC_NR_own_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_other_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo__other, schedulingCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo__other, cif_InSchedulingCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_cif_InSchedulingCell_constr_7,  memb_NR_cif_InSchedulingCell_constraint_5 },
		0, 0, /* No default value */
		"cif-InSchedulingCell"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_other_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_other_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* schedulingCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cif-InSchedulingCell */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_other_specs_5 = {
	sizeof(struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo__other),
	offsetof(struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo__other, _asn_ctx),
	asn_MAP_NR_other_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_other_5 = {
	"other",
	"other",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_other_tags_5,
	sizeof(asn_DEF_NR_other_tags_5)
		/sizeof(asn_DEF_NR_other_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_other_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_other_tags_5)
		/sizeof(asn_DEF_NR_other_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_other_5,
	2,	/* Elements count */
	&asn_SPC_NR_other_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_schedulingCellInfo_2[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo, choice.own),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_own_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"own"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo, choice.other),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_other_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"other"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_schedulingCellInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* own */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* other */
};
static asn_CHOICE_specifics_t asn_SPC_NR_schedulingCellInfo_specs_2 = {
	sizeof(struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo),
	offsetof(struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo, _asn_ctx),
	offsetof(struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo, present),
	sizeof(((struct NR_CrossCarrierSchedulingConfig__schedulingCellInfo *)0)->present),
	asn_MAP_NR_schedulingCellInfo_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_schedulingCellInfo_2 = {
	"schedulingCellInfo",
	"schedulingCellInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_schedulingCellInfo_constr_2, CHOICE_constraint },
	asn_MBR_NR_schedulingCellInfo_2,
	2,	/* Elements count */
	&asn_SPC_NR_schedulingCellInfo_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_carrierIndicatorSize_r16_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CrossCarrierSchedulingConfig__ext1__carrierIndicatorSize_r16, carrierIndicatorSizeDCI_1_2_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_carrierIndicatorSizeDCI_1_2_r16_constr_11,  memb_NR_carrierIndicatorSizeDCI_1_2_r16_constraint_10 },
		0, 0, /* No default value */
		"carrierIndicatorSizeDCI-1-2-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CrossCarrierSchedulingConfig__ext1__carrierIndicatorSize_r16, carrierIndicatorSizeDCI_0_2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_carrierIndicatorSizeDCI_0_2_r16_constr_12,  memb_NR_carrierIndicatorSizeDCI_0_2_r16_constraint_10 },
		0, 0, /* No default value */
		"carrierIndicatorSizeDCI-0-2-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_carrierIndicatorSize_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_carrierIndicatorSize_r16_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierIndicatorSizeDCI-1-2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* carrierIndicatorSizeDCI-0-2-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_carrierIndicatorSize_r16_specs_10 = {
	sizeof(struct NR_CrossCarrierSchedulingConfig__ext1__carrierIndicatorSize_r16),
	offsetof(struct NR_CrossCarrierSchedulingConfig__ext1__carrierIndicatorSize_r16, _asn_ctx),
	asn_MAP_NR_carrierIndicatorSize_r16_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_carrierIndicatorSize_r16_10 = {
	"carrierIndicatorSize-r16",
	"carrierIndicatorSize-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_carrierIndicatorSize_r16_tags_10,
	sizeof(asn_DEF_NR_carrierIndicatorSize_r16_tags_10)
		/sizeof(asn_DEF_NR_carrierIndicatorSize_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_carrierIndicatorSize_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_carrierIndicatorSize_r16_tags_10)
		/sizeof(asn_DEF_NR_carrierIndicatorSize_r16_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_carrierIndicatorSize_r16_10,
	2,	/* Elements count */
	&asn_SPC_NR_carrierIndicatorSize_r16_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_enableDefaultBeamForCCS_r16_value2enum_13[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_NR_enableDefaultBeamForCCS_r16_enum2value_13[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_enableDefaultBeamForCCS_r16_specs_13 = {
	asn_MAP_NR_enableDefaultBeamForCCS_r16_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_enableDefaultBeamForCCS_r16_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_enableDefaultBeamForCCS_r16_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_enableDefaultBeamForCCS_r16_13 = {
	"enableDefaultBeamForCCS-r16",
	"enableDefaultBeamForCCS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_enableDefaultBeamForCCS_r16_tags_13,
	sizeof(asn_DEF_NR_enableDefaultBeamForCCS_r16_tags_13)
		/sizeof(asn_DEF_NR_enableDefaultBeamForCCS_r16_tags_13[0]) - 1, /* 1 */
	asn_DEF_NR_enableDefaultBeamForCCS_r16_tags_13,	/* Same as above */
	sizeof(asn_DEF_NR_enableDefaultBeamForCCS_r16_tags_13)
		/sizeof(asn_DEF_NR_enableDefaultBeamForCCS_r16_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_NR_enableDefaultBeamForCCS_r16_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_enableDefaultBeamForCCS_r16_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_9[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_CrossCarrierSchedulingConfig__ext1, carrierIndicatorSize_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_carrierIndicatorSize_r16_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierIndicatorSize-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_CrossCarrierSchedulingConfig__ext1, enableDefaultBeamForCCS_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_enableDefaultBeamForCCS_r16_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"enableDefaultBeamForCCS-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_9[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierIndicatorSize-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* enableDefaultBeamForCCS-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_9 = {
	sizeof(struct NR_CrossCarrierSchedulingConfig__ext1),
	offsetof(struct NR_CrossCarrierSchedulingConfig__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_9,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_9 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_9,
	sizeof(asn_DEF_NR_ext1_tags_9)
		/sizeof(asn_DEF_NR_ext1_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_9)
		/sizeof(asn_DEF_NR_ext1_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_9,
	2,	/* Elements count */
	&asn_SPC_NR_ext1_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_CrossCarrierSchedulingConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CrossCarrierSchedulingConfig, schedulingCellInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_schedulingCellInfo_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingCellInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_CrossCarrierSchedulingConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_ext1_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_CrossCarrierSchedulingConfig_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NR_CrossCarrierSchedulingConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CrossCarrierSchedulingConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* schedulingCellInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CrossCarrierSchedulingConfig_specs_1 = {
	sizeof(struct NR_CrossCarrierSchedulingConfig),
	offsetof(struct NR_CrossCarrierSchedulingConfig, _asn_ctx),
	asn_MAP_NR_CrossCarrierSchedulingConfig_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_CrossCarrierSchedulingConfig_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CrossCarrierSchedulingConfig = {
	"CrossCarrierSchedulingConfig",
	"CrossCarrierSchedulingConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CrossCarrierSchedulingConfig_tags_1,
	sizeof(asn_DEF_NR_CrossCarrierSchedulingConfig_tags_1)
		/sizeof(asn_DEF_NR_CrossCarrierSchedulingConfig_tags_1[0]), /* 1 */
	asn_DEF_NR_CrossCarrierSchedulingConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CrossCarrierSchedulingConfig_tags_1)
		/sizeof(asn_DEF_NR_CrossCarrierSchedulingConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_CrossCarrierSchedulingConfig_1,
	2,	/* Elements count */
	&asn_SPC_NR_CrossCarrierSchedulingConfig_specs_1	/* Additional specs */
};

