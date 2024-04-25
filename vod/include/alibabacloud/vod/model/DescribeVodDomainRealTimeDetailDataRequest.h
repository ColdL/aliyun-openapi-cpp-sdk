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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINREALTIMEDETAILDATAREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINREALTIMEDETAILDATAREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT DescribeVodDomainRealTimeDetailDataRequest : public RpcServiceRequest {
public:
	DescribeVodDomainRealTimeDetailDataRequest();
	~DescribeVodDomainRealTimeDetailDataRequest();
	std::string getLocationNameEn() const;
	void setLocationNameEn(const std::string &locationNameEn);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getIspNameEn() const;
	void setIspNameEn(const std::string &ispNameEn);
	std::string getMerge() const;
	void setMerge(const std::string &merge);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getMergeLocIsp() const;
	void setMergeLocIsp(const std::string &mergeLocIsp);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getField() const;
	void setField(const std::string &field);

private:
	std::string locationNameEn_;
	std::string startTime_;
	std::string ispNameEn_;
	std::string merge_;
	std::string domainName_;
	std::string endTime_;
	std::string mergeLocIsp_;
	long ownerId_;
	std::string field_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINREALTIMEDETAILDATAREQUEST_H_
