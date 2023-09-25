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

#include <alibabacloud/dataworks-public/model/ListDIAlarmRulesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListDIAlarmRulesRequest;

ListDIAlarmRulesRequest::ListDIAlarmRulesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListDIAlarmRules") {
  setMethod(HttpRequest::Method::Post);
}

ListDIAlarmRulesRequest::~ListDIAlarmRulesRequest() {}

long ListDIAlarmRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDIAlarmRulesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListDIAlarmRulesRequest::getDIJobId() const {
  return dIJobId_;
}

void ListDIAlarmRulesRequest::setDIJobId(long dIJobId) {
  dIJobId_ = dIJobId;
  setBodyParameter(std::string("DIJobId"), std::to_string(dIJobId));
}

long ListDIAlarmRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListDIAlarmRulesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

