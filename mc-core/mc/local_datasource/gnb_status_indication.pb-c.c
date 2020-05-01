/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: gnb_status_indication.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "gnb_status_indication.pb-c.h"
void   streaming_protobufs__gnbstatus_indication__init
                     (StreamingProtobufs__GNBStatusIndication         *message)
{
  static const StreamingProtobufs__GNBStatusIndication init_value = STREAMING_PROTOBUFS__GNBSTATUS_INDICATION__INIT;
  *message = init_value;
}
size_t streaming_protobufs__gnbstatus_indication__get_packed_size
                     (const StreamingProtobufs__GNBStatusIndication *message)
{
  assert(message->base.descriptor == &streaming_protobufs__gnbstatus_indication__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__gnbstatus_indication__pack
                     (const StreamingProtobufs__GNBStatusIndication *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__gnbstatus_indication__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__gnbstatus_indication__pack_to_buffer
                     (const StreamingProtobufs__GNBStatusIndication *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__gnbstatus_indication__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__GNBStatusIndication *
       streaming_protobufs__gnbstatus_indication__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__GNBStatusIndication *)
     protobuf_c_message_unpack (&streaming_protobufs__gnbstatus_indication__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__gnbstatus_indication__free_unpacked
                     (StreamingProtobufs__GNBStatusIndication *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__gnbstatus_indication__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   streaming_protobufs__gnbstatus_indication_ies__init
                     (StreamingProtobufs__GNBStatusIndicationIEs         *message)
{
  static const StreamingProtobufs__GNBStatusIndicationIEs init_value = STREAMING_PROTOBUFS__GNBSTATUS_INDICATION_IES__INIT;
  *message = init_value;
}
size_t streaming_protobufs__gnbstatus_indication_ies__get_packed_size
                     (const StreamingProtobufs__GNBStatusIndicationIEs *message)
{
  assert(message->base.descriptor == &streaming_protobufs__gnbstatus_indication_ies__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__gnbstatus_indication_ies__pack
                     (const StreamingProtobufs__GNBStatusIndicationIEs *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__gnbstatus_indication_ies__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__gnbstatus_indication_ies__pack_to_buffer
                     (const StreamingProtobufs__GNBStatusIndicationIEs *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__gnbstatus_indication_ies__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__GNBStatusIndicationIEs *
       streaming_protobufs__gnbstatus_indication_ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__GNBStatusIndicationIEs *)
     protobuf_c_message_unpack (&streaming_protobufs__gnbstatus_indication_ies__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__gnbstatus_indication_ies__free_unpacked
                     (StreamingProtobufs__GNBStatusIndicationIEs *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__gnbstatus_indication_ies__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor streaming_protobufs__gnbstatus_indication__field_descriptors[1] =
{
  {
    "protocolIEs",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__GNBStatusIndication, protocolies),
    &streaming_protobufs__gnbstatus_indication_ies__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__gnbstatus_indication__field_indices_by_name[] = {
  0,   /* field[0] = protocolIEs */
};
static const ProtobufCIntRange streaming_protobufs__gnbstatus_indication__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor streaming_protobufs__gnbstatus_indication__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.GNBStatusIndication",
  "GNBStatusIndication",
  "StreamingProtobufs__GNBStatusIndication",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__GNBStatusIndication),
  1,
  streaming_protobufs__gnbstatus_indication__field_descriptors,
  streaming_protobufs__gnbstatus_indication__field_indices_by_name,
  1,  streaming_protobufs__gnbstatus_indication__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__gnbstatus_indication__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor streaming_protobufs__gnbstatus_indication_ies__field_descriptors[1] =
{
  {
    "id_GNBOverloadInformation",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__GNBStatusIndicationIEs, id_gnboverloadinformation),
    &streaming_protobufs__gnboverload_information__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__gnbstatus_indication_ies__field_indices_by_name[] = {
  0,   /* field[0] = id_GNBOverloadInformation */
};
static const ProtobufCIntRange streaming_protobufs__gnbstatus_indication_ies__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor streaming_protobufs__gnbstatus_indication_ies__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.GNBStatusIndicationIEs",
  "GNBStatusIndicationIEs",
  "StreamingProtobufs__GNBStatusIndicationIEs",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__GNBStatusIndicationIEs),
  1,
  streaming_protobufs__gnbstatus_indication_ies__field_descriptors,
  streaming_protobufs__gnbstatus_indication_ies__field_indices_by_name,
  1,  streaming_protobufs__gnbstatus_indication_ies__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__gnbstatus_indication_ies__init,
  NULL,NULL,NULL    /* reserved[123] */
};
