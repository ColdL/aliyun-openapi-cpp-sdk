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

#ifndef ALIBABACLOUD_OPENSEARCH_MODEL_REMOVEINTERVENTIONDICTIONARYRESULT_H_
#define ALIBABACLOUD_OPENSEARCH_MODEL_REMOVEINTERVENTIONDICTIONARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/opensearch/OpenSearchExport.h>

namespace AlibabaCloud
{
	namespace OpenSearch
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENSEARCH_EXPORT RemoveInterventionDictionaryResult : public ServiceResult
			{
			public:
				struct Result
				{
					std::string type;
					std::string updated;
					std::string analyzer;
					std::string created;
					std::string name;
				};


				RemoveInterventionDictionaryResult();
				explicit RemoveInterventionDictionaryResult(const std::string &payload);
				~RemoveInterventionDictionaryResult();
				std::string getRequestId()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENSEARCH_MODEL_REMOVEINTERVENTIONDICTIONARYRESULT_H_