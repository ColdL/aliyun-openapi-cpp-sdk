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

#ifndef ALIBABACLOUD_LTO_MODEL_LISTMEMBERRESULT_H_
#define ALIBABACLOUD_LTO_MODEL_LISTMEMBERRESULT_H_

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
			class ALIBABACLOUD_LTO_EXPORT ListMemberResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct MemberInfo
					{
						std::string status;
						int authorizedDeviceCount;
						std::string memberId;
						std::string uid;
						std::string contactor;
						std::string adminName;
						std::string telephony;
						long authorizedCount;
						std::string remark;
						std::string name;
					};
					std::vector<MemberInfo> pageData;
					int size;
					int num;
					int total;
				};


				ListMemberResult();
				explicit ListMemberResult(const std::string &payload);
				~ListMemberResult();
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
#endif // !ALIBABACLOUD_LTO_MODEL_LISTMEMBERRESULT_H_