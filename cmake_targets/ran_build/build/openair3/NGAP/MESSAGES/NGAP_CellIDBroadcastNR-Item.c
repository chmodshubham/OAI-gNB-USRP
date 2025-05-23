/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#include "NGAP_CellIDBroadcastNR-Item.h"

#include "NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NGAP_CellIDBroadcastNR_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_CellIDBroadcastNR_Item, nR_CGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_NR_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nR-CGI"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_CellIDBroadcastNR_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_6861P21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_CellIDBroadcastNR_Item_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NGAP_CellIDBroadcastNR_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_CellIDBroadcastNR_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nR-CGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_CellIDBroadcastNR_Item_specs_1 = {
	sizeof(struct NGAP_CellIDBroadcastNR_Item),
	offsetof(struct NGAP_CellIDBroadcastNR_Item, _asn_ctx),
	asn_MAP_NGAP_CellIDBroadcastNR_Item_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NGAP_CellIDBroadcastNR_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_CellIDBroadcastNR_Item = {
	"CellIDBroadcastNR-Item",
	"CellIDBroadcastNR-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_CellIDBroadcastNR_Item_tags_1,
	sizeof(asn_DEF_NGAP_CellIDBroadcastNR_Item_tags_1)
		/sizeof(asn_DEF_NGAP_CellIDBroadcastNR_Item_tags_1[0]), /* 1 */
	asn_DEF_NGAP_CellIDBroadcastNR_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_CellIDBroadcastNR_Item_tags_1)
		/sizeof(asn_DEF_NGAP_CellIDBroadcastNR_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_CellIDBroadcastNR_Item_1,
	2,	/* Elements count */
	&asn_SPC_NGAP_CellIDBroadcastNR_Item_specs_1	/* Additional specs */
};

