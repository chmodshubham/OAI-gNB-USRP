/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SL-V2X-ConfigCommon-r14.h"

static int
memb_LTE_offsetDFN_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_offsetDFN_r14_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1000 }	/* (0..1000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_SL_V2X_ConfigCommon_r14_1[] = {
	{ ATF_POINTER, 13, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, v2x_CommRxPool_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommRxPoolListV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-CommRxPool-r14"
		},
	{ ATF_POINTER, 12, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, v2x_CommTxPoolNormalCommon_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommTxPoolListV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-CommTxPoolNormalCommon-r14"
		},
	{ ATF_POINTER, 11, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, p2x_CommTxPoolNormalCommon_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommTxPoolListV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p2x-CommTxPoolNormalCommon-r14"
		},
	{ ATF_POINTER, 10, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, v2x_CommTxPoolExceptional_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommResourcePoolV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-CommTxPoolExceptional-r14"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, v2x_SyncConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_SyncConfigListV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-SyncConfig-r14"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, v2x_InterFreqInfoList_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_InterFreqInfoListV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-InterFreqInfoList-r14"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, v2x_ResourceSelectionConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommTxPoolSensingConfig_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-ResourceSelectionConfig-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, zoneConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_ZoneConfig_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zoneConfig-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, typeTxSync_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_TypeTxSync_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"typeTxSync-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, thresSL_TxPrioritization_r14),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_Priority_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresSL-TxPrioritization-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, anchorCarrierFreqList_r14),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_AnchorCarrierFreqList_V2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"anchorCarrierFreqList-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, offsetDFN_r14),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_offsetDFN_r14_constr_13,  memb_LTE_offsetDFN_r14_constraint_1 },
		0, 0, /* No default value */
		"offsetDFN-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_V2X_ConfigCommon_r14, cbr_CommonTxConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CBR_CommonTxConfigList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cbr-CommonTxConfigList-r14"
		},
};
static const int asn_MAP_LTE_SL_V2X_ConfigCommon_r14_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_V2X_ConfigCommon_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_V2X_ConfigCommon_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* v2x-CommRxPool-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* v2x-CommTxPoolNormalCommon-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p2x-CommTxPoolNormalCommon-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* v2x-CommTxPoolExceptional-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* v2x-SyncConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* v2x-InterFreqInfoList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* v2x-ResourceSelectionConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* zoneConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* typeTxSync-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* thresSL-TxPrioritization-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* anchorCarrierFreqList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* offsetDFN-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* cbr-CommonTxConfigList-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_V2X_ConfigCommon_r14_specs_1 = {
	sizeof(struct LTE_SL_V2X_ConfigCommon_r14),
	offsetof(struct LTE_SL_V2X_ConfigCommon_r14, _asn_ctx),
	asn_MAP_LTE_SL_V2X_ConfigCommon_r14_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_LTE_SL_V2X_ConfigCommon_r14_oms_1,	/* Optional members */
	13, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_V2X_ConfigCommon_r14 = {
	"SL-V2X-ConfigCommon-r14",
	"SL-V2X-ConfigCommon-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_V2X_ConfigCommon_r14_tags_1,
	sizeof(asn_DEF_LTE_SL_V2X_ConfigCommon_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_V2X_ConfigCommon_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_V2X_ConfigCommon_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_V2X_ConfigCommon_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_V2X_ConfigCommon_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SL_V2X_ConfigCommon_r14_1,
	13,	/* Elements count */
	&asn_SPC_LTE_SL_V2X_ConfigCommon_r14_specs_1	/* Additional specs */
};

