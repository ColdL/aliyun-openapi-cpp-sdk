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

#include <alibabacloud/paifeaturestore/model/ListModelFeaturesRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::ListModelFeaturesRequest;

ListModelFeaturesRequest::ListModelFeaturesRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/modelfeatures"};
  setMethod(HttpRequest::Method::Get);
}

ListModelFeaturesRequest::~ListModelFeaturesRequest() {}

std::string ListModelFeaturesRequest::getOwner() const {
  return owner_;
}

void ListModelFeaturesRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setParameter(std::string("Owner"), owner);
}

std::string ListModelFeaturesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListModelFeaturesRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string ListModelFeaturesRequest::getInstanceId() const {
  return instanceId_;
}

void ListModelFeaturesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListModelFeaturesRequest::getPageSize() const {
  return pageSize_;
}

void ListModelFeaturesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListModelFeaturesRequest::getName() const {
  return name_;
}

void ListModelFeaturesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListModelFeaturesRequest::getSortBy() const {
  return sortBy_;
}

void ListModelFeaturesRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListModelFeaturesRequest::getProjectId() const {
  return projectId_;
}

void ListModelFeaturesRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string ListModelFeaturesRequest::getOrder() const {
  return order_;
}

void ListModelFeaturesRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

