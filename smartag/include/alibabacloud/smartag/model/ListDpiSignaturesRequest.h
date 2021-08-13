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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_LISTDPISIGNATURESREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_LISTDPISIGNATURESREQUEST_H_

#include <alibabacloud/smartag/SmartagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Smartag {
namespace Model {
class ALIBABACLOUD_SMARTAG_EXPORT ListDpiSignaturesRequest : public RpcServiceRequest {
public:
	ListDpiSignaturesRequest();
	~ListDpiSignaturesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<std::string> getDpiSignatureNames() const;
	void setDpiSignatureNames(const std::vector<std::string> &dpiSignatureNames);
	std::vector<std::string> getDpiSignatureIds() const;
	void setDpiSignatureIds(const std::vector<std::string> &dpiSignatureIds);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getDpiGroupId() const;
	void setDpiGroupId(const std::string &dpiGroupId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	long resourceOwnerId_;
	std::vector<std::string> dpiSignatureNames_;
	std::vector<std::string> dpiSignatureIds_;
	std::string regionId_;
	std::string nextToken_;
	std::string dpiGroupId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	int maxResults_;
};
} // namespace Model
} // namespace Smartag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTAG_MODEL_LISTDPISIGNATURESREQUEST_H_
