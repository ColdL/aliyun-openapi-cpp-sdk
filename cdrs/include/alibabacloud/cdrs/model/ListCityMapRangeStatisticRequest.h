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

#ifndef ALIBABACLOUD_CDRS_MODEL_LISTCITYMAPRANGESTATISTICREQUEST_H_
#define ALIBABACLOUD_CDRS_MODEL_LISTCITYMAPRANGESTATISTICREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT ListCityMapRangeStatisticRequest : public RpcServiceRequest
			{

			public:
				ListCityMapRangeStatisticRequest();
				~ListCityMapRangeStatisticRequest();

				std::string getLatitude()const;
				void setLatitude(const std::string& latitude);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				long getPageSize()const;
				void setPageSize(long pageSize);
				int getRadius()const;
				void setRadius(int radius);
				std::string getLongitude()const;
				void setLongitude(const std::string& longitude);

            private:
				std::string latitude_;
				std::string endTime_;
				long pageNumber_;
				long pageSize_;
				int radius_;
				std::string longitude_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_LISTCITYMAPRANGESTATISTICREQUEST_H_