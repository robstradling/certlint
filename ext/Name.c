/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "Name.h"

static asn_TYPE_member_t asn_MBR_Name_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Name, choice.rdnSequence),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RDNSequence,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rdnSequence"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Name_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 } /* rdnSequence */
};
static asn_CHOICE_specifics_t asn_SPC_Name_specs_1 = {
	sizeof(struct Name),
	offsetof(struct Name, _asn_ctx),
	offsetof(struct Name, present),
	sizeof(((struct Name *)0)->present),
	asn_MAP_Name_tag2el_1,
	1,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Name = {
	"Name",
	"Name",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_Name_1,
	1,	/* Elements count */
	&asn_SPC_Name_specs_1	/* Additional specs */
};
