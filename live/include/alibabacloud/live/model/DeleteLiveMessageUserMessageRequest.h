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

#ifndef ALIBABACLOUD_LIVE_MODEL_DELETELIVEMESSAGEUSERMESSAGEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DELETELIVEMESSAGEUSERMESSAGEREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT DeleteLiveMessageUserMessageRequest : public RpcServiceRequest {
public:
	DeleteLiveMessageUserMessageRequest();
	~DeleteLiveMessageUserMessageRequest();
	std::string getMessageId() const;
	void setMessageId(const std::string &messageId);
	std::string getDataCenter() const;
	void setDataCenter(const std::string &dataCenter);
	std::string getReceiverId() const;
	void setReceiverId(const std::string &receiverId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getDeleterId() const;
	void setDeleterId(const std::string &deleterId);
	std::string getDeleterInfo() const;
	void setDeleterInfo(const std::string &deleterInfo);

private:
	std::string messageId_;
	std::string dataCenter_;
	std::string receiverId_;
	std::string appId_;
	std::string deleterId_;
	std::string deleterInfo_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_DELETELIVEMESSAGEUSERMESSAGEREQUEST_H_
