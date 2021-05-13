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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_GETPRODUCTQUOTARESULT_H_
#define ALIBABACLOUD_QUOTAS_MODEL_GETPRODUCTQUOTARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/quotas/QuotasExport.h>

namespace AlibabaCloud
{
	namespace Quotas
	{
		namespace Model
		{
			class ALIBABACLOUD_QUOTAS_EXPORT GetProductQuotaResult : public ServiceResult
			{
			public:
				struct Quota
				{
					struct Period
					{
						int periodValue;
						std::string periodUnit;
					};
					struct QuotaItemsItem
					{
						std::string usage;
						std::string type;
						std::string quota;
						std::string quotaUnit;
					};
					std::string quotaDescription;
					bool consumable;
					std::string unadjustableDetail;
					std::string productCode;
					float totalUsage;
					std::string quotaType;
					Period period;
					std::string dimensions;
					std::string quotaUnit;
					bool adjustable;
					std::string quotaActionCode;
					std::vector<QuotaItemsItem> quotaItems;
					std::string quotaName;
					std::string quotaArn;
					float totalQuota;
					std::string applicableType;
					std::vector<std::string> applicableRange;
				};


				GetProductQuotaResult();
				explicit GetProductQuotaResult(const std::string &payload);
				~GetProductQuotaResult();
				Quota getQuota()const;

			protected:
				void parse(const std::string &payload);
			private:
				Quota quota_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUOTAS_MODEL_GETPRODUCTQUOTARESULT_H_