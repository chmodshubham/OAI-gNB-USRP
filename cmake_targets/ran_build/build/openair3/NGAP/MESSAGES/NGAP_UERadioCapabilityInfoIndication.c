/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "/home/rcdu/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#include "NGAP_UERadioCapabilityInfoIndication.h"

asn_TYPE_member_t asn_MBR_NGAP_UERadioCapabilityInfoIndication_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UERadioCapabilityInfoIndication, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolIE_Container_6810P74,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_NGAP_UERadioCapabilityInfoIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_UERadioCapabilityInfoIndication_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_UERadioCapabilityInfoIndication_specs_1 = {
	sizeof(struct NGAP_UERadioCapabilityInfoIndication),
	offsetof(struct NGAP_UERadioCapabilityInfoIndication, _asn_ctx),
	asn_MAP_NGAP_UERadioCapabilityInfoIndication_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_UERadioCapabilityInfoIndication = {
	"UERadioCapabilityInfoIndication",
	"UERadioCapabilityInfoIndication",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_UERadioCapabilityInfoIndication_tags_1,
	sizeof(asn_DEF_NGAP_UERadioCapabilityInfoIndication_tags_1)
		/sizeof(asn_DEF_NGAP_UERadioCapabilityInfoIndication_tags_1[0]), /* 1 */
	asn_DEF_NGAP_UERadioCapabilityInfoIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_UERadioCapabilityInfoIndication_tags_1)
		/sizeof(asn_DEF_NGAP_UERadioCapabilityInfoIndication_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_UERadioCapabilityInfoIndication_1,
	1,	/* Elements count */
	&asn_SPC_NGAP_UERadioCapabilityInfoIndication_specs_1	/* Additional specs */
};

