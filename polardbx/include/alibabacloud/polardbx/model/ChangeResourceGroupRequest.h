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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_CHANGERESOURCEGROUPREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_CHANGERESOURCEGROUPREQUEST_H_

#include <alibabacloud/polardbx/PolardbxExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardbx {
namespace Model {
class ALIBABACLOUD_POLARDBX_EXPORT ChangeResourceGroupRequest : public RpcServiceRequest {
public:
	ChangeResourceGroupRequest();
	~ChangeResourceGroupRequest();
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getNewResourceGroupId() const;
	void setNewResourceGroupId(const std::string &newResourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string resourceId_;
	std::string resourceType_;
	std::string newResourceGroupId_;
	std::string regionId_;
};
} // namespace Model
} // namespace Polardbx
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDBX_MODEL_CHANGERESOURCEGROUPREQUEST_H_
