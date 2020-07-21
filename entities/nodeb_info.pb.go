//
// Copyright 2019 AT&T Intellectual Property
// Copyright 2019 Nokia
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//
// This source code is part of the near-RT RIC (RAN Intelligent Controller)
// platform project (RICP).

// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.25.0-devel
// 	protoc        v3.6.1
// source: nodeb_info.proto

package entities

import (
	proto "github.com/golang/protobuf/proto"
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

// This is a compile-time assertion that a sufficiently up-to-date version
// of the legacy proto package is being used.
const _ = proto.ProtoPackageIsVersion4

type E2ApplicationProtocol int32

const (
	E2ApplicationProtocol_UNKNOWN_E2_APPLICATION_PROTOCOL E2ApplicationProtocol = 0
	E2ApplicationProtocol_X2_SETUP_REQUEST                E2ApplicationProtocol = 1
	E2ApplicationProtocol_ENDC_X2_SETUP_REQUEST           E2ApplicationProtocol = 2
)

// Enum value maps for E2ApplicationProtocol.
var (
	E2ApplicationProtocol_name = map[int32]string{
		0: "UNKNOWN_E2_APPLICATION_PROTOCOL",
		1: "X2_SETUP_REQUEST",
		2: "ENDC_X2_SETUP_REQUEST",
	}
	E2ApplicationProtocol_value = map[string]int32{
		"UNKNOWN_E2_APPLICATION_PROTOCOL": 0,
		"X2_SETUP_REQUEST":                1,
		"ENDC_X2_SETUP_REQUEST":           2,
	}
)

func (x E2ApplicationProtocol) Enum() *E2ApplicationProtocol {
	p := new(E2ApplicationProtocol)
	*p = x
	return p
}

func (x E2ApplicationProtocol) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (E2ApplicationProtocol) Descriptor() protoreflect.EnumDescriptor {
	return file_nodeb_info_proto_enumTypes[0].Descriptor()
}

func (E2ApplicationProtocol) Type() protoreflect.EnumType {
	return &file_nodeb_info_proto_enumTypes[0]
}

func (x E2ApplicationProtocol) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use E2ApplicationProtocol.Descriptor instead.
func (E2ApplicationProtocol) EnumDescriptor() ([]byte, []int) {
	return file_nodeb_info_proto_rawDescGZIP(), []int{0}
}

type Node_Type int32

const (
	Node_UNKNOWN Node_Type = 0
	Node_ENB     Node_Type = 1
	Node_GNB     Node_Type = 2
)

// Enum value maps for Node_Type.
var (
	Node_Type_name = map[int32]string{
		0: "UNKNOWN",
		1: "ENB",
		2: "GNB",
	}
	Node_Type_value = map[string]int32{
		"UNKNOWN": 0,
		"ENB":     1,
		"GNB":     2,
	}
)

func (x Node_Type) Enum() *Node_Type {
	p := new(Node_Type)
	*p = x
	return p
}

func (x Node_Type) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (Node_Type) Descriptor() protoreflect.EnumDescriptor {
	return file_nodeb_info_proto_enumTypes[1].Descriptor()
}

func (Node_Type) Type() protoreflect.EnumType {
	return &file_nodeb_info_proto_enumTypes[1]
}

func (x Node_Type) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use Node_Type.Descriptor instead.
func (Node_Type) EnumDescriptor() ([]byte, []int) {
	return file_nodeb_info_proto_rawDescGZIP(), []int{1, 0}
}

type Failure_Type int32

const (
	Failure_UNKNOWN_TYPE          Failure_Type = 0
	Failure_X2_SETUP_FAILURE      Failure_Type = 1
	Failure_ENDC_X2_SETUP_FAILURE Failure_Type = 2
)

// Enum value maps for Failure_Type.
var (
	Failure_Type_name = map[int32]string{
		0: "UNKNOWN_TYPE",
		1: "X2_SETUP_FAILURE",
		2: "ENDC_X2_SETUP_FAILURE",
	}
	Failure_Type_value = map[string]int32{
		"UNKNOWN_TYPE":          0,
		"X2_SETUP_FAILURE":      1,
		"ENDC_X2_SETUP_FAILURE": 2,
	}
)

func (x Failure_Type) Enum() *Failure_Type {
	p := new(Failure_Type)
	*p = x
	return p
}

func (x Failure_Type) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (Failure_Type) Descriptor() protoreflect.EnumDescriptor {
	return file_nodeb_info_proto_enumTypes[2].Descriptor()
}

func (Failure_Type) Type() protoreflect.EnumType {
	return &file_nodeb_info_proto_enumTypes[2]
}

func (x Failure_Type) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use Failure_Type.Descriptor instead.
func (Failure_Type) EnumDescriptor() ([]byte, []int) {
	return file_nodeb_info_proto_rawDescGZIP(), []int{2, 0}
}

type NodebInfo struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	RanName               string                `protobuf:"bytes,1,opt,name=ran_name,json=ranName,proto3" json:"ran_name,omitempty"`
	Ip                    string                `protobuf:"bytes,2,opt,name=ip,proto3" json:"ip,omitempty"`
	Port                  uint32                `protobuf:"varint,3,opt,name=port,proto3" json:"port,omitempty"`
	E2ApplicationProtocol E2ApplicationProtocol `protobuf:"varint,4,opt,name=e2_application_protocol,json=e2ApplicationProtocol,proto3,enum=entities.E2ApplicationProtocol" json:"e2_application_protocol,omitempty"`
	ConnectionStatus      ConnectionStatus      `protobuf:"varint,5,opt,name=connection_status,json=connectionStatus,proto3,enum=entities.ConnectionStatus" json:"connection_status,omitempty"`
	GlobalNbId            *GlobalNbId           `protobuf:"bytes,6,opt,name=global_nb_id,json=globalNbId,proto3" json:"global_nb_id,omitempty"`
	NodeType              Node_Type             `protobuf:"varint,7,opt,name=node_type,json=nodeType,proto3,enum=entities.Node_Type" json:"node_type,omitempty"`
	// Types that are assignable to Configuration:
	//	*NodebInfo_Enb
	//	*NodebInfo_Gnb
	Configuration                isNodebInfo_Configuration `protobuf_oneof:"configuration"`
	FailureType                  Failure_Type              `protobuf:"varint,10,opt,name=failure_type,json=failureType,proto3,enum=entities.Failure_Type" json:"failure_type,omitempty"`
	SetupFailure                 *SetupFailure             `protobuf:"bytes,11,opt,name=setup_failure,json=setupFailure,proto3" json:"setup_failure,omitempty"`
	AssociatedE2TInstanceAddress string                    `protobuf:"bytes,12,opt,name=associated_e2t_instance_address,json=associatedE2tInstanceAddress,proto3" json:"associated_e2t_instance_address,omitempty"`
	SetupFromNetwork             bool                      `protobuf:"varint,13,opt,name=setup_from_network,json=setupFromNetwork,proto3" json:"setup_from_network,omitempty"`
}

