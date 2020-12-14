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

#ifndef ALIBABACLOUD_CDRS_MODEL_LISTDEVICEPERSONSTATISTICSRESULT_H_
#define ALIBABACLOUD_CDRS_MODEL_LISTDEVICEPERSONSTATISTICSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT ListDevicePersonStatisticsResult : public ServiceResult
			{
			public:
				struct Datas
				{
					std::string number;
					std::string shotTime;
					std::string dataSourceId;
				};


				ListDevicePersonStatisticsResult();
				explicit ListDevicePersonStatisticsResult(const std::string &payload);
				~ListDevicePersonStatisticsResult();
				long getTotalCount()const;
				std::string getMessage()const;
				std::vector<Datas> getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string message_;
				std::vector<Datas> data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_LISTDEVICEPERSONSTATISTICSRESULT_H_