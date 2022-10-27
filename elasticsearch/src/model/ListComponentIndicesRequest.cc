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

#include <alibabacloud/elasticsearch/model/ListComponentIndicesRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListComponentIndicesRequest;

ListComponentIndicesRequest::ListComponentIndicesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/component-index"};
  setMethod(HttpRequest::Method::Get);
}

ListComponentIndicesRequest::~ListComponentIndicesRequest() {}

string ListComponentIndicesRequest::getInstanceId() const {
  return instanceId_;
}

void ListComponentIndicesRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

integer ListComponentIndicesRequest::getSize() const {
  return size_;
}

void ListComponentIndicesRequest::setSize(integer size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

string ListComponentIndicesRequest::getName() const {
  return name_;
}

void ListComponentIndicesRequest::setName(string name) {
  name_ = name;
  setParameter(std::string("name"), std::to_string(name));
}

integer ListComponentIndicesRequest::getPage() const {
  return page_;
}

void ListComponentIndicesRequest::setPage(integer page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

