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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDLIVEPACKAGECONFIGREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDLIVEPACKAGECONFIGREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT AddLivePackageConfigRequest : public RpcServiceRequest {
public:
	AddLivePackageConfigRequest();
	~AddLivePackageConfigRequest();
	int getSegmentNum() const;
	void setSegmentNum(int segmentNum);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	int getPartDuration() const;
	void setPartDuration(int partDuration);
	std::string getStreamName() const;
	void setStreamName(const std::string &streamName);
	bool getIgnoreTranscode() const;
	void setIgnoreTranscode(bool ignoreTranscode);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getSegmentDuration() const;
	void setSegmentDuration(int segmentDuration);

private:
	int segmentNum_;
	std::string protocol_;
	std::string appName_;
	int partDuration_;
	std::string streamName_;
	bool ignoreTranscode_;
	std::string domainName_;
	long ownerId_;
	int segmentDuration_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDLIVEPACKAGECONFIGREQUEST_H_
