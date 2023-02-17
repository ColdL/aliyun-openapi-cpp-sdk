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

#ifndef ALIBABACLOUD_VIAPI_MODEL_QUERYASYNCJOBLISTREQUEST_H_
#define ALIBABACLOUD_VIAPI_MODEL_QUERYASYNCJOBLISTREQUEST_H_

#include <alibabacloud/viapi/ViapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Viapi {
namespace Model {
class ALIBABACLOUD_VIAPI_EXPORT QueryAsyncJobListRequest : public RpcServiceRequest {
public:
	QueryAsyncJobListRequest();
	~QueryAsyncJobListRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getPageNum() const;
	void setPageNum(const std::string &pageNum);
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	std::string getPopApiName() const;
	void setPopApiName(const std::string &popApiName);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getPopProduct() const;
	void setPopProduct(const std::string &popProduct);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string startTime_;
	std::string pageNum_;
	std::string jobId_;
	std::string popApiName_;
	std::string pageSize_;
	std::string popProduct_;
	std::string endTime_;
	std::string status_;
};
} // namespace Model
} // namespace Viapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIAPI_MODEL_QUERYASYNCJOBLISTREQUEST_H_
