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

#include <alibabacloud/elasticsearch/model/ListAckClustersRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListAckClustersRequest;

ListAckClustersRequest::ListAckClustersRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/ack-clusters"};
  setMethod(HttpRequest::Method::Get);
}

ListAckClustersRequest::~ListAckClustersRequest() {}

integer ListAckClustersRequest::getSize() const {
  return size_;
}

void ListAckClustersRequest::setSize(integer size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

string ListAckClustersRequest::getVpcId() const {
  return vpcId_;
}

void ListAckClustersRequest::setVpcId(string vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("vpcId"), std::to_string(vpcId));
}

integer ListAckClustersRequest::getPage() const {
  return page_;
}

void ListAckClustersRequest::setPage(integer page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

