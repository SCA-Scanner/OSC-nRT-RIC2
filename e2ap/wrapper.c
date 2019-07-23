#include <errno.h>
#include "wrapper.h"

ssize_t encode_RIC_subscription_request(RICsubscriptionRequest_t* pdu, void* buffer, size_t buf_size)
{

    asn_enc_rval_t encode_result;
    encode_result = aper_encode_to_buffer(&asn_DEF_RICsubscriptionRequest, NULL, pdu, buffer, buf_size);
    if(encode_result.encoded == -1) {
        return -1;
    }
    return encode_result.encoded;
}

RICsubscriptionRequest_t* decode_RIC_subscription_request(const void *buffer, size_t buf_size)
{
    asn_dec_rval_t decode_result;
    RICsubscriptionRequest_t *pdu = 0;
    decode_result = aper_decode_complete(NULL, &asn_DEF_RICsubscriptionRequest, (void **)&pdu, buffer, buf_size);
    if(decode_result.code == RC_OK) {
        return pdu;
    } else {
        ASN_STRUCT_FREE(asn_DEF_RICsubscriptionRequest, pdu);
        return 0;
    }
}

long e2ap_get_ric_subscription_request_sequence_number(void *buffer, size_t buf_size)
{
    RICsubscriptionRequest_t *pdu = decode_RIC_subscription_request(buffer, buf_size);
    if(pdu != NULL)
    {
        for (int i = 0; i < pdu->protocolIEs.list.count; ++i )
            {
                if ( pdu->protocolIEs.list.array[i]->id == ProtocolIE_ID_id_RICrequestID )
                {
                    return pdu->protocolIEs.list.array[i]->value.choice.RICrequestID.ricRequestSequenceNumber;
                }
            }
    }
    return -1;
}

ssize_t  e2ap_set_ric_subscription_request_sequence_number(void *buffer, size_t buf_size, long sequence_number)
{
    RICsubscriptionRequest_t *pdu = decode_RIC_subscription_request(buffer, buf_size);
    if(pdu != NULL)
    {
        for (int i = 0; i < pdu->protocolIEs.list.count; ++i )
            {
                if ( pdu->protocolIEs.list.array[i]->id == ProtocolIE_ID_id_RICrequestID )
                {
                    pdu->protocolIEs.list.array[i]->value.choice.RICrequestID.ricRequestSequenceNumber = sequence_number;
                    return encode_RIC_subscription_request(pdu, buffer, buf_size);
                }
            }
    }
    return -1;
}

ssize_t encode_RIC_subscription_response(RICsubscriptionResponse_t* pdu, void* buffer, size_t buf_size)
{

    asn_enc_rval_t encode_result;
    encode_result = aper_encode_to_buffer(&asn_DEF_RICsubscriptionResponse, NULL, pdu, buffer, buf_size);
    if(encode_result.encoded == -1) {
        return -1;
    }
    return encode_result.encoded;
}

RICsubscriptionResponse_t* decode_RIC_subscription_response(const void *buffer, size_t buf_size)
{
    asn_dec_rval_t decode_result;
    RICsubscriptionResponse_t *pdu = 0;
    decode_result = aper_decode_complete(NULL, &asn_DEF_RICsubscriptionResponse, (void **)&pdu, buffer, buf_size);
    if(decode_result.code == RC_OK) {
        return pdu;
    } else {
        ASN_STRUCT_FREE(asn_DEF_RICsubscriptionResponse, pdu);
        return 0;
    }
}

long e2ap_get_ric_subscription_response_sequence_number(void *buffer, size_t buf_size)
{
    RICsubscriptionResponse_t *pdu = decode_RIC_subscription_response(buffer, buf_size);
    if(pdu != NULL)
    {
        for (int i = 0; i < pdu->protocolIEs.list.count; ++i )
        {
            if ( pdu->protocolIEs.list.array[i]->id == ProtocolIE_ID_id_RICrequestID )
            {
                return pdu->protocolIEs.list.array[i]->value.choice.RICrequestID.ricRequestSequenceNumber;
            }
        }
    }
    return -1;
}

ssize_t  e2ap_set_ric_subscription_response_sequence_number(void *buffer, size_t buf_size, long sequence_number)
{
    RICsubscriptionResponse_t *pdu = decode_RIC_subscription_response(buffer, buf_size);
    if(pdu != NULL)
    {
        for (int i = 0; i < pdu->protocolIEs.list.count; ++i )
        {
            if ( pdu->protocolIEs.list.array[i]->id == ProtocolIE_ID_id_RICrequestID )
            {
                pdu->protocolIEs.list.array[i]->value.choice.RICrequestID.ricRequestSequenceNumber = sequence_number;
                return encode_RIC_subscription_response(pdu, buffer, buf_size);
            }
        }
    }
    return -1;
}
