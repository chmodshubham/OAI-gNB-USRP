/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-PDU-Contents"
 * 	found in "/home/rcdu/openairinterface5g/openair3/M3AP/MESSAGES/ASN1/m3ap-14.0.0.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/M3AP/MESSAGES`
 */

#include "M3AP_MBMS-Service-associatedLogicalM3-ConnectionListRes.h"

#include "M3AP_ProtocolIE-Single-Container.h"
asn_per_constraints_t asn_PER_type_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M3AP_ProtocolIE_Single_Container_1006P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_specs_1 = {
	sizeof(struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes),
	offsetof(struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes = {
	"MBMS-Service-associatedLogicalM3-ConnectionListRes",
	"MBMS-Service-associatedLogicalM3-ConnectionListRes",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_tags_1,
	sizeof(asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_tags_1)
		/sizeof(asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_tags_1[0]), /* 1 */
	asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_tags_1,	/* Same as above */
	sizeof(asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_tags_1)
		/sizeof(asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_1,
	1,	/* Single element */
	&asn_SPC_M3AP_MBMS_Service_associatedLogicalM3_ConnectionListRes_specs_1	/* Additional specs */
};

