/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: rrc_system_information.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "rrc_system_information.pb-c.h"
void   streaming_protobufs__system_information__init
                     (StreamingProtobufs__SystemInformation         *message)
{
  static const StreamingProtobufs__SystemInformation init_value = STREAMING_PROTOBUFS__SYSTEM_INFORMATION__INIT;
  *message = init_value;
}
size_t streaming_protobufs__system_information__get_packed_size
                     (const StreamingProtobufs__SystemInformation *message)
{
  assert(message->base.descriptor == &streaming_protobufs__system_information__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__system_information__pack
                     (const StreamingProtobufs__SystemInformation *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__system_information__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__system_information__pack_to_buffer
                     (const StreamingProtobufs__SystemInformation *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__system_information__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__SystemInformation *
       streaming_protobufs__system_information__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__SystemInformation *)
     protobuf_c_message_unpack (&streaming_protobufs__system_information__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__system_information__free_unpacked
                     (StreamingProtobufs__SystemInformation *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__system_information__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   streaming_protobufs__system_information__ies__init
                     (StreamingProtobufs__SystemInformationIEs         *message)
{
  static const StreamingProtobufs__SystemInformationIEs init_value = STREAMING_PROTOBUFS__SYSTEM_INFORMATION__IES__INIT;
  *message = init_value;
}
size_t streaming_protobufs__system_information__ies__get_packed_size
                     (const StreamingProtobufs__SystemInformationIEs *message)
{
  assert(message->base.descriptor == &streaming_protobufs__system_information__ies__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__system_information__ies__pack
                     (const StreamingProtobufs__SystemInformationIEs *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__system_information__ies__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__system_information__ies__pack_to_buffer
                     (const StreamingProtobufs__SystemInformationIEs *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__system_information__ies__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__SystemInformationIEs *
       streaming_protobufs__system_information__ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__SystemInformationIEs *)
     protobuf_c_message_unpack (&streaming_protobufs__system_information__ies__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__system_information__ies__free_unpacked
                     (StreamingProtobufs__SystemInformationIEs *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__system_information__ies__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   streaming_protobufs__sib__type_and_info__init
                     (StreamingProtobufs__SIBTypeAndInfo         *message)
{
  static const StreamingProtobufs__SIBTypeAndInfo init_value = STREAMING_PROTOBUFS__SIB__TYPE_AND_INFO__INIT;
  *message = init_value;
}
size_t streaming_protobufs__sib__type_and_info__get_packed_size
                     (const StreamingProtobufs__SIBTypeAndInfo *message)
{
  assert(message->base.descriptor == &streaming_protobufs__sib__type_and_info__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t streaming_protobufs__sib__type_and_info__pack
                     (const StreamingProtobufs__SIBTypeAndInfo *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &streaming_protobufs__sib__type_and_info__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t streaming_protobufs__sib__type_and_info__pack_to_buffer
                     (const StreamingProtobufs__SIBTypeAndInfo *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &streaming_protobufs__sib__type_and_info__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StreamingProtobufs__SIBTypeAndInfo *
       streaming_protobufs__sib__type_and_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StreamingProtobufs__SIBTypeAndInfo *)
     protobuf_c_message_unpack (&streaming_protobufs__sib__type_and_info__descriptor,
                                allocator, len, data);
}
void   streaming_protobufs__sib__type_and_info__free_unpacked
                     (StreamingProtobufs__SIBTypeAndInfo *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &streaming_protobufs__sib__type_and_info__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor streaming_protobufs__system_information__field_descriptors[1] =
{
  {
    "systemInformation_r15",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__SystemInformation, critical_extensions_case),
    offsetof(StreamingProtobufs__SystemInformation, systeminformation_r15),
    &streaming_protobufs__system_information__ies__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__system_information__field_indices_by_name[] = {
  0,   /* field[0] = systemInformation_r15 */
};
static const ProtobufCIntRange streaming_protobufs__system_information__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor streaming_protobufs__system_information__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.SystemInformation",
  "SystemInformation",
  "StreamingProtobufs__SystemInformation",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__SystemInformation),
  1,
  streaming_protobufs__system_information__field_descriptors,
  streaming_protobufs__system_information__field_indices_by_name,
  1,  streaming_protobufs__system_information__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__system_information__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor streaming_protobufs__system_information__ies__field_descriptors[2] =
{
  {
    "sib_TypeAndInfo",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__SystemInformationIEs, n_sib_typeandinfo),
    offsetof(StreamingProtobufs__SystemInformationIEs, sib_typeandinfo),
    &streaming_protobufs__sib__type_and_info__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "lateNonCriticalExtension",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(StreamingProtobufs__SystemInformationIEs, latenoncriticalextension),
    &google__protobuf__bytes_value__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__system_information__ies__field_indices_by_name[] = {
  1,   /* field[1] = lateNonCriticalExtension */
  0,   /* field[0] = sib_TypeAndInfo */
};
static const ProtobufCIntRange streaming_protobufs__system_information__ies__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor streaming_protobufs__system_information__ies__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.SystemInformation_IEs",
  "SystemInformationIEs",
  "StreamingProtobufs__SystemInformationIEs",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__SystemInformationIEs),
  2,
  streaming_protobufs__system_information__ies__field_descriptors,
  streaming_protobufs__system_information__ies__field_indices_by_name,
  1,  streaming_protobufs__system_information__ies__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__system_information__ies__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor streaming_protobufs__sib__type_and_info__field_descriptors[8] =
{
  {
    "sib2",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__SIBTypeAndInfo, c_case),
    offsetof(StreamingProtobufs__SIBTypeAndInfo, sib2),
    &streaming_protobufs__sib2__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sib3",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__SIBTypeAndInfo, c_case),
    offsetof(StreamingProtobufs__SIBTypeAndInfo, sib3),
    &streaming_protobufs__sib3__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sib4",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__SIBTypeAndInfo, c_case),
    offsetof(StreamingProtobufs__SIBTypeAndInfo, sib4),
    &streaming_protobufs__sib4__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sib5",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__SIBTypeAndInfo, c_case),
    offsetof(StreamingProtobufs__SIBTypeAndInfo, sib5),
    &streaming_protobufs__sib5__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sib6",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__SIBTypeAndInfo, c_case),
    offsetof(StreamingProtobufs__SIBTypeAndInfo, sib6),
    &streaming_protobufs__sib6__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sib7",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__SIBTypeAndInfo, c_case),
    offsetof(StreamingProtobufs__SIBTypeAndInfo, sib7),
    &streaming_protobufs__sib7__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sib8",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__SIBTypeAndInfo, c_case),
    offsetof(StreamingProtobufs__SIBTypeAndInfo, sib8),
    &streaming_protobufs__sib8__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sib9",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(StreamingProtobufs__SIBTypeAndInfo, c_case),
    offsetof(StreamingProtobufs__SIBTypeAndInfo, sib9),
    &streaming_protobufs__sib9__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned streaming_protobufs__sib__type_and_info__field_indices_by_name[] = {
  0,   /* field[0] = sib2 */
  1,   /* field[1] = sib3 */
  2,   /* field[2] = sib4 */
  3,   /* field[3] = sib5 */
  4,   /* field[4] = sib6 */
  5,   /* field[5] = sib7 */
  6,   /* field[6] = sib8 */
  7,   /* field[7] = sib9 */
};
static const ProtobufCIntRange streaming_protobufs__sib__type_and_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor streaming_protobufs__sib__type_and_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "streaming_protobufs.SIB_TypeAndInfo",
  "SIBTypeAndInfo",
  "StreamingProtobufs__SIBTypeAndInfo",
  "streaming_protobufs",
  sizeof(StreamingProtobufs__SIBTypeAndInfo),
  8,
  streaming_protobufs__sib__type_and_info__field_descriptors,
  streaming_protobufs__sib__type_and_info__field_indices_by_name,
  1,  streaming_protobufs__sib__type_and_info__number_ranges,
  (ProtobufCMessageInit) streaming_protobufs__sib__type_and_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
