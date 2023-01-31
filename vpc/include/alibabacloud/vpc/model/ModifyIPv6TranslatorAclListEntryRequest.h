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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYIPV6TRANSLATORACLLISTENTRYREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYIPV6TRANSLATORACLLISTENTRYREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyIPv6TranslatorAclListEntryRequest : public RpcServiceRequest {
public:
	ModifyIPv6TranslatorAclListEntryRequest();
	~ModifyIPv6TranslatorAclListEntryRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAclId() const;
	void setAclId(const std::string &aclId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getAclEntryComment() const;
	void setAclEntryComment(const std::string &aclEntryComment);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAclEntryId() const;
	void setAclEntryId(const std::string &aclEntryId);

private:
	long resourceOwnerId_;
	std::string regionId_;
	std::string aclId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string aclEntryComment_;
	long ownerId_;
	std::string aclEntryId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYIPV6TRANSLATORACLLISTENTRYREQUEST_H_
