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

#include <alibabacloud/ddoscoo/model/DescribeHealthCheckListRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeHealthCheckListRequest;

DescribeHealthCheckListRequest::DescribeHealthCheckListRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "DescribeHealthCheckList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeHealthCheckListRequest::~DescribeHealthCheckListRequest()
{}

std::string DescribeHealthCheckListRequest::getListeners()const
{
	return listeners_;
}

void DescribeHealthCheckListRequest::setListeners(const std::string& listeners)
{
	listeners_ = listeners;
	setParameter("Listeners", listeners);
}

std::string DescribeHealthCheckListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeHealthCheckListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