func (x *NodebInfo) Reset() {
	*x = NodebInfo{}
	if protoimpl.UnsafeEnabled {
		mi := &file_nodeb_info_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *NodebInfo) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*NodebInfo) ProtoMessage() {}

func (x *NodebInfo) ProtoReflect() protoreflect.Message {
	mi := &file_nodeb_info_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use NodebInfo.ProtoReflect.Descriptor instead.
func (*NodebInfo) Descriptor() ([]byte, []int) {
	return file_nodeb_info_proto_rawDescGZIP(), []int{0}
}

func (x *NodebInfo) GetRanName() string {
	if x != nil {
		return x.RanName
	}
	return ""
}

func (x *NodebInfo) GetIp() string {
	if x != nil {
		return x.Ip
	}
	return ""
}

func (x *NodebInfo) GetPort() uint32 {
	if x != nil {
		return x.Port
	}
	return 0
}

func (x *NodebInfo) GetE2ApplicationProtocol() E2ApplicationProtocol {
	if x != nil {
		return x.E2ApplicationProtocol
	}
	return E2ApplicationProtocol_UNKNOWN_E2_APPLICATION_PROTOCOL
}

func (x *NodebInfo) GetConnectionStatus() ConnectionStatus {
	if x != nil {
		return x.ConnectionStatus
	}
	return ConnectionStatus_UNKNOWN_CONNECTION_STATUS
}

func (x *NodebInfo) GetGlobalNbId() *GlobalNbId {
	if x != nil {
		return x.GlobalNbId
	}
	return nil
}

func (x *NodebInfo) GetNodeType() Node_Type {
	if x != nil {
		return x.NodeType
	}
	return Node_UNKNOWN
}

func (m *NodebInfo) GetConfiguration() isNodebInfo_Configuration {
	if m != nil {
		return m.Configuration
	}
	return nil
}

func (x *NodebInfo) GetEnb() *Enb {
	if x, ok := x.GetConfiguration().(*NodebInfo_Enb); ok {
		return x.Enb
	}
	return nil
}

func (x *NodebInfo) GetGnb() *Gnb {
	if x, ok := x.GetConfiguration().(*NodebInfo_Gnb); ok {
		return x.Gnb
	}
	return nil
}

func (x *NodebInfo) GetFailureType() Failure_Type {
	if x != nil {
		return x.FailureType
	}
	return Failure_UNKNOWN_TYPE
}

func (x *NodebInfo) GetSetupFailure() *SetupFailure {
	if x != nil {
		return x.SetupFailure
	}
	return nil
}

func (x *NodebInfo) GetAssociatedE2TInstanceAddress() string {
	if x != nil {
		return x.AssociatedE2TInstanceAddress
	}
	return ""
}

func (x *NodebInfo) GetSetupFromNetwork() bool {
	if x != nil {
		return x.SetupFromNetwork
	}
	return false
}

type isNodebInfo_Configuration interface {
	isNodebInfo_Configuration()
}

type NodebInfo_Enb struct {
	Enb *Enb `protobuf:"bytes,8,opt,name=enb,proto3,oneof"`
}

type NodebInfo_Gnb struct {
	Gnb *Gnb `protobuf:"bytes,9,opt,name=gnb,proto3,oneof"`
}

func (*NodebInfo_Enb) isNodebInfo_Configuration() {}

func (*NodebInfo_Gnb) isNodebInfo_Configuration() {}

type Node struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *Node) Reset() {
	*x = Node{}
	if protoimpl.UnsafeEnabled {
		mi := &file_nodeb_info_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Node) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Node) ProtoMessage() {}

