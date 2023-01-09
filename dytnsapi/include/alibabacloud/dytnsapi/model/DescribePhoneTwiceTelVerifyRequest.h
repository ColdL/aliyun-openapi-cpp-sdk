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

#ifndef ALIBABACLOUD_DYTNSAPI_MODEL_DESCRIBEPHONETWICETELVERIFYREQUEST_H_
#define ALIBABACLOUD_DYTNSAPI_MODEL_DESCRIBEPHONETWICETELVERIFYREQUEST_H_

#include <alibabacloud/dytnsapi/DytnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dytnsapi {
namespace Model {
class ALIBABACLOUD_DYTNSAPI_EXPORT DescribePhoneTwiceTelVerifyRequest : public RpcServiceRequest {
public:
	DescribePhoneTwiceTelVerifyRequest();
	~DescribePhoneTwiceTelVerifyRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRouteName() const;
	void setRouteName(const std::string &routeName);
	std::string getMask() const;
	void setMask(const std::string &mask);
	std::string getOfferType() const;
	void setOfferType(const std::string &offerType);
	int getResultCount() const;
	void setResultCount(int resultCount);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAuthCode() const;
	void setAuthCode(const std::string &authCode);
	std::string getInputNumber() const;
	void setInputNumber(const std::string &inputNumber);
	std::string getFlowName() const;
	void setFlowName(const std::string &flowName);

private:
	long resourceOwnerId_;
	std::string startTime_;
	std::string accessKeyId_;
	std::string routeName_;
	std::string mask_;
	std::string offerType_;
	int resultCount_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string authCode_;
	std::string inputNumber_;
	std::string flowName_;
};
} // namespace Model
} // namespace Dytnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYTNSAPI_MODEL_DESCRIBEPHONETWICETELVERIFYREQUEST_H_
