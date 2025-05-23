/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_LogMeasResultBT-r16.h"

static int
memb_NR_bt_Addr_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 48)) {
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
memb_NR_rssi_BT_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -128 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_NR_bt_Addr_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  48,  48 }	/* (SIZE(48..48)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_rssi_BT_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -128,  127 }	/* (-128..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NR_LogMeasResultBT_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_LogMeasResultBT_r16, bt_Addr_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_bt_Addr_r16_constr_2,  memb_NR_bt_Addr_r16_constraint_1 },
		0, 0, /* No default value */
		"bt-Addr-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_LogMeasResultBT_r16, rssi_BT_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_rssi_BT_r16_constr_3,  memb_NR_rssi_BT_r16_constraint_1 },
		0, 0, /* No default value */
		"rssi-BT-r16"
		},
};
static const int asn_MAP_NR_LogMeasResultBT_r16_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NR_LogMeasResultBT_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_LogMeasResultBT_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bt-Addr-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rssi-BT-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_LogMeasResultBT_r16_specs_1 = {
	sizeof(struct NR_LogMeasResultBT_r16),
	offsetof(struct NR_LogMeasResultBT_r16, _asn_ctx),
	asn_MAP_NR_LogMeasResultBT_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_LogMeasResultBT_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_LogMeasResultBT_r16 = {
	"LogMeasResultBT-r16",
	"LogMeasResultBT-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_LogMeasResultBT_r16_tags_1,
	sizeof(asn_DEF_NR_LogMeasResultBT_r16_tags_1)
		/sizeof(asn_DEF_NR_LogMeasResultBT_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_LogMeasResultBT_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_LogMeasResultBT_r16_tags_1)
		/sizeof(asn_DEF_NR_LogMeasResultBT_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_LogMeasResultBT_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_LogMeasResultBT_r16_specs_1	/* Additional specs */
};

