/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: rrc_measurement_report.proto */

#ifndef PROTOBUF_C_rrc_5fmeasurement_5freport_2eproto__INCLUDED
#define PROTOBUF_C_rrc_5fmeasurement_5freport_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "google/protobuf/wrappers.pb-c.h"
#include "rrc_common_types.pb-c.h"
#include "common_types.pb-c.h"

typedef struct _Uenibstreamprotobuf__MeasurementReport Uenibstreamprotobuf__MeasurementReport;
typedef struct _Uenibstreamprotobuf__MeasurementReportIEs Uenibstreamprotobuf__MeasurementReportIEs;


/* --- enums --- */


/* --- messages --- */

typedef enum {
  UENIBSTREAMPROTOBUF__MEASUREMENT_REPORT__CRITICAL_EXTENSIONS__NOT_SET = 0,
  UENIBSTREAMPROTOBUF__MEASUREMENT_REPORT__CRITICAL_EXTENSIONS_MEASUREMENT_REPORT = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(UENIBSTREAMPROTOBUF__MEASUREMENT_REPORT__CRITICAL_EXTENSIONS)
} Uenibstreamprotobuf__MeasurementReport__CriticalExtensionsCase;

struct  _Uenibstreamprotobuf__MeasurementReport
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__MeasurementReport__CriticalExtensionsCase critical_extensions_case;
  union {
    Uenibstreamprotobuf__MeasurementReportIEs *measurementreport;
  };
};
#define UENIBSTREAMPROTOBUF__MEASUREMENT_REPORT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__measurement_report__descriptor) \
    , UENIBSTREAMPROTOBUF__MEASUREMENT_REPORT__CRITICAL_EXTENSIONS__NOT_SET, {0} }


struct  _Uenibstreamprotobuf__MeasurementReportIEs
{
  ProtobufCMessage base;
  Uenibstreamprotobuf__MeasResults *measresults;
  Google__Protobuf__StringValue *latenoncriticalextension;
};
#define UENIBSTREAMPROTOBUF__MEASUREMENT_REPORT__IES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&uenibstreamprotobuf__measurement_report__ies__descriptor) \
    , NULL, NULL }


/* Uenibstreamprotobuf__MeasurementReport methods */
void   uenibstreamprotobuf__measurement_report__init
                     (Uenibstreamprotobuf__MeasurementReport         *message);
size_t uenibstreamprotobuf__measurement_report__get_packed_size
                     (const Uenibstreamprotobuf__MeasurementReport   *message);
size_t uenibstreamprotobuf__measurement_report__pack
                     (const Uenibstreamprotobuf__MeasurementReport   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__measurement_report__pack_to_buffer
                     (const Uenibstreamprotobuf__MeasurementReport   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__MeasurementReport *
       uenibstreamprotobuf__measurement_report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__measurement_report__free_unpacked
                     (Uenibstreamprotobuf__MeasurementReport *message,
                      ProtobufCAllocator *allocator);
/* Uenibstreamprotobuf__MeasurementReportIEs methods */
void   uenibstreamprotobuf__measurement_report__ies__init
                     (Uenibstreamprotobuf__MeasurementReportIEs         *message);
size_t uenibstreamprotobuf__measurement_report__ies__get_packed_size
                     (const Uenibstreamprotobuf__MeasurementReportIEs   *message);
size_t uenibstreamprotobuf__measurement_report__ies__pack
                     (const Uenibstreamprotobuf__MeasurementReportIEs   *message,
                      uint8_t             *out);
size_t uenibstreamprotobuf__measurement_report__ies__pack_to_buffer
                     (const Uenibstreamprotobuf__MeasurementReportIEs   *message,
                      ProtobufCBuffer     *buffer);
Uenibstreamprotobuf__MeasurementReportIEs *
       uenibstreamprotobuf__measurement_report__ies__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   uenibstreamprotobuf__measurement_report__ies__free_unpacked
                     (Uenibstreamprotobuf__MeasurementReportIEs *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Uenibstreamprotobuf__MeasurementReport_Closure)
                 (const Uenibstreamprotobuf__MeasurementReport *message,
                  void *closure_data);
typedef void (*Uenibstreamprotobuf__MeasurementReportIEs_Closure)
                 (const Uenibstreamprotobuf__MeasurementReportIEs *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor uenibstreamprotobuf__measurement_report__descriptor;
extern const ProtobufCMessageDescriptor uenibstreamprotobuf__measurement_report__ies__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_rrc_5fmeasurement_5freport_2eproto__INCLUDED */
