/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_RRCConnectionReestablishment.h"

static asn_per_constraints_t asn_PER_type_LTE_c1_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_criticalExtensions_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_c1_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions__c1, choice.rrcConnectionReestablishment_r8),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionReestablishment_r8_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionReestablishment-r8"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions__c1, choice.spare7),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare7"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions__c1, choice.spare6),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare6"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions__c1, choice.spare5),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions__c1, choice.spare4),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions__c1, choice.spare3),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions__c1, choice.spare2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions__c1, choice.spare1),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_c1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReestablishment-r8 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* spare7 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* spare6 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* spare5 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* spare4 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* spare3 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* spare2 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* spare1 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_c1_specs_4 = {
	sizeof(struct LTE_RRCConnectionReestablishment__criticalExtensions__c1),
	offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions__c1, _asn_ctx),
	offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions__c1, present),
	sizeof(((struct LTE_RRCConnectionReestablishment__criticalExtensions__c1 *)0)->present),
	asn_MAP_LTE_c1_tag2el_4,
	8,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_c1_4 = {
	"c1",
	"c1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_c1_constr_4, CHOICE_constraint },
	asn_MBR_LTE_c1_4,
	8,	/* Elements count */
	&asn_SPC_LTE_c1_specs_4	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_criticalExtensionsFuture_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_criticalExtensionsFuture_specs_13 = {
	sizeof(struct LTE_RRCConnectionReestablishment__criticalExtensions__criticalExtensionsFuture),
	offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions__criticalExtensionsFuture, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_criticalExtensionsFuture_13 = {
	"criticalExtensionsFuture",
	"criticalExtensionsFuture",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_criticalExtensionsFuture_tags_13,
	sizeof(asn_DEF_LTE_criticalExtensionsFuture_tags_13)
		/sizeof(asn_DEF_LTE_criticalExtensionsFuture_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_criticalExtensionsFuture_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_criticalExtensionsFuture_tags_13)
		/sizeof(asn_DEF_LTE_criticalExtensionsFuture_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_LTE_criticalExtensionsFuture_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_criticalExtensions_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_c1_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions, choice.criticalExtensionsFuture),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_criticalExtensionsFuture_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticalExtensionsFuture"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_criticalExtensions_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensionsFuture */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_criticalExtensions_specs_3 = {
	sizeof(struct LTE_RRCConnectionReestablishment__criticalExtensions),
	offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions, _asn_ctx),
	offsetof(struct LTE_RRCConnectionReestablishment__criticalExtensions, present),
	sizeof(((struct LTE_RRCConnectionReestablishment__criticalExtensions *)0)->present),
	asn_MAP_LTE_criticalExtensions_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_criticalExtensions_3 = {
	"criticalExtensions",
	"criticalExtensions",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_criticalExtensions_constr_3, CHOICE_constraint },
	asn_MBR_LTE_criticalExtensions_3,
	2,	/* Elements count */
	&asn_SPC_LTE_criticalExtensions_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReestablishment_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishment, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRC_TransactionIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-TransactionIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishment, criticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_criticalExtensions_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticalExtensions"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionReestablishment_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionReestablishment_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensions */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReestablishment_specs_1 = {
	sizeof(struct LTE_RRCConnectionReestablishment),
	offsetof(struct LTE_RRCConnectionReestablishment, _asn_ctx),
	asn_MAP_LTE_RRCConnectionReestablishment_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReestablishment = {
	"RRCConnectionReestablishment",
	"RRCConnectionReestablishment",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionReestablishment_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionReestablishment_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReestablishment_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionReestablishment_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionReestablishment_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReestablishment_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RRCConnectionReestablishment_1,
	2,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionReestablishment_specs_1	/* Additional specs */
};

