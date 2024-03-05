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

#ifndef ALIBABACLOUD_EHPC_MODEL_INITIALIZEEHPCREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_INITIALIZEEHPCREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT InitializeEHPCRequest : public RpcServiceRequest {
public:
	InitializeEHPCRequest();
	~InitializeEHPCRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);

private:
	std::string regionId_;
	std::string serviceName_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_INITIALIZEEHPCREQUEST_H_
