// Code generated by protoc-gen-go. DO NOT EDIT.
// source: sgnb_release_required.proto

package streaming_protobufs

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	wrappers "github.com/golang/protobuf/ptypes/wrappers"
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

type SgNBReleaseRequired struct {
	ProtocolIEs          *SgNBReleaseRequired_IEs `protobuf:"bytes,1,opt,name=protocolIEs,proto3" json:"protocolIEs,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                 `json:"-"`
	XXX_unrecognized     []byte                   `json:"-"`
	XXX_sizecache        int32                    `json:"-"`
}

func (m *SgNBReleaseRequired) Reset()         { *m = SgNBReleaseRequired{} }
func (m *SgNBReleaseRequired) String() string { return proto.CompactTextString(m) }
func (*SgNBReleaseRequired) ProtoMessage()    {}
func (*SgNBReleaseRequired) Descriptor() ([]byte, []int) {
	return fileDescriptor_858ca67d022de897, []int{0}
}

func (m *SgNBReleaseRequired) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SgNBReleaseRequired.Unmarshal(m, b)
}
func (m *SgNBReleaseRequired) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SgNBReleaseRequired.Marshal(b, m, deterministic)
}
func (m *SgNBReleaseRequired) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SgNBReleaseRequired.Merge(m, src)
}
func (m *SgNBReleaseRequired) XXX_Size() int {
	return xxx_messageInfo_SgNBReleaseRequired.Size(m)
}
func (m *SgNBReleaseRequired) XXX_DiscardUnknown() {
	xxx_messageInfo_SgNBReleaseRequired.DiscardUnknown(m)
}

var xxx_messageInfo_SgNBReleaseRequired proto.InternalMessageInfo

func (m *SgNBReleaseRequired) GetProtocolIEs() *SgNBReleaseRequired_IEs {
	if m != nil {
		return m.ProtocolIEs
	}
	return nil
}

type SgNBReleaseRequired_IEs struct {
	Id_MeNB_UE_X2AP_ID                     uint32                               `protobuf:"varint,1,opt,name=id_MeNB_UE_X2AP_ID,json=idMeNBUEX2APID,proto3" json:"id_MeNB_UE_X2AP_ID,omitempty"`
	Id_SgNB_UE_X2AP_ID                     uint32                               `protobuf:"varint,2,opt,name=id_SgNB_UE_X2AP_ID,json=idSgNBUEX2APID,proto3" json:"id_SgNB_UE_X2AP_ID,omitempty"`
	Id_Cause                               *Cause                               `protobuf:"bytes,3,opt,name=id_Cause,json=idCause,proto3" json:"id_Cause,omitempty"`
	Id_MeNB_UE_X2AP_ID_Extension           *wrappers.UInt32Value                `protobuf:"bytes,4,opt,name=id_MeNB_UE_X2AP_ID_Extension,json=idMeNBUEX2APIDExtension,proto3" json:"id_MeNB_UE_X2AP_ID_Extension,omitempty"`
	Id_E_RABs_ToBeReleased_SgNBRelReqdList *E_RABs_ToBeReleased_SgNBRelReqdList `protobuf:"bytes,5,opt,name=id_E_RABs_ToBeReleased_SgNBRelReqdList,json=idERABsToBeReleasedSgNBRelReqdList,proto3" json:"id_E_RABs_ToBeReleased_SgNBRelReqdList,omitempty"`
	XXX_NoUnkeyedLiteral                   struct{}                             `json:"-"`
	XXX_unrecognized                       []byte                               `json:"-"`
	XXX_sizecache                          int32                                `json:"-"`
}

func (m *SgNBReleaseRequired_IEs) Reset()         { *m = SgNBReleaseRequired_IEs{} }
func (m *SgNBReleaseRequired_IEs) String() string { return proto.CompactTextString(m) }
func (*SgNBReleaseRequired_IEs) ProtoMessage()    {}
func (*SgNBReleaseRequired_IEs) Descriptor() ([]byte, []int) {
	return fileDescriptor_858ca67d022de897, []int{1}
}

func (m *SgNBReleaseRequired_IEs) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SgNBReleaseRequired_IEs.Unmarshal(m, b)
}
func (m *SgNBReleaseRequired_IEs) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SgNBReleaseRequired_IEs.Marshal(b, m, deterministic)
}
func (m *SgNBReleaseRequired_IEs) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SgNBReleaseRequired_IEs.Merge(m, src)
}
func (m *SgNBReleaseRequired_IEs) XXX_Size() int {
	return xxx_messageInfo_SgNBReleaseRequired_IEs.Size(m)
}
func (m *SgNBReleaseRequired_IEs) XXX_DiscardUnknown() {
	xxx_messageInfo_SgNBReleaseRequired_IEs.DiscardUnknown(m)
}

var xxx_messageInfo_SgNBReleaseRequired_IEs proto.InternalMessageInfo

func (m *SgNBReleaseRequired_IEs) GetId_MeNB_UE_X2AP_ID() uint32 {
	if m != nil {
		return m.Id_MeNB_UE_X2AP_ID
	}
	return 0
}

func (m *SgNBReleaseRequired_IEs) GetId_SgNB_UE_X2AP_ID() uint32 {
	if m != nil {
		return m.Id_SgNB_UE_X2AP_ID
	}
	return 0
}

func (m *SgNBReleaseRequired_IEs) GetId_Cause() *Cause {
	if m != nil {
		return m.Id_Cause
	}
	return nil
}

func (m *SgNBReleaseRequired_IEs) GetId_MeNB_UE_X2AP_ID_Extension() *wrappers.UInt32Value {
	if m != nil {
		return m.Id_MeNB_UE_X2AP_ID_Extension
	}
	return nil
}

func (m *SgNBReleaseRequired_IEs) GetId_E_RABs_ToBeReleased_SgNBRelReqdList() *E_RABs_ToBeReleased_SgNBRelReqdList {
	if m != nil {
		return m.Id_E_RABs_ToBeReleased_SgNBRelReqdList
	}
	return nil
}

type E_RABs_ToBeReleased_SgNBRelReqdList struct {
	Id_E_RABs_ToBeReleased_SgNBRelReqd_Item []*E_RABs_ToBeReleased_SgNBRelReqd_Item `protobuf:"bytes,1,rep,name=id_E_RABs_ToBeReleased_SgNBRelReqd_Item,json=idERABsToBeReleasedSgNBRelReqdItem,proto3" json:"id_E_RABs_ToBeReleased_SgNBRelReqd_Item,omitempty"`
	XXX_NoUnkeyedLiteral                    struct{}                                `json:"-"`
	XXX_unrecognized                        []byte                                  `json:"-"`
	XXX_sizecache                           int32                                   `json:"-"`
}

func (m *E_RABs_ToBeReleased_SgNBRelReqdList) Reset()         { *m = E_RABs_ToBeReleased_SgNBRelReqdList{} }
func (m *E_RABs_ToBeReleased_SgNBRelReqdList) String() string { return proto.CompactTextString(m) }
func (*E_RABs_ToBeReleased_SgNBRelReqdList) ProtoMessage()    {}
func (*E_RABs_ToBeReleased_SgNBRelReqdList) Descriptor() ([]byte, []int) {
	return fileDescriptor_858ca67d022de897, []int{2}
}

func (m *E_RABs_ToBeReleased_SgNBRelReqdList) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqdList.Unmarshal(m, b)
}
func (m *E_RABs_ToBeReleased_SgNBRelReqdList) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqdList.Marshal(b, m, deterministic)
}
func (m *E_RABs_ToBeReleased_SgNBRelReqdList) XXX_Merge(src proto.Message) {
	xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqdList.Merge(m, src)
}
func (m *E_RABs_ToBeReleased_SgNBRelReqdList) XXX_Size() int {
	return xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqdList.Size(m)
}
func (m *E_RABs_ToBeReleased_SgNBRelReqdList) XXX_DiscardUnknown() {
	xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqdList.DiscardUnknown(m)
}

var xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqdList proto.InternalMessageInfo

func (m *E_RABs_ToBeReleased_SgNBRelReqdList) GetId_E_RABs_ToBeReleased_SgNBRelReqd_Item() []*E_RABs_ToBeReleased_SgNBRelReqd_Item {
	if m != nil {
		return m.Id_E_RABs_ToBeReleased_SgNBRelReqd_Item
	}
	return nil
}

type E_RABs_ToBeReleased_SgNBRelReqd_Item struct {
	E_RAB_ID             uint32                                        `protobuf:"varint,1,opt,name=e_RAB_ID,json=eRABID,proto3" json:"e_RAB_ID,omitempty"`
	Rlc_ModeTransferred  *RLCMode                                      `protobuf:"bytes,2,opt,name=rlc_Mode_transferred,json=rlcModeTransferred,proto3" json:"rlc_Mode_transferred,omitempty"`
	IE_Extensions        []*E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs `protobuf:"bytes,3,rep,name=iE_Extensions,json=iEExtensions,proto3" json:"iE_Extensions,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                                      `json:"-"`
	XXX_unrecognized     []byte                                        `json:"-"`
	XXX_sizecache        int32                                         `json:"-"`
}

func (m *E_RABs_ToBeReleased_SgNBRelReqd_Item) Reset()         { *m = E_RABs_ToBeReleased_SgNBRelReqd_Item{} }
func (m *E_RABs_ToBeReleased_SgNBRelReqd_Item) String() string { return proto.CompactTextString(m) }
func (*E_RABs_ToBeReleased_SgNBRelReqd_Item) ProtoMessage()    {}
func (*E_RABs_ToBeReleased_SgNBRelReqd_Item) Descriptor() ([]byte, []int) {
	return fileDescriptor_858ca67d022de897, []int{3}
}

func (m *E_RABs_ToBeReleased_SgNBRelReqd_Item) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqd_Item.Unmarshal(m, b)
}
func (m *E_RABs_ToBeReleased_SgNBRelReqd_Item) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqd_Item.Marshal(b, m, deterministic)
}
func (m *E_RABs_ToBeReleased_SgNBRelReqd_Item) XXX_Merge(src proto.Message) {
	xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqd_Item.Merge(m, src)
}
func (m *E_RABs_ToBeReleased_SgNBRelReqd_Item) XXX_Size() int {
	return xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqd_Item.Size(m)
}
func (m *E_RABs_ToBeReleased_SgNBRelReqd_Item) XXX_DiscardUnknown() {
	xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqd_Item.DiscardUnknown(m)
}

var xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqd_Item proto.InternalMessageInfo

func (m *E_RABs_ToBeReleased_SgNBRelReqd_Item) GetE_RAB_ID() uint32 {
	if m != nil {
		return m.E_RAB_ID
	}
	return 0
}

func (m *E_RABs_ToBeReleased_SgNBRelReqd_Item) GetRlc_ModeTransferred() *RLCMode {
	if m != nil {
		return m.Rlc_ModeTransferred
	}
	return nil
}

func (m *E_RABs_ToBeReleased_SgNBRelReqd_Item) GetIE_Extensions() []*E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs {
	if m != nil {
		return m.IE_Extensions
	}
	return nil
}

type E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs) Reset() {
	*m = E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs{}
}
func (m *E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs) String() string {
	return proto.CompactTextString(m)
}
func (*E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs) ProtoMessage() {}
func (*E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs) Descriptor() ([]byte, []int) {
	return fileDescriptor_858ca67d022de897, []int{4}
}

func (m *E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs.Unmarshal(m, b)
}
func (m *E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs.Marshal(b, m, deterministic)
}
func (m *E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs) XXX_Merge(src proto.Message) {
	xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs.Merge(m, src)
}
func (m *E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs) XXX_Size() int {
	return xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs.Size(m)
}
func (m *E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs) XXX_DiscardUnknown() {
	xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs.DiscardUnknown(m)
}

var xxx_messageInfo_E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs proto.InternalMessageInfo

func init() {
	proto.RegisterType((*SgNBReleaseRequired)(nil), "streaming_protobufs.SgNBReleaseRequired")
	proto.RegisterType((*SgNBReleaseRequired_IEs)(nil), "streaming_protobufs.SgNBReleaseRequired_IEs")
	proto.RegisterType((*E_RABs_ToBeReleased_SgNBRelReqdList)(nil), "streaming_protobufs.E_RABs_ToBeReleased_SgNBRelReqdList")
	proto.RegisterType((*E_RABs_ToBeReleased_SgNBRelReqd_Item)(nil), "streaming_protobufs.E_RABs_ToBeReleased_SgNBRelReqd_Item")
	proto.RegisterType((*E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs)(nil), "streaming_protobufs.E_RABs_ToBeReleased_SgNBRelReqd_ItemExtIEs")
}

func init() { proto.RegisterFile("sgnb_release_required.proto", fileDescriptor_858ca67d022de897) }

var fileDescriptor_858ca67d022de897 = []byte{
	// 506 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x9c, 0x93, 0xdf, 0x6a, 0x13, 0x41,
	0x14, 0xc6, 0x59, 0xa3, 0xb5, 0x4c, 0xac, 0xe0, 0x54, 0xc8, 0x12, 0x8b, 0x94, 0x55, 0xb4, 0x94,
	0x66, 0x83, 0x09, 0x82, 0x5e, 0x49, 0xb6, 0xd9, 0x8b, 0x85, 0x36, 0xc8, 0xd8, 0x88, 0xe8, 0xc5,
	0xb0, 0xd9, 0x39, 0x5d, 0x06, 0x36, 0x3b, 0xdb, 0x33, 0x13, 0x8c, 0xef, 0x20, 0x5e, 0xf9, 0x2c,
	0x3e, 0x9a, 0xd7, 0x32, 0x93, 0xbf, 0x6a, 0x4a, 0x43, 0xef, 0x86, 0x73, 0x7e, 0xdf, 0x77, 0xbe,
	0x33, 0x3b, 0x4b, 0x9e, 0xe8, 0xbc, 0x1c, 0x71, 0x84, 0x02, 0x52, 0x0d, 0x1c, 0xe1, 0x6a, 0x22,
	0x11, 0x44, 0x58, 0xa1, 0x32, 0x8a, 0xee, 0x6b, 0x83, 0x90, 0x8e, 0x65, 0x99, 0x73, 0x57, 0x18,
	0x4d, 0x2e, 0x75, 0xf3, 0x69, 0xae, 0x54, 0x5e, 0x40, 0x7b, 0x51, 0x69, 0x7f, 0xc5, 0xb4, 0xaa,
	0x00, 0xf5, 0x4c, 0xd4, 0x6c, 0x4c, 0x3b, 0x69, 0xc5, 0x33, 0x35, 0x1e, 0xab, 0x92, 0x9b, 0x6f,
	0x15, 0x2c, 0x1a, 0x8f, 0x00, 0x51, 0x21, 0xcf, 0xd2, 0x89, 0x86, 0x59, 0x29, 0x00, 0xb2, 0xff,
	0x21, 0x1f, 0x44, 0x6c, 0x36, 0x9e, 0xcd, 0xa7, 0xd3, 0x01, 0xa9, 0xbb, 0x7e, 0xa6, 0x8a, 0x24,
	0xd6, 0xbe, 0x77, 0xe8, 0x1d, 0xd5, 0x3b, 0x27, 0xe1, 0x86, 0x34, 0xe1, 0x06, 0x39, 0x4f, 0x62,
	0xcd, 0xd6, 0x0d, 0x82, 0x9f, 0x35, 0xd2, 0xb8, 0x06, 0xa4, 0xc7, 0x84, 0x4a, 0xc1, 0xcf, 0x61,
	0x10, 0xf1, 0x61, 0xcc, 0x3f, 0x75, 0x7a, 0xef, 0x79, 0xd2, 0x77, 0x23, 0xf7, 0xd8, 0x43, 0x29,
	0x6c, 0x63, 0x18, 0xdb, 0x72, 0xd2, 0x9f, 0xb3, 0xd6, 0x69, 0x9d, 0xbd, 0xb3, 0x60, 0x6d, 0x63,
	0xc9, 0xbe, 0x26, 0xbb, 0x52, 0xf0, 0x53, 0xbb, 0xac, 0x5f, 0x73, 0x0b, 0x34, 0x37, 0x2e, 0xe0,
	0x08, 0x76, 0x5f, 0x0a, 0x77, 0xa0, 0x5f, 0xc8, 0xc1, 0xff, 0x71, 0x78, 0x3c, 0x35, 0x50, 0x6a,
	0xa9, 0x4a, 0xff, 0xae, 0xb3, 0x3a, 0x08, 0x67, 0x1f, 0x21, 0x5c, 0xf8, 0x84, 0xc3, 0xa4, 0x34,
	0xdd, 0xce, 0xc7, 0xb4, 0x98, 0x00, 0x6b, 0xfc, 0x1d, 0x7b, 0x29, 0xa6, 0xdf, 0x3d, 0xf2, 0x42,
	0x0a, 0x1e, 0x73, 0xd6, 0x8b, 0x34, 0xbf, 0x50, 0x11, 0xcc, 0x6f, 0x64, 0xb6, 0x14, 0x83, 0x82,
	0xc1, 0x95, 0x38, 0x93, 0xda, 0xf8, 0xf7, 0xdc, 0x9c, 0x37, 0x1b, 0x23, 0x6f, 0xa1, 0x67, 0x81,
	0x14, 0xb1, 0xa5, 0xd6, 0xa1, 0x7f, 0x98, 0xe0, 0x97, 0x47, 0x9e, 0x6d, 0xe1, 0x45, 0x7f, 0x78,
	0xe4, 0xe5, 0xcd, 0xb1, 0x79, 0x62, 0x60, 0xec, 0x7b, 0x87, 0xb5, 0xa3, 0x7a, 0xe7, 0xed, 0x6d,
	0x72, 0x3b, 0x83, 0x9b, 0x82, 0x5b, 0x26, 0xf8, 0xed, 0x91, 0xe7, 0xdb, 0x98, 0x51, 0x9f, 0xec,
	0x82, 0xe5, 0x56, 0x4f, 0x6a, 0x07, 0x58, 0x2f, 0x4a, 0xfa, 0x74, 0x40, 0x1e, 0x63, 0x91, 0xf1,
	0x73, 0x25, 0x80, 0x1b, 0x4c, 0x4b, 0x7d, 0x09, 0x88, 0x20, 0xdc, 0x63, 0xb2, 0xdf, 0x77, 0x53,
	0x7e, 0x76, 0x76, 0x6a, 0x79, 0x46, 0xb1, 0xc8, 0xec, 0xe1, 0x62, 0xa5, 0xa3, 0x82, 0xec, 0xc9,
	0x78, 0xf5, 0x4e, 0xb4, 0x5f, 0x73, 0x17, 0xf1, 0xee, 0xd6, 0x17, 0x11, 0x4f, 0x8d, 0xfd, 0x8f,
	0x1e, 0xc8, 0x78, 0x65, 0x1a, 0x9c, 0x90, 0xe3, 0xed, 0xb5, 0x51, 0xf7, 0xf3, 0xab, 0x1c, 0x10,
	0xa5, 0x09, 0x55, 0x0b, 0xd3, 0xb2, 0xa5, 0xb3, 0x50, 0x61, 0xde, 0xc6, 0x36, 0xca, 0xac, 0x55,
	0x15, 0xa6, 0xbd, 0xcc, 0xd6, 0x5a, 0x66, 0x1b, 0xed, 0xb8, 0x63, 0xf7, 0x4f, 0x00, 0x00, 0x00,
	0xff, 0xff, 0x69, 0xcb, 0x8c, 0x3a, 0x99, 0x04, 0x00, 0x00,
}
