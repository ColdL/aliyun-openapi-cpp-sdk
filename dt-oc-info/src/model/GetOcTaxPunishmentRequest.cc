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

#include <alibabacloud/dt-oc-info/model/GetOcTaxPunishmentRequest.h>

using AlibabaCloud::Dt_oc_info::Model::GetOcTaxPunishmentRequest;

GetOcTaxPunishmentRequest::GetOcTaxPunishmentRequest()
    : RpcServiceRequest("dt-oc-info", "2022-08-29", "GetOcTaxPunishment") {
  setMethod(HttpRequest::Method::Post);
}

GetOcTaxPunishmentRequest::~GetOcTaxPunishmentRequest() {}

int GetOcTaxPunishmentRequest::getPageNo() const {
  return pageNo_;
}

void GetOcTaxPunishmentRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setBodyParameter(std::string("PageNo"), std::to_string(pageNo));
}

int GetOcTaxPunishmentRequest::getPageSize() const {
  return pageSize_;
}

void GetOcTaxPunishmentRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetOcTaxPunishmentRequest::getSearchKey() const {
  return searchKey_;
}

void GetOcTaxPunishmentRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setBodyParameter(std::string("SearchKey"), searchKey);
}

