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

#ifndef ALIBABACLOUD_SAS_MODEL_GETINTERCEPTIONRULEDETAILRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_GETINTERCEPTIONRULEDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT GetInterceptionRuleDetailResult : public ServiceResult
			{
			public:
				struct InterceptionRuleDetail
				{
					struct SrcTarget
					{
						std::string targetType;
						std::vector<std::string> tagList;
						std::string ruleType;
						std::string _namespace;
						std::string targetName;
						int targetId;
						std::string appName;
						std::vector<std::string> imageList;
					};
					struct DstTarget
					{
						std::string targetType;
						std::vector<std::string> tagList2;
						std::vector<std::string> ports;
						std::string ruleType;
						std::string _namespace;
						std::vector<std::string> imageList1;
						std::string targetName;
						int targetId;
						std::string appName;
					};
					int ruleSwitch;
					long interceptType;
					SrcTarget srcTarget;
					long ruleId;
					std::string ruleType;
					long orderIndex;
					DstTarget dstTarget;
					std::string ruleName;
				};


				GetInterceptionRuleDetailResult();
				explicit GetInterceptionRuleDetailResult(const std::string &payload);
				~GetInterceptionRuleDetailResult();
				InterceptionRuleDetail getInterceptionRuleDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				InterceptionRuleDetail interceptionRuleDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_GETINTERCEPTIONRULEDETAILRESULT_H_