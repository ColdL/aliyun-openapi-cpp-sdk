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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_CREATEEVENTBUSREQUEST_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_CREATEEVENTBUSREQUEST_H_

#include <alibabacloud/eventbridge/EventbridgeExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eventbridge {
namespace Model {
class ALIBABACLOUD_EVENTBRIDGE_EXPORT CreateEventBusRequest : public RpcServiceRequest {
public:
	CreateEventBusRequest();
	~CreateEventBusRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getEventBusName() const;
	void setEventBusName(const std::string &eventBusName);

private:
	std::string clientToken_;
	std::string description_;
	std::string eventBusName_;
};
} // namespace Model
} // namespace Eventbridge
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_CREATEEVENTBUSREQUEST_H_
