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

#include <alibabacloud/nlb/model/ListSystemSecurityPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

ListSystemSecurityPolicyResult::ListSystemSecurityPolicyResult() :
	ServiceResult()
{}

ListSystemSecurityPolicyResult::ListSystemSecurityPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSystemSecurityPolicyResult::~ListSystemSecurityPolicyResult()
{}

void ListSystemSecurityPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityPoliciesNode = value["SecurityPolicies"]["SecurityPolicie"];
	for (auto valueSecurityPoliciesSecurityPolicie : allSecurityPoliciesNode)
	{
		SecurityPolicie securityPoliciesObject;
		if(!valueSecurityPoliciesSecurityPolicie["SecurityPolicyId"].isNull())
			securityPoliciesObject.securityPolicyId = valueSecurityPoliciesSecurityPolicie["SecurityPolicyId"].asString();
		if(!valueSecurityPoliciesSecurityPolicie["SecurityPolicyName"].isNull())
			securityPoliciesObject.securityPolicyName = valueSecurityPoliciesSecurityPolicie["SecurityPolicyName"].asString();
		if(!valueSecurityPoliciesSecurityPolicie["TlsVersion"].isNull())
			securityPoliciesObject.tlsVersion = valueSecurityPoliciesSecurityPolicie["TlsVersion"].asString();
		if(!valueSecurityPoliciesSecurityPolicie["Ciphers"].isNull())
			securityPoliciesObject.ciphers = valueSecurityPoliciesSecurityPolicie["Ciphers"].asString();
		securityPolicies_.push_back(securityPoliciesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string ListSystemSecurityPolicyResult::getMessage()const
{
	return message_;
}

int ListSystemSecurityPolicyResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListSystemSecurityPolicyResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListSystemSecurityPolicyResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListSystemSecurityPolicyResult::getCode()const
{
	return code_;
}

std::vector<ListSystemSecurityPolicyResult::SecurityPolicie> ListSystemSecurityPolicyResult::getSecurityPolicies()const
{
	return securityPolicies_;
}

bool ListSystemSecurityPolicyResult::getSuccess()const
{
	return success_;
}

