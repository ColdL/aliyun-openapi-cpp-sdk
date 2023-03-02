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

#ifndef ALIBABACLOUD_LTO_MODEL_LISTBIZCHAINDATAREQUEST_H_
#define ALIBABACLOUD_LTO_MODEL_LISTBIZCHAINDATAREQUEST_H_

#include <alibabacloud/lto/LtoExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Lto {
namespace Model {
class ALIBABACLOUD_LTO_EXPORT ListBizChainDataRequest : public RpcServiceRequest {
public:
	ListBizChainDataRequest();
	~ListBizChainDataRequest();
	int getNum() const;
	void setNum(int num);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getBizChainId() const;
	void setBizChainId(const std::string &bizChainId);
	int getSize() const;
	void setSize(int size);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getIoTDataDID() const;
	void setIoTDataDID(const std::string &ioTDataDID);
	std::string getMemberId() const;
	void setMemberId(const std::string &memberId);

private:
	int num_;
	long endTime_;
	long startTime_;
	std::string bizChainId_;
	int size_;
	std::string regionId_;
	std::string ioTDataDID_;
	std::string memberId_;
};
} // namespace Model
} // namespace Lto
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LTO_MODEL_LISTBIZCHAINDATAREQUEST_H_
