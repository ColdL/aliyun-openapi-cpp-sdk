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

#ifndef ALIBABACLOUD_MSE_MODEL_CREATEORUPDATESWIMMINGLANEREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_CREATEORUPDATESWIMMINGLANEREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT CreateOrUpdateSwimmingLaneRequest : public RpcServiceRequest {
public:
	struct GatewaySwimmingLaneRouteJson {
		std::string gatewayUniqueId;
		long long;
		std::vector<long> routeIdList;
		struct ConditionsItem {
			std::string name;
			std::string type;
			std::string cond;
			std::string value;
		};
		ConditionsItem conditionsItem;
		std::vector<ConditionsItem> conditions;
		long gatewayId;
	};
	struct EntryRules {
		struct RestItems {
			std::string datum;
			int divisor;
			int rate;
			std::string name;
			std::string type;
			std::string cond;
			int remainder;
			std::string value;
			std::string _operator;
		};
		std::vector<RestItems> restItems;
		std::string path;
		std::string condition;
		bool enable;
		int priority;
	};
	CreateOrUpdateSwimmingLaneRequest();
	~CreateOrUpdateSwimmingLaneRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getGmtModified() const;
	void setGmtModified(const std::string &gmtModified);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getLicenseKey() const;
	void setLicenseKey(const std::string &licenseKey);
	GatewaySwimmingLaneRouteJson getGatewaySwimmingLaneRouteJson() const;
	void setGatewaySwimmingLaneRouteJson(const GatewaySwimmingLaneRouteJson &gatewaySwimmingLaneRouteJson);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEntryRule() const;
	void setEntryRule(const std::string &entryRule);
	bool getEnable() const;
	void setEnable(bool enable);
	long getId() const;
	void setId(long id);
	std::string getTag() const;
	void setTag(const std::string &tag);
	std::vector<EntryRules> getEntryRules() const;
	void setEntryRules(const std::vector<EntryRules> &entryRules);
	long getGroupId() const;
	void setGroupId(long groupId);
	std::string getGmtCreate() const;
	void setGmtCreate(const std::string &gmtCreate);
	bool getEnableRules() const;
	void setEnableRules(bool enableRules);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string mseSessionId_;
	std::string source_;
	std::string gmtModified_;
	std::string userId_;
	std::string licenseKey_;
	GatewaySwimmingLaneRouteJson gatewaySwimmingLaneRouteJson_;
	std::string regionId_;
	std::string entryRule_;
	bool enable_;
	long id_;
	std::string tag_;
	std::vector<EntryRules> entryRules_;
	long groupId_;
	std::string gmtCreate_;
	bool enableRules_;
	std::string name_;
	std::string acceptLanguage_;
	int status_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_CREATEORUPDATESWIMMINGLANEREQUEST_H_
