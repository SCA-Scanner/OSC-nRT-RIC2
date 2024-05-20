/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: sgnb_addition_request_reject.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "sgnb_addition_request_reject.pb-c.h"
void   streaming_protobufs__sg_nbaddition_request_reject__init
                     (StreamingProtobufs__SgNBAdditionRequestReject         *message)
{
  static const StreamingProtobufs__SgNBAdditionRequestReject init_value = STREAMING_PROTOBUFS__SG_NBADDITION_REQUEST_REJECT__INIT;
  *message = init_value;
}
size_t streaming_protobufs__sg_nbaddition_request_reject__get_packed_size
                     (const StreamingProtobufs__SgNBAdditionRequestReject *message)
{
  assert(message->base.descriptor == &streaming_protobufs__sg_nbaddition_request_reject__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__sg_nbaddition_request_reject__pack
                     (const StreamingProtobufs__SgNBAdditionRequestReject *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__sg_nbaddition_request_reject__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__sg_nbaddition_request_reject__pack_to_buffer
                     (const StreamingProtobufs__SgNBAdditionRequestReject *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__sg_nbaddition_request_reject__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__SgNBAdditionRequestReject *
       streaming_protobufs__sg_nbaddition_request_reject__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__SgNBAdditionRequestReject *)
     protobuf_c_message_unpack (&streaming_protobufs__sg_nbaddition_request_reject__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__sg_nbaddition_request_reject__free_unpacked
                     (StreamingProtobufs__SgNBAdditionRequestReject *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__sg_nbaddition_request_reject__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor streaming_protobufs__sg_nbaddition_request_reject__field_descriptors[5] =
{
  {
    "id_MeNB_UE_X2AP_ID",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__SgNBAdditionRequestReject, id_menb_ue_x2ap_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "id_SgNB_UE_X2AP_ID",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__SgNBAdditionRequestReject, id_sgnb_ue_x2ap_id),
    &google__protobuf__uint32_value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "id_Cause",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__SgNBAdditionRequestReject, id_cause),
    &streaming_protobufs__cause__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "id_CriticalityDiagnostics",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__SgNBAdditionRequestReject, id_criticalitydiagnostics),
    &streaming_protobufs__criticality_diagnostics__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "id_MeNB_UE_X2AP_ID_Extension",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__SgNBAdditionRequestReject, id_menb_ue_x2ap_id_extension),
    &google__protobuf__uint32_value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__sg_nbaddition_request_reject__field_indices_by_name[] = {
  2,   /* field[2] = id_Cause */
  3,   /* field[3] = id_CriticalityDiagnostics */
  0,   /* field[0] = id_MeNB_UE_X2AP_ID */
  4,   /* field[4] = id_MeNB_UE_X2AP_ID_Extension */
  1,   /* field[1] = id_SgNB_UE_X2AP_ID */
};
static const ProtobufCIntRange streaming_protobufs__sg_nbaddition_request_reject__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor streaming_protobufs__sg_nbaddition_request_reject__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.SgNBAdditionRequestReject",
  "SgNBAdditionRequestReject",
  "StreamingProtobufs__SgNBAdditionRequestReject",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__SgNBAdditionRequestReject),
  5,
  streaming_protobufs__sg_nbaddition_request_reject__field_descriptors,
  streaming_protobufs__sg_nbaddition_request_reject__field_indices_by_name,
  1,  streaming_protobufs__sg_nbaddition_request_reject__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__sg_nbaddition_request_reject__init,
  NULL,NULL,NULL    /* reserved[123] */
};