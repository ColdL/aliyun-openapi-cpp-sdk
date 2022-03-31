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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETTASKINSTANCERELATIONREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETTASKINSTANCERELATIONREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GetTaskInstanceRelationRequest : public RpcServiceRequest {
public:
	GetTaskInstanceRelationRequest();
	~GetTaskInstanceRelationRequest();
	long getDagId() const;
	void setDagId(long dagId);
	long getTid() const;
	void setTid(long tid);
	long getDagInstanceId() const;
	void setDagInstanceId(long dagInstanceId);

private:
	long dagId_;
	long tid_;
	long dagInstanceId_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETTASKINSTANCERELATIONREQUEST_H_
