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

#include <alibabacloud/elasticsearch/model/ListDefaultCollectorConfigurationsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListDefaultCollectorConfigurationsRequest;

ListDefaultCollectorConfigurationsRequest::ListDefaultCollectorConfigurationsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/beats/default-configurations"};
  setMethod(HttpRequest::Method::Get);
}

ListDefaultCollectorConfigurationsRequest::~ListDefaultCollectorConfigurationsRequest() {}

string ListDefaultCollectorConfigurationsRequest::getResType() const {
  return resType_;
}

void ListDefaultCollectorConfigurationsRequest::setResType(string resType) {
  resType_ = resType;
  setParameter(std::string("resType"), std::to_string(resType));
}

string ListDefaultCollectorConfigurationsRequest::getResVersion() const {
  return resVersion_;
}

void ListDefaultCollectorConfigurationsRequest::setResVersion(string resVersion) {
  resVersion_ = resVersion;
  setParameter(std::string("resVersion"), std::to_string(resVersion));
}

string ListDefaultCollectorConfigurationsRequest::getSourceType() const {
  return sourceType_;
}

void ListDefaultCollectorConfigurationsRequest::setSourceType(string sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("sourceType"), std::to_string(sourceType));
}

