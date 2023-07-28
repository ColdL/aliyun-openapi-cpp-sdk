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

#ifndef ALIBABACLOUD_DTS_MODEL_CREATESUBSCRIPTIONINSTANCEREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CREATESUBSCRIPTIONINSTANCEREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT CreateSubscriptionInstanceRequest : public RpcServiceRequest {
public:
	CreateSubscriptionInstanceRequest();
	~CreateSubscriptionInstanceRequest();
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	int getUsedTime() const;
	void setUsedTime(int usedTime);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string period_;
	std::string clientToken_;
	std::string ownerId_;
	int usedTime_;
	std::string region_;
	std::string payType_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_CREATESUBSCRIPTIONINSTANCEREQUEST_H_
