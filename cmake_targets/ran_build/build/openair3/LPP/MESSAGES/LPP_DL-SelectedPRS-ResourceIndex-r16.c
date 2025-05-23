/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_DL-SelectedPRS-ResourceIndex-r16.h"

static int
memb_LPP_nr_DL_SelectedPRS_ResourceIdIndex_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LPP_nr_DL_SelectedPRS_ResourceIdIndex_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LPP_DL_SelectedPRS_ResourceIndex_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_DL_SelectedPRS_ResourceIndex_r16, nr_DL_SelectedPRS_ResourceIdIndex_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LPP_nr_DL_SelectedPRS_ResourceIdIndex_r16_constr_2,  memb_LPP_nr_DL_SelectedPRS_ResourceIdIndex_r16_constraint_1 },
		0, 0, /* No default value */
		"nr-DL-SelectedPRS-ResourceIdIndex-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_LPP_DL_SelectedPRS_ResourceIndex_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_DL_SelectedPRS_ResourceIndex_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nr-DL-SelectedPRS-ResourceIdIndex-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_DL_SelectedPRS_ResourceIndex_r16_specs_1 = {
	sizeof(struct LPP_DL_SelectedPRS_ResourceIndex_r16),
	offsetof(struct LPP_DL_SelectedPRS_ResourceIndex_r16, _asn_ctx),
	asn_MAP_LPP_DL_SelectedPRS_ResourceIndex_r16_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_DL_SelectedPRS_ResourceIndex_r16 = {
	"DL-SelectedPRS-ResourceIndex-r16",
	"DL-SelectedPRS-ResourceIndex-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_DL_SelectedPRS_ResourceIndex_r16_tags_1,
	sizeof(asn_DEF_LPP_DL_SelectedPRS_ResourceIndex_r16_tags_1)
		/sizeof(asn_DEF_LPP_DL_SelectedPRS_ResourceIndex_r16_tags_1[0]), /* 1 */
	asn_DEF_LPP_DL_SelectedPRS_ResourceIndex_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_DL_SelectedPRS_ResourceIndex_r16_tags_1)
		/sizeof(asn_DEF_LPP_DL_SelectedPRS_ResourceIndex_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LPP_DL_SelectedPRS_ResourceIndex_r16_1,
	1,	/* Elements count */
	&asn_SPC_LPP_DL_SelectedPRS_ResourceIndex_r16_specs_1	/* Additional specs */
};

