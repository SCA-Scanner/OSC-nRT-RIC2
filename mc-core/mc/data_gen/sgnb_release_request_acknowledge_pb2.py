# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: sgnb_release_request_acknowledge.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import wrappers_pb2 as google_dot_protobuf_dot_wrappers__pb2
import x2ap_common_types_pb2 as x2ap__common__types__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='sgnb_release_request_acknowledge.proto',
  package='uenibstreamprotobuf',
  syntax='proto3',
  serialized_options=_b('Z8gerrit.o-ran-sc.org/r/ric-plt/ue-nib/uenibstreamprotobuf'),
  serialized_pb=_b('\n&sgnb_release_request_acknowledge.proto\x12\x13uenibstreamprotobuf\x1a\x1egoogle/protobuf/wrappers.proto\x1a\x17x2ap_common_types.proto\"l\n\x1dSgNBReleaseRequestAcknowledge\x12K\n\x0bprotocolIEs\x18\x01 \x01(\x0b\x32\x36.uenibstreamprotobuf.SgNBReleaseRequestAcknowledge_IEs\"\xef\x02\n!SgNBReleaseRequestAcknowledge_IEs\x12\x1a\n\x12id_MeNB_UE_X2AP_ID\x18\x01 \x01(\r\x12\x1a\n\x12id_SgNB_UE_X2AP_ID\x18\x02 \x01(\r\x12N\n\x19id_CriticalityDiagnostics\x18\x03 \x01(\x0b\x32+.uenibstreamprotobuf.CriticalityDiagnostics\x12\x42\n\x1cid_MeNB_UE_X2AP_ID_Extension\x18\x04 \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\x12~\n1id_E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList\x18\x05 \x01(\x0b\x32\x43.uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList\"\xb3\x01\n.E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList\x12\x80\x01\n2id_E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item\x18\x01 \x03(\x0b\x32\x44.uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item\"\xe2\x01\n/E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item\x12\x10\n\x08\x65_RAB_ID\x18\x01 \x01(\r\x12:\n\x14rlc_Mode_transferred\x18\x02 \x01(\x0b\x32\x1c.uenibstreamprotobuf.RLCMode\x12\x61\n\riE_Extensions\x18\x03 \x03(\x0b\x32J.uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_ItemExtIEs\"7\n5E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_ItemExtIEsB:Z8gerrit.o-ran-sc.org/r/ric-plt/ue-nib/uenibstreamprotobufb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_wrappers__pb2.DESCRIPTOR,x2ap__common__types__pb2.DESCRIPTOR,])




_SGNBRELEASEREQUESTACKNOWLEDGE = _descriptor.Descriptor(
  name='SgNBReleaseRequestAcknowledge',
  full_name='uenibstreamprotobuf.SgNBReleaseRequestAcknowledge',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='protocolIEs', full_name='uenibstreamprotobuf.SgNBReleaseRequestAcknowledge.protocolIEs', index=0,
      number=1, type=11, cpp_type=10, label=1,
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
  ],
  serialized_start=120,
  serialized_end=228,
)


_SGNBRELEASEREQUESTACKNOWLEDGE_IES = _descriptor.Descriptor(
  name='SgNBReleaseRequestAcknowledge_IEs',
  full_name='uenibstreamprotobuf.SgNBReleaseRequestAcknowledge_IEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_MeNB_UE_X2AP_ID', full_name='uenibstreamprotobuf.SgNBReleaseRequestAcknowledge_IEs.id_MeNB_UE_X2AP_ID', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SgNB_UE_X2AP_ID', full_name='uenibstreamprotobuf.SgNBReleaseRequestAcknowledge_IEs.id_SgNB_UE_X2AP_ID', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_CriticalityDiagnostics', full_name='uenibstreamprotobuf.SgNBReleaseRequestAcknowledge_IEs.id_CriticalityDiagnostics', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_MeNB_UE_X2AP_ID_Extension', full_name='uenibstreamprotobuf.SgNBReleaseRequestAcknowledge_IEs.id_MeNB_UE_X2AP_ID_Extension', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList', full_name='uenibstreamprotobuf.SgNBReleaseRequestAcknowledge_IEs.id_E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList', index=4,
      number=5, type=11, cpp_type=10, label=1,
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
  ],
  serialized_start=231,
  serialized_end=598,
)


