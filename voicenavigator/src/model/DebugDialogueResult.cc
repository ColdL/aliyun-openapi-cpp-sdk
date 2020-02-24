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

#include <alibabacloud/voicenavigator/model/DebugDialogueResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

DebugDialogueResult::DebugDialogueResult() :
	ServiceResult()
{}

DebugDialogueResult::DebugDialogueResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DebugDialogueResult::~DebugDialogueResult()
{}

void DebugDialogueResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TextResponse"].isNull())
		textResponse_ = value["TextResponse"].asString();
	if(!value["Interruptible"].isNull())
		interruptible_ = value["Interruptible"].asString() == "true";
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();
	if(!value["ActionParams"].isNull())
		actionParams_ = value["ActionParams"].asString();

}

bool DebugDialogueResult::getInterruptible()const
{
	return interruptible_;
}

std::string DebugDialogueResult::getAction()const
{
	return action_;
}

std::string DebugDialogueResult::getActionParams()const
{
	return actionParams_;
}

std::string DebugDialogueResult::getTextResponse()const
{
	return textResponse_;
}

