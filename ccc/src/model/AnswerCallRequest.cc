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

#include <alibabacloud/ccc/model/AnswerCallRequest.h>

using AlibabaCloud::CCC::Model::AnswerCallRequest;

AnswerCallRequest::AnswerCallRequest() :
	RpcServiceRequest("ccc", "2020-07-01", "AnswerCall")
{
	setMethod(HttpRequest::Method::Post);
}

AnswerCallRequest::~AnswerCallRequest()
{}

std::string AnswerCallRequest::getUserId()const
{
	return userId_;
}

void AnswerCallRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string AnswerCallRequest::getDeviceId()const
{
	return deviceId_;
}

void AnswerCallRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

std::string AnswerCallRequest::getJobId()const
{
	return jobId_;
}

void AnswerCallRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string AnswerCallRequest::getInstanceId()const
{
	return instanceId_;
}

void AnswerCallRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

