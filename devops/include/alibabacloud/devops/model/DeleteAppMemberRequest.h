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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_DELETEAPPMEMBERREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_DELETEAPPMEMBERREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT DeleteAppMemberRequest : public RoaServiceRequest {
public:
	DeleteAppMemberRequest();
	~DeleteAppMemberRequest();
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getSubjectType() const;
	void setSubjectType(const std::string &subjectType);
	std::string getSubjectId() const;
	void setSubjectId(const std::string &subjectId);

private:
	std::string organizationId_;
	std::string appName_;
	std::string subjectType_;
	std::string subjectId_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_DELETEAPPMEMBERREQUEST_H_
