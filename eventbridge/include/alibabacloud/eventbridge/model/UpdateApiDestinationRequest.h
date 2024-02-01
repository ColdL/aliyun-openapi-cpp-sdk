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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_UPDATEAPIDESTINATIONREQUEST_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_UPDATEAPIDESTINATIONREQUEST_H_

#include <alibabacloud/eventbridge/EventbridgeExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eventbridge {
namespace Model {
class ALIBABACLOUD_EVENTBRIDGE_EXPORT UpdateApiDestinationRequest : public RpcServiceRequest {
public:
	struct HttpApiParameters {
		std::string endpoint;
		std::string method;
		struct ApiParametersItem {
			std::string in;
			std::string name;
			std::string description;
			std::string defaultValue;
			std::string type;
		};
		ApiParametersItem apiParametersItem;
		std::vector<ApiParametersItem> apiParameters;
	};
	UpdateApiDestinationRequest();
	~UpdateApiDestinationRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getApiDestinationName() const;
	void setApiDestinationName(const std::string &apiDestinationName);
	std::string getConnectionName() const;
	void setConnectionName(const std::string &connectionName);
	HttpApiParameters getHttpApiParameters() const;
	void setHttpApiParameters(const HttpApiParameters &httpApiParameters);
	long getInvocationRateLimitPerSecond() const;
	void setInvocationRateLimitPerSecond(long invocationRateLimitPerSecond);

private:
	std::string clientToken_;
	std::string description_;
	std::string apiDestinationName_;
	std::string connectionName_;
	HttpApiParameters httpApiParameters_;
	long invocationRateLimitPerSecond_;
};
} // namespace Model
} // namespace Eventbridge
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_UPDATEAPIDESTINATIONREQUEST_H_
