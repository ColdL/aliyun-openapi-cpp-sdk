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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_CREATECONTROLPOLICYREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_CREATECONTROLPOLICYREQUEST_H_

#include <alibabacloud/resourcemanager/ResourceManagerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceManager {
namespace Model {
class ALIBABACLOUD_RESOURCEMANAGER_EXPORT CreateControlPolicyRequest : public RpcServiceRequest {
public:
	CreateControlPolicyRequest();
	~CreateControlPolicyRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getEffectScope() const;
	void setEffectScope(const std::string &effectScope);
	std::string getPolicyName() const;
	void setPolicyName(const std::string &policyName);
	std::string getPolicyDocument() const;
	void setPolicyDocument(const std::string &policyDocument);

private:
	std::string description_;
	std::string effectScope_;
	std::string policyName_;
	std::string policyDocument_;
};
} // namespace Model
} // namespace ResourceManager
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_CREATECONTROLPOLICYREQUEST_H_
