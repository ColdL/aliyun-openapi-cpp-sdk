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

#include <alibabacloud/devops/model/DeletePipelineRequest.h>

using AlibabaCloud::Devops::Model::DeletePipelineRequest;

DeletePipelineRequest::DeletePipelineRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipelines/[pipelineId]"};
  setMethod(HttpRequest::Method::Delete);
}

DeletePipelineRequest::~DeletePipelineRequest() {}

long DeletePipelineRequest::getPipelineId() const {
  return pipelineId_;
}

void DeletePipelineRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), std::to_string(pipelineId));
}

std::string DeletePipelineRequest::getOrganizationId() const {
  return organizationId_;
}

void DeletePipelineRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

