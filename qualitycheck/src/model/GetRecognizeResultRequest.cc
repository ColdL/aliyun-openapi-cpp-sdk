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

#include <alibabacloud/qualitycheck/model/GetRecognizeResultRequest.h>

using AlibabaCloud::Qualitycheck::Model::GetRecognizeResultRequest;

GetRecognizeResultRequest::GetRecognizeResultRequest() :
	RpcServiceRequest("qualitycheck", "2019-01-15", "GetRecognizeResult")
{
	setMethod(HttpRequest::Method::Post);
}

GetRecognizeResultRequest::~GetRecognizeResultRequest()
{}

long GetRecognizeResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetRecognizeResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetRecognizeResultRequest::getJsonStr()const
{
	return jsonStr_;
}

void GetRecognizeResultRequest::setJsonStr(const std::string& jsonStr)
{
	jsonStr_ = jsonStr;
	setParameter("JsonStr", jsonStr);
}

std::string GetRecognizeResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetRecognizeResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

