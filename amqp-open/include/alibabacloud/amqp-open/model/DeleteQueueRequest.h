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

#ifndef ALIBABACLOUD_AMQP_OPEN_MODEL_DELETEQUEUEREQUEST_H_
#define ALIBABACLOUD_AMQP_OPEN_MODEL_DELETEQUEUEREQUEST_H_

#include <alibabacloud/amqp-open/Amqp_openExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Amqp_open {
namespace Model {
class ALIBABACLOUD_AMQP_OPEN_EXPORT DeleteQueueRequest : public RpcServiceRequest {
public:
	DeleteQueueRequest();
	~DeleteQueueRequest();
	std::string getQueueName() const;
	void setQueueName(const std::string &queueName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getVirtualHost() const;
	void setVirtualHost(const std::string &virtualHost);

private:
	std::string queueName_;
	std::string instanceId_;
	std::string virtualHost_;
};
} // namespace Model
} // namespace Amqp_open
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AMQP_OPEN_MODEL_DELETEQUEUEREQUEST_H_
