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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_UPDATEBACKUPPOLICYRESULT_H_
#define ALIBABACLOUD_POLARDBX_MODEL_UPDATEBACKUPPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT UpdateBackupPolicyResult : public ServiceResult
			{
			public:
				struct Account
				{
					std::string backupPeriod;
					int isEnabled;
					bool isCrossRegionLogBackupEnabled;
					int crossRegionDataBackupRetention;
					int backupSetRetention;
					std::string backupPlanBegin;
					int coldDataBackupInterval;
					std::string destCrossRegion;
					int removeLogRetention;
					int crossRegionLogBackupRetention;
					int localLogRetentionNumber;
					int coldDataBackupRetention;
					int forceCleanOnHighSpaceUsage;
					std::string backupWay;
					int localLogRetention;
					std::string backupType;
					bool isCrossRegionDataBackupEnabled;
					int logLocalRetentionSpace;
					std::string dBInstanceName;
				};


				UpdateBackupPolicyResult();
				explicit UpdateBackupPolicyResult(const std::string &payload);
				~UpdateBackupPolicyResult();
				std::string getMessage()const;
				std::vector<Account> getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<Account> data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_UPDATEBACKUPPOLICYRESULT_H_