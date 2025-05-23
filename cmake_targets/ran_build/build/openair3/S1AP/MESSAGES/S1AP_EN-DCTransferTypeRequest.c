/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#include "S1AP_EN-DCTransferTypeRequest.h"

#include "S1AP_EN-DCSONeNBIdentification.h"
#include "S1AP_TAI.h"
#include "S1AP_FiveGSTAI.h"
#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_EN_DCTransferTypeRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_EN_DCTransferTypeRequest, sourceeNB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EN_DCSONeNBIdentification,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceeNB"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_EN_DCTransferTypeRequest, targetengNB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EN_DCSONengNBIdentification,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetengNB"
		},
	{ ATF_POINTER, 4, offsetof(struct S1AP_EN_DCTransferTypeRequest, targeteNB),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EN_DCSONeNBIdentification,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targeteNB"
		},
	{ ATF_POINTER, 3, offsetof(struct S1AP_EN_DCTransferTypeRequest, associatedTAI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_TAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"associatedTAI"
		},
	{ ATF_POINTER, 2, offsetof(struct S1AP_EN_DCTransferTypeRequest, broadcast5GSTAI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_FiveGSTAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"broadcast5GSTAI"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_EN_DCTransferTypeRequest, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_7327P55,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_EN_DCTransferTypeRequest_oms_1[] = { 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_S1AP_EN_DCTransferTypeRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_EN_DCTransferTypeRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceeNB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targetengNB */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* targeteNB */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* associatedTAI */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* broadcast5GSTAI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_EN_DCTransferTypeRequest_specs_1 = {
	sizeof(struct S1AP_EN_DCTransferTypeRequest),
	offsetof(struct S1AP_EN_DCTransferTypeRequest, _asn_ctx),
	asn_MAP_S1AP_EN_DCTransferTypeRequest_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_S1AP_EN_DCTransferTypeRequest_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_EN_DCTransferTypeRequest = {
	"EN-DCTransferTypeRequest",
	"EN-DCTransferTypeRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_EN_DCTransferTypeRequest_tags_1,
	sizeof(asn_DEF_S1AP_EN_DCTransferTypeRequest_tags_1)
		/sizeof(asn_DEF_S1AP_EN_DCTransferTypeRequest_tags_1[0]), /* 1 */
	asn_DEF_S1AP_EN_DCTransferTypeRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_EN_DCTransferTypeRequest_tags_1)
		/sizeof(asn_DEF_S1AP_EN_DCTransferTypeRequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_EN_DCTransferTypeRequest_1,
	6,	/* Elements count */
	&asn_SPC_S1AP_EN_DCTransferTypeRequest_specs_1	/* Additional specs */
};

