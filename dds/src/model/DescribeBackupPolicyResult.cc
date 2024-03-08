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

#include <alibabacloud/dds/model/DescribeBackupPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeBackupPolicyResult::DescribeBackupPolicyResult() :
	ServiceResult()
{}

DescribeBackupPolicyResult::DescribeBackupPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupPolicyResult::~DescribeBackupPolicyResult()
{}

void DescribeBackupPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["PreferredBackupPeriod"].isNull())
		preferredBackupPeriod_ = value["PreferredBackupPeriod"].asString();
	if(!value["PreferredBackupTime"].isNull())
		preferredBackupTime_ = value["PreferredBackupTime"].asString();
	if(!value["BackupRetentionPeriod"].isNull())
		backupRetentionPeriod_ = value["BackupRetentionPeriod"].asString();
	if(!value["PreferredNextBackupTime"].isNull())
		preferredNextBackupTime_ = value["PreferredNextBackupTime"].asString();
	if(!value["EnableBackupLog"].isNull())
		enableBackupLog_ = std::stoi(value["EnableBackupLog"].asString());
	if(!value["LogBackupRetentionPeriod"].isNull())
		logBackupRetentionPeriod_ = std::stoi(value["LogBackupRetentionPeriod"].asString());
	if(!value["SnapshotBackupType"].isNull())
		snapshotBackupType_ = value["SnapshotBackupType"].asString();
	if(!value["BackupInterval"].isNull())
		backupInterval_ = std::stoi(value["BackupInterval"].asString());
	if(!value["HighFrequencyBackupRetention"].isNull())
		highFrequencyBackupRetention_ = value["HighFrequencyBackupRetention"].asString();

}

std::string DescribeBackupPolicyResult::getPreferredBackupPeriod()const
{
	return preferredBackupPeriod_;
}

int DescribeBackupPolicyResult::getLogBackupRetentionPeriod()const
{
	return logBackupRetentionPeriod_;
}

std::string DescribeBackupPolicyResult::getHighFrequencyBackupRetention()const
{
	return highFrequencyBackupRetention_;
}

std::string DescribeBackupPolicyResult::getSnapshotBackupType()const
{
	return snapshotBackupType_;
}

std::string DescribeBackupPolicyResult::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

int DescribeBackupPolicyResult::getEnableBackupLog()const
{
	return enableBackupLog_;
}

std::string DescribeBackupPolicyResult::getBackupRetentionPeriod()const
{
	return backupRetentionPeriod_;
}

std::string DescribeBackupPolicyResult::getPreferredNextBackupTime()const
{
	return preferredNextBackupTime_;
}

int DescribeBackupPolicyResult::getBackupInterval()const
{
	return backupInterval_;
}

