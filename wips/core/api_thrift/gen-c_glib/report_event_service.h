/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef REPORT_EVENT_SERVICE_H
#define REPORT_EVENT_SERVICE_H

#include <thrift/c_glib/processor/thrift_dispatch_processor.h>

#include "api_types.h"

/* ReportEventService service interface */
typedef struct _ReportEventServiceIf ReportEventServiceIf;  /* dummy object */

struct _ReportEventServiceIfInterface
{
  GTypeInterface parent;

  gboolean (*report) (ReportEventServiceIf *iface, const ReportEvent * e, GError **error);
};
typedef struct _ReportEventServiceIfInterface ReportEventServiceIfInterface;

GType report_event_service_if_get_type (void);
#define TYPE_REPORT_EVENT_SERVICE_IF (report_event_service_if_get_type())
#define REPORT_EVENT_SERVICE_IF(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_REPORT_EVENT_SERVICE_IF, ReportEventServiceIf))
#define IS_REPORT_EVENT_SERVICE_IF(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_REPORT_EVENT_SERVICE_IF))
#define REPORT_EVENT_SERVICE_IF_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), TYPE_REPORT_EVENT_SERVICE_IF, ReportEventServiceIfInterface))

gboolean report_event_service_if_report (ReportEventServiceIf *iface, const ReportEvent * e, GError **error);

/* ReportEventService service client */
struct _ReportEventServiceClient
{
  GObject parent;

  ThriftProtocol *input_protocol;
  ThriftProtocol *output_protocol;
};
typedef struct _ReportEventServiceClient ReportEventServiceClient;

struct _ReportEventServiceClientClass
{
  GObjectClass parent;
};
typedef struct _ReportEventServiceClientClass ReportEventServiceClientClass;

GType report_event_service_client_get_type (void);
#define TYPE_REPORT_EVENT_SERVICE_CLIENT (report_event_service_client_get_type())
#define REPORT_EVENT_SERVICE_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_REPORT_EVENT_SERVICE_CLIENT, ReportEventServiceClient))
#define REPORT_EVENT_SERVICE_CLIENT_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), TYPE_REPORT_EVENT_SERVICE_CLIENT, ReportEventServiceClientClass))
#define REPORT_EVENT_SERVICE_IS_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_REPORT_EVENT_SERVICE_CLIENT))
#define REPORT_EVENT_SERVICE_IS_CLIENT_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_REPORT_EVENT_SERVICE_CLIENT))
#define REPORT_EVENT_SERVICE_CLIENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_REPORT_EVENT_SERVICE_CLIENT, ReportEventServiceClientClass))

gboolean report_event_service_client_report (ReportEventServiceIf * iface, const ReportEvent * e, GError ** error);
gboolean report_event_service_client_send_report (ReportEventServiceIf * iface, const ReportEvent * e, GError ** error);
gboolean report_event_service_client_recv_report (ReportEventServiceIf * iface, GError ** error);
void report_event_service_client_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
void report_event_service_client_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);

/* ReportEventService handler (abstract base class) */
struct _ReportEventServiceHandler
{
  GObject parent;
};
typedef struct _ReportEventServiceHandler ReportEventServiceHandler;

struct _ReportEventServiceHandlerClass
{
  GObjectClass parent;

  gboolean (*report) (ReportEventServiceIf *iface, const ReportEvent * e, GError **error);
};
typedef struct _ReportEventServiceHandlerClass ReportEventServiceHandlerClass;

GType report_event_service_handler_get_type (void);
#define TYPE_REPORT_EVENT_SERVICE_HANDLER (report_event_service_handler_get_type())
#define REPORT_EVENT_SERVICE_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_REPORT_EVENT_SERVICE_HANDLER, ReportEventServiceHandler))
#define IS_REPORT_EVENT_SERVICE_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_REPORT_EVENT_SERVICE_HANDLER))
#define REPORT_EVENT_SERVICE_HANDLER_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), TYPE_REPORT_EVENT_SERVICE_HANDLER, ReportEventServiceHandlerClass))
#define IS_REPORT_EVENT_SERVICE_HANDLER_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_REPORT_EVENT_SERVICE_HANDLER))
#define REPORT_EVENT_SERVICE_HANDLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_REPORT_EVENT_SERVICE_HANDLER, ReportEventServiceHandlerClass))

gboolean report_event_service_handler_report (ReportEventServiceIf *iface, const ReportEvent * e, GError **error);

/* ReportEventService processor */
struct _ReportEventServiceProcessor
{
  ThriftDispatchProcessor parent;

  /* protected */
  ReportEventServiceHandler *handler;
  GHashTable *process_map;
};
typedef struct _ReportEventServiceProcessor ReportEventServiceProcessor;

struct _ReportEventServiceProcessorClass
{
  ThriftDispatchProcessorClass parent;

  /* protected */
  gboolean (*dispatch_call) (ThriftDispatchProcessor *processor,
                             ThriftProtocol *in,
                             ThriftProtocol *out,
                             gchar *fname,
                             gint32 seqid,
                             GError **error);
};
typedef struct _ReportEventServiceProcessorClass ReportEventServiceProcessorClass;

GType report_event_service_processor_get_type (void);
#define TYPE_REPORT_EVENT_SERVICE_PROCESSOR (report_event_service_processor_get_type())
#define REPORT_EVENT_SERVICE_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_REPORT_EVENT_SERVICE_PROCESSOR, ReportEventServiceProcessor))
#define IS_REPORT_EVENT_SERVICE_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_REPORT_EVENT_SERVICE_PROCESSOR))
#define REPORT_EVENT_SERVICE_PROCESSOR_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), TYPE_REPORT_EVENT_SERVICE_PROCESSOR, ReportEventServiceProcessorClass))
#define IS_REPORT_EVENT_SERVICE_PROCESSOR_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_REPORT_EVENT_SERVICE_PROCESSOR))
#define REPORT_EVENT_SERVICE_PROCESSOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_REPORT_EVENT_SERVICE_PROCESSOR, ReportEventServiceProcessorClass))

#endif /* REPORT_EVENT_SERVICE_H */
