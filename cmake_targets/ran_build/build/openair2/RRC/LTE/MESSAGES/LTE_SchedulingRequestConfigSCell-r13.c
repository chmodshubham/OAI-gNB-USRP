/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SchedulingRequestConfigSCell-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_sr_PUCCH_ResourceIndex_r13_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
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
memb_LTE_sr_PUCCH_ResourceIndexP1_r13_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
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
memb_LTE_sr_ConfigIndex_r13_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 157)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_dsr_TransMax_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sr_PUCCH_ResourceIndex_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sr_PUCCH_ResourceIndexP1_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sr_ConfigIndex_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  157 }	/* (0..157) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_SchedulingRequestConfigSCell_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_dsr_TransMax_r13_value2enum_7[] = {
	{ 0,	2,	"n4" },
	{ 1,	2,	"n8" },
	{ 2,	3,	"n16" },
	{ 3,	3,	"n32" },
	{ 4,	3,	"n64" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_dsr_TransMax_r13_enum2value_7[] = {
	2,	/* n16(2) */
	3,	/* n32(3) */
	0,	/* n4(0) */
	4,	/* n64(4) */
	1,	/* n8(1) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5	/* spare3(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_dsr_TransMax_r13_specs_7 = {
	asn_MAP_LTE_dsr_TransMax_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_dsr_TransMax_r13_enum2value_7,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_dsr_TransMax_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dsr_TransMax_r13_7 = {
	"dsr-TransMax-r13",
	"dsr-TransMax-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_dsr_TransMax_r13_tags_7,
	sizeof(asn_DEF_LTE_dsr_TransMax_r13_tags_7)
		/sizeof(asn_DEF_LTE_dsr_TransMax_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_dsr_TransMax_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_dsr_TransMax_r13_tags_7)
		/sizeof(asn_DEF_LTE_dsr_TransMax_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_dsr_TransMax_r13_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_dsr_TransMax_r13_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SchedulingRequestConfigSCell_r13__setup, sr_PUCCH_ResourceIndex_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sr_PUCCH_ResourceIndex_r13_constr_4,  memb_LTE_sr_PUCCH_ResourceIndex_r13_constraint_3 },
		0, 0, /* No default value */
		"sr-PUCCH-ResourceIndex-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SchedulingRequestConfigSCell_r13__setup, sr_PUCCH_ResourceIndexP1_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sr_PUCCH_ResourceIndexP1_r13_constr_5,  memb_LTE_sr_PUCCH_ResourceIndexP1_r13_constraint_3 },
		0, 0, /* No default value */
		"sr-PUCCH-ResourceIndexP1-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SchedulingRequestConfigSCell_r13__setup, sr_ConfigIndex_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sr_ConfigIndex_r13_constr_6,  memb_LTE_sr_ConfigIndex_r13_constraint_3 },
		0, 0, /* No default value */
		"sr-ConfigIndex-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SchedulingRequestConfigSCell_r13__setup, dsr_TransMax_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_dsr_TransMax_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dsr-TransMax-r13"
		},
};
static const int asn_MAP_LTE_setup_oms_3[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sr-PUCCH-ResourceIndex-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sr-PUCCH-ResourceIndexP1-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sr-ConfigIndex-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* dsr-TransMax-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_SchedulingRequestConfigSCell_r13__setup),
	offsetof(struct LTE_SchedulingRequestConfigSCell_r13__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_setup_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_3,
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_3,
	4,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SchedulingRequestConfigSCell_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SchedulingRequestConfigSCell_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SchedulingRequestConfigSCell_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SchedulingRequestConfigSCell_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_SchedulingRequestConfigSCell_r13_specs_1 = {
	sizeof(struct LTE_SchedulingRequestConfigSCell_r13),
	offsetof(struct LTE_SchedulingRequestConfigSCell_r13, _asn_ctx),
	offsetof(struct LTE_SchedulingRequestConfigSCell_r13, present),
	sizeof(((struct LTE_SchedulingRequestConfigSCell_r13 *)0)->present),
	asn_MAP_LTE_SchedulingRequestConfigSCell_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SchedulingRequestConfigSCell_r13 = {
	"SchedulingRequestConfigSCell-r13",
	"SchedulingRequestConfigSCell-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_SchedulingRequestConfigSCell_r13_constr_1, CHOICE_constraint },
	asn_MBR_LTE_SchedulingRequestConfigSCell_r13_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SchedulingRequestConfigSCell_r13_specs_1	/* Additional specs */
};

