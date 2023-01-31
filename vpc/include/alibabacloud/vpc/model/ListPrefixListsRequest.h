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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTPREFIXLISTSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_LISTPREFIXLISTSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ListPrefixListsRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string key;
		std::string value;
	};
	ListPrefixListsRequest();
	~ListPrefixListsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::vector<std::string> getPrefixListIds() const;
	void setPrefixListIds(const std::vector<std::string> &prefixListIds);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getPrefixListName() const;
	void setPrefixListName(const std::string &prefixListName);
	long getMaxResults() const;
	void setMaxResults(long maxResults);

private:
	long resourceOwnerId_;
	std::string resourceGroupId_;
	std::string nextToken_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::vector<std::string> prefixListIds_;
	long ownerId_;
	std::vector<Tags> tags_;
	std::string prefixListName_;
	long maxResults_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_LISTPREFIXLISTSREQUEST_H_
