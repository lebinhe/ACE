/**
 * @author Johnny Willemsen (jwillemsen@remedy.nl)
 *
 * $Id: DataReaderQos.h 95809 2012-06-03 17:56:00Z johnnyw $
 *
 * Wrapper facade for NDDS.
 */

#ifndef DDS4CCM_DATAREADERQOS_H
#define DDS4CCM_DATAREADERQOS_H

#include "DurabilityQosPolicy.h"
#include "DeadlineQosPolicy.h"
#include "LatencyBudgetQosPolicy.h"
#include "LivelinessQosPolicy.h"
#include "ReliabilityQosPolicy.h"
#include "DestinationOrderQosPolicy.h"
#include "HistoryQosPolicy.h"
#include "ResourceLimitsQosPolicy.h"
#include "UserDataQosPolicy.h"
#include "OwnershipQosPolicy.h"
#include "TimeBasedFilterQosPolicy.h"
#include "ReaderDataLifecycleQosPolicy.h"
#include "DataReaderResourceLimitsQosPolicy.h"

#include "dds4ccm/impl/dds4ccm_conf.h"

inline void
operator<<= (::DDS::DataReaderQos &ddsqos, const ::DDS_DataReaderQos & qos)
{
  ddsqos.durability <<= qos.durability;
  ddsqos.deadline <<= qos.deadline;
  ddsqos.latency_budget <<= qos.latency_budget;
  ddsqos.liveliness <<= qos.liveliness;
  ddsqos.reliability <<= qos.reliability;
  ddsqos.destination_order <<= qos.destination_order;
  ddsqos.history <<= qos.history;
  ddsqos.resource_limits <<= qos.resource_limits;
  ddsqos.user_data <<= qos.user_data;
  ddsqos.ownership <<= qos.ownership;
  ddsqos.time_based_filter <<= qos.time_based_filter;
  ddsqos.reader_data_lifecycle <<= qos.reader_data_lifecycle;
  ddsqos.reader_resource_limits <<= qos.reader_resource_limits;
}

inline void
operator<<= (::DDS_DataReaderQos &ddsqos, const ::DDS::DataReaderQos & qos)
{
  ddsqos.durability <<= qos.durability;
  ddsqos.deadline <<= qos.deadline;
  ddsqos.latency_budget <<= qos.latency_budget;
  ddsqos.liveliness <<= qos.liveliness;
  ddsqos.reliability <<= qos.reliability;
  ddsqos.destination_order <<= qos.destination_order;
  ddsqos.history <<= qos.history;
  ddsqos.resource_limits <<= qos.resource_limits;
  ddsqos.user_data <<= qos.user_data;
  ddsqos.ownership <<= qos.ownership;
  ddsqos.time_based_filter <<= qos.time_based_filter;
  ddsqos.reader_data_lifecycle <<= qos.reader_data_lifecycle;
  ddsqos.reader_resource_limits <<= qos.reader_resource_limits;
}

#endif /* DDS4CCM_DATAREADERQOS_H */
