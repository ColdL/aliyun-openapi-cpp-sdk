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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_ACCEPTJOINPERMISSIONAUTHORDERRESULT_H_
#define ALIBABACLOUD_LINKWAN_MODEL_ACCEPTJOINPERMISSIONAUTHORDERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT AcceptJoinPermissionAuthOrderResult : public ServiceResult
			{
			public:


				AcceptJoinPermissionAuthOrderResult();
				explicit AcceptJoinPermissionAuthOrderResult(const std::string &payload);
				~AcceptJoinPermissionAuthOrderResult();
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_ACCEPTJOINPERMISSIONAUTHORDERRESULT_H_