/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_RRCResume-v1610-IEs.h"

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
static int
memb_NR_nr_SCG_r16_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_type_NR_idleModeMeasurementReq_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_restoreMCG_SCells_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_restoreSCG_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_nr_SCG_r16_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_mrdc_SecondaryCellGroup_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_idleModeMeasurementReq_r16_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_idleModeMeasurementReq_r16_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_idleModeMeasurementReq_r16_specs_2 = {
	asn_MAP_NR_idleModeMeasurementReq_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_idleModeMeasurementReq_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_idleModeMeasurementReq_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_idleModeMeasurementReq_r16_2 = {
	"idleModeMeasurementReq-r16",
	"idleModeMeasurementReq-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_idleModeMeasurementReq_r16_tags_2,
	sizeof(asn_DEF_NR_idleModeMeasurementReq_r16_tags_2)
		/sizeof(asn_DEF_NR_idleModeMeasurementReq_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_idleModeMeasurementReq_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_idleModeMeasurementReq_r16_tags_2)
		/sizeof(asn_DEF_NR_idleModeMeasurementReq_r16_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_idleModeMeasurementReq_r16_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_idleModeMeasurementReq_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_restoreMCG_SCells_r16_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_restoreMCG_SCells_r16_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_restoreMCG_SCells_r16_specs_4 = {
	asn_MAP_NR_restoreMCG_SCells_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_restoreMCG_SCells_r16_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_restoreMCG_SCells_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_restoreMCG_SCells_r16_4 = {
	"restoreMCG-SCells-r16",
	"restoreMCG-SCells-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_restoreMCG_SCells_r16_tags_4,
	sizeof(asn_DEF_NR_restoreMCG_SCells_r16_tags_4)
		/sizeof(asn_DEF_NR_restoreMCG_SCells_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_restoreMCG_SCells_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_restoreMCG_SCells_r16_tags_4)
		/sizeof(asn_DEF_NR_restoreMCG_SCells_r16_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_restoreMCG_SCells_r16_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_restoreMCG_SCells_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_restoreSCG_r16_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_restoreSCG_r16_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_restoreSCG_r16_specs_6 = {
	asn_MAP_NR_restoreSCG_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_restoreSCG_r16_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_restoreSCG_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_restoreSCG_r16_6 = {
	"restoreSCG-r16",
	"restoreSCG-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_restoreSCG_r16_tags_6,
	sizeof(asn_DEF_NR_restoreSCG_r16_tags_6)
		/sizeof(asn_DEF_NR_restoreSCG_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_restoreSCG_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_restoreSCG_r16_tags_6)
		/sizeof(asn_DEF_NR_restoreSCG_r16_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_NR_restoreSCG_r16_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_restoreSCG_r16_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_mrdc_SecondaryCellGroup_r16_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16, choice.nr_SCG_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_NR_nr_SCG_r16_constr_9,  memb_NR_nr_SCG_r16_constraint_8 },
		0, 0, /* No default value */
		"nr-SCG-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16, choice.eutra_SCG_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-SCG-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_mrdc_SecondaryCellGroup_r16_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-SCG-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutra-SCG-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_mrdc_SecondaryCellGroup_r16_specs_8 = {
	sizeof(struct NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16),
	offsetof(struct NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16, _asn_ctx),
	offsetof(struct NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16, present),
	sizeof(((struct NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16 *)0)->present),
	asn_MAP_NR_mrdc_SecondaryCellGroup_r16_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mrdc_SecondaryCellGroup_r16_8 = {
	"mrdc-SecondaryCellGroup-r16",
	"mrdc-SecondaryCellGroup-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_mrdc_SecondaryCellGroup_r16_constr_8, CHOICE_constraint },
	asn_MBR_NR_mrdc_SecondaryCellGroup_r16_8,
	2,	/* Elements count */
	&asn_SPC_NR_mrdc_SecondaryCellGroup_r16_specs_8	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NR_nonCriticalExtension_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nonCriticalExtension_specs_12 = {
	sizeof(struct NR_RRCResume_v1610_IEs__nonCriticalExtension),
	offsetof(struct NR_RRCResume_v1610_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nonCriticalExtension_12 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nonCriticalExtension_tags_12,
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_12)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_nonCriticalExtension_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_12)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_NR_nonCriticalExtension_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_RRCResume_v1610_IEs_1[] = {
	{ ATF_POINTER, 6, offsetof(struct NR_RRCResume_v1610_IEs, idleModeMeasurementReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_idleModeMeasurementReq_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idleModeMeasurementReq-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_RRCResume_v1610_IEs, restoreMCG_SCells_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_restoreMCG_SCells_r16_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"restoreMCG-SCells-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_RRCResume_v1610_IEs, restoreSCG_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_restoreSCG_r16_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"restoreSCG-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_RRCResume_v1610_IEs, mrdc_SecondaryCellGroup_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_mrdc_SecondaryCellGroup_r16_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mrdc-SecondaryCellGroup-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RRCResume_v1610_IEs, needForGapsConfigNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_NeedForGapsConfigNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"needForGapsConfigNR-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RRCResume_v1610_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_nonCriticalExtension_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_NR_RRCResume_v1610_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_RRCResume_v1610_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RRCResume_v1610_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idleModeMeasurementReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* restoreMCG-SCells-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* restoreSCG-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mrdc-SecondaryCellGroup-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* needForGapsConfigNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_RRCResume_v1610_IEs_specs_1 = {
	sizeof(struct NR_RRCResume_v1610_IEs),
	offsetof(struct NR_RRCResume_v1610_IEs, _asn_ctx),
	asn_MAP_NR_RRCResume_v1610_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_RRCResume_v1610_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_RRCResume_v1610_IEs = {
	"RRCResume-v1610-IEs",
	"RRCResume-v1610-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_RRCResume_v1610_IEs_tags_1,
	sizeof(asn_DEF_NR_RRCResume_v1610_IEs_tags_1)
		/sizeof(asn_DEF_NR_RRCResume_v1610_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_RRCResume_v1610_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_RRCResume_v1610_IEs_tags_1)
		/sizeof(asn_DEF_NR_RRCResume_v1610_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_RRCResume_v1610_IEs_1,
	6,	/* Elements count */
	&asn_SPC_NR_RRCResume_v1610_IEs_specs_1	/* Additional specs */
};