func (x *Node) ProtoReflect() protoreflect.Message {
	mi := &file_nodeb_info_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Node.ProtoReflect.Descriptor instead.
func (*Node) Descriptor() ([]byte, []int) {
	return file_nodeb_info_proto_rawDescGZIP(), []int{1}
}

type Failure struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *Failure) Reset() {
	*x = Failure{}
	if protoimpl.UnsafeEnabled {
		mi := &file_nodeb_info_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Failure) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Failure) ProtoMessage() {}

func (x *Failure) ProtoReflect() protoreflect.Message {
	mi := &file_nodeb_info_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Failure.ProtoReflect.Descriptor instead.
func (*Failure) Descriptor() ([]byte, []int) {
	return file_nodeb_info_proto_rawDescGZIP(), []int{2}
}

var File_nodeb_info_proto protoreflect.FileDescriptor

var file_nodeb_info_proto_rawDesc = []byte{
	0x0a, 0x10, 0x6e, 0x6f, 0x64, 0x65, 0x62, 0x5f, 0x69, 0x6e, 0x66, 0x6f, 0x2e, 0x70, 0x72, 0x6f,
	0x74, 0x6f, 0x12, 0x08, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x69, 0x65, 0x73, 0x1a, 0x09, 0x67, 0x6e,
	0x62, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x1a, 0x09, 0x65, 0x6e, 0x62, 0x2e, 0x70, 0x72, 0x6f,
	0x74, 0x6f, 0x1a, 0x1f, 0x78, 0x32, 0x5f, 0x73, 0x65, 0x74, 0x75, 0x70, 0x5f, 0x66, 0x61, 0x69,
	0x6c, 0x75, 0x72, 0x65, 0x5f, 0x72, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x2e, 0x70, 0x72,
	0x6f, 0x74, 0x6f, 0x1a, 0x11, 0x6e, 0x62, 0x5f, 0x69, 0x64, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x79,
	0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x22, 0x9a, 0x05, 0x0a, 0x09, 0x4e, 0x6f, 0x64, 0x65, 0x62,
	0x49, 0x6e, 0x66, 0x6f, 0x12, 0x19, 0x0a, 0x08, 0x72, 0x61, 0x6e, 0x5f, 0x6e, 0x61, 0x6d, 0x65,
	0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x07, 0x72, 0x61, 0x6e, 0x4e, 0x61, 0x6d, 0x65, 0x12,
	0x0e, 0x0a, 0x02, 0x69, 0x70, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x02, 0x69, 0x70, 0x12,
	0x12, 0x0a, 0x04, 0x70, 0x6f, 0x72, 0x74, 0x18, 0x03, 0x20, 0x01, 0x28, 0x0d, 0x52, 0x04, 0x70,
	0x6f, 0x72, 0x74, 0x12, 0x57, 0x0a, 0x17, 0x65, 0x32, 0x5f, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63,
	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x63, 0x6f, 0x6c, 0x18, 0x04,
	0x20, 0x01, 0x28, 0x0e, 0x32, 0x1f, 0x2e, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x69, 0x65, 0x73, 0x2e,
	0x45, 0x32, 0x41, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x50, 0x72, 0x6f,
	0x74, 0x6f, 0x63, 0x6f, 0x6c, 0x52, 0x15, 0x65, 0x32, 0x41, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61,
	0x74, 0x69, 0x6f, 0x6e, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x63, 0x6f, 0x6c, 0x12, 0x47, 0x0a, 0x11,
	0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x73, 0x74, 0x61, 0x74, 0x75,
	0x73, 0x18, 0x05, 0x20, 0x01, 0x28, 0x0e, 0x32, 0x1a, 0x2e, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x69,
	0x65, 0x73, 0x2e, 0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x53, 0x74, 0x61,
	0x74, 0x75, 0x73, 0x52, 0x10, 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x53,
	0x74, 0x61, 0x74, 0x75, 0x73, 0x12, 0x36, 0x0a, 0x0c, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f,
	0x6e, 0x62, 0x5f, 0x69, 0x64, 0x18, 0x06, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x14, 0x2e, 0x65, 0x6e,
	0x74, 0x69, 0x74, 0x69, 0x65, 0x73, 0x2e, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x4e, 0x62, 0x49,
	0x64, 0x52, 0x0a, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x4e, 0x62, 0x49, 0x64, 0x12, 0x30, 0x0a,
	0x09, 0x6e, 0x6f, 0x64, 0x65, 0x5f, 0x74, 0x79, 0x70, 0x65, 0x18, 0x07, 0x20, 0x01, 0x28, 0x0e,
	0x32, 0x13, 0x2e, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x69, 0x65, 0x73, 0x2e, 0x4e, 0x6f, 0x64, 0x65,
	0x2e, 0x54, 0x79, 0x70, 0x65, 0x52, 0x08, 0x6e, 0x6f, 0x64, 0x65, 0x54, 0x79, 0x70, 0x65, 0x12,
	0x21, 0x0a, 0x03, 0x65, 0x6e, 0x62, 0x18, 0x08, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x0d, 0x2e, 0x65,
	0x6e, 0x74, 0x69, 0x74, 0x69, 0x65, 0x73, 0x2e, 0x45, 0x6e, 0x62, 0x48, 0x00, 0x52, 0x03, 0x65,
	0x6e, 0x62, 0x12, 0x21, 0x0a, 0x03, 0x67, 0x6e, 0x62, 0x18, 0x09, 0x20, 0x01, 0x28, 0x0b, 0x32,
	0x0d, 0x2e, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x69, 0x65, 0x73, 0x2e, 0x47, 0x6e, 0x62, 0x48, 0x00,
	0x52, 0x03, 0x67, 0x6e, 0x62, 0x12, 0x39, 0x0a, 0x0c, 0x66, 0x61, 0x69, 0x6c, 0x75, 0x72, 0x65,
	0x5f, 0x74, 0x79, 0x70, 0x65, 0x18, 0x0a, 0x20, 0x01, 0x28, 0x0e, 0x32, 0x16, 0x2e, 0x65, 0x6e,
	0x74, 0x69, 0x74, 0x69, 0x65, 0x73, 0x2e, 0x46, 0x61, 0x69, 0x6c, 0x75, 0x72, 0x65, 0x2e, 0x54,
	0x79, 0x70, 0x65, 0x52, 0x0b, 0x66, 0x61, 0x69, 0x6c, 0x75, 0x72, 0x65, 0x54, 0x79, 0x70, 0x65,
	0x12, 0x3b, 0x0a, 0x0d, 0x73, 0x65, 0x74, 0x75, 0x70, 0x5f, 0x66, 0x61, 0x69, 0x6c, 0x75, 0x72,
	0x65, 0x18, 0x0b, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x16, 0x2e, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x69,
	0x65, 0x73, 0x2e, 0x53, 0x65, 0x74, 0x75, 0x70, 0x46, 0x61, 0x69, 0x6c, 0x75, 0x72, 0x65, 0x52,
	0x0c, 0x73, 0x65, 0x74, 0x75, 0x70, 0x46, 0x61, 0x69, 0x6c, 0x75, 0x72, 0x65, 0x12, 0x45, 0x0a,
	0x1f, 0x61, 0x73, 0x73, 0x6f, 0x63, 0x69, 0x61, 0x74, 0x65, 0x64, 0x5f, 0x65, 0x32, 0x74, 0x5f,
	0x69, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x5f, 0x61, 0x64, 0x64, 0x72, 0x65, 0x73, 0x73,
	0x18, 0x0c, 0x20, 0x01, 0x28, 0x09, 0x52, 0x1c, 0x61, 0x73, 0x73, 0x6f, 0x63, 0x69, 0x61, 0x74,
	0x65, 0x64, 0x45, 0x32, 0x74, 0x49, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x41, 0x64, 0x64,
	0x72, 0x65, 0x73, 0x73, 0x12, 0x2c, 0x0a, 0x12, 0x73, 0x65, 0x74, 0x75, 0x70, 0x5f, 0x66, 0x72,
	0x6f, 0x6d, 0x5f, 0x6e, 0x65, 0x74, 0x77, 0x6f, 0x72, 0x6b, 0x18, 0x0d, 0x20, 0x01, 0x28, 0x08,
	0x52, 0x10, 0x73, 0x65, 0x74, 0x75, 0x70, 0x46, 0x72, 0x6f, 0x6d, 0x4e, 0x65, 0x74, 0x77, 0x6f,
	0x72, 0x6b, 0x42, 0x0f, 0x0a, 0x0d, 0x63, 0x6f, 0x6e, 0x66, 0x69, 0x67, 0x75, 0x72, 0x61, 0x74,
	0x69, 0x6f, 0x6e, 0x22, 0x2d, 0x0a, 0x04, 0x4e, 0x6f, 0x64, 0x65, 0x22, 0x25, 0x0a, 0x04, 0x54,
	0x79, 0x70, 0x65, 0x12, 0x0b, 0x0a, 0x07, 0x55, 0x4e, 0x4b, 0x4e, 0x4f, 0x57, 0x4e, 0x10, 0x00,
	0x12, 0x07, 0x0a, 0x03, 0x45, 0x4e, 0x42, 0x10, 0x01, 0x12, 0x07, 0x0a, 0x03, 0x47, 0x4e, 0x42,
	0x10, 0x02, 0x22, 0x54, 0x0a, 0x07, 0x46, 0x61, 0x69, 0x6c, 0x75, 0x72, 0x65, 0x22, 0x49, 0x0a,
	0x04, 0x54, 0x79, 0x70, 0x65, 0x12, 0x10, 0x0a, 0x0c, 0x55, 0x4e, 0x4b, 0x4e, 0x4f, 0x57, 0x4e,
	0x5f, 0x54, 0x59, 0x50, 0x45, 0x10, 0x00, 0x12, 0x14, 0x0a, 0x10, 0x58, 0x32, 0x5f, 0x53, 0x45,
	0x54, 0x55, 0x50, 0x5f, 0x46, 0x41, 0x49, 0x4c, 0x55, 0x52, 0x45, 0x10, 0x01, 0x12, 0x19, 0x0a,
	0x15, 0x45, 0x4e, 0x44, 0x43, 0x5f, 0x58, 0x32, 0x5f, 0x53, 0x45, 0x54, 0x55, 0x50, 0x5f, 0x46,
	0x41, 0x49, 0x4c, 0x55, 0x52, 0x45, 0x10, 0x02, 0x2a, 0x6d, 0x0a, 0x15, 0x45, 0x32, 0x41, 0x70,
	0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x63, 0x6f,
	0x6c, 0x12, 0x23, 0x0a, 0x1f, 0x55, 0x4e, 0x4b, 0x4e, 0x4f, 0x57, 0x4e, 0x5f, 0x45, 0x32, 0x5f,
	0x41, 0x50, 0x50, 0x4c, 0x49, 0x43, 0x41, 0x54, 0x49, 0x4f, 0x4e, 0x5f, 0x50, 0x52, 0x4f, 0x54,
	0x4f, 0x43, 0x4f, 0x4c, 0x10, 0x00, 0x12, 0x14, 0x0a, 0x10, 0x58, 0x32, 0x5f, 0x53, 0x45, 0x54,
	0x55, 0x50, 0x5f, 0x52, 0x45, 0x51, 0x55, 0x45, 0x53, 0x54, 0x10, 0x01, 0x12, 0x19, 0x0a, 0x15,
	0x45, 0x4e, 0x44, 0x43, 0x5f, 0x58, 0x32, 0x5f, 0x53, 0x45, 0x54, 0x55, 0x50, 0x5f, 0x52, 0x45,
	0x51, 0x55, 0x45, 0x53, 0x54, 0x10, 0x02, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_nodeb_info_proto_rawDescOnce sync.Once
	file_nodeb_info_proto_rawDescData = file_nodeb_info_proto_rawDesc
)

func file_nodeb_info_proto_rawDescGZIP() []byte {
	file_nodeb_info_proto_rawDescOnce.Do(func() {
		file_nodeb_info_proto_rawDescData = protoimpl.X.CompressGZIP(file_nodeb_info_proto_rawDescData)
	})
	return file_nodeb_info_proto_rawDescData
}

var file_nodeb_info_proto_enumTypes = make([]protoimpl.EnumInfo, 3)
var file_nodeb_info_proto_msgTypes = make([]protoimpl.MessageInfo, 3)
var file_nodeb_info_proto_goTypes = []interface{}{
	(E2ApplicationProtocol)(0), // 0: entities.E2ApplicationProtocol
	(Node_Type)(0),             // 1: entities.Node.Type
	(Failure_Type)(0),          // 2: entities.Failure.Type
	(*NodebInfo)(nil),          // 3: entities.NodebInfo
	(*Node)(nil),               // 4: entities.Node
	(*Failure)(nil),            // 5: entities.Failure
	(ConnectionStatus)(0),      // 6: entities.ConnectionStatus
	(*GlobalNbId)(nil),         // 7: entities.GlobalNbId
	(*Enb)(nil),                // 8: entities.Enb
	(*Gnb)(nil),                // 9: entities.Gnb
	(*SetupFailure)(nil),       // 10: entities.SetupFailure
}
var file_nodeb_info_proto_depIdxs = []int32{
	0,  // 0: entities.NodebInfo.e2_application_protocol:type_name -> entities.E2ApplicationProtocol
	6,  // 1: entities.NodebInfo.connection_status:type_name -> entities.ConnectionStatus
	7,  // 2: entities.NodebInfo.global_nb_id:type_name -> entities.GlobalNbId
	1,  // 3: entities.NodebInfo.node_type:type_name -> entities.Node.Type
	8,  // 4: entities.NodebInfo.enb:type_name -> entities.Enb
	9,  // 5: entities.NodebInfo.gnb:type_name -> entities.Gnb
	2,  // 6: entities.NodebInfo.failure_type:type_name -> entities.Failure.Type
	10, // 7: entities.NodebInfo.setup_failure:type_name -> entities.SetupFailure
	8,  // [8:8] is the sub-list for method output_type
	8,  // [8:8] is the sub-list for method input_type
	8,  // [8:8] is the sub-list for extension type_name
	8,  // [8:8] is the sub-list for extension extendee
	0,  // [0:8] is the sub-list for field type_name
}

func init() { file_nodeb_info_proto_init() }
func file_nodeb_info_proto_init() {
	if File_nodeb_info_proto != nil {
		return
	}
	file_gnb_proto_init()
	file_enb_proto_init()
	file_x2_setup_failure_response_proto_init()
	file_nb_identity_proto_init()
	if !protoimpl.UnsafeEnabled {
		file_nodeb_info_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*NodebInfo); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_nodeb_info_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Node); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_nodeb_info_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Failure); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	file_nodeb_info_proto_msgTypes[0].OneofWrappers = []interface{}{
		(*NodebInfo_Enb)(nil),
		(*NodebInfo_Gnb)(nil),
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_nodeb_info_proto_rawDesc,
			NumEnums:      3,
			NumMessages:   3,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_nodeb_info_proto_goTypes,
		DependencyIndexes: file_nodeb_info_proto_depIdxs,
		EnumInfos:         file_nodeb_info_proto_enumTypes,
		MessageInfos:      file_nodeb_info_proto_msgTypes,
	}.Build()
	File_nodeb_info_proto = out.File
	file_nodeb_info_proto_rawDesc = nil
	file_nodeb_info_proto_goTypes = nil
	file_nodeb_info_proto_depIdxs = nil
}
