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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_MOVERESOURCEGROUPREQUEST_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_MOVERESOURCEGROUPREQUEST_H_

#include <alibabacloud/elasticsearch/ElasticsearchExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Elasticsearch {
namespace Model {
class ALIBABACLOUD_ELASTICSEARCH_EXPORT MoveResourceGroupRequest : public RoaServiceRequest {
public:
	MoveResourceGroupRequest();
	~MoveResourceGroupRequest();
	string getInstanceId() const;
	void setInstanceId(string instanceId);
	string getClientToken() const;
	void setClientToken(string clientToken);
	string getBody() const;
	void setBody(string body);

private:
	string instanceId_;
	string clientToken_;
	string body_;
};
} // namespace Model
} // namespace Elasticsearch
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_MOVERESOURCEGROUPREQUEST_H_
