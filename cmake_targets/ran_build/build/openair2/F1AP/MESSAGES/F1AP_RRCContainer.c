/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_RRCContainer.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_F1AP_RRCContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_RRCContainer = {
	"RRCContainer",
	"RRCContainer",
	&asn_OP_OCTET_STRING,
	asn_DEF_F1AP_RRCContainer_tags_1,
	sizeof(asn_DEF_F1AP_RRCContainer_tags_1)
		/sizeof(asn_DEF_F1AP_RRCContainer_tags_1[0]), /* 1 */
	asn_DEF_F1AP_RRCContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_RRCContainer_tags_1)
		/sizeof(asn_DEF_F1AP_RRCContainer_tags_1[0]), /* 1 */
	{ 0, 0, OCTET_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

