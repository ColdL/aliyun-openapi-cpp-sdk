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

#include <alibabacloud/sas/model/DescribeAlarmEventListRequest.h>

using AlibabaCloud::Sas::Model::DescribeAlarmEventListRequest;

DescribeAlarmEventListRequest::DescribeAlarmEventListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeAlarmEventList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlarmEventListRequest::~DescribeAlarmEventListRequest() {}

std::string DescribeAlarmEventListRequest::getTimeEnd() const {
  return timeEnd_;
}

void DescribeAlarmEventListRequest::setTimeEnd(const std::string &timeEnd) {
  timeEnd_ = timeEnd;
  setParameter(std::string("TimeEnd"), timeEnd);
}

std::string DescribeAlarmEventListRequest::getTargetType() const {
  return targetType_;
}

void DescribeAlarmEventListRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string DescribeAlarmEventListRequest::getSortType() const {
  return sortType_;
}

void DescribeAlarmEventListRequest::setSortType(const std::string &sortType) {
  sortType_ = sortType;
  setParameter(std::string("SortType"), sortType);
}

std::string DescribeAlarmEventListRequest::getAlarmEventType() const {
  return alarmEventType_;
}

void DescribeAlarmEventListRequest::setAlarmEventType(const std::string &alarmEventType) {
  alarmEventType_ = alarmEventType;
  setParameter(std::string("AlarmEventType"), alarmEventType);
}

std::string DescribeAlarmEventListRequest::getRemark() const {
  return remark_;
}

void DescribeAlarmEventListRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribeAlarmEventListRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void DescribeAlarmEventListRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string DescribeAlarmEventListRequest::getAlarmEventName() const {
  return alarmEventName_;
}

void DescribeAlarmEventListRequest::setAlarmEventName(const std::string &alarmEventName) {
  alarmEventName_ = alarmEventName;
  setParameter(std::string("AlarmEventName"), alarmEventName);
}

std::string DescribeAlarmEventListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeAlarmEventListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeAlarmEventListRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void DescribeAlarmEventListRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

std::string DescribeAlarmEventListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAlarmEventListRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeAlarmEventListRequest::getFrom() const {
  return from_;
}

void DescribeAlarmEventListRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

long DescribeAlarmEventListRequest::getId() const {
  return id_;
}

void DescribeAlarmEventListRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string DescribeAlarmEventListRequest::getTacticId() const {
  return tacticId_;
}

void DescribeAlarmEventListRequest::setTacticId(const std::string &tacticId) {
  tacticId_ = tacticId;
  setParameter(std::string("TacticId"), tacticId);
}

std::string DescribeAlarmEventListRequest::getLang() const {
  return lang_;
}

void DescribeAlarmEventListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeAlarmEventListRequest::getUniqueInfo() const {
  return uniqueInfo_;
}

void DescribeAlarmEventListRequest::setUniqueInfo(const std::string &uniqueInfo) {
  uniqueInfo_ = uniqueInfo;
  setParameter(std::string("UniqueInfo"), uniqueInfo);
}

std::string DescribeAlarmEventListRequest::getGroupId() const {
  return groupId_;
}

void DescribeAlarmEventListRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeAlarmEventListRequest::getDealed() const {
  return dealed_;
}

void DescribeAlarmEventListRequest::setDealed(const std::string &dealed) {
  dealed_ = dealed;
  setParameter(std::string("Dealed"), dealed);
}

int DescribeAlarmEventListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeAlarmEventListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeAlarmEventListRequest::getClusterId() const {
  return clusterId_;
}

void DescribeAlarmEventListRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeAlarmEventListRequest::getOperateTimeEnd() const {
  return operateTimeEnd_;
}

void DescribeAlarmEventListRequest::setOperateTimeEnd(const std::string &operateTimeEnd) {
  operateTimeEnd_ = operateTimeEnd;
  setParameter(std::string("OperateTimeEnd"), operateTimeEnd);
}

std::vector<std::string> DescribeAlarmEventListRequest::getOperateErrorCodeList() const {
  return operateErrorCodeList_;
}

void DescribeAlarmEventListRequest::setOperateErrorCodeList(const std::vector<std::string> &operateErrorCodeList) {
  operateErrorCodeList_ = operateErrorCodeList;
}

std::string DescribeAlarmEventListRequest::getSortColumn() const {
  return sortColumn_;
}

void DescribeAlarmEventListRequest::setSortColumn(const std::string &sortColumn) {
  sortColumn_ = sortColumn;
  setParameter(std::string("SortColumn"), sortColumn);
}

std::string DescribeAlarmEventListRequest::getOperateTimeStart() const {
  return operateTimeStart_;
}

void DescribeAlarmEventListRequest::setOperateTimeStart(const std::string &operateTimeStart) {
  operateTimeStart_ = operateTimeStart;
  setParameter(std::string("OperateTimeStart"), operateTimeStart);
}

std::string DescribeAlarmEventListRequest::getTimeStart() const {
  return timeStart_;
}

void DescribeAlarmEventListRequest::setTimeStart(const std::string &timeStart) {
  timeStart_ = timeStart;
  setParameter(std::string("TimeStart"), timeStart);
}

std::string DescribeAlarmEventListRequest::getLevels() const {
  return levels_;
}

void DescribeAlarmEventListRequest::setLevels(const std::string &levels) {
  levels_ = levels;
  setParameter(std::string("Levels"), levels);
}

std::string DescribeAlarmEventListRequest::getUuids() const {
  return uuids_;
}

void DescribeAlarmEventListRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