_E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACKLIST = _descriptor.Descriptor(
  name='E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList',
  full_name='uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item', full_name='uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList.id_E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=601,
  serialized_end=780,
)


_E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACK_ITEM = _descriptor.Descriptor(
  name='E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item',
  full_name='uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='e_RAB_ID', full_name='uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item.e_RAB_ID', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='rlc_Mode_transferred', full_name='uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item.rlc_Mode_transferred', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='iE_Extensions', full_name='uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item.iE_Extensions', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=783,
  serialized_end=1009,
)


_E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACK_ITEMEXTIES = _descriptor.Descriptor(
  name='E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_ItemExtIEs',
  full_name='uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_ItemExtIEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
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
  serialized_start=1011,
  serialized_end=1066,
)

_SGNBRELEASEREQUESTACKNOWLEDGE.fields_by_name['protocolIEs'].message_type = _SGNBRELEASEREQUESTACKNOWLEDGE_IES
_SGNBRELEASEREQUESTACKNOWLEDGE_IES.fields_by_name['id_CriticalityDiagnostics'].message_type = x2ap__common__types__pb2._CRITICALITYDIAGNOSTICS
_SGNBRELEASEREQUESTACKNOWLEDGE_IES.fields_by_name['id_MeNB_UE_X2AP_ID_Extension'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_SGNBRELEASEREQUESTACKNOWLEDGE_IES.fields_by_name['id_E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList'].message_type = _E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACKLIST
_E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACKLIST.fields_by_name['id_E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item'].message_type = _E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACK_ITEM
_E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACK_ITEM.fields_by_name['rlc_Mode_transferred'].message_type = x2ap__common__types__pb2._RLCMODE
_E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACK_ITEM.fields_by_name['iE_Extensions'].message_type = _E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACK_ITEMEXTIES
DESCRIPTOR.message_types_by_name['SgNBReleaseRequestAcknowledge'] = _SGNBRELEASEREQUESTACKNOWLEDGE
DESCRIPTOR.message_types_by_name['SgNBReleaseRequestAcknowledge_IEs'] = _SGNBRELEASEREQUESTACKNOWLEDGE_IES
DESCRIPTOR.message_types_by_name['E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList'] = _E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACKLIST
DESCRIPTOR.message_types_by_name['E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item'] = _E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACK_ITEM
DESCRIPTOR.message_types_by_name['E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_ItemExtIEs'] = _E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACK_ITEMEXTIES
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SgNBReleaseRequestAcknowledge = _reflection.GeneratedProtocolMessageType('SgNBReleaseRequestAcknowledge', (_message.Message,), {
  'DESCRIPTOR' : _SGNBRELEASEREQUESTACKNOWLEDGE,
  '__module__' : 'sgnb_release_request_acknowledge_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.SgNBReleaseRequestAcknowledge)
  })
_sym_db.RegisterMessage(SgNBReleaseRequestAcknowledge)

SgNBReleaseRequestAcknowledge_IEs = _reflection.GeneratedProtocolMessageType('SgNBReleaseRequestAcknowledge_IEs', (_message.Message,), {
  'DESCRIPTOR' : _SGNBRELEASEREQUESTACKNOWLEDGE_IES,
  '__module__' : 'sgnb_release_request_acknowledge_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.SgNBReleaseRequestAcknowledge_IEs)
  })
_sym_db.RegisterMessage(SgNBReleaseRequestAcknowledge_IEs)

E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList = _reflection.GeneratedProtocolMessageType('E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACKLIST,
  '__module__' : 'sgnb_release_request_acknowledge_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList)
  })
_sym_db.RegisterMessage(E_RABs_Admitted_ToBeReleased_SgNBRelReqAckList)

E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item = _reflection.GeneratedProtocolMessageType('E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACK_ITEM,
  '__module__' : 'sgnb_release_request_acknowledge_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item)
  })
_sym_db.RegisterMessage(E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_Item)

E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_ItemExtIEs = _reflection.GeneratedProtocolMessageType('E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_ItemExtIEs', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_ADMITTED_TOBERELEASED_SGNBRELREQACK_ITEMEXTIES,
  '__module__' : 'sgnb_release_request_acknowledge_pb2'
  # @@protoc_insertion_point(class_scope:uenibstreamprotobuf.E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_ItemExtIEs)
  })
_sym_db.RegisterMessage(E_RABs_Admitted_ToBeReleased_SgNBRelReqAck_ItemExtIEs)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
