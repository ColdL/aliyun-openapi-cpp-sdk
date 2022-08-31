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

#ifndef ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNREFRESHQUOTAREQUEST_H_
#define ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNREFRESHQUOTAREQUEST_H_

#include <alibabacloud/scdn/ScdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Scdn {
namespace Model {
class ALIBABACLOUD_SCDN_EXPORT DescribeScdnRefreshQuotaRequest : public RpcServiceRequest {
public:
	DescribeScdnRefreshQuotaRequest();
	~DescribeScdnRefreshQuotaRequest();
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);

private:
	long ownerId_;
	std::string securityToken_;
};
} // namespace Model
} // namespace Scdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNREFRESHQUOTAREQUEST_H_
