# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: x2ap_streaming.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import wrappers_pb2 as google_dot_protobuf_dot_wrappers__pb2
import rrctransfer_pb2 as rrctransfer__pb2
import sgnb_addition_request_pb2 as sgnb__addition__request__pb2
import sgnb_addition_request_acknowledge_pb2 as sgnb__addition__request__acknowledge__pb2
import sgnb_addition_request_reject_pb2 as sgnb__addition__request__reject__pb2
import sgnb_modification_request_pb2 as sgnb__modification__request__pb2
import sgnb_modification_request_acknowledge_pb2 as sgnb__modification__request__acknowledge__pb2
import sgnb_modification_request_reject_pb2 as sgnb__modification__request__reject__pb2
import sgnb_modification_required_pb2 as sgnb__modification__required__pb2
import sgnb_modification_confirm_pb2 as sgnb__modification__confirm__pb2
import sgnb_modification_refuse_pb2 as sgnb__modification__refuse__pb2
import sgnb_release_request_pb2 as sgnb__release__request__pb2
import sgnb_release_request_acknowledge_pb2 as sgnb__release__request__acknowledge__pb2
import sgnb_release_required_pb2 as sgnb__release__required__pb2
import sgnb_release_confirm_pb2 as sgnb__release__confirm__pb2
import sgnb_reconfiguration_complete_pb2 as sgnb__reconfiguration__complete__pb2
import sn_status_transfer_pb2 as sn__status__transfer__pb2
import ue_context_release_pb2 as ue__context__release__pb2
import secondary_rat_data_usage_report_pb2 as secondary__rat__data__usage__report__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='x2ap_streaming.proto',
  package='uenibstreamprotobuf',
  syntax='proto3',
  serialized_options=_b('Z8gerrit.o-ran-sc.org/r/ric-plt/ue-nib/uenibstreamprotobuf'),
  serialized_pb=_b('\n\x14x2ap_streaming.proto\x12\x13uenibstreamprotobuf\x1a\x1egoogle/protobuf/wrappers.proto\x1a\x11rrctransfer.proto\x1a\x1bsgnb_addition_request.proto\x1a\'sgnb_addition_request_acknowledge.proto\x1a\"sgnb_addition_request_reject.proto\x1a\x1fsgnb_modification_request.proto\x1a+sgnb_modification_request_acknowledge.proto\x1a&sgnb_modification_request_reject.proto\x1a sgnb_modification_required.proto\x1a\x1fsgnb_modification_confirm.proto\x1a\x1esgnb_modification_refuse.proto\x1a\x1asgnb_release_request.proto\x1a&sgnb_release_request_acknowledge.proto\x1a\x1bsgnb_release_required.proto\x1a\x1asgnb_release_confirm.proto\x1a#sgnb_reconfiguration_complete.proto\x1a\x18sn_status_transfer.proto\x1a\x18ue_context_release.proto\x1a%secondary_rat_data_usage_report.proto\"\x83\x0c\n\rX2APStreaming\x12\x38\n\x06header\x18\x01 \x01(\x0b\x32(.uenibstreamprotobuf.X2APStreamingHeader\x12\x37\n\x0brrcTransfer\x18\x02 \x01(\x0b\x32 .uenibstreamprotobuf.RRCTransferH\x00\x12G\n\x13sgNBAdditionRequest\x18\x03 \x01(\x0b\x32(.uenibstreamprotobuf.SgNBAdditionRequestH\x00\x12]\n\x1esgNBAdditionRequestAcknowledge\x18\x04 \x01(\x0b\x32\x33.uenibstreamprotobuf.SgNBAdditionRequestAcknowledgeH\x00\x12S\n\x19sgNBAdditionRequestReject\x18\x05 \x01(\x0b\x32..uenibstreamprotobuf.SgNBAdditionRequestRejectH\x00\x12O\n\x17sgNBModificationRequest\x18\x06 \x01(\x0b\x32,.uenibstreamprotobuf.SgNBModificationRequestH\x00\x12\x65\n\"sgNBModificationRequestAcknowledge\x18\x07 \x01(\x0b\x32\x37.uenibstreamprotobuf.SgNBModificationRequestAcknowledgeH\x00\x12[\n\x1dsgNBModificationRequestReject\x18\x08 \x01(\x0b\x32\x32.uenibstreamprotobuf.SgNBModificationRequestRejectH\x00\x12Q\n\x18sgNBModificationRequired\x18\t \x01(\x0b\x32-.uenibstreamprotobuf.SgNBModificationRequiredH\x00\x12O\n\x17sgNBModificationConfirm\x18\n \x01(\x0b\x32,.uenibstreamprotobuf.SgNBModificationConfirmH\x00\x12M\n\x16sgNBModificationRefuse\x18\x0b \x01(\x0b\x32+.uenibstreamprotobuf.SgNBModificationRefuseH\x00\x12W\n\x1bsgNBReconfigurationComplete\x18\x0c \x01(\x0b\x32\x30.uenibstreamprotobuf.SgNBReconfigurationCompleteH\x00\x12\x45\n\x12sgNbReleaseRequest\x18\r \x01(\x0b\x32\'.uenibstreamprotobuf.SgNBReleaseRequestH\x00\x12[\n\x1dsgNbReleaseRequestAcknowledge\x18\x0e \x01(\x0b\x32\x32.uenibstreamprotobuf.SgNBReleaseRequestAcknowledgeH\x00\x12G\n\x13sgNbReleaseRequired\x18\x0f \x01(\x0b\x32(.uenibstreamprotobuf.SgNBReleaseRequiredH\x00\x12\x45\n\x12sgNbReleaseConfirm\x18\x10 \x01(\x0b\x32\'.uenibstreamprotobuf.SgNBReleaseConfirmH\x00\x12\x41\n\x10snStatusTransfer\x18\x11 \x01(\x0b\x32%.uenibstreamprotobuf.SNStatusTransferH\x00\x12\x41\n\x10ueContextRelease\x18\x12 \x01(\x0b\x32%.uenibstreamprotobuf.UEContextReleaseH\x00\x12W\n\x1bsecondaryRATDataUsageReport\x18\x13 \x01(\x0b\x32\x30.uenibstreamprotobuf.SecondaryRATDataUsageReportH\x00\x42\x0e\n\x0cx2ap_message\"p\n\x13X2APStreamingHeader\x12\x19\n\x11protobuf_revision\x18\x01 \x01(\t\x12+\n\x05gNbID\x18\x02 \x01(\x0b\x32\x1c.google.protobuf.StringValue\x12\x11\n\ttimestamp\x18\x03 \x01(\x04\x42:Z8gerrit.o-ran-sc.org/r/ric-plt/ue-nib/uenibstreamprotobufb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_wrappers__pb2.DESCRIPTOR,rrctransfer__pb2.DESCRIPTOR,sgnb__addition__request__pb2.DESCRIPTOR,sgnb__addition__request__acknowledge__pb2.DESCRIPTOR,sgnb__addition__request__reject__pb2.DESCRIPTOR,sgnb__modification__request__pb2.DESCRIPTOR,sgnb__modification__request__acknowledge__pb2.DESCRIPTOR,sgnb__modification__request__reject__pb2.DESCRIPTOR,sgnb__modification__required__pb2.DESCRIPTOR,sgnb__modification__confirm__pb2.DESCRIPTOR,sgnb__modification__refuse__pb2.DESCRIPTOR,sgnb__release__request__pb2.DESCRIPTOR,sgnb__release__request__acknowledge__pb2.DESCRIPTOR,sgnb__release__required__pb2.DESCRIPTOR,sgnb__release__confirm__pb2.DESCRIPTOR,sgnb__reconfiguration__complete__pb2.DESCRIPTOR,sn__status__transfer__pb2.DESCRIPTOR,ue__context__release__pb2.DESCRIPTOR,secondary__rat__data__usage__report__pb2.DESCRIPTOR,])




_X2APSTREAMING = _descriptor.Descriptor(
  name='X2APStreaming',
  full_name='uenibstreamprotobuf.X2APStreaming',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='header', full_name='uenibstreamprotobuf.X2APStreaming.header', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='rrcTransfer', full_name='uenibstreamprotobuf.X2APStreaming.rrcTransfer', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBAdditionRequest', full_name='uenibstreamprotobuf.X2APStreaming.sgNBAdditionRequest', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBAdditionRequestAcknowledge', full_name='uenibstreamprotobuf.X2APStreaming.sgNBAdditionRequestAcknowledge', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBAdditionRequestReject', full_name='uenibstreamprotobuf.X2APStreaming.sgNBAdditionRequestReject', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBModificationRequest', full_name='uenibstreamprotobuf.X2APStreaming.sgNBModificationRequest', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBModificationRequestAcknowledge', full_name='uenibstreamprotobuf.X2APStreaming.sgNBModificationRequestAcknowledge', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBModificationRequestReject', full_name='uenibstreamprotobuf.X2APStreaming.sgNBModificationRequestReject', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBModificationRequired', full_name='uenibstreamprotobuf.X2APStreaming.sgNBModificationRequired', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBModificationConfirm', full_name='uenibstreamprotobuf.X2APStreaming.sgNBModificationConfirm', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBModificationRefuse', full_name='uenibstreamprotobuf.X2APStreaming.sgNBModificationRefuse', index=10,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBReconfigurationComplete', full_name='uenibstreamprotobuf.X2APStreaming.sgNBReconfigurationComplete', index=11,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNbReleaseRequest', full_name='uenibstreamprotobuf.X2APStreaming.sgNbReleaseRequest', index=12,
      number=13, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNbReleaseRequestAcknowledge', full_name='uenibstreamprotobuf.X2APStreaming.sgNbReleaseRequestAcknowledge', index=13,
      number=14, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNbReleaseRequired', full_name='uenibstreamprotobuf.X2APStreaming.sgNbReleaseRequired', index=14,
      number=15, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNbReleaseConfirm', full_name='uenibstreamprotobuf.X2APStreaming.sgNbReleaseConfirm', index=15,
      number=16, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='snStatusTransfer', full_name='uenibstreamprotobuf.X2APStreaming.snStatusTransfer', index=16,
      number=17, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ueContextRelease', full_name='uenibstreamprotobuf.X2APStreaming.ueContextRelease', index=17,
      number=18, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='secondaryRATDataUsageReport', full_name='uenibstreamprotobuf.X2APStreaming.secondaryRATDataUsageReport', index=18,
      number=19, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='x2ap_message', full_name='uenibstreamprotobuf.X2APStreaming.x2ap_message',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=673,
  serialized_end=2212,
)


_X2APSTREAMINGHEADER = _descriptor.Descriptor(
  name='X2APStreamingHeader',
  full_name='uenibstreamprotobuf.X2APStreamingHeader',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='protobuf_revision', full_name='uenibstreamprotobuf.X2APStreamingHeader.protobuf_revision', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='gNbID', full_name='uenibstreamprotobuf.X2APStreamingHeader.gNbID', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='timestamp', full_name='uenibstreamprotobuf.X2APStreamingHeader.timestamp', index=2,
      number=3, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=2214,
  serialized_end=2326,
)

_X2APSTREAMING.fields_by_name['header'].message_type = _X2APSTREAMINGHEADER
_X2APSTREAMING.fields_by_name['rrcTransfer'].message_type = rrctransfer__pb2._RRCTRANSFER
_X2APSTREAMING.fields_by_name['sgNBAdditionRequest'].message_type = sgnb__addition__request__pb2._SGNBADDITIONREQUEST
_X2APSTREAMING.fields_by_name['sgNBAdditionRequestAcknowledge'].message_type = sgnb__addition__request__acknowledge__pb2._SGNBADDITIONREQUESTACKNOWLEDGE
_X2APSTREAMING.fields_by_name['sgNBAdditionRequestReject'].message_type = sgnb__addition__request__reject__pb2._SGNBADDITIONREQUESTREJECT
_X2APSTREAMING.fields_by_name['sgNBModificationRequest'].message_type = sgnb__modification__request__pb2._SGNBMODIFICATIONREQUEST
_X2APSTREAMING.fields_by_name['sgNBModificationRequestAcknowledge'].message_type = sgnb__modification__request__acknowledge__pb2._SGNBMODIFICATIONREQUESTACKNOWLEDGE
_X2APSTREAMING.fields_by_name['sgNBModificationRequestReject'].message_type = sgnb__modification__request__reject__pb2._SGNBMODIFICATIONREQUESTREJECT
_X2APSTREAMING.fields_by_name['sgNBModificationRequired'].message_type = sgnb__modification__required__pb2._SGNBMODIFICATIONREQUIRED
_X2APSTREAMING.fields_by_name['sgNBModificationConfirm'].message_type = sgnb__modification__confirm__pb2._SGNBMODIFICATIONCONFIRM
_X2APSTREAMING.fields_by_name['sgNBModificationRefuse'].message_type = sgnb__modification__refuse__pb2._SGNBMODIFICATIONREFUSE
_X2APSTREAMING.fields_by_name['sgNBReconfigurationComplete'].message_type = sgnb__reconfiguration__complete__pb2._SGNBRECONFIGURATIONCOMPLETE
_X2APSTREAMING.fields_by_name['sgNbReleaseRequest'].message_type = sgnb__release__request__pb2._SGNBRELEASEREQUEST
_X2APSTREAMING.fields_by_name['sgNbReleaseRequestAcknowledge'].message_type = sgnb__release__request__acknowledge__pb2._SGNBRELEASEREQUESTACKNOWLEDGE
_X2APSTREAMING.fields_by_name['sgNbReleaseRequired'].message_type = sgnb__release__required__pb2._SGNBRELEASEREQUIRED
_X2APSTREAMING.fields_by_name['sgNbReleaseConfirm'].message_type = sgnb__release__confirm__pb2._SGNBRELEASECONFIRM
_X2APSTREAMING.fields_by_name['snStatusTransfer'].message_type = sn__status__transfer__pb2._SNSTATUSTRANSFER
_X2APSTREAMING.fields_by_name['ueContextRelease'].message_type = ue__context__release__pb2._UECONTEXTRELEASE
_X2APSTREAMING.fields_by_name['secondaryRATDataUsageReport'].message_type = secondary__rat__data__usage__report__pb2._SECONDARYRATDATAUSAGEREPORT
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['rrcTransfer'])
_X2APSTREAMING.fields_by_name['rrcTransfer'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNBAdditionRequest'])
_X2APSTREAMING.fields_by_name['sgNBAdditionRequest'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNBAdditionRequestAcknowledge'])
_X2APSTREAMING.fields_by_name['sgNBAdditionRequestAcknowledge'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNBAdditionRequestReject'])
_X2APSTREAMING.fields_by_name['sgNBAdditionRequestReject'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNBModificationRequest'])
_X2APSTREAMING.fields_by_name['sgNBModificationRequest'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNBModificationRequestAcknowledge'])
_X2APSTREAMING.fields_by_name['sgNBModificationRequestAcknowledge'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNBModificationRequestReject'])
_X2APSTREAMING.fields_by_name['sgNBModificationRequestReject'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNBModificationRequired'])
_X2APSTREAMING.fields_by_name['sgNBModificationRequired'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNBModificationConfirm'])
_X2APSTREAMING.fields_by_name['sgNBModificationConfirm'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNBModificationRefuse'])
_X2APSTREAMING.fields_by_name['sgNBModificationRefuse'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNBReconfigurationComplete'])
_X2APSTREAMING.fields_by_name['sgNBReconfigurationComplete'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNbReleaseRequest'])
_X2APSTREAMING.fields_by_name['sgNbReleaseRequest'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNbReleaseRequestAcknowledge'])
_X2APSTREAMING.fields_by_name['sgNbReleaseRequestAcknowledge'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNbReleaseRequired'])
_X2APSTREAMING.fields_by_name['sgNbReleaseRequired'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['sgNbReleaseConfirm'])
_X2APSTREAMING.fields_by_name['sgNbReleaseConfirm'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['snStatusTransfer'])
_X2APSTREAMING.fields_by_name['snStatusTransfer'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['ueContextRelease'])
_X2APSTREAMING.fields_by_name['ueContextRelease'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMING.oneofs_by_name['x2ap_message'].fields.append(
  _X2APSTREAMING.fields_by_name['secondaryRATDataUsageReport'])
_X2APSTREAMING.fields_by_name['secondaryRATDataUsageReport'].containing_oneof = _X2APSTREAMING.oneofs_by_name['x2ap_message']
_X2APSTREAMINGHEADER.fields_by_name['gNbID'].message_type = google_dot_protobuf_dot_wrappers__pb2._STRINGVALUE
DESCRIPTOR.message_types_by_name['X2APStreaming'] = _X2APSTREAMING
DESCRIPTOR.message_types_by_name['X2APStreamingHeader'] = _X2APSTREAMINGHEADER
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

X2APStreaming = _reflection.GeneratedProtocolMessageType('X2APStreaming', (_message.Message,), {
  'DESCRIPTOR' : _X2APSTREAMING,
  '__module__' : 'x2ap_streaming_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.X2APStreaming)
  })
_sym_db.RegisterMessage(X2APStreaming)

X2APStreamingHeader = _reflection.GeneratedProtocolMessageType('X2APStreamingHeader', (_message.Message,), {
  'DESCRIPTOR' : _X2APSTREAMINGHEADER,
  '__module__' : 'x2ap_streaming_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.X2APStreamingHeader)
  })
_sym_db.RegisterMessage(X2APStreamingHeader)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
