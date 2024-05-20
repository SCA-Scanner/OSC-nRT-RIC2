# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: cells.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from . import cell_pb2 as cell__pb2
from . import gnb_pb2 as gnb__pb2
from . import enb_pb2 as enb__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='cells.proto',
  package='entities',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\x0b\x63\x65lls.proto\x12\x08\x65ntities\x1a\ncell.proto\x1a\tgnb.proto\x1a\tenb.proto\"\xa4\x01\n\x05\x43\x65lls\x12!\n\x04type\x18\x01 \x01(\x0e\x32\x13.entities.Cell.Type\x12\x39\n\x11served_cell_infos\x18\x02 \x01(\x0b\x32\x1c.entities.ServedCellInfoListH\x00\x12\x35\n\x0fserved_nr_cells\x18\x03 \x01(\x0b\x32\x1a.entities.ServedNRCellListH\x00\x42\x06\n\x04list\"D\n\x12ServedCellInfoList\x12.\n\x0cserved_cells\x18\x01 \x03(\x0b\x32\x18.entities.ServedCellInfo\"@\n\x10ServedNRCellList\x12,\n\x0cserved_cells\x18\x01 \x03(\x0b\x32\x16.entities.ServedNRCellb\x06proto3')
  ,
  dependencies=[cell__pb2.DESCRIPTOR,gnb__pb2.DESCRIPTOR,enb__pb2.DESCRIPTOR,])




_CELLS = _descriptor.Descriptor(
  name='Cells',
  full_name='entities.Cells',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='entities.Cells.type', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='served_cell_infos', full_name='entities.Cells.served_cell_infos', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='served_nr_cells', full_name='entities.Cells.served_nr_cells', index=2,
      number=3, type=11, cpp_type=10, label=1,
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
      name='list', full_name='entities.Cells.list',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=60,
  serialized_end=224,
)


_SERVEDCELLINFOLIST = _descriptor.Descriptor(
  name='ServedCellInfoList',
  full_name='entities.ServedCellInfoList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='served_cells', full_name='entities.ServedCellInfoList.served_cells', index=0,
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
  serialized_start=226,
  serialized_end=294,
)


_SERVEDNRCELLLIST = _descriptor.Descriptor(
  name='ServedNRCellList',
  full_name='entities.ServedNRCellList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='served_cells', full_name='entities.ServedNRCellList.served_cells', index=0,
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
  serialized_start=296,
  serialized_end=360,
)

_CELLS.fields_by_name['type'].enum_type = cell__pb2._CELL_TYPE
_CELLS.fields_by_name['served_cell_infos'].message_type = _SERVEDCELLINFOLIST
_CELLS.fields_by_name['served_nr_cells'].message_type = _SERVEDNRCELLLIST
_CELLS.oneofs_by_name['list'].fields.append(
  _CELLS.fields_by_name['served_cell_infos'])
_CELLS.fields_by_name['served_cell_infos'].containing_oneof = _CELLS.oneofs_by_name['list']
_CELLS.oneofs_by_name['list'].fields.append(
  _CELLS.fields_by_name['served_nr_cells'])
_CELLS.fields_by_name['served_nr_cells'].containing_oneof = _CELLS.oneofs_by_name['list']
_SERVEDCELLINFOLIST.fields_by_name['served_cells'].message_type = enb__pb2._SERVEDCELLINFO
_SERVEDNRCELLLIST.fields_by_name['served_cells'].message_type = gnb__pb2._SERVEDNRCELL
DESCRIPTOR.message_types_by_name['Cells'] = _CELLS
DESCRIPTOR.message_types_by_name['ServedCellInfoList'] = _SERVEDCELLINFOLIST
DESCRIPTOR.message_types_by_name['ServedNRCellList'] = _SERVEDNRCELLLIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Cells = _reflection.GeneratedProtocolMessageType('Cells', (_message.Message,), {
  'DESCRIPTOR' : _CELLS,
  '__module__' : 'cells_pb2'
  # @@protoc_insertion_point(class_scope:entities.Cells)
  })
_sym_db.RegisterMessage(Cells)

ServedCellInfoList = _reflection.GeneratedProtocolMessageType('ServedCellInfoList', (_message.Message,), {
  'DESCRIPTOR' : _SERVEDCELLINFOLIST,
  '__module__' : 'cells_pb2'
  # @@protoc_insertion_point(class_scope:entities.ServedCellInfoList)
  })
_sym_db.RegisterMessage(ServedCellInfoList)

ServedNRCellList = _reflection.GeneratedProtocolMessageType('ServedNRCellList', (_message.Message,), {
  'DESCRIPTOR' : _SERVEDNRCELLLIST,
  '__module__' : 'cells_pb2'
  # @@protoc_insertion_point(class_scope:entities.ServedNRCellList)
  })
_sym_db.RegisterMessage(ServedNRCellList)


# @@protoc_insertion_point(module_scope)