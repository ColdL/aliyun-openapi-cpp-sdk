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

#include <alibabacloud/elasticsearch/model/DeleteDataStreamRequest.h>

using AlibabaCloud::Elasticsearch::Model::DeleteDataStreamRequest;

DeleteDataStreamRequest::DeleteDataStreamRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/data-streams/[DataStream]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteDataStreamRequest::~DeleteDataStreamRequest() {}

string DeleteDataStreamRequest::getDataStream() const {
  return dataStream_;
}

void DeleteDataStreamRequest::setDataStream(string dataStream) {
  dataStream_ = dataStream;
  setParameter(std::string("DataStream"), std::to_string(dataStream));
}

string DeleteDataStreamRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteDataStreamRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

string DeleteDataStreamRequest::getClientToken() const {
  return clientToken_;
}

void DeleteDataStreamRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), std::to_string(clientToken));
}

