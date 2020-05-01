# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: sn_status_transfer.proto

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
  name='sn_status_transfer.proto',
  package='streaming_protobufs',
  syntax='proto3',
  serialized_options=_b('Z1gerrit.o-ran-sc.org/r/ric-plt/streaming-protobufs'),
  serialized_pb=_b('\n\x18sn_status_transfer.proto\x12\x13streaming_protobufs\x1a\x1egoogle/protobuf/wrappers.proto\x1a\x17x2ap_common_types.proto\"R\n\x10SNStatusTransfer\x12>\n\x0bprotocolIEs\x18\x01 \x01(\x0b\x32).streaming_protobufs.SNStatusTransfer_IEs\"\x86\x03\n\x14SNStatusTransfer_IEs\x12\x1d\n\x15id_Old_eNB_UE_X2AP_ID\x18\x01 \x01(\r\x12\x1d\n\x15id_New_eNB_UE_X2AP_ID\x18\x02 \x01(\r\x12h\n&id_E_RABs_SubjectToStatusTransfer_List\x18\x03 \x01(\x0b\x32\x38.streaming_protobufs.E_RABs_SubjectToStatusTransfer_List\x12\x45\n\x1fid_Old_eNB_UE_X2AP_ID_Extension\x18\x04 \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\x12\x45\n\x1fid_New_eNB_UE_X2AP_ID_Extension\x18\x05 \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\x12\x38\n\x12id_SgNB_UE_X2AP_ID\x18\x06 \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\"q\n#E_RABs_SubjectToStatusTransfer_List\x12J\n\x05items\x18\x01 \x03(\x0b\x32;.streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemIEs\"\x92\x01\n&E_RABs_SubjectToStatusTransfer_ItemIEs\x12h\n&id_E_RABs_SubjectToStatusTransfer_Item\x18\x01 \x01(\x0b\x32\x38.streaming_protobufs.E_RABs_SubjectToStatusTransfer_Item\"\xbe\x02\n#E_RABs_SubjectToStatusTransfer_Item\x12\x10\n\x08\x65_RAB_ID\x18\x01 \x01(\r\x12>\n\x19receiveStatusofULPDCPSDUs\x18\x02 \x01(\x0b\x32\x1b.google.protobuf.BytesValue\x12\x36\n\ruL_COUNTvalue\x18\x03 \x01(\x0b\x32\x1f.streaming_protobufs.COUNTvalue\x12\x36\n\rdL_COUNTvalue\x18\x04 \x01(\x0b\x32\x1f.streaming_protobufs.COUNTvalue\x12U\n\riE_Extensions\x18\x05 \x03(\x0b\x32>.streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemExtIEs\"\x8c\x04\n)E_RABs_SubjectToStatusTransfer_ItemExtIEs\x12I\n$id_ReceiveStatusOfULPDCPSDUsExtended\x18\x01 \x01(\x0b\x32\x1b.google.protobuf.BytesValue\x12H\n\x17id_ULCOUNTValueExtended\x18\x02 \x01(\x0b\x32\'.streaming_protobufs.COUNTValueExtended\x12H\n\x17id_DLCOUNTValueExtended\x18\x03 \x01(\x0b\x32\'.streaming_protobufs.COUNTValueExtended\x12P\n+id_ReceiveStatusOfULPDCPSDUsPDCP_SNlength18\x18\x04 \x01(\x0b\x32\x1b.google.protobuf.BytesValue\x12V\n\x1eid_ULCOUNTValuePDCP_SNlength18\x18\x05 \x01(\x0b\x32..streaming_protobufs.COUNTvaluePDCP_SNlength18\x12V\n\x1eid_DLCOUNTValuePDCP_SNlength18\x18\x06 \x01(\x0b\x32..streaming_protobufs.COUNTvaluePDCP_SNlength18B3Z1gerrit.o-ran-sc.org/r/ric-plt/streaming-protobufsb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_wrappers__pb2.DESCRIPTOR,x2ap__common__types__pb2.DESCRIPTOR,])




_SNSTATUSTRANSFER = _descriptor.Descriptor(
  name='SNStatusTransfer',
  full_name='streaming_protobufs.SNStatusTransfer',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='protocolIEs', full_name='streaming_protobufs.SNStatusTransfer.protocolIEs', index=0,
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
  serialized_start=106,
  serialized_end=188,
)


_SNSTATUSTRANSFER_IES = _descriptor.Descriptor(
  name='SNStatusTransfer_IEs',
  full_name='streaming_protobufs.SNStatusTransfer_IEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_Old_eNB_UE_X2AP_ID', full_name='streaming_protobufs.SNStatusTransfer_IEs.id_Old_eNB_UE_X2AP_ID', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_New_eNB_UE_X2AP_ID', full_name='streaming_protobufs.SNStatusTransfer_IEs.id_New_eNB_UE_X2AP_ID', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_E_RABs_SubjectToStatusTransfer_List', full_name='streaming_protobufs.SNStatusTransfer_IEs.id_E_RABs_SubjectToStatusTransfer_List', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_Old_eNB_UE_X2AP_ID_Extension', full_name='streaming_protobufs.SNStatusTransfer_IEs.id_Old_eNB_UE_X2AP_ID_Extension', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_New_eNB_UE_X2AP_ID_Extension', full_name='streaming_protobufs.SNStatusTransfer_IEs.id_New_eNB_UE_X2AP_ID_Extension', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SgNB_UE_X2AP_ID', full_name='streaming_protobufs.SNStatusTransfer_IEs.id_SgNB_UE_X2AP_ID', index=5,
      number=6, type=11, cpp_type=10, label=1,
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
  serialized_start=191,
  serialized_end=581,
)


_E_RABS_SUBJECTTOSTATUSTRANSFER_LIST = _descriptor.Descriptor(
  name='E_RABs_SubjectToStatusTransfer_List',
  full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_List',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='items', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_List.items', index=0,
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
  serialized_start=583,
  serialized_end=696,
)


_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMIES = _descriptor.Descriptor(
  name='E_RABs_SubjectToStatusTransfer_ItemIEs',
  full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemIEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_E_RABs_SubjectToStatusTransfer_Item', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemIEs.id_E_RABs_SubjectToStatusTransfer_Item', index=0,
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
  serialized_start=699,
  serialized_end=845,
)


_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEM = _descriptor.Descriptor(
  name='E_RABs_SubjectToStatusTransfer_Item',
  full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_Item',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='e_RAB_ID', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_Item.e_RAB_ID', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='receiveStatusofULPDCPSDUs', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_Item.receiveStatusofULPDCPSDUs', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='uL_COUNTvalue', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_Item.uL_COUNTvalue', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dL_COUNTvalue', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_Item.dL_COUNTvalue', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='iE_Extensions', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_Item.iE_Extensions', index=4,
      number=5, type=11, cpp_type=10, label=3,
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
  serialized_start=848,
  serialized_end=1166,
)


_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMEXTIES = _descriptor.Descriptor(
  name='E_RABs_SubjectToStatusTransfer_ItemExtIEs',
  full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemExtIEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_ReceiveStatusOfULPDCPSDUsExtended', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemExtIEs.id_ReceiveStatusOfULPDCPSDUsExtended', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_ULCOUNTValueExtended', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemExtIEs.id_ULCOUNTValueExtended', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_DLCOUNTValueExtended', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemExtIEs.id_DLCOUNTValueExtended', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_ReceiveStatusOfULPDCPSDUsPDCP_SNlength18', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemExtIEs.id_ReceiveStatusOfULPDCPSDUsPDCP_SNlength18', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_ULCOUNTValuePDCP_SNlength18', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemExtIEs.id_ULCOUNTValuePDCP_SNlength18', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_DLCOUNTValuePDCP_SNlength18', full_name='streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemExtIEs.id_DLCOUNTValuePDCP_SNlength18', index=5,
      number=6, type=11, cpp_type=10, label=1,
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
  serialized_start=1169,
  serialized_end=1693,
)

_SNSTATUSTRANSFER.fields_by_name['protocolIEs'].message_type = _SNSTATUSTRANSFER_IES
_SNSTATUSTRANSFER_IES.fields_by_name['id_E_RABs_SubjectToStatusTransfer_List'].message_type = _E_RABS_SUBJECTTOSTATUSTRANSFER_LIST
_SNSTATUSTRANSFER_IES.fields_by_name['id_Old_eNB_UE_X2AP_ID_Extension'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_SNSTATUSTRANSFER_IES.fields_by_name['id_New_eNB_UE_X2AP_ID_Extension'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_SNSTATUSTRANSFER_IES.fields_by_name['id_SgNB_UE_X2AP_ID'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_E_RABS_SUBJECTTOSTATUSTRANSFER_LIST.fields_by_name['items'].message_type = _E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMIES
_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMIES.fields_by_name['id_E_RABs_SubjectToStatusTransfer_Item'].message_type = _E_RABS_SUBJECTTOSTATUSTRANSFER_ITEM
_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEM.fields_by_name['receiveStatusofULPDCPSDUs'].message_type = google_dot_protobuf_dot_wrappers__pb2._BYTESVALUE
_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEM.fields_by_name['uL_COUNTvalue'].message_type = x2ap__common__types__pb2._COUNTVALUE
_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEM.fields_by_name['dL_COUNTvalue'].message_type = x2ap__common__types__pb2._COUNTVALUE
_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEM.fields_by_name['iE_Extensions'].message_type = _E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMEXTIES
_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMEXTIES.fields_by_name['id_ReceiveStatusOfULPDCPSDUsExtended'].message_type = google_dot_protobuf_dot_wrappers__pb2._BYTESVALUE
_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMEXTIES.fields_by_name['id_ULCOUNTValueExtended'].message_type = x2ap__common__types__pb2._COUNTVALUEEXTENDED
_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMEXTIES.fields_by_name['id_DLCOUNTValueExtended'].message_type = x2ap__common__types__pb2._COUNTVALUEEXTENDED
_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMEXTIES.fields_by_name['id_ReceiveStatusOfULPDCPSDUsPDCP_SNlength18'].message_type = google_dot_protobuf_dot_wrappers__pb2._BYTESVALUE
_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMEXTIES.fields_by_name['id_ULCOUNTValuePDCP_SNlength18'].message_type = x2ap__common__types__pb2._COUNTVALUEPDCP_SNLENGTH18
_E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMEXTIES.fields_by_name['id_DLCOUNTValuePDCP_SNlength18'].message_type = x2ap__common__types__pb2._COUNTVALUEPDCP_SNLENGTH18
DESCRIPTOR.message_types_by_name['SNStatusTransfer'] = _SNSTATUSTRANSFER
DESCRIPTOR.message_types_by_name['SNStatusTransfer_IEs'] = _SNSTATUSTRANSFER_IES
DESCRIPTOR.message_types_by_name['E_RABs_SubjectToStatusTransfer_List'] = _E_RABS_SUBJECTTOSTATUSTRANSFER_LIST
DESCRIPTOR.message_types_by_name['E_RABs_SubjectToStatusTransfer_ItemIEs'] = _E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMIES
DESCRIPTOR.message_types_by_name['E_RABs_SubjectToStatusTransfer_Item'] = _E_RABS_SUBJECTTOSTATUSTRANSFER_ITEM
DESCRIPTOR.message_types_by_name['E_RABs_SubjectToStatusTransfer_ItemExtIEs'] = _E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMEXTIES
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SNStatusTransfer = _reflection.GeneratedProtocolMessageType('SNStatusTransfer', (_message.Message,), {
  'DESCRIPTOR' : _SNSTATUSTRANSFER,
  '__module__' : 'sn_status_transfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.SNStatusTransfer)
  })
_sym_db.RegisterMessage(SNStatusTransfer)

SNStatusTransfer_IEs = _reflection.GeneratedProtocolMessageType('SNStatusTransfer_IEs', (_message.Message,), {
  'DESCRIPTOR' : _SNSTATUSTRANSFER_IES,
  '__module__' : 'sn_status_transfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.SNStatusTransfer_IEs)
  })
_sym_db.RegisterMessage(SNStatusTransfer_IEs)

E_RABs_SubjectToStatusTransfer_List = _reflection.GeneratedProtocolMessageType('E_RABs_SubjectToStatusTransfer_List', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_SUBJECTTOSTATUSTRANSFER_LIST,
  '__module__' : 'sn_status_transfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.E_RABs_SubjectToStatusTransfer_List)
  })
_sym_db.RegisterMessage(E_RABs_SubjectToStatusTransfer_List)

E_RABs_SubjectToStatusTransfer_ItemIEs = _reflection.GeneratedProtocolMessageType('E_RABs_SubjectToStatusTransfer_ItemIEs', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMIES,
  '__module__' : 'sn_status_transfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemIEs)
  })
_sym_db.RegisterMessage(E_RABs_SubjectToStatusTransfer_ItemIEs)

E_RABs_SubjectToStatusTransfer_Item = _reflection.GeneratedProtocolMessageType('E_RABs_SubjectToStatusTransfer_Item', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_SUBJECTTOSTATUSTRANSFER_ITEM,
  '__module__' : 'sn_status_transfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.E_RABs_SubjectToStatusTransfer_Item)
  })
_sym_db.RegisterMessage(E_RABs_SubjectToStatusTransfer_Item)

E_RABs_SubjectToStatusTransfer_ItemExtIEs = _reflection.GeneratedProtocolMessageType('E_RABs_SubjectToStatusTransfer_ItemExtIEs', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_SUBJECTTOSTATUSTRANSFER_ITEMEXTIES,
  '__module__' : 'sn_status_transfer_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.E_RABs_SubjectToStatusTransfer_ItemExtIEs)
  })
_sym_db.RegisterMessage(E_RABs_SubjectToStatusTransfer_ItemExtIEs)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
