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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEBACKUPSETLISTREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEBACKUPSETLISTREQUEST_H_

#include <alibabacloud/polardbx/PolardbxExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardbx {
namespace Model {
class ALIBABACLOUD_POLARDBX_EXPORT DescribeBackupSetListRequest : public RpcServiceRequest {
public:
	DescribeBackupSetListRequest();
	~DescribeBackupSetListRequest();
	std::string getDBInstanceName() const;
	void setDBInstanceName(const std::string &dBInstanceName);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getDestCrossRegion() const;
	void setDestCrossRegion(const std::string &destCrossRegion);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string dBInstanceName_;
	long endTime_;
	long startTime_;
	std::string destCrossRegion_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
};
} // namespace Model
} // namespace Polardbx
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEBACKUPSETLISTREQUEST_H_
