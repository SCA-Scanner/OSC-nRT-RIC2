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

// Code generated by protoc-gen-go. DO NOT EDIT.
// source: nodeb_info.proto

package entities

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

type E2ApplicationProtocol int32

const (
	E2ApplicationProtocol_UNKNOWN_E2_APPLICATION_PROTOCOL E2ApplicationProtocol = 0
	E2ApplicationProtocol_X2_SETUP_REQUEST                E2ApplicationProtocol = 1
	E2ApplicationProtocol_ENDC_X2_SETUP_REQUEST           E2ApplicationProtocol = 2
)

var E2ApplicationProtocol_name = map[int32]string{
	0: "UNKNOWN_E2_APPLICATION_PROTOCOL",
	1: "X2_SETUP_REQUEST",
	2: "ENDC_X2_SETUP_REQUEST",
}

var E2ApplicationProtocol_value = map[string]int32{
	"UNKNOWN_E2_APPLICATION_PROTOCOL": 0,
	"X2_SETUP_REQUEST":                1,
	"ENDC_X2_SETUP_REQUEST":           2,
}

func (x E2ApplicationProtocol) String() string {
	return proto.EnumName(E2ApplicationProtocol_name, int32(x))
}

func (E2ApplicationProtocol) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_04b920976079e56c, []int{0}
}

type ConnectionStatus int32

const (
	ConnectionStatus_UNKNOWN_CONNECTION_STATUS ConnectionStatus = 0
	ConnectionStatus_CONNECTED                 ConnectionStatus = 1
	ConnectionStatus_DISCONNECTED              ConnectionStatus = 2
	ConnectionStatus_CONNECTED_SETUP_FAILED    ConnectionStatus = 3
	ConnectionStatus_CONNECTING                ConnectionStatus = 4
	ConnectionStatus_SHUTTING_DOWN             ConnectionStatus = 5
	ConnectionStatus_SHUT_DOWN                 ConnectionStatus = 6
)

var ConnectionStatus_name = map[int32]string{
	0: "UNKNOWN_CONNECTION_STATUS",
	1: "CONNECTED",
	2: "DISCONNECTED",
	3: "CONNECTED_SETUP_FAILED",
	4: "CONNECTING",
	5: "SHUTTING_DOWN",
	6: "SHUT_DOWN",
}

var ConnectionStatus_value = map[string]int32{
	"UNKNOWN_CONNECTION_STATUS": 0,
	"CONNECTED":                 1,
	"DISCONNECTED":              2,
	"CONNECTED_SETUP_FAILED":    3,
	"CONNECTING":                4,
	"SHUTTING_DOWN":             5,
	"SHUT_DOWN":                 6,
}

func (x ConnectionStatus) String() string {
	return proto.EnumName(ConnectionStatus_name, int32(x))
}

func (ConnectionStatus) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_04b920976079e56c, []int{1}
}

type Node_Type int32

const (
	Node_UNKNOWN Node_Type = 0
	Node_ENB     Node_Type = 1
	Node_GNB     Node_Type = 2
)

var Node_Type_name = map[int32]string{
	0: "UNKNOWN",
	1: "ENB",
	2: "GNB",
}

var Node_Type_value = map[string]int32{
	"UNKNOWN": 0,
	"ENB":     1,
	"GNB":     2,
}

func (x Node_Type) String() string {
	return proto.EnumName(Node_Type_name, int32(x))
}

func (Node_Type) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_04b920976079e56c, []int{1, 0}
}

type Failure_Type int32

const (
	Failure_UNKNOWN_TYPE          Failure_Type = 0
	Failure_X2_SETUP_FAILURE      Failure_Type = 1
	Failure_ENDC_X2_SETUP_FAILURE Failure_Type = 2
)

var Failure_Type_name = map[int32]string{
	0: "UNKNOWN_TYPE",
	1: "X2_SETUP_FAILURE",
	2: "ENDC_X2_SETUP_FAILURE",
}

var Failure_Type_value = map[string]int32{
	"UNKNOWN_TYPE":          0,
	"X2_SETUP_FAILURE":      1,
	"ENDC_X2_SETUP_FAILURE": 2,
}

func (x Failure_Type) String() string {
	return proto.EnumName(Failure_Type_name, int32(x))
}

func (Failure_Type) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_04b920976079e56c, []int{2, 0}
}

type NodebInfo struct {
	RanName               string                `protobuf:"bytes,1,opt,name=ran_name,json=ranName,proto3" json:"ran_name,omitempty"`
	Ip                    string                `protobuf:"bytes,2,opt,name=ip,proto3" json:"ip,omitempty"`
	Port                  uint32                `protobuf:"varint,3,opt,name=port,proto3" json:"port,omitempty"`
	E2ApplicationProtocol E2ApplicationProtocol `protobuf:"varint,4,opt,name=e2_application_protocol,json=e2ApplicationProtocol,proto3,enum=entities.E2ApplicationProtocol" json:"e2_application_protocol,omitempty"`
	ConnectionStatus      ConnectionStatus      `protobuf:"varint,5,opt,name=connection_status,json=connectionStatus,proto3,enum=entities.ConnectionStatus" json:"connection_status,omitempty"`
	ConnectionAttempts    uint32                `protobuf:"varint,6,opt,name=connection_attempts,json=connectionAttempts,proto3" json:"connection_attempts,omitempty"`
	GlobalNbId            *GlobalNbId           `protobuf:"bytes,7,opt,name=global_nb_id,json=globalNbId,proto3" json:"global_nb_id,omitempty"`
	NodeType              Node_Type             `protobuf:"varint,8,opt,name=node_type,json=nodeType,proto3,enum=entities.Node_Type" json:"node_type,omitempty"`
	// Types that are valid to be assigned to Configuration:
	//	*NodebInfo_Enb
	//	*NodebInfo_Gnb
	Configuration                isNodebInfo_Configuration `protobuf_oneof:"configuration"`
	FailureType                  Failure_Type              `protobuf:"varint,11,opt,name=failure_type,json=failureType,proto3,enum=entities.Failure_Type" json:"failure_type,omitempty"`
	SetupFailure                 *SetupFailure             `protobuf:"bytes,12,opt,name=setup_failure,json=setupFailure,proto3" json:"setup_failure,omitempty"`
	AssociatedE2TInstanceAddress string                    `protobuf:"bytes,13,opt,name=associated_e2t_instance_address,json=associatedE2tInstanceAddress,proto3" json:"associated_e2t_instance_address,omitempty"`
	XXX_NoUnkeyedLiteral         struct{}                  `json:"-"`
	XXX_unrecognized             []byte                    `json:"-"`
	XXX_sizecache                int32                     `json:"-"`
}

func (m *NodebInfo) Reset()         { *m = NodebInfo{} }
func (m *NodebInfo) String() string { return proto.CompactTextString(m) }
func (*NodebInfo) ProtoMessage()    {}
func (*NodebInfo) Descriptor() ([]byte, []int) {
	return fileDescriptor_04b920976079e56c, []int{0}
}

func (m *NodebInfo) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_NodebInfo.Unmarshal(m, b)
}
func (m *NodebInfo) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_NodebInfo.Marshal(b, m, deterministic)
}
func (m *NodebInfo) XXX_Merge(src proto.Message) {
	xxx_messageInfo_NodebInfo.Merge(m, src)
}
func (m *NodebInfo) XXX_Size() int {
	return xxx_messageInfo_NodebInfo.Size(m)
}
func (m *NodebInfo) XXX_DiscardUnknown() {
	xxx_messageInfo_NodebInfo.DiscardUnknown(m)
}

var xxx_messageInfo_NodebInfo proto.InternalMessageInfo

func (m *NodebInfo) GetRanName() string {
	if m != nil {
		return m.RanName
	}
	return ""
}

func (m *NodebInfo) GetIp() string {
	if m != nil {
		return m.Ip
	}
	return ""
}

func (m *NodebInfo) GetPort() uint32 {
	if m != nil {
		return m.Port
	}
	return 0
}

func (m *NodebInfo) GetE2ApplicationProtocol() E2ApplicationProtocol {
	if m != nil {
		return m.E2ApplicationProtocol
	}
	return E2ApplicationProtocol_UNKNOWN_E2_APPLICATION_PROTOCOL
}

func (m *NodebInfo) GetConnectionStatus() ConnectionStatus {
	if m != nil {
		return m.ConnectionStatus
	}
	return ConnectionStatus_UNKNOWN_CONNECTION_STATUS
}

func (m *NodebInfo) GetConnectionAttempts() uint32 {
	if m != nil {
		return m.ConnectionAttempts
	}
	return 0
}

func (m *NodebInfo) GetGlobalNbId() *GlobalNbId {
	if m != nil {
		return m.GlobalNbId
	}
	return nil
}

func (m *NodebInfo) GetNodeType() Node_Type {
	if m != nil {
		return m.NodeType
	}
	return Node_UNKNOWN
}

type isNodebInfo_Configuration interface {
	isNodebInfo_Configuration()
}

type NodebInfo_Enb struct {
	Enb *Enb `protobuf:"bytes,9,opt,name=enb,proto3,oneof"`
}

type NodebInfo_Gnb struct {
	Gnb *Gnb `protobuf:"bytes,10,opt,name=gnb,proto3,oneof"`
}

func (*NodebInfo_Enb) isNodebInfo_Configuration() {}

func (*NodebInfo_Gnb) isNodebInfo_Configuration() {}

func (m *NodebInfo) GetConfiguration() isNodebInfo_Configuration {
	if m != nil {
		return m.Configuration
	}
	return nil
}

func (m *NodebInfo) GetEnb() *Enb {
	if x, ok := m.GetConfiguration().(*NodebInfo_Enb); ok {
		return x.Enb
	}
	return nil
}

func (m *NodebInfo) GetGnb() *Gnb {
	if x, ok := m.GetConfiguration().(*NodebInfo_Gnb); ok {
		return x.Gnb
	}
	return nil
}

func (m *NodebInfo) GetFailureType() Failure_Type {
	if m != nil {
		return m.FailureType
	}
	return Failure_UNKNOWN_TYPE
}

func (m *NodebInfo) GetSetupFailure() *SetupFailure {
	if m != nil {
		return m.SetupFailure
	}
	return nil
}

func (m *NodebInfo) GetAssociatedE2TInstanceAddress() string {
	if m != nil {
		return m.AssociatedE2TInstanceAddress
	}
	return ""
}

// XXX_OneofWrappers is for the internal use of the proto package.
func (*NodebInfo) XXX_OneofWrappers() []interface{} {
	return []interface{}{
		(*NodebInfo_Enb)(nil),
		(*NodebInfo_Gnb)(nil),
	}
}

type Node struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Node) Reset()         { *m = Node{} }
func (m *Node) String() string { return proto.CompactTextString(m) }
func (*Node) ProtoMessage()    {}
func (*Node) Descriptor() ([]byte, []int) {
	return fileDescriptor_04b920976079e56c, []int{1}
}

func (m *Node) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Node.Unmarshal(m, b)
}
func (m *Node) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Node.Marshal(b, m, deterministic)
}
func (m *Node) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Node.Merge(m, src)
}
func (m *Node) XXX_Size() int {
	return xxx_messageInfo_Node.Size(m)
}
func (m *Node) XXX_DiscardUnknown() {
	xxx_messageInfo_Node.DiscardUnknown(m)
}

var xxx_messageInfo_Node proto.InternalMessageInfo

type Failure struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Failure) Reset()         { *m = Failure{} }
func (m *Failure) String() string { return proto.CompactTextString(m) }
func (*Failure) ProtoMessage()    {}
func (*Failure) Descriptor() ([]byte, []int) {
	return fileDescriptor_04b920976079e56c, []int{2}
}

func (m *Failure) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Failure.Unmarshal(m, b)
}
func (m *Failure) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Failure.Marshal(b, m, deterministic)
}
func (m *Failure) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Failure.Merge(m, src)
}
func (m *Failure) XXX_Size() int {
	return xxx_messageInfo_Failure.Size(m)
}
func (m *Failure) XXX_DiscardUnknown() {
	xxx_messageInfo_Failure.DiscardUnknown(m)
}

var xxx_messageInfo_Failure proto.InternalMessageInfo

func init() {
	proto.RegisterEnum("entities.E2ApplicationProtocol", E2ApplicationProtocol_name, E2ApplicationProtocol_value)
	proto.RegisterEnum("entities.ConnectionStatus", ConnectionStatus_name, ConnectionStatus_value)
	proto.RegisterEnum("entities.Node_Type", Node_Type_name, Node_Type_value)
	proto.RegisterEnum("entities.Failure_Type", Failure_Type_name, Failure_Type_value)
	proto.RegisterType((*NodebInfo)(nil), "entities.NodebInfo")
	proto.RegisterType((*Node)(nil), "entities.Node")
	proto.RegisterType((*Failure)(nil), "entities.Failure")
}

func init() { proto.RegisterFile("nodeb_info.proto", fileDescriptor_04b920976079e56c) }

