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

#ifndef ALIBABACLOUD_EHPC_MODEL_UPDATEQUEUECONFIGREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_UPDATEQUEUECONFIGREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT UpdateQueueConfigRequest : public RpcServiceRequest {
public:
	UpdateQueueConfigRequest();
	~UpdateQueueConfigRequest();
	std::string getDeploymentSetId() const;
	void setDeploymentSetId(const std::string &deploymentSetId);
	std::string getQueueName() const;
	void setQueueName(const std::string &queueName);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getNetworkInterfaceTrafficMode() const;
	void setNetworkInterfaceTrafficMode(const std::string &networkInterfaceTrafficMode);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getComputeInstanceType() const;
	void setComputeInstanceType(const std::string &computeInstanceType);

private:
	std::string deploymentSetId_;
	std::string queueName_;
	std::string clusterId_;
	std::string networkInterfaceTrafficMode_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string computeInstanceType_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_UPDATEQUEUECONFIGREQUEST_H_
