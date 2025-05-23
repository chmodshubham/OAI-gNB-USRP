/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#include "S1AP_NumberofBroadcastRequest.h"

int
S1AP_NumberofBroadcastRequest_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_S1AP_NumberofBroadcastRequest_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_S1AP_NumberofBroadcastRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_NumberofBroadcastRequest = {
	"NumberofBroadcastRequest",
	"NumberofBroadcastRequest",
	&asn_OP_NativeInteger,
	asn_DEF_S1AP_NumberofBroadcastRequest_tags_1,
	sizeof(asn_DEF_S1AP_NumberofBroadcastRequest_tags_1)
		/sizeof(asn_DEF_S1AP_NumberofBroadcastRequest_tags_1[0]), /* 1 */
	asn_DEF_S1AP_NumberofBroadcastRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_NumberofBroadcastRequest_tags_1)
		/sizeof(asn_DEF_S1AP_NumberofBroadcastRequest_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_NumberofBroadcastRequest_constr_1, S1AP_NumberofBroadcastRequest_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

