/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_UplinkPowerControlDedicated-v1130.h"

static int
memb_LTE_pSRS_Offset_v1130_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 16 && value <= 31)) {
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
memb_LTE_pSRS_OffsetAp_v1130_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 16 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_pSRS_Offset_v1130_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  16,  31 }	/* (16..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_pSRS_OffsetAp_v1130_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  16,  31 }	/* (16..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_UplinkPowerControlDedicated_v1130_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_UplinkPowerControlDedicated_v1130, pSRS_Offset_v1130),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_pSRS_Offset_v1130_constr_2,  memb_LTE_pSRS_Offset_v1130_constraint_1 },
		0, 0, /* No default value */
		"pSRS-Offset-v1130"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_UplinkPowerControlDedicated_v1130, pSRS_OffsetAp_v1130),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_pSRS_OffsetAp_v1130_constr_3,  memb_LTE_pSRS_OffsetAp_v1130_constraint_1 },
		0, 0, /* No default value */
		"pSRS-OffsetAp-v1130"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UplinkPowerControlDedicated_v1130, deltaTxD_OffsetListPUCCH_v1130),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DeltaTxD_OffsetListPUCCH_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaTxD-OffsetListPUCCH-v1130"
		},
};
static const int asn_MAP_LTE_UplinkPowerControlDedicated_v1130_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_UplinkPowerControlDedicated_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UplinkPowerControlDedicated_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pSRS-Offset-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pSRS-OffsetAp-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* deltaTxD-OffsetListPUCCH-v1130 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UplinkPowerControlDedicated_v1130_specs_1 = {
	sizeof(struct LTE_UplinkPowerControlDedicated_v1130),
	offsetof(struct LTE_UplinkPowerControlDedicated_v1130, _asn_ctx),
	asn_MAP_LTE_UplinkPowerControlDedicated_v1130_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_UplinkPowerControlDedicated_v1130_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UplinkPowerControlDedicated_v1130 = {
	"UplinkPowerControlDedicated-v1130",
	"UplinkPowerControlDedicated-v1130",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UplinkPowerControlDedicated_v1130_tags_1,
	sizeof(asn_DEF_LTE_UplinkPowerControlDedicated_v1130_tags_1)
		/sizeof(asn_DEF_LTE_UplinkPowerControlDedicated_v1130_tags_1[0]), /* 1 */
	asn_DEF_LTE_UplinkPowerControlDedicated_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UplinkPowerControlDedicated_v1130_tags_1)
		/sizeof(asn_DEF_LTE_UplinkPowerControlDedicated_v1130_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UplinkPowerControlDedicated_v1130_1,
	3,	/* Elements count */
	&asn_SPC_LTE_UplinkPowerControlDedicated_v1130_specs_1	/* Additional specs */
};

