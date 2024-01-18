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

#include <alibabacloud/r-kvstore/model/DescribePriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribePriceResult::DescribePriceResult() :
	ServiceResult()
{}

DescribePriceResult::DescribePriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePriceResult::~DescribePriceResult()
{}

void DescribePriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["Rule"];
	for (auto valueRulesRule : allRulesNode)
	{
		Rule rulesObject;
		if(!valueRulesRule["RuleDescId"].isNull())
			rulesObject.ruleDescId = std::stol(valueRulesRule["RuleDescId"].asString());
		if(!valueRulesRule["Title"].isNull())
			rulesObject.title = valueRulesRule["Title"].asString();
		if(!valueRulesRule["Name"].isNull())
			rulesObject.name = valueRulesRule["Name"].asString();
		rules_.push_back(rulesObject);
	}
	auto allSubOrdersNode = value["SubOrders"]["SubOrder"];
	for (auto valueSubOrdersSubOrder : allSubOrdersNode)
	{
		SubOrder subOrdersObject;
		if(!valueSubOrdersSubOrder["OriginalAmount"].isNull())
			subOrdersObject.originalAmount = valueSubOrdersSubOrder["OriginalAmount"].asString();
		if(!valueSubOrdersSubOrder["InstanceId"].isNull())
			subOrdersObject.instanceId = valueSubOrdersSubOrder["InstanceId"].asString();
		if(!valueSubOrdersSubOrder["DiscountAmount"].isNull())
			subOrdersObject.discountAmount = valueSubOrdersSubOrder["DiscountAmount"].asString();
		if(!valueSubOrdersSubOrder["TradeAmount"].isNull())
			subOrdersObject.tradeAmount = valueSubOrdersSubOrder["TradeAmount"].asString();
		auto allRuleIds = value["RuleIds"]["RuleId"];
		for (auto value : allRuleIds)
			subOrdersObject.ruleIds.push_back(value.asString());
		subOrders_.push_back(subOrdersObject);
	}
	auto orderNode = value["Order"];
	if(!orderNode["OriginalAmount"].isNull())
		order_.originalAmount = orderNode["OriginalAmount"].asString();
	if(!orderNode["HandlingFeeAmount"].isNull())
		order_.handlingFeeAmount = orderNode["HandlingFeeAmount"].asString();
	if(!orderNode["Currency"].isNull())
		order_.currency = orderNode["Currency"].asString();
	if(!orderNode["DiscountAmount"].isNull())
		order_.discountAmount = orderNode["DiscountAmount"].asString();
	if(!orderNode["TradeAmount"].isNull())
		order_.tradeAmount = orderNode["TradeAmount"].asString();
	if(!orderNode["ShowDiscountInfo"].isNull())
		order_.showDiscountInfo = orderNode["ShowDiscountInfo"].asString() == "true";
	auto allCouponsNode = orderNode["Coupons"]["Coupon"];
	for (auto orderNodeCouponsCoupon : allCouponsNode)
	{
		Order::Coupon couponObject;
		if(!orderNodeCouponsCoupon["IsSelected"].isNull())
			couponObject.isSelected = orderNodeCouponsCoupon["IsSelected"].asString();
		if(!orderNodeCouponsCoupon["CouponNo"].isNull())
			couponObject.couponNo = orderNodeCouponsCoupon["CouponNo"].asString();
		if(!orderNodeCouponsCoupon["Name"].isNull())
			couponObject.name = orderNodeCouponsCoupon["Name"].asString();
		if(!orderNodeCouponsCoupon["Description"].isNull())
			couponObject.description = orderNodeCouponsCoupon["Description"].asString();
		order_.coupons.push_back(couponObject);
	}
		auto allRuleIds1 = orderNode["RuleIds"]["RuleId"];
		for (auto value : allRuleIds1)
			order_.ruleIds1.push_back(value.asString());
	if(!value["OrderParams"].isNull())
		orderParams_ = value["OrderParams"].asString();

}

DescribePriceResult::Order DescribePriceResult::getOrder()const
{
	return order_;
}

std::vector<DescribePriceResult::SubOrder> DescribePriceResult::getSubOrders()const
{
	return subOrders_;
}

std::string DescribePriceResult::getOrderParams()const
{
	return orderParams_;
}

std::vector<DescribePriceResult::Rule> DescribePriceResult::getRules()const
{
	return rules_;
}

