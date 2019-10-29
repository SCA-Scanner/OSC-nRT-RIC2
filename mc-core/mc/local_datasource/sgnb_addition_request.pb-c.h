/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: sgnb_addition_request.proto */

#ifndef PROTOBUF_C_sgnb_5faddition_5frequest_2eproto__INCLUDED
#define PROTOBUF_C_sgnb_5faddition_5frequest_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "google/protobuf/wrappers.pb-c.h"
#include "x2ap_common_types.pb-c.h"
#include "rrc_cg_config_info.pb-c.h"

typedef struct _Uenibstreamprotobuf__SgNBAdditionRequest Uenibstreamprotobuf__SgNBAdditionRequest;
typedef struct _Uenibstreamprotobuf__SgNBAdditionRequestIEs Uenibstreamprotobuf__SgNBAdditionRequestIEs;
typedef struct _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList;
typedef struct _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs;
typedef struct _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem;
typedef struct _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs;
typedef struct _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent;
typedef struct _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs;
typedef struct _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent;
typedef struct _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs;


/* --- enums --- */


/* --- messages --- */

struct  _Uenibstreamprotobuf__SgNBAdditionRequest
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__SgNBAdditionRequestIEs *protocolies;
};
#define UENIBSTREAMPROTOBUF__SG_NBADDITION_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__sg_nbaddition_request__descriptor) \
    , NULL }


struct  _Uenibstreamprotobuf__SgNBAdditionRequestIEs
{
  ProtobufCMessage base;
  uint32_t id_menb_ue_x2ap_id;
  Uenibstreamprotobuf__NRUESecurityCapabilities *id_nruesecuritycapabilities;
  char *id_sgnbsecuritykey;
  Uenibstreamprotobuf__UEAggregateMaximumBitRate *id_sgnbueaggregatemaximumbitrate;
  Google__Protobuf__StringValue *id_selectedplmn;
  Uenibstreamprotobuf__HandoverRestrictionList *id_handoverrestrictionlist;
  Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList *id_e_rabs_tobeadded_sgnbaddreqlist;
  Uenibstreamprotobuf__CGConfigInfo *id_menbtosgnbcontainer;
  Google__Protobuf__UInt32Value *id_sgnb_ue_x2ap_id;
  Uenibstreamprotobuf__ExpectedUEBehaviour *id_expecteduebehaviour;
  Google__Protobuf__UInt32Value *id_menb_ue_x2ap_id_extension;
  Uenibstreamprotobuf__SplitSRBs *id_requestedsplitsrbs;
  Uenibstreamprotobuf__MeNBResourceCoordinationInformation *id_menbresourcecoordinationinformation;
  Uenibstreamprotobuf__SGNBAdditionTriggerInd *id_sgnb_addition_trigger_ind;
  Google__Protobuf__UInt32Value *id_subscriberprofileidforrfp;
  Uenibstreamprotobuf__ECGI *id_menbcell_id;
};
#define UENIBSTREAMPROTOBUF__SG_NBADDITION_REQUEST__IES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__sg_nbaddition_request__ies__descriptor) \
    , 0, NULL, (char *)protobuf_c_empty_string, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }


struct  _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList
{
  ProtobufCMessage base;
  size_t n_items;
  Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs **items;
};
#define UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ_LIST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req_list__descriptor) \
    , 0,NULL }


struct  _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem *id_e_rabs_tobeadded_sgnbaddreq_item;
};
#define UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ__ITEM_IES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ies__descriptor) \
    , NULL }


typedef enum {
  UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ__ITEM__RESOURCE_CONFIGURATION__NOT_SET = 0,
  UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ__ITEM__RESOURCE_CONFIGURATION_SG_NBPDCPPRESENT = 4,
  UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ__ITEM__RESOURCE_CONFIGURATION_SG_NBPDCPNOTPRESENT = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ__ITEM__RESOURCE_CONFIGURATION)
} Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem__ResourceConfigurationCase;

struct  _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem
{
  ProtobufCMessage base;
  uint32_t e_rab_id;
  uint32_t drb_id;
  Uenibstreamprotobuf__ENDCResourceConfiguration *en_dc_resourceconfiguration;
  size_t n_ie_extensions;
  Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs **ie_extensions;
  Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem__ResourceConfigurationCase resource_configuration_case;
  union {
    Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent *sgnbpdcppresent;
    Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent *sgnbpdcpnotpresent;
  };
};
#define UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ__ITEM__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item__descriptor) \
    , 0, 0, NULL, 0,NULL, UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ__ITEM__RESOURCE_CONFIGURATION__NOT_SET, {0} }


struct  _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs
{
  ProtobufCMessage base;
};
#define UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ__ITEM_EXT_IES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ext_ies__descriptor) \
     }


struct  _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__ERABLevelQoSParameters *full_e_rab_level_qos_parameters;
  Uenibstreamprotobuf__GBRQosInformation *max_mcg_admit_e_rab_level_qos_parameters;
  Uenibstreamprotobuf__DLForwarding *dl_forwarding;
  Uenibstreamprotobuf__GTPtunnelEndpoint *menb_dl_gtp_teidatmcg;
  Uenibstreamprotobuf__GTPtunnelEndpoint *s1_ul_gtptunnelendpoint;
  size_t n_ie_extensions;
  Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs **ie_extensions;
};
#define UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ__SG_NBPDCPPRESENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent__descriptor) \
    , NULL, NULL, NULL, NULL, NULL, 0,NULL }


struct  _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__RLCMode *id_rlcmode_transferred;
};
#define UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ__SG_NBPDCPPRESENT_EXT_IES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent_ext_ies__descriptor) \
    , NULL }


struct  _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__ERABLevelQoSParameters *requested_scg_e_rab_level_qos_parameters;
  Uenibstreamprotobuf__GTPtunnelEndpoint *menb_ul_gtp_teidatpdcp;
  Uenibstreamprotobuf__GTPtunnelEndpoint *secondary_menb_ul_gtp_teidatpdcp;
  Uenibstreamprotobuf__RLCMode *rlc_mode;
  Uenibstreamprotobuf__ULConfiguration *ul_configuration;
  size_t n_ie_extensions;
  Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs **ie_extensions;
};
#define UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ__SG_NBPDCPNOTPRESENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent__descriptor) \
    , NULL, NULL, NULL, NULL, NULL, 0,NULL }


struct  _Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__PDCPSnLength *id_ulpdcpsnlength;
  Uenibstreamprotobuf__PDCPSnLength *id_dlpdcpsnlength;
  Uenibstreamprotobuf__DuplicationActivation *id_duplicationactivation;
};
#define UENIBSTREAMPROTOBUF__E__RABS__TO_BE_ADDED__SG_NBADD_REQ__SG_NBPDCPNOTPRESENT_EXT_IES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent_ext_ies__descriptor) \
    , NULL, NULL, NULL }


/* Uenibstreamprotobuf__SgNBAdditionRequest methods */
void   uenibstreamprotobuf__sg_nbaddition_request__init
                     (Uenibstreamprotobuf__SgNBAdditionRequest         *message);
size_t uenibstreamprotobuf__sg_nbaddition_request__get_packed_size
                     (const Uenibstreamprotobuf__SgNBAdditionRequest   *message);
size_t uenibstreamprotobuf__sg_nbaddition_request__pack
                     (const Uenibstreamprotobuf__SgNBAdditionRequest   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__sg_nbaddition_request__pack_to_buffer
                     (const Uenibstreamprotobuf__SgNBAdditionRequest   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__SgNBAdditionRequest *
       uenibstreamprotobuf__sg_nbaddition_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__sg_nbaddition_request__free_unpacked
                     (Uenibstreamprotobuf__SgNBAdditionRequest *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__SgNBAdditionRequestIEs methods */
void   uenibstreamprotobuf__sg_nbaddition_request__ies__init
                     (Uenibstreamprotobuf__SgNBAdditionRequestIEs         *message);
size_t uenibstreamprotobuf__sg_nbaddition_request__ies__get_packed_size
                     (const Uenibstreamprotobuf__SgNBAdditionRequestIEs   *message);
size_t uenibstreamprotobuf__sg_nbaddition_request__ies__pack
                     (const Uenibstreamprotobuf__SgNBAdditionRequestIEs   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__sg_nbaddition_request__ies__pack_to_buffer
                     (const Uenibstreamprotobuf__SgNBAdditionRequestIEs   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__SgNBAdditionRequestIEs *
       uenibstreamprotobuf__sg_nbaddition_request__ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__sg_nbaddition_request__ies__free_unpacked
                     (Uenibstreamprotobuf__SgNBAdditionRequestIEs *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList methods */
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req_list__init
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList         *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req_list__get_packed_size
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList   *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req_list__pack
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req_list__pack_to_buffer
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList *
       uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req_list__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req_list__free_unpacked
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs methods */
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ies__init
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs         *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ies__get_packed_size
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs   *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ies__pack
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ies__pack_to_buffer
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs *
       uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ies__free_unpacked
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem methods */
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item__init
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem         *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item__get_packed_size
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem   *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item__pack
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item__pack_to_buffer
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem *
       uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item__free_unpacked
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs methods */
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ext_ies__init
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs         *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ext_ies__get_packed_size
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs   *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ext_ies__pack
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ext_ies__pack_to_buffer
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs *
       uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ext_ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ext_ies__free_unpacked
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent methods */
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent__init
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent         *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent__get_packed_size
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent   *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent__pack
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent__pack_to_buffer
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent *
       uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent__free_unpacked
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs methods */
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent_ext_ies__init
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs         *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent_ext_ies__get_packed_size
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs   *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent_ext_ies__pack
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent_ext_ies__pack_to_buffer
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs *
       uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent_ext_ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent_ext_ies__free_unpacked
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent methods */
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent__init
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent         *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent__get_packed_size
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent   *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent__pack
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent__pack_to_buffer
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent *
       uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent__free_unpacked
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs methods */
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent_ext_ies__init
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs         *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent_ext_ies__get_packed_size
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs   *message);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent_ext_ies__pack
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent_ext_ies__pack_to_buffer
                     (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs *
       uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent_ext_ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent_ext_ies__free_unpacked
                     (Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Uenibstreamprotobuf__SgNBAdditionRequest_Closure)
                 (const Uenibstreamprotobuf__SgNBAdditionRequest *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__SgNBAdditionRequestIEs_Closure)
                 (const Uenibstreamprotobuf__SgNBAdditionRequestIEs *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList_Closure)
                 (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqList *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs_Closure)
                 (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemIEs *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem_Closure)
                 (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItem *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs_Closure)
                 (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqItemExtIEs *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent_Closure)
                 (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresent *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs_Closure)
                 (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPpresentExtIEs *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent_Closure)
                 (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresent *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs_Closure)
                 (const Uenibstreamprotobuf__ERABsToBeAddedSgNBAddReqSgNBPDCPnotpresentExtIEs *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor uenibstreamprotobuf__sg_nbaddition_request__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__sg_nbaddition_request__ies__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req_list__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ies__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__item_ext_ies__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcppresent_ext_ies__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__e__rabs__to_be_added__sg_nbadd_req__sg_nbpdcpnotpresent_ext_ies__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_sgnb_5faddition_5frequest_2eproto__INCLUDED */