var fileDescriptor_04b920976079e56c = []byte{
	// 662 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x6c, 0x53, 0xef, 0x8b, 0xda, 0x4a,
	0x14, 0x35, 0xea, 0xae, 0x7a, 0xd5, 0x7d, 0xd9, 0xd9, 0x1f, 0x2f, 0x2b, 0xef, 0xa1, 0xb5, 0x14,
	0x64, 0xa1, 0xb6, 0xa4, 0x50, 0x28, 0xfd, 0xe4, 0xea, 0xac, 0x1b, 0xba, 0x44, 0x9b, 0x44, 0xb6,
	0xfd, 0x34, 0x4c, 0xe2, 0x28, 0x01, 0x9d, 0x84, 0x64, 0x84, 0xee, 0x1f, 0x53, 0xe8, 0x9f, 0x5a,
	0x66, 0x8c, 0xc6, 0xda, 0xfd, 0x76, 0xe7, 0x9c, 0x33, 0xe7, 0xcc, 0xbd, 0xb9, 0x01, 0x9d, 0x47,
	0x73, 0xe6, 0x93, 0x90, 0x2f, 0xa2, 0x7e, 0x9c, 0x44, 0x22, 0x42, 0x55, 0xc6, 0x45, 0x28, 0x42,
	0x96, 0xb6, 0x6a, 0x4b, 0xee, 0x6f, 0xc1, 0x56, 0x8d, 0xed, 0xcb, 0xf6, 0x0f, 0x93, 0xa4, 0x4c,
	0x6c, 0x62, 0xb2, 0xa0, 0xe1, 0x6a, 0x93, 0x30, 0x92, 0xb0, 0x34, 0x8e, 0x78, 0xca, 0x32, 0xc1,
	0x39, 0xf7, 0x49, 0x38, 0x57, 0x2e, 0xcf, 0x5b, 0xa8, 0xfb, 0xf3, 0x04, 0x6a, 0xb6, 0x0c, 0xb2,
	0xf8, 0x22, 0x42, 0x37, 0x50, 0x4d, 0x28, 0x27, 0x9c, 0xae, 0x99, 0xa1, 0x75, 0xb4, 0x5e, 0xcd,
	0xa9, 0x24, 0x94, 0xdb, 0x74, 0xcd, 0xd0, 0x19, 0x14, 0xc3, 0xd8, 0x28, 0x2a, 0xb0, 0x18, 0xc6,
	0x08, 0x41, 0x39, 0x8e, 0x12, 0x61, 0x94, 0x3a, 0x5a, 0xaf, 0xe9, 0xa8, 0x1a, 0x3d, 0xc1, 0xbf,
	0xcc, 0x24, 0x34, 0x8e, 0x57, 0x61, 0x40, 0x45, 0x18, 0x71, 0xa2, 0x42, 0x82, 0x68, 0x65, 0x94,
	0x3b, 0x5a, 0xef, 0xcc, 0x6c, 0xf7, 0x77, 0x2d, 0xf4, 0xb1, 0x39, 0xc8, 0x75, 0xd3, 0x4c, 0xe6,
	0x5c, 0xb1, 0x97, 0x60, 0x34, 0x86, 0xf3, 0x20, 0xe2, 0x9c, 0x05, 0xca, 0x34, 0x15, 0x54, 0x6c,
	0x52, 0xe3, 0x44, 0x59, 0xb6, 0x72, 0xcb, 0xe1, 0x5e, 0xe2, 0x2a, 0x85, 0xa3, 0x07, 0x47, 0x08,
	0x7a, 0x07, 0x17, 0x07, 0x46, 0x54, 0x08, 0xb6, 0x8e, 0x45, 0x6a, 0x9c, 0xaa, 0x26, 0x50, 0x4e,
	0x0d, 0x32, 0x06, 0x7d, 0x84, 0xc6, 0x72, 0x15, 0xf9, 0x74, 0x45, 0xd4, 0xec, 0x8c, 0x4a, 0x47,
	0xeb, 0xd5, 0xcd, 0xcb, 0x3c, 0x74, 0xac, 0x58, 0xdb, 0xb7, 0xe6, 0x0e, 0x2c, 0xf7, 0x35, 0x7a,
	0x0f, 0x35, 0xf9, 0xfd, 0x88, 0x78, 0x8e, 0x99, 0x51, 0x55, 0x2f, 0xbd, 0xc8, 0x2f, 0xc9, 0x89,
	0xf7, 0xbd, 0xe7, 0x98, 0x39, 0x55, 0xa9, 0x92, 0x15, 0x7a, 0x05, 0x25, 0xc6, 0x7d, 0xa3, 0xa6,
	0x02, 0x9a, 0x07, 0x83, 0xe2, 0xfe, 0x43, 0xc1, 0x91, 0x9c, 0x94, 0x2c, 0xb9, 0x6f, 0xc0, 0xb1,
	0x64, 0xbc, 0x95, 0x2c, 0xb9, 0x8f, 0x3e, 0x41, 0x63, 0xf7, 0xf1, 0x55, 0x74, 0x5d, 0x45, 0x5f,
	0xe7, 0xda, 0xfb, 0x2d, 0xbb, 0x4d, 0xaf, 0x67, 0x5a, 0xf5, 0x80, 0xcf, 0xd0, 0xfc, 0x63, 0x7b,
	0x8c, 0x86, 0xca, 0x39, 0xb8, 0xeb, 0x4a, 0x3a, 0x33, 0x70, 0x1a, 0xe9, 0xc1, 0x09, 0x61, 0x68,
	0xd3, 0x34, 0x8d, 0x82, 0x90, 0x0a, 0x36, 0x27, 0xcc, 0x14, 0x24, 0xe4, 0xa9, 0xa0, 0x3c, 0x60,
	0x84, 0xce, 0xe7, 0x09, 0x4b, 0x53, 0xa3, 0xa9, 0x76, 0xe7, 0xbf, 0x5c, 0x86, 0x4d, 0x61, 0x65,
	0xa2, 0xc1, 0x56, 0x73, 0xf7, 0x0f, 0x34, 0x83, 0x88, 0x2f, 0xc2, 0xe5, 0x26, 0x51, 0x1b, 0xd0,
	0x7d, 0x0b, 0x65, 0x39, 0xac, 0xee, 0x1b, 0x28, 0xab, 0x47, 0xd6, 0xa1, 0x32, 0xb3, 0xbf, 0xd8,
	0x93, 0x27, 0x5b, 0x2f, 0xa0, 0x0a, 0x94, 0xb0, 0x7d, 0xa7, 0x6b, 0xb2, 0x18, 0xdb, 0x77, 0x7a,
	0xb1, 0xeb, 0x41, 0x25, 0x7b, 0x51, 0xd7, 0xca, 0x6e, 0xe8, 0xd0, 0xc8, 0x6e, 0x10, 0xef, 0xfb,
	0x14, 0xeb, 0x05, 0x74, 0x09, 0xfa, 0x37, 0x93, 0xb8, 0xd8, 0x9b, 0x4d, 0xc9, 0xfd, 0xc0, 0x7a,
	0x9c, 0x39, 0x58, 0xd7, 0xd0, 0x0d, 0x5c, 0x61, 0x7b, 0x34, 0x24, 0x7f, 0x51, 0xc5, 0xdb, 0x35,
	0x5c, 0xbd, 0xb8, 0xae, 0xe8, 0x35, 0xb4, 0x77, 0xde, 0xd8, 0x24, 0x83, 0xe9, 0xf4, 0xd1, 0x1a,
	0x0e, 0x3c, 0x6b, 0x62, 0x93, 0xa9, 0x33, 0xf1, 0x26, 0xc3, 0xc9, 0xe3, 0x51, 0x9c, 0x83, 0xbf,
	0xce, 0xb0, 0xeb, 0xbd, 0x14, 0xb7, 0xa3, 0x8a, 0xb7, 0xbf, 0x34, 0xd0, 0x8f, 0x77, 0x19, 0xfd,
	0x0f, 0x37, 0xbb, 0xa8, 0xe1, 0xc4, 0xb6, 0xf1, 0x50, 0xc5, 0xb8, 0xde, 0xc0, 0x9b, 0xb9, 0x7a,
	0x01, 0x35, 0xa1, 0x96, 0xc1, 0x78, 0xa4, 0x6b, 0xb2, 0xe9, 0x91, 0xe5, 0xe6, 0x48, 0x11, 0xb5,
	0xe0, 0x7a, 0x7f, 0x3c, 0x68, 0x10, 0x8f, 0xf4, 0x12, 0x3a, 0x03, 0xd8, 0x79, 0xda, 0x63, 0xbd,
	0x8c, 0xce, 0xa1, 0xe9, 0x3e, 0xcc, 0x3c, 0x79, 0x22, 0x23, 0x39, 0xea, 0x13, 0xe9, 0x2f, 0xa1,
	0xed, 0xf1, 0xd4, 0x3f, 0x55, 0x3f, 0xf6, 0x87, 0xdf, 0x01, 0x00, 0x00, 0xff, 0xff, 0xa4, 0x8a,
	0x3b, 0x82, 0xa5, 0x04, 0x00, 0x00,
}
