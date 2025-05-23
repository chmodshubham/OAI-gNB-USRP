/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_DynamicPQIDescriptor.h"

#include "F1AP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_F1AP_qoSPriorityLevel_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_F1AP_resourceType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_F1AP_qoSPriorityLevel_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  1,  8 }	/* (1..8,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_resourceType_value2enum_2[] = {
	{ 0,	3,	"gbr" },
	{ 1,	7,	"non-gbr" },
	{ 2,	18,	"delay-critical-grb" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_resourceType_enum2value_2[] = {
	2,	/* delay-critical-grb(2) */
	0,	/* gbr(0) */
	1	/* non-gbr(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_F1AP_resourceType_specs_2 = {
	asn_MAP_F1AP_resourceType_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_resourceType_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_resourceType_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_F1AP_resourceType_2 = {
	"resourceType",
	"resourceType",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_resourceType_tags_2,
	sizeof(asn_DEF_F1AP_resourceType_tags_2)
		/sizeof(asn_DEF_F1AP_resourceType_tags_2[0]) - 1, /* 1 */
	asn_DEF_F1AP_resourceType_tags_2,	/* Same as above */
	sizeof(asn_DEF_F1AP_resourceType_tags_2)
		/sizeof(asn_DEF_F1AP_resourceType_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_F1AP_resourceType_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_resourceType_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_F1AP_DynamicPQIDescriptor_1[] = {
	{ ATF_POINTER, 1, offsetof(struct F1AP_DynamicPQIDescriptor, resourceType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_resourceType_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resourceType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_DynamicPQIDescriptor, qoSPriorityLevel),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_F1AP_qoSPriorityLevel_constr_7,  memb_F1AP_qoSPriorityLevel_constraint_1 },
		0, 0, /* No default value */
		"qoSPriorityLevel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_DynamicPQIDescriptor, packetDelayBudget),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_PacketDelayBudget,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"packetDelayBudget"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_DynamicPQIDescriptor, packetErrorRate),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_PacketErrorRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"packetErrorRate"
		},
	{ ATF_POINTER, 3, offsetof(struct F1AP_DynamicPQIDescriptor, averagingWindow),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_AveragingWindow,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"averagingWindow"
		},
	{ ATF_POINTER, 2, offsetof(struct F1AP_DynamicPQIDescriptor, maxDataBurstVolume),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_MaxDataBurstVolume,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxDataBurstVolume"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_DynamicPQIDescriptor, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_10696P88,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_F1AP_DynamicPQIDescriptor_oms_1[] = { 0, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_F1AP_DynamicPQIDescriptor_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_DynamicPQIDescriptor_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resourceType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* qoSPriorityLevel */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* packetDelayBudget */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* packetErrorRate */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* averagingWindow */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* maxDataBurstVolume */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_DynamicPQIDescriptor_specs_1 = {
	sizeof(struct F1AP_DynamicPQIDescriptor),
	offsetof(struct F1AP_DynamicPQIDescriptor, _asn_ctx),
	asn_MAP_F1AP_DynamicPQIDescriptor_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_F1AP_DynamicPQIDescriptor_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_DynamicPQIDescriptor = {
	"DynamicPQIDescriptor",
	"DynamicPQIDescriptor",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_DynamicPQIDescriptor_tags_1,
	sizeof(asn_DEF_F1AP_DynamicPQIDescriptor_tags_1)
		/sizeof(asn_DEF_F1AP_DynamicPQIDescriptor_tags_1[0]), /* 1 */
	asn_DEF_F1AP_DynamicPQIDescriptor_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_DynamicPQIDescriptor_tags_1)
		/sizeof(asn_DEF_F1AP_DynamicPQIDescriptor_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_F1AP_DynamicPQIDescriptor_1,
	7,	/* Elements count */
	&asn_SPC_F1AP_DynamicPQIDescriptor_specs_1	/* Additional specs */
};

