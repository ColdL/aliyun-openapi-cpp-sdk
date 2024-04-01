/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/slb/model/DescribeLoadBalancerHTTPListenerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeLoadBalancerHTTPListenerAttributeResult::DescribeLoadBalancerHTTPListenerAttributeResult() :
	ServiceResult()
{}

DescribeLoadBalancerHTTPListenerAttributeResult::DescribeLoadBalancerHTTPListenerAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancerHTTPListenerAttributeResult::~DescribeLoadBalancerHTTPListenerAttributeResult()
{}

void DescribeLoadBalancerHTTPListenerAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["VServerGroupId"].isNull())
		vServerGroupId_ = value["VServerGroupId"].asString();
	if(!value["Cookie"].isNull())
		cookie_ = value["Cookie"].asString();
	if(!value["Gzip"].isNull())
		gzip_ = value["Gzip"].asString();
	if(!value["HealthCheckConnectPort"].isNull())
		healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["HealthCheckTimeout"].isNull())
		healthCheckTimeout_ = std::stoi(value["HealthCheckTimeout"].asString());
	if(!value["BackendServerPort"].isNull())
		backendServerPort_ = std::stoi(value["BackendServerPort"].asString());
	if(!value["CookieTimeout"].isNull())
		cookieTimeout_ = std::stoi(value["CookieTimeout"].asString());
	if(!value["URI"].isNull())
		uRI_ = value["URI"].asString();
	if(!value["UnhealthyThreshold"].isNull())
		unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	if(!value["XForwardedFor_SLBID"].isNull())
		xForwardedFor_SLBID_ = value["XForwardedFor_SLBID"].asString();
	if(!value["SecurityStatus"].isNull())
		securityStatus_ = value["SecurityStatus"].asString();
	if(!value["HealthCheckHttpCode"].isNull())
		healthCheckHttpCode_ = value["HealthCheckHttpCode"].asString();
	if(!value["Domain"].isNull())
		domain_ = value["Domain"].asString();
	if(!value["MaxConnection"].isNull())
		maxConnection_ = std::stoi(value["MaxConnection"].asString());
	if(!value["XForwardedFor"].isNull())
		xForwardedFor_ = value["XForwardedFor"].asString();
	if(!value["ListenerPort"].isNull())
		listenerPort_ = std::stoi(value["ListenerPort"].asString());
	if(!value["StickySessionType"].isNull())
		stickySessionType_ = value["StickySessionType"].asString();
	if(!value["Scheduler"].isNull())
		scheduler_ = value["Scheduler"].asString();
	if(!value["Interval"].isNull())
		interval_ = std::stoi(value["Interval"].asString());
	if(!value["HealthyThreshold"].isNull())
		healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	if(!value["XForwardedFor_proto"].isNull())
		xForwardedFor_proto_ = value["XForwardedFor_proto"].asString();
	if(!value["XForwardedFor_SLBIP"].isNull())
		xForwardedFor_SLBIP_ = value["XForwardedFor_SLBIP"].asString();
	if(!value["StickySession"].isNull())
		stickySession_ = value["StickySession"].asString();
	if(!value["HealthCheck"].isNull())
		healthCheck_ = value["HealthCheck"].asString();

}

int DescribeLoadBalancerHTTPListenerAttributeResult::getCookieTimeout()const
{
	return cookieTimeout_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getMaxConnection()const
{
	return maxConnection_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getScheduler()const
{
	return scheduler_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheck()const
{
	return healthCheck_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getBackendServerPort()const
{
	return backendServerPort_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getURI()const
{
	return uRI_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor_SLBID()const
{
	return xForwardedFor_SLBID_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getSecurityStatus()const
{
	return securityStatus_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getGzip()const
{
	return gzip_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getStickySessionType()const
{
	return stickySessionType_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor_SLBIP()const
{
	return xForwardedFor_SLBIP_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getCookie()const
{
	return cookie_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getStickySession()const
{
	return stickySession_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor()const
{
	return xForwardedFor_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getXForwardedFor_proto()const
{
	return xForwardedFor_proto_;
}

std::string DescribeLoadBalancerHTTPListenerAttributeResult::getDomain()const
{
	return domain_;
}

int DescribeLoadBalancerHTTPListenerAttributeResult::getInterval()const
{
	return interval_;
}

