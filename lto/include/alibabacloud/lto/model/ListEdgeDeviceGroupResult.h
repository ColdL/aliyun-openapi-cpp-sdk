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

#ifndef ALIBABACLOUD_LTO_MODEL_LISTEDGEDEVICEGROUPRESULT_H_
#define ALIBABACLOUD_LTO_MODEL_LISTEDGEDEVICEGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/lto/LtoExport.h>

namespace AlibabaCloud
{
	namespace Lto
	{
		namespace Model
		{
			class ALIBABACLOUD_LTO_EXPORT ListEdgeDeviceGroupResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct MemberInfo
					{
						std::string status;
						bool currentUser;
						std::string deviceGroupId;
						std::string memberName;
						std::string productKey;
						int authorizedCount;
						std::string remark;
						std::string name;
						long deviceCount;
						std::string edgeName;
					};
					std::vector<MemberInfo> pageData;
					int size;
					int num;
					int total;
				};


				ListEdgeDeviceGroupResult();
				explicit ListEdgeDeviceGroupResult(const std::string &payload);
				~ListEdgeDeviceGroupResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LTO_MODEL_LISTEDGEDEVICEGROUPRESULT_H_