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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEPRICERESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEPRICERESULT_H_

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
			class ALIBABACLOUD_DDS_EXPORT DescribePriceResult : public ServiceResult
			{
			public:
				struct Order
				{
					struct Coupon
					{
						std::string couponNo;
						std::string activityCategory;
						std::string description;
						std::vector<std::string> promotionRuleIdList;
						double priceBreakReduceValue;
						double canPromFee;
						std::string promotionOptionCode;
						std::string isSelected;
						std::string optionCode;
						std::vector<std::string> targetArticleItemCodes;
						std::string name;
						double priceBreakThreshold;
						double lackForPriceBreak;
					};
					std::vector<std::string> ruleIds1;
					std::string currency;
					std::string tradeAmount;
					std::vector<Coupon> coupons;
					std::string originalAmount;
					std::string discountAmount;
				};
				struct SubOrder
				{
					std::string instanceId;
					std::vector<std::string> ruleIds;
					std::string tradeAmount;
					std::string originalAmount;
					std::string discountAmount;
				};
				struct Rule
				{
					long ruleDescId;
					std::string title;
					std::string name;
				};


				DescribePriceResult();
				explicit DescribePriceResult(const std::string &payload);
				~DescribePriceResult();
				Order getOrder()const;
				std::vector<SubOrder> getSubOrders()const;
				std::string getTraceId()const;
				std::string getOrderParams()const;
				std::vector<Rule> getRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				Order order_;
				std::vector<SubOrder> subOrders_;
				std::string traceId_;
				std::string orderParams_;
				std::vector<Rule> rules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEPRICERESULT_H_