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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeSlowLogRecordsResult : public ServiceResult
			{
			public:
				struct LogRecords
				{
					std::string tableName;
					std::string queryTimes;
					std::string executionStartTime;
					long returnRowCounts;
					std::string dBName;
					long keysExamined;
					std::string hostAddress;
					long docsExamined;
					std::string sQLText;
					std::string accountName;
				};


				DescribeSlowLogRecordsResult();
				explicit DescribeSlowLogRecordsResult(const std::string &payload);
				~DescribeSlowLogRecordsResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::vector<LogRecords> getItems()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<LogRecords> items_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_