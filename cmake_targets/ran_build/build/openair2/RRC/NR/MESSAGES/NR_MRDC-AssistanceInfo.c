/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_MRDC-AssistanceInfo.h"

static int
memb_NR_overheatingAssistanceSCG_r16_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_NR_affectedCarrierFreqCombInfoListMRDC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 128)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_affectedCarrierFreqCombInfoListMRDC_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (SIZE(1..128)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_overheatingAssistanceSCG_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_affectedCarrierFreqCombInfoListMRDC_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (SIZE(1..128)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_affectedCarrierFreqCombInfoListMRDC_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_AffectedCarrierFreqCombInfoMRDC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_affectedCarrierFreqCombInfoListMRDC_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_affectedCarrierFreqCombInfoListMRDC_specs_2 = {
	sizeof(struct NR_MRDC_AssistanceInfo__affectedCarrierFreqCombInfoListMRDC),
	offsetof(struct NR_MRDC_AssistanceInfo__affectedCarrierFreqCombInfoListMRDC, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_affectedCarrierFreqCombInfoListMRDC_2 = {
	"affectedCarrierFreqCombInfoListMRDC",
	"affectedCarrierFreqCombInfoListMRDC",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_affectedCarrierFreqCombInfoListMRDC_tags_2,
	sizeof(asn_DEF_NR_affectedCarrierFreqCombInfoListMRDC_tags_2)
		/sizeof(asn_DEF_NR_affectedCarrierFreqCombInfoListMRDC_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_affectedCarrierFreqCombInfoListMRDC_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_affectedCarrierFreqCombInfoListMRDC_tags_2)
		/sizeof(asn_DEF_NR_affectedCarrierFreqCombInfoListMRDC_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_affectedCarrierFreqCombInfoListMRDC_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_NR_affectedCarrierFreqCombInfoListMRDC_2,
	1,	/* Single element */
	&asn_SPC_NR_affectedCarrierFreqCombInfoListMRDC_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_5[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_MRDC_AssistanceInfo__ext1, overheatingAssistanceSCG_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_NR_overheatingAssistanceSCG_r16_constr_6,  memb_NR_overheatingAssistanceSCG_r16_constraint_5 },
		0, 0, /* No default value */
		"overheatingAssistanceSCG-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* overheatingAssistanceSCG-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_5 = {
	sizeof(struct NR_MRDC_AssistanceInfo__ext1),
	offsetof(struct NR_MRDC_AssistanceInfo__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_5,
	sizeof(asn_DEF_NR_ext1_tags_5)
		/sizeof(asn_DEF_NR_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_5)
		/sizeof(asn_DEF_NR_ext1_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_5,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_MRDC_AssistanceInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MRDC_AssistanceInfo, affectedCarrierFreqCombInfoListMRDC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_affectedCarrierFreqCombInfoListMRDC_2,
		0,
		{ 0, &asn_PER_memb_NR_affectedCarrierFreqCombInfoListMRDC_constr_2,  memb_NR_affectedCarrierFreqCombInfoListMRDC_constraint_1 },
		0, 0, /* No default value */
		"affectedCarrierFreqCombInfoListMRDC"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MRDC_AssistanceInfo, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_ext1_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_MRDC_AssistanceInfo_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NR_MRDC_AssistanceInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MRDC_AssistanceInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* affectedCarrierFreqCombInfoListMRDC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MRDC_AssistanceInfo_specs_1 = {
	sizeof(struct NR_MRDC_AssistanceInfo),
	offsetof(struct NR_MRDC_AssistanceInfo, _asn_ctx),
	asn_MAP_NR_MRDC_AssistanceInfo_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_MRDC_AssistanceInfo_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MRDC_AssistanceInfo = {
	"MRDC-AssistanceInfo",
	"MRDC-AssistanceInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MRDC_AssistanceInfo_tags_1,
	sizeof(asn_DEF_NR_MRDC_AssistanceInfo_tags_1)
		/sizeof(asn_DEF_NR_MRDC_AssistanceInfo_tags_1[0]), /* 1 */
	asn_DEF_NR_MRDC_AssistanceInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MRDC_AssistanceInfo_tags_1)
		/sizeof(asn_DEF_NR_MRDC_AssistanceInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_MRDC_AssistanceInfo_1,
	2,	/* Elements count */
	&asn_SPC_NR_MRDC_AssistanceInfo_specs_1	/* Additional specs */
};

