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

#ifndef ALIBABACLOUD_COMPUTENEST_MODEL_LISTSERVICEINSTANCELOGSREQUEST_H_
#define ALIBABACLOUD_COMPUTENEST_MODEL_LISTSERVICEINSTANCELOGSREQUEST_H_

#include <alibabacloud/computenest/ComputeNestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ComputeNest {
namespace Model {
class ALIBABACLOUD_COMPUTENEST_EXPORT ListServiceInstanceLogsRequest : public RpcServiceRequest {
public:
	ListServiceInstanceLogsRequest();
	~ListServiceInstanceLogsRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getServiceInstanceId() const;
	void setServiceInstanceId(const std::string &serviceInstanceId);
	std::string getLogSource() const;
	void setLogSource(const std::string &logSource);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getLogstore() const;
	void setLogstore(const std::string &logstore);

private:
	std::string regionId_;
	std::string nextToken_;
	std::string serviceInstanceId_;
	std::string logSource_;
	int maxResults_;
	std::string logstore_;
};
} // namespace Model
} // namespace ComputeNest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_COMPUTENEST_MODEL_LISTSERVICEINSTANCELOGSREQUEST_H_
