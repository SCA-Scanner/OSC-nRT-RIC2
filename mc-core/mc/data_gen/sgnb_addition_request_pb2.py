# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: sgnb_addition_request.proto

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
import rrc_cg_config_info_pb2 as rrc__cg__config__info__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='sgnb_addition_request.proto',
  package='streaming_protobufs',
  syntax='proto3',
  serialized_options=_b('Z1gerrit.o-ran-sc.org/r/ric-plt/streaming-protobufs'),
  serialized_pb=_b('\n\x1bsgnb_addition_request.proto\x12\x13streaming_protobufs\x1a\x1egoogle/protobuf/wrappers.proto\x1a\x17x2ap_common_types.proto\x1a\x18rrc_cg_config_info.proto\"X\n\x13SgNBAdditionRequest\x12\x41\n\x0bprotocolIEs\x18\x01 \x01(\x0b\x32,.streaming_protobufs.SgNBAdditionRequest_IEs\"\xeb\x08\n\x17SgNBAdditionRequest_IEs\x12\x1a\n\x12id_MeNB_UE_X2AP_ID\x18\x01 \x01(\r\x12R\n\x1bid_NRUESecurityCapabilities\x18\x02 \x01(\x0b\x32-.streaming_protobufs.NRUESecurityCapabilities\x12\x1a\n\x12id_SgNBSecurityKey\x18\x03 \x01(\x0c\x12X\n id_SgNBUEAggregateMaximumBitRate\x18\x04 \x01(\x0b\x32..streaming_protobufs.UEAggregateMaximumBitRate\x12\x34\n\x0fid_SelectedPLMN\x18\x05 \x01(\x0b\x32\x1b.google.protobuf.BytesValue\x12P\n\x1aid_HandoverRestrictionList\x18\x06 \x01(\x0b\x32,.streaming_protobufs.HandoverRestrictionList\x12`\n\"id_E_RABs_ToBeAdded_SgNBAddReqList\x18\x07 \x01(\x0b\x32\x34.streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReqList\x12\x42\n\x16id_MeNBtoSgNBContainer\x18\x08 \x01(\x0b\x32\".streaming_protobufs.CG_ConfigInfo\x12\x38\n\x12id_SgNB_UE_X2AP_ID\x18\t \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\x12H\n\x16id_ExpectedUEBehaviour\x18\n \x01(\x0b\x32(.streaming_protobufs.ExpectedUEBehaviour\x12\x42\n\x1cid_MeNB_UE_X2AP_ID_Extension\x18\x0b \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\x12=\n\x15id_RequestedSplitSRBs\x18\x0c \x01(\x0b\x32\x1e.streaming_protobufs.SplitSRBs\x12h\n&id_MeNBResourceCoordinationInformation\x18\r \x01(\x0b\x32\x38.streaming_protobufs.MeNBResourceCoordinationInformation\x12T\n\x1cid_SGNB_Addition_Trigger_Ind\x18\x0e \x01(\x0b\x32..streaming_protobufs.SGNB_Addition_Trigger_Ind\x12\x42\n\x1cid_SubscriberProfileIDforRFP\x18\x0f \x01(\x0b\x32\x1c.google.protobuf.UInt32Value\x12\x31\n\x0eid_MeNBCell_ID\x18\x10 \x01(\x0b\x32\x19.streaming_protobufs.ECGI\"j\n\x1f\x45_RABs_ToBeAdded_SgNBAddReqList\x12G\n\x05items\x18\x01 \x03(\x0b\x32\x38.streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_ItemIEs\"\x89\x01\n#E_RABs_ToBeAdded_SgNBAddReq_ItemIEs\x12\x62\n#id_E_RABs_ToBeAdded_SgNBAddReq_Item\x18\x01 \x01(\x0b\x32\x35.streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_Item\"\xc9\x03\n E_RABs_ToBeAdded_SgNBAddReq_Item\x12\x10\n\x08\x65_RAB_ID\x18\x01 \x01(\r\x12\x0e\n\x06\x64rb_ID\x18\x02 \x01(\r\x12U\n\x1b\x65n_DC_ResourceConfiguration\x18\x03 \x01(\x0b\x32\x30.streaming_protobufs.EN_DC_ResourceConfiguration\x12[\n\x0fsgNBPDCPpresent\x18\x04 \x01(\x0b\x32@.streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresentH\x00\x12\x61\n\x12sgNBPDCPnotpresent\x18\x05 \x01(\x0b\x32\x43.streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentH\x00\x12R\n\riE_Extensions\x18\x06 \x03(\x0b\x32;.streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_ItemExtIEsB\x18\n\x16resource_configuration\"(\n&E_RABs_ToBeAdded_SgNBAddReq_ItemExtIEs\"\x8c\x04\n+E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent\x12X\n\x1f\x66ull_E_RAB_Level_QoS_Parameters\x18\x01 \x01(\x0b\x32/.streaming_protobufs.E_RAB_Level_QoS_Parameters\x12Y\n(max_MCG_admit_E_RAB_Level_QoS_Parameters\x18\x02 \x01(\x0b\x32\'.streaming_protobufs.GBR_QosInformation\x12\x39\n\rdL_Forwarding\x18\x03 \x01(\x0b\x32\".streaming_protobufs.DL_Forwarding\x12\x45\n\x15meNB_DL_GTP_TEIDatMCG\x18\x04 \x01(\x0b\x32&.streaming_protobufs.GTPtunnelEndpoint\x12G\n\x17s1_UL_GTPtunnelEndpoint\x18\x05 \x01(\x0b\x32&.streaming_protobufs.GTPtunnelEndpoint\x12]\n\riE_Extensions\x18\x06 \x03(\x0b\x32\x46.streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresentExtIEs\"q\n1E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresentExtIEs\x12<\n\x16id_RLCMode_transferred\x18\x01 \x01(\x0b\x32\x1c.streaming_protobufs.RLCMode\"\xff\x03\n.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent\x12\x61\n(requested_SCG_E_RAB_Level_QoS_Parameters\x18\x01 \x01(\x0b\x32/.streaming_protobufs.E_RAB_Level_QoS_Parameters\x12\x46\n\x16meNB_UL_GTP_TEIDatPDCP\x18\x02 \x01(\x0b\x32&.streaming_protobufs.GTPtunnelEndpoint\x12P\n secondary_meNB_UL_GTP_TEIDatPDCP\x18\x03 \x01(\x0b\x32&.streaming_protobufs.GTPtunnelEndpoint\x12.\n\x08rlc_Mode\x18\x04 \x01(\x0b\x32\x1c.streaming_protobufs.RLCMode\x12>\n\x10uL_Configuration\x18\x05 \x01(\x0b\x32$.streaming_protobufs.ULConfiguration\x12`\n\riE_Extensions\x18\x06 \x03(\x0b\x32I.streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentExtIEs\"\x80\x02\n4E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentExtIEs\x12<\n\x11id_uLpDCPSnLength\x18\x01 \x01(\x0b\x32!.streaming_protobufs.PDCPSnLength\x12<\n\x11id_dLPDCPSnLength\x18\x02 \x01(\x0b\x32!.streaming_protobufs.PDCPSnLength\x12L\n\x18id_duplicationActivation\x18\x03 \x01(\x0b\x32*.streaming_protobufs.DuplicationActivationB3Z1gerrit.o-ran-sc.org/r/ric-plt/streaming-protobufsb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_wrappers__pb2.DESCRIPTOR,x2ap__common__types__pb2.DESCRIPTOR,rrc__cg__config__info__pb2.DESCRIPTOR,])




_SGNBADDITIONREQUEST = _descriptor.Descriptor(
  name='SgNBAdditionRequest',
  full_name='streaming_protobufs.SgNBAdditionRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='protocolIEs', full_name='streaming_protobufs.SgNBAdditionRequest.protocolIEs', index=0,
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
  serialized_start=135,
  serialized_end=223,
)


_SGNBADDITIONREQUEST_IES = _descriptor.Descriptor(
  name='SgNBAdditionRequest_IEs',
  full_name='streaming_protobufs.SgNBAdditionRequest_IEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_MeNB_UE_X2AP_ID', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_MeNB_UE_X2AP_ID', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_NRUESecurityCapabilities', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_NRUESecurityCapabilities', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SgNBSecurityKey', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_SgNBSecurityKey', index=2,
      number=3, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SgNBUEAggregateMaximumBitRate', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_SgNBUEAggregateMaximumBitRate', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SelectedPLMN', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_SelectedPLMN', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_HandoverRestrictionList', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_HandoverRestrictionList', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_E_RABs_ToBeAdded_SgNBAddReqList', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_E_RABs_ToBeAdded_SgNBAddReqList', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_MeNBtoSgNBContainer', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_MeNBtoSgNBContainer', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SgNB_UE_X2AP_ID', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_SgNB_UE_X2AP_ID', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_ExpectedUEBehaviour', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_ExpectedUEBehaviour', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_MeNB_UE_X2AP_ID_Extension', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_MeNB_UE_X2AP_ID_Extension', index=10,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_RequestedSplitSRBs', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_RequestedSplitSRBs', index=11,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_MeNBResourceCoordinationInformation', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_MeNBResourceCoordinationInformation', index=12,
      number=13, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SGNB_Addition_Trigger_Ind', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_SGNB_Addition_Trigger_Ind', index=13,
      number=14, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_SubscriberProfileIDforRFP', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_SubscriberProfileIDforRFP', index=14,
      number=15, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_MeNBCell_ID', full_name='streaming_protobufs.SgNBAdditionRequest_IEs.id_MeNBCell_ID', index=15,
      number=16, type=11, cpp_type=10, label=1,
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
  serialized_start=226,
  serialized_end=1357,
)


_E_RABS_TOBEADDED_SGNBADDREQLIST = _descriptor.Descriptor(
  name='E_RABs_ToBeAdded_SgNBAddReqList',
  full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReqList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='items', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReqList.items', index=0,
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
  serialized_start=1359,
  serialized_end=1465,
)


_E_RABS_TOBEADDED_SGNBADDREQ_ITEMIES = _descriptor.Descriptor(
  name='E_RABs_ToBeAdded_SgNBAddReq_ItemIEs',
  full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_ItemIEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_E_RABs_ToBeAdded_SgNBAddReq_Item', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_ItemIEs.id_E_RABs_ToBeAdded_SgNBAddReq_Item', index=0,
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
  serialized_start=1468,
  serialized_end=1605,
)


_E_RABS_TOBEADDED_SGNBADDREQ_ITEM = _descriptor.Descriptor(
  name='E_RABs_ToBeAdded_SgNBAddReq_Item',
  full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_Item',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='e_RAB_ID', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_Item.e_RAB_ID', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='drb_ID', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_Item.drb_ID', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='en_DC_ResourceConfiguration', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_Item.en_DC_ResourceConfiguration', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBPDCPpresent', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_Item.sgNBPDCPpresent', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sgNBPDCPnotpresent', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_Item.sgNBPDCPnotpresent', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='iE_Extensions', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_Item.iE_Extensions', index=5,
      number=6, type=11, cpp_type=10, label=3,
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
    _descriptor.OneofDescriptor(
      name='resource_configuration', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_Item.resource_configuration',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=1608,
  serialized_end=2065,
)


_E_RABS_TOBEADDED_SGNBADDREQ_ITEMEXTIES = _descriptor.Descriptor(
  name='E_RABs_ToBeAdded_SgNBAddReq_ItemExtIEs',
  full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_ItemExtIEs',
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
  serialized_start=2067,
  serialized_end=2107,
)


_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENT = _descriptor.Descriptor(
  name='E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent',
  full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='full_E_RAB_Level_QoS_Parameters', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent.full_E_RAB_Level_QoS_Parameters', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='max_MCG_admit_E_RAB_Level_QoS_Parameters', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent.max_MCG_admit_E_RAB_Level_QoS_Parameters', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dL_Forwarding', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent.dL_Forwarding', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='meNB_DL_GTP_TEIDatMCG', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent.meNB_DL_GTP_TEIDatMCG', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='s1_UL_GTPtunnelEndpoint', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent.s1_UL_GTPtunnelEndpoint', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='iE_Extensions', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent.iE_Extensions', index=5,
      number=6, type=11, cpp_type=10, label=3,
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
  serialized_start=2110,
  serialized_end=2634,
)


_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENTEXTIES = _descriptor.Descriptor(
  name='E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresentExtIEs',
  full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresentExtIEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_RLCMode_transferred', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresentExtIEs.id_RLCMode_transferred', index=0,
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
  serialized_start=2636,
  serialized_end=2749,
)


_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENT = _descriptor.Descriptor(
  name='E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent',
  full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='requested_SCG_E_RAB_Level_QoS_Parameters', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent.requested_SCG_E_RAB_Level_QoS_Parameters', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='meNB_UL_GTP_TEIDatPDCP', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent.meNB_UL_GTP_TEIDatPDCP', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='secondary_meNB_UL_GTP_TEIDatPDCP', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent.secondary_meNB_UL_GTP_TEIDatPDCP', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='rlc_Mode', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent.rlc_Mode', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='uL_Configuration', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent.uL_Configuration', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='iE_Extensions', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent.iE_Extensions', index=5,
      number=6, type=11, cpp_type=10, label=3,
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
  serialized_start=2752,
  serialized_end=3263,
)


_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENTEXTIES = _descriptor.Descriptor(
  name='E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentExtIEs',
  full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentExtIEs',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id_uLpDCPSnLength', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentExtIEs.id_uLpDCPSnLength', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_dLPDCPSnLength', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentExtIEs.id_dLPDCPSnLength', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id_duplicationActivation', full_name='streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentExtIEs.id_duplicationActivation', index=2,
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
  ],
  serialized_start=3266,
  serialized_end=3522,
)

_SGNBADDITIONREQUEST.fields_by_name['protocolIEs'].message_type = _SGNBADDITIONREQUEST_IES
_SGNBADDITIONREQUEST_IES.fields_by_name['id_NRUESecurityCapabilities'].message_type = x2ap__common__types__pb2._NRUESECURITYCAPABILITIES
_SGNBADDITIONREQUEST_IES.fields_by_name['id_SgNBUEAggregateMaximumBitRate'].message_type = x2ap__common__types__pb2._UEAGGREGATEMAXIMUMBITRATE
_SGNBADDITIONREQUEST_IES.fields_by_name['id_SelectedPLMN'].message_type = google_dot_protobuf_dot_wrappers__pb2._BYTESVALUE
_SGNBADDITIONREQUEST_IES.fields_by_name['id_HandoverRestrictionList'].message_type = x2ap__common__types__pb2._HANDOVERRESTRICTIONLIST
_SGNBADDITIONREQUEST_IES.fields_by_name['id_E_RABs_ToBeAdded_SgNBAddReqList'].message_type = _E_RABS_TOBEADDED_SGNBADDREQLIST
_SGNBADDITIONREQUEST_IES.fields_by_name['id_MeNBtoSgNBContainer'].message_type = rrc__cg__config__info__pb2._CG_CONFIGINFO
_SGNBADDITIONREQUEST_IES.fields_by_name['id_SgNB_UE_X2AP_ID'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_SGNBADDITIONREQUEST_IES.fields_by_name['id_ExpectedUEBehaviour'].message_type = x2ap__common__types__pb2._EXPECTEDUEBEHAVIOUR
_SGNBADDITIONREQUEST_IES.fields_by_name['id_MeNB_UE_X2AP_ID_Extension'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_SGNBADDITIONREQUEST_IES.fields_by_name['id_RequestedSplitSRBs'].message_type = x2ap__common__types__pb2._SPLITSRBS
_SGNBADDITIONREQUEST_IES.fields_by_name['id_MeNBResourceCoordinationInformation'].message_type = x2ap__common__types__pb2._MENBRESOURCECOORDINATIONINFORMATION
_SGNBADDITIONREQUEST_IES.fields_by_name['id_SGNB_Addition_Trigger_Ind'].message_type = x2ap__common__types__pb2._SGNB_ADDITION_TRIGGER_IND
_SGNBADDITIONREQUEST_IES.fields_by_name['id_SubscriberProfileIDforRFP'].message_type = google_dot_protobuf_dot_wrappers__pb2._UINT32VALUE
_SGNBADDITIONREQUEST_IES.fields_by_name['id_MeNBCell_ID'].message_type = x2ap__common__types__pb2._ECGI
_E_RABS_TOBEADDED_SGNBADDREQLIST.fields_by_name['items'].message_type = _E_RABS_TOBEADDED_SGNBADDREQ_ITEMIES
_E_RABS_TOBEADDED_SGNBADDREQ_ITEMIES.fields_by_name['id_E_RABs_ToBeAdded_SgNBAddReq_Item'].message_type = _E_RABS_TOBEADDED_SGNBADDREQ_ITEM
_E_RABS_TOBEADDED_SGNBADDREQ_ITEM.fields_by_name['en_DC_ResourceConfiguration'].message_type = x2ap__common__types__pb2._EN_DC_RESOURCECONFIGURATION
_E_RABS_TOBEADDED_SGNBADDREQ_ITEM.fields_by_name['sgNBPDCPpresent'].message_type = _E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENT
_E_RABS_TOBEADDED_SGNBADDREQ_ITEM.fields_by_name['sgNBPDCPnotpresent'].message_type = _E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENT
_E_RABS_TOBEADDED_SGNBADDREQ_ITEM.fields_by_name['iE_Extensions'].message_type = _E_RABS_TOBEADDED_SGNBADDREQ_ITEMEXTIES
_E_RABS_TOBEADDED_SGNBADDREQ_ITEM.oneofs_by_name['resource_configuration'].fields.append(
  _E_RABS_TOBEADDED_SGNBADDREQ_ITEM.fields_by_name['sgNBPDCPpresent'])
_E_RABS_TOBEADDED_SGNBADDREQ_ITEM.fields_by_name['sgNBPDCPpresent'].containing_oneof = _E_RABS_TOBEADDED_SGNBADDREQ_ITEM.oneofs_by_name['resource_configuration']
_E_RABS_TOBEADDED_SGNBADDREQ_ITEM.oneofs_by_name['resource_configuration'].fields.append(
  _E_RABS_TOBEADDED_SGNBADDREQ_ITEM.fields_by_name['sgNBPDCPnotpresent'])
_E_RABS_TOBEADDED_SGNBADDREQ_ITEM.fields_by_name['sgNBPDCPnotpresent'].containing_oneof = _E_RABS_TOBEADDED_SGNBADDREQ_ITEM.oneofs_by_name['resource_configuration']
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENT.fields_by_name['full_E_RAB_Level_QoS_Parameters'].message_type = x2ap__common__types__pb2._E_RAB_LEVEL_QOS_PARAMETERS
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENT.fields_by_name['max_MCG_admit_E_RAB_Level_QoS_Parameters'].message_type = x2ap__common__types__pb2._GBR_QOSINFORMATION
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENT.fields_by_name['dL_Forwarding'].message_type = x2ap__common__types__pb2._DL_FORWARDING
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENT.fields_by_name['meNB_DL_GTP_TEIDatMCG'].message_type = x2ap__common__types__pb2._GTPTUNNELENDPOINT
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENT.fields_by_name['s1_UL_GTPtunnelEndpoint'].message_type = x2ap__common__types__pb2._GTPTUNNELENDPOINT
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENT.fields_by_name['iE_Extensions'].message_type = _E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENTEXTIES
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENTEXTIES.fields_by_name['id_RLCMode_transferred'].message_type = x2ap__common__types__pb2._RLCMODE
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENT.fields_by_name['requested_SCG_E_RAB_Level_QoS_Parameters'].message_type = x2ap__common__types__pb2._E_RAB_LEVEL_QOS_PARAMETERS
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENT.fields_by_name['meNB_UL_GTP_TEIDatPDCP'].message_type = x2ap__common__types__pb2._GTPTUNNELENDPOINT
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENT.fields_by_name['secondary_meNB_UL_GTP_TEIDatPDCP'].message_type = x2ap__common__types__pb2._GTPTUNNELENDPOINT
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENT.fields_by_name['rlc_Mode'].message_type = x2ap__common__types__pb2._RLCMODE
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENT.fields_by_name['uL_Configuration'].message_type = x2ap__common__types__pb2._ULCONFIGURATION
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENT.fields_by_name['iE_Extensions'].message_type = _E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENTEXTIES
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENTEXTIES.fields_by_name['id_uLpDCPSnLength'].message_type = x2ap__common__types__pb2._PDCPSNLENGTH
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENTEXTIES.fields_by_name['id_dLPDCPSnLength'].message_type = x2ap__common__types__pb2._PDCPSNLENGTH
_E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENTEXTIES.fields_by_name['id_duplicationActivation'].message_type = x2ap__common__types__pb2._DUPLICATIONACTIVATION
DESCRIPTOR.message_types_by_name['SgNBAdditionRequest'] = _SGNBADDITIONREQUEST
DESCRIPTOR.message_types_by_name['SgNBAdditionRequest_IEs'] = _SGNBADDITIONREQUEST_IES
DESCRIPTOR.message_types_by_name['E_RABs_ToBeAdded_SgNBAddReqList'] = _E_RABS_TOBEADDED_SGNBADDREQLIST
DESCRIPTOR.message_types_by_name['E_RABs_ToBeAdded_SgNBAddReq_ItemIEs'] = _E_RABS_TOBEADDED_SGNBADDREQ_ITEMIES
DESCRIPTOR.message_types_by_name['E_RABs_ToBeAdded_SgNBAddReq_Item'] = _E_RABS_TOBEADDED_SGNBADDREQ_ITEM
DESCRIPTOR.message_types_by_name['E_RABs_ToBeAdded_SgNBAddReq_ItemExtIEs'] = _E_RABS_TOBEADDED_SGNBADDREQ_ITEMEXTIES
DESCRIPTOR.message_types_by_name['E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent'] = _E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENT
DESCRIPTOR.message_types_by_name['E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresentExtIEs'] = _E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENTEXTIES
DESCRIPTOR.message_types_by_name['E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent'] = _E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENT
DESCRIPTOR.message_types_by_name['E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentExtIEs'] = _E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENTEXTIES
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SgNBAdditionRequest = _reflection.GeneratedProtocolMessageType('SgNBAdditionRequest', (_message.Message,), {
  'DESCRIPTOR' : _SGNBADDITIONREQUEST,
  '__module__' : 'sgnb_addition_request_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.SgNBAdditionRequest)
  })
_sym_db.RegisterMessage(SgNBAdditionRequest)

SgNBAdditionRequest_IEs = _reflection.GeneratedProtocolMessageType('SgNBAdditionRequest_IEs', (_message.Message,), {
  'DESCRIPTOR' : _SGNBADDITIONREQUEST_IES,
  '__module__' : 'sgnb_addition_request_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.SgNBAdditionRequest_IEs)
  })
_sym_db.RegisterMessage(SgNBAdditionRequest_IEs)

E_RABs_ToBeAdded_SgNBAddReqList = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeAdded_SgNBAddReqList', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBEADDED_SGNBADDREQLIST,
  '__module__' : 'sgnb_addition_request_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReqList)
  })
_sym_db.RegisterMessage(E_RABs_ToBeAdded_SgNBAddReqList)

E_RABs_ToBeAdded_SgNBAddReq_ItemIEs = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeAdded_SgNBAddReq_ItemIEs', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBEADDED_SGNBADDREQ_ITEMIES,
  '__module__' : 'sgnb_addition_request_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_ItemIEs)
  })
_sym_db.RegisterMessage(E_RABs_ToBeAdded_SgNBAddReq_ItemIEs)

E_RABs_ToBeAdded_SgNBAddReq_Item = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeAdded_SgNBAddReq_Item', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBEADDED_SGNBADDREQ_ITEM,
  '__module__' : 'sgnb_addition_request_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_Item)
  })
_sym_db.RegisterMessage(E_RABs_ToBeAdded_SgNBAddReq_Item)

E_RABs_ToBeAdded_SgNBAddReq_ItemExtIEs = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeAdded_SgNBAddReq_ItemExtIEs', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBEADDED_SGNBADDREQ_ITEMEXTIES,
  '__module__' : 'sgnb_addition_request_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_ItemExtIEs)
  })
_sym_db.RegisterMessage(E_RABs_ToBeAdded_SgNBAddReq_ItemExtIEs)

E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENT,
  '__module__' : 'sgnb_addition_request_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent)
  })
_sym_db.RegisterMessage(E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresent)

E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresentExtIEs = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresentExtIEs', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPPRESENTEXTIES,
  '__module__' : 'sgnb_addition_request_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresentExtIEs)
  })
_sym_db.RegisterMessage(E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPpresentExtIEs)

E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENT,
  '__module__' : 'sgnb_addition_request_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent)
  })
_sym_db.RegisterMessage(E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresent)

E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentExtIEs = _reflection.GeneratedProtocolMessageType('E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentExtIEs', (_message.Message,), {
  'DESCRIPTOR' : _E_RABS_TOBEADDED_SGNBADDREQ_SGNBPDCPNOTPRESENTEXTIES,
  '__module__' : 'sgnb_addition_request_pb2'
  # @@protoc_insertion_point(class_scope:streaming_protobufs.E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentExtIEs)
  })
_sym_db.RegisterMessage(E_RABs_ToBeAdded_SgNBAddReq_SgNBPDCPnotpresentExtIEs)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
