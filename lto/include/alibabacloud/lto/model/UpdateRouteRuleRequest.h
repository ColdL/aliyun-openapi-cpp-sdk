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

#ifndef ALIBABACLOUD_LTO_MODEL_UPDATEROUTERULEREQUEST_H_
#define ALIBABACLOUD_LTO_MODEL_UPDATEROUTERULEREQUEST_H_

#include <alibabacloud/lto/LtoExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Lto {
namespace Model {
class ALIBABACLOUD_LTO_EXPORT UpdateRouteRuleRequest : public RpcServiceRequest {
public:
	UpdateRouteRuleRequest();
	~UpdateRouteRuleRequest();
	std::string getContractTemplateId() const;
	void setContractTemplateId(const std::string &contractTemplateId);
	std::string getContractName() const;
	void setContractName(const std::string &contractName);
	std::string getPrivacyRuleId() const;
	void setPrivacyRuleId(const std::string &privacyRuleId);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getBizChainId() const;
	void setBizChainId(const std::string &bizChainId);
	std::string getInvokeType() const;
	void setInvokeType(const std::string &invokeType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRouteRuleId() const;
	void setRouteRuleId(const std::string &routeRuleId);

private:
	std::string contractTemplateId_;
	std::string contractName_;
	std::string privacyRuleId_;
	std::string remark_;
	std::string bizChainId_;
	std::string invokeType_;
	std::string regionId_;
	std::string routeRuleId_;
};
} // namespace Model
} // namespace Lto
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LTO_MODEL_UPDATEROUTERULEREQUEST_H_
