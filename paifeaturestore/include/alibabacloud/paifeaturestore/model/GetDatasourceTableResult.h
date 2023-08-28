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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETDATASOURCETABLERESULT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETDATASOURCETABLERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/paifeaturestore/PaiFeatureStoreExport.h>

namespace AlibabaCloud
{
	namespace PaiFeatureStore
	{
		namespace Model
		{
			class ALIBABACLOUD_PAIFEATURESTORE_EXPORT GetDatasourceTableResult : public ServiceResult
			{
			public:
				struct FieldsItem
				{
					std::string type;
					std::vector<std::string> attributes;
					std::string name;
				};


				GetDatasourceTableResult();
				explicit GetDatasourceTableResult(const std::string &payload);
				~GetDatasourceTableResult();
				std::string getTableName()const;
				std::vector<FieldsItem> getFields()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string tableName_;
				std::vector<FieldsItem> fields_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETDATASOURCETABLERESULT_H_