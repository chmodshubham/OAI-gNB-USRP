/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_NR-DL-AoD-MeasurementCapability-r16.h"

#include "LPP_DL-AoD-MeasCapabilityPerBand-r16.h"
static int
memb_LPP_maxDL_PRS_RSRP_MeasurementFR1_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
memb_LPP_maxDL_PRS_RSRP_MeasurementFR2_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
memb_LPP_dl_AoD_MeasCapabilityBandList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LPP_dl_AoD_MeasCapabilityBandList_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LPP_maxDL_PRS_RSRP_MeasurementFR1_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LPP_maxDL_PRS_RSRP_MeasurementFR2_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LPP_dl_AoD_MeasCapabilityBandList_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LPP_dl_AoD_MeasCapabilityBandList_r16_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LPP_DL_AoD_MeasCapabilityPerBand_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LPP_dl_AoD_MeasCapabilityBandList_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LPP_dl_AoD_MeasCapabilityBandList_r16_specs_4 = {
	sizeof(struct LPP_NR_DL_AoD_MeasurementCapability_r16__dl_AoD_MeasCapabilityBandList_r16),
	offsetof(struct LPP_NR_DL_AoD_MeasurementCapability_r16__dl_AoD_MeasCapabilityBandList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_dl_AoD_MeasCapabilityBandList_r16_4 = {
	"dl-AoD-MeasCapabilityBandList-r16",
	"dl-AoD-MeasCapabilityBandList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LPP_dl_AoD_MeasCapabilityBandList_r16_tags_4,
	sizeof(asn_DEF_LPP_dl_AoD_MeasCapabilityBandList_r16_tags_4)
		/sizeof(asn_DEF_LPP_dl_AoD_MeasCapabilityBandList_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_LPP_dl_AoD_MeasCapabilityBandList_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_LPP_dl_AoD_MeasCapabilityBandList_r16_tags_4)
		/sizeof(asn_DEF_LPP_dl_AoD_MeasCapabilityBandList_r16_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LPP_dl_AoD_MeasCapabilityBandList_r16_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_LPP_dl_AoD_MeasCapabilityBandList_r16_4,
	1,	/* Single element */
	&asn_SPC_LPP_dl_AoD_MeasCapabilityBandList_r16_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_NR_DL_AoD_MeasurementCapability_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NR_DL_AoD_MeasurementCapability_r16, maxDL_PRS_RSRP_MeasurementFR1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LPP_maxDL_PRS_RSRP_MeasurementFR1_r16_constr_2,  memb_LPP_maxDL_PRS_RSRP_MeasurementFR1_r16_constraint_1 },
		0, 0, /* No default value */
		"maxDL-PRS-RSRP-MeasurementFR1-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NR_DL_AoD_MeasurementCapability_r16, maxDL_PRS_RSRP_MeasurementFR2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LPP_maxDL_PRS_RSRP_MeasurementFR2_r16_constr_3,  memb_LPP_maxDL_PRS_RSRP_MeasurementFR2_r16_constraint_1 },
		0, 0, /* No default value */
		"maxDL-PRS-RSRP-MeasurementFR2-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NR_DL_AoD_MeasurementCapability_r16, dl_AoD_MeasCapabilityBandList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LPP_dl_AoD_MeasCapabilityBandList_r16_4,
		0,
		{ 0, &asn_PER_memb_LPP_dl_AoD_MeasCapabilityBandList_r16_constr_4,  memb_LPP_dl_AoD_MeasCapabilityBandList_r16_constraint_1 },
		0, 0, /* No default value */
		"dl-AoD-MeasCapabilityBandList-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_LPP_NR_DL_AoD_MeasurementCapability_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_NR_DL_AoD_MeasurementCapability_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxDL-PRS-RSRP-MeasurementFR1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxDL-PRS-RSRP-MeasurementFR2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dl-AoD-MeasCapabilityBandList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_NR_DL_AoD_MeasurementCapability_r16_specs_1 = {
	sizeof(struct LPP_NR_DL_AoD_MeasurementCapability_r16),
	offsetof(struct LPP_NR_DL_AoD_MeasurementCapability_r16, _asn_ctx),
	asn_MAP_LPP_NR_DL_AoD_MeasurementCapability_r16_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_NR_DL_AoD_MeasurementCapability_r16 = {
	"NR-DL-AoD-MeasurementCapability-r16",
	"NR-DL-AoD-MeasurementCapability-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_NR_DL_AoD_MeasurementCapability_r16_tags_1,
	sizeof(asn_DEF_LPP_NR_DL_AoD_MeasurementCapability_r16_tags_1)
		/sizeof(asn_DEF_LPP_NR_DL_AoD_MeasurementCapability_r16_tags_1[0]), /* 1 */
	asn_DEF_LPP_NR_DL_AoD_MeasurementCapability_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_NR_DL_AoD_MeasurementCapability_r16_tags_1)
		/sizeof(asn_DEF_LPP_NR_DL_AoD_MeasurementCapability_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LPP_NR_DL_AoD_MeasurementCapability_r16_1,
	3,	/* Elements count */
	&asn_SPC_LPP_NR_DL_AoD_MeasurementCapability_r16_specs_1	/* Additional specs */
};

