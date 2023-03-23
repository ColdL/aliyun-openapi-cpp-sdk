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

#ifndef ALIBABACLOUD_LIVE_LIVECLIENT_H_
#define ALIBABACLOUD_LIVE_LIVECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "LiveExport.h"
#include "model/AddCasterComponentRequest.h"
#include "model/AddCasterComponentResult.h"
#include "model/AddCasterEpisodeRequest.h"
#include "model/AddCasterEpisodeResult.h"
#include "model/AddCasterEpisodeGroupRequest.h"
#include "model/AddCasterEpisodeGroupResult.h"
#include "model/AddCasterEpisodeGroupContentRequest.h"
#include "model/AddCasterEpisodeGroupContentResult.h"
#include "model/AddCasterLayoutRequest.h"
#include "model/AddCasterLayoutResult.h"
#include "model/AddCasterProgramRequest.h"
#include "model/AddCasterProgramResult.h"
#include "model/AddCasterVideoResourceRequest.h"
#include "model/AddCasterVideoResourceResult.h"
#include "model/AddCustomLiveStreamTranscodeRequest.h"
#include "model/AddCustomLiveStreamTranscodeResult.h"
#include "model/AddLiveAppRecordConfigRequest.h"
#include "model/AddLiveAppRecordConfigResult.h"
#include "model/AddLiveAppSnapshotConfigRequest.h"
#include "model/AddLiveAppSnapshotConfigResult.h"
#include "model/AddLiveAudioAuditConfigRequest.h"
#include "model/AddLiveAudioAuditConfigResult.h"
#include "model/AddLiveAudioAuditNotifyConfigRequest.h"
#include "model/AddLiveAudioAuditNotifyConfigResult.h"
#include "model/AddLiveCenterTransferRequest.h"
#include "model/AddLiveCenterTransferResult.h"
#include "model/AddLiveDetectNotifyConfigRequest.h"
#include "model/AddLiveDetectNotifyConfigResult.h"
#include "model/AddLiveDomainRequest.h"
#include "model/AddLiveDomainResult.h"
#include "model/AddLiveDomainMappingRequest.h"
#include "model/AddLiveDomainMappingResult.h"
#include "model/AddLiveDomainPlayMappingRequest.h"
#include "model/AddLiveDomainPlayMappingResult.h"
#include "model/AddLivePullStreamInfoConfigRequest.h"
#include "model/AddLivePullStreamInfoConfigResult.h"
#include "model/AddLiveRecordNotifyConfigRequest.h"
#include "model/AddLiveRecordNotifyConfigResult.h"
#include "model/AddLiveRecordVodConfigRequest.h"
#include "model/AddLiveRecordVodConfigResult.h"
#include "model/AddLiveSnapshotDetectPornConfigRequest.h"
#include "model/AddLiveSnapshotDetectPornConfigResult.h"
#include "model/AddLiveSnapshotNotifyConfigRequest.h"
#include "model/AddLiveSnapshotNotifyConfigResult.h"
#include "model/AddLiveStreamTranscodeRequest.h"
#include "model/AddLiveStreamTranscodeResult.h"
#include "model/AddLiveStreamWatermarkRequest.h"
#include "model/AddLiveStreamWatermarkResult.h"
#include "model/AddLiveStreamWatermarkRuleRequest.h"
#include "model/AddLiveStreamWatermarkRuleResult.h"
#include "model/AddMultiRateConfigRequest.h"
#include "model/AddMultiRateConfigResult.h"
#include "model/AddPlaylistItemsRequest.h"
#include "model/AddPlaylistItemsResult.h"
#include "model/AddRtsLiveStreamTranscodeRequest.h"
#include "model/AddRtsLiveStreamTranscodeResult.h"
#include "model/AddShowIntoShowListRequest.h"
#include "model/AddShowIntoShowListResult.h"
#include "model/AddStudioLayoutRequest.h"
#include "model/AddStudioLayoutResult.h"
#include "model/AddTrancodeSEIRequest.h"
#include "model/AddTrancodeSEIResult.h"
#include "model/AllowPushStreamRequest.h"
#include "model/AllowPushStreamResult.h"
#include "model/BatchDeleteLiveDomainConfigsRequest.h"
#include "model/BatchDeleteLiveDomainConfigsResult.h"
#include "model/BatchGetOnlineUsersRequest.h"
#include "model/BatchGetOnlineUsersResult.h"
#include "model/BatchSetLiveDomainConfigsRequest.h"
#include "model/BatchSetLiveDomainConfigsResult.h"
#include "model/CancelMuteAllGroupUserRequest.h"
#include "model/CancelMuteAllGroupUserResult.h"
#include "model/CancelMuteGroupUserRequest.h"
#include "model/CancelMuteGroupUserResult.h"
#include "model/CloseLiveShiftRequest.h"
#include "model/CloseLiveShiftResult.h"
#include "model/CopyCasterRequest.h"
#include "model/CopyCasterResult.h"
#include "model/CopyCasterSceneConfigRequest.h"
#include "model/CopyCasterSceneConfigResult.h"
#include "model/CreateCasterRequest.h"
#include "model/CreateCasterResult.h"
#include "model/CreateCustomTemplateRequest.h"
#include "model/CreateCustomTemplateResult.h"
#include "model/CreateLiveDelayConfigRequest.h"
#include "model/CreateLiveDelayConfigResult.h"
#include "model/CreateLiveRealTimeLogDeliveryRequest.h"
#include "model/CreateLiveRealTimeLogDeliveryResult.h"
#include "model/CreateLiveStreamMonitorRequest.h"
#include "model/CreateLiveStreamMonitorResult.h"
#include "model/CreateLiveStreamRecordIndexFilesRequest.h"
#include "model/CreateLiveStreamRecordIndexFilesResult.h"
#include "model/CreateLiveTranscodeTemplateRequest.h"
#include "model/CreateLiveTranscodeTemplateResult.h"
#include "model/CreateMessageAppRequest.h"
#include "model/CreateMessageAppResult.h"
#include "model/CreateMessageGroupRequest.h"
#include "model/CreateMessageGroupResult.h"
#include "model/CreateMixStreamRequest.h"
#include "model/CreateMixStreamResult.h"
#include "model/DeleteCasterRequest.h"
#include "model/DeleteCasterResult.h"
#include "model/DeleteCasterComponentRequest.h"
#include "model/DeleteCasterComponentResult.h"
#include "model/DeleteCasterEpisodeRequest.h"
#include "model/DeleteCasterEpisodeResult.h"
#include "model/DeleteCasterEpisodeGroupRequest.h"
#include "model/DeleteCasterEpisodeGroupResult.h"
#include "model/DeleteCasterLayoutRequest.h"
#include "model/DeleteCasterLayoutResult.h"
#include "model/DeleteCasterProgramRequest.h"
#include "model/DeleteCasterProgramResult.h"
#include "model/DeleteCasterSceneConfigRequest.h"
#include "model/DeleteCasterSceneConfigResult.h"
#include "model/DeleteCasterVideoResourceRequest.h"
#include "model/DeleteCasterVideoResourceResult.h"
#include "model/DeleteCustomTemplateRequest.h"
#include "model/DeleteCustomTemplateResult.h"
#include "model/DeleteLiveAppRecordConfigRequest.h"
#include "model/DeleteLiveAppRecordConfigResult.h"
#include "model/DeleteLiveAppSnapshotConfigRequest.h"
#include "model/DeleteLiveAppSnapshotConfigResult.h"
#include "model/DeleteLiveAudioAuditConfigRequest.h"
#include "model/DeleteLiveAudioAuditConfigResult.h"
#include "model/DeleteLiveAudioAuditNotifyConfigRequest.h"
#include "model/DeleteLiveAudioAuditNotifyConfigResult.h"
#include "model/DeleteLiveCenterTransferRequest.h"
#include "model/DeleteLiveCenterTransferResult.h"
#include "model/DeleteLiveDelayConfigRequest.h"
#include "model/DeleteLiveDelayConfigResult.h"
#include "model/DeleteLiveDetectNotifyConfigRequest.h"
#include "model/DeleteLiveDetectNotifyConfigResult.h"
#include "model/DeleteLiveDomainRequest.h"
#include "model/DeleteLiveDomainResult.h"
#include "model/DeleteLiveDomainMappingRequest.h"
#include "model/DeleteLiveDomainMappingResult.h"
#include "model/DeleteLiveDomainPlayMappingRequest.h"
#include "model/DeleteLiveDomainPlayMappingResult.h"
#include "model/DeleteLiveEdgeTransferRequest.h"
#include "model/DeleteLiveEdgeTransferResult.h"
#include "model/DeleteLiveLazyPullStreamInfoConfigRequest.h"
#include "model/DeleteLiveLazyPullStreamInfoConfigResult.h"
#include "model/DeleteLivePullStreamInfoConfigRequest.h"
#include "model/DeleteLivePullStreamInfoConfigResult.h"
#include "model/DeleteLiveRealTimeLogLogstoreRequest.h"
#include "model/DeleteLiveRealTimeLogLogstoreResult.h"
#include "model/DeleteLiveRealtimeLogDeliveryRequest.h"
#include "model/DeleteLiveRealtimeLogDeliveryResult.h"
#include "model/DeleteLiveRecordNotifyConfigRequest.h"
#include "model/DeleteLiveRecordNotifyConfigResult.h"
#include "model/DeleteLiveRecordVodConfigRequest.h"
#include "model/DeleteLiveRecordVodConfigResult.h"
#include "model/DeleteLiveSnapshotDetectPornConfigRequest.h"
#include "model/DeleteLiveSnapshotDetectPornConfigResult.h"
#include "model/DeleteLiveSnapshotNotifyConfigRequest.h"
#include "model/DeleteLiveSnapshotNotifyConfigResult.h"
#include "model/DeleteLiveSpecificStagingConfigRequest.h"
#include "model/DeleteLiveSpecificStagingConfigResult.h"
#include "model/DeleteLiveStreamMonitorRequest.h"
#include "model/DeleteLiveStreamMonitorResult.h"
#include "model/DeleteLiveStreamRecordIndexFilesRequest.h"
#include "model/DeleteLiveStreamRecordIndexFilesResult.h"
#include "model/DeleteLiveStreamTranscodeRequest.h"
#include "model/DeleteLiveStreamTranscodeResult.h"
#include "model/DeleteLiveStreamWatermarkRequest.h"
#include "model/DeleteLiveStreamWatermarkResult.h"
#include "model/DeleteLiveStreamWatermarkRuleRequest.h"
#include "model/DeleteLiveStreamWatermarkRuleResult.h"
#include "model/DeleteLiveStreamsNotifyUrlConfigRequest.h"
#include "model/DeleteLiveStreamsNotifyUrlConfigResult.h"
#include "model/DeleteMessageAppRequest.h"
#include "model/DeleteMessageAppResult.h"
#include "model/DeleteMixStreamRequest.h"
#include "model/DeleteMixStreamResult.h"
#include "model/DeleteMultiRateConfigRequest.h"
#include "model/DeleteMultiRateConfigResult.h"
#include "model/DeletePlaylistRequest.h"
#include "model/DeletePlaylistResult.h"
#include "model/DeletePlaylistItemsRequest.h"
#include "model/DeletePlaylistItemsResult.h"
#include "model/DeleteRoomRequest.h"
#include "model/DeleteRoomResult.h"
#include "model/DeleteSnapshotCallbackAuthRequest.h"
#include "model/DeleteSnapshotCallbackAuthResult.h"
#include "model/DeleteSnapshotFilesRequest.h"
#include "model/DeleteSnapshotFilesResult.h"
#include "model/DeleteStudioLayoutRequest.h"
#include "model/DeleteStudioLayoutResult.h"
#include "model/DescribeAutoShowListTasksRequest.h"
#include "model/DescribeAutoShowListTasksResult.h"
#include "model/DescribeCasterChannelsRequest.h"
#include "model/DescribeCasterChannelsResult.h"
#include "model/DescribeCasterComponentsRequest.h"
#include "model/DescribeCasterComponentsResult.h"
#include "model/DescribeCasterConfigRequest.h"
#include "model/DescribeCasterConfigResult.h"
#include "model/DescribeCasterLayoutsRequest.h"
#include "model/DescribeCasterLayoutsResult.h"
#include "model/DescribeCasterProgramRequest.h"
#include "model/DescribeCasterProgramResult.h"
#include "model/DescribeCasterSceneAudioRequest.h"
#include "model/DescribeCasterSceneAudioResult.h"
#include "model/DescribeCasterScenesRequest.h"
#include "model/DescribeCasterScenesResult.h"
#include "model/DescribeCasterStreamUrlRequest.h"
#include "model/DescribeCasterStreamUrlResult.h"
#include "model/DescribeCasterSyncGroupRequest.h"
#include "model/DescribeCasterSyncGroupResult.h"
#include "model/DescribeCasterVideoResourcesRequest.h"
#include "model/DescribeCasterVideoResourcesResult.h"
#include "model/DescribeCastersRequest.h"
#include "model/DescribeCastersResult.h"
#include "model/DescribeDomainUsageDataRequest.h"
#include "model/DescribeDomainUsageDataResult.h"
#include "model/DescribeDomainWithIntegrityRequest.h"
#include "model/DescribeDomainWithIntegrityResult.h"
#include "model/DescribeForbidPushStreamRoomListRequest.h"
#include "model/DescribeForbidPushStreamRoomListResult.h"
#include "model/DescribeHlsLiveStreamRealTimeBpsDataRequest.h"
#include "model/DescribeHlsLiveStreamRealTimeBpsDataResult.h"
#include "model/DescribeLiveAudioAuditConfigRequest.h"
#include "model/DescribeLiveAudioAuditConfigResult.h"
#include "model/DescribeLiveAudioAuditNotifyConfigRequest.h"
#include "model/DescribeLiveAudioAuditNotifyConfigResult.h"
#include "model/DescribeLiveCenterTransferRequest.h"
#include "model/DescribeLiveCenterTransferResult.h"
#include "model/DescribeLiveCertificateDetailRequest.h"
#include "model/DescribeLiveCertificateDetailResult.h"
#include "model/DescribeLiveCertificateListRequest.h"
#include "model/DescribeLiveCertificateListResult.h"
#include "model/DescribeLiveDelayConfigRequest.h"
#include "model/DescribeLiveDelayConfigResult.h"
#include "model/DescribeLiveDelayedStreamingUsageRequest.h"
#include "model/DescribeLiveDelayedStreamingUsageResult.h"
#include "model/DescribeLiveDetectNotifyConfigRequest.h"
#include "model/DescribeLiveDetectNotifyConfigResult.h"
#include "model/DescribeLiveDetectPornDataRequest.h"
#include "model/DescribeLiveDetectPornDataResult.h"
#include "model/DescribeLiveDomainBpsDataRequest.h"
#include "model/DescribeLiveDomainBpsDataResult.h"
#include "model/DescribeLiveDomainBpsDataByLayerRequest.h"
#include "model/DescribeLiveDomainBpsDataByLayerResult.h"
#include "model/DescribeLiveDomainBpsDataByTimeStampRequest.h"
#include "model/DescribeLiveDomainBpsDataByTimeStampResult.h"
#include "model/DescribeLiveDomainCertificateInfoRequest.h"
#include "model/DescribeLiveDomainCertificateInfoResult.h"
#include "model/DescribeLiveDomainConfigsRequest.h"
#include "model/DescribeLiveDomainConfigsResult.h"
#include "model/DescribeLiveDomainDetailRequest.h"
#include "model/DescribeLiveDomainDetailResult.h"
#include "model/DescribeLiveDomainFrameRateAndBitRateDataRequest.h"
#include "model/DescribeLiveDomainFrameRateAndBitRateDataResult.h"
#include "model/DescribeLiveDomainLimitRequest.h"
#include "model/DescribeLiveDomainLimitResult.h"
#include "model/DescribeLiveDomainLogRequest.h"
#include "model/DescribeLiveDomainLogResult.h"
#include "model/DescribeLiveDomainMappingRequest.h"
#include "model/DescribeLiveDomainMappingResult.h"
#include "model/DescribeLiveDomainOnlineUserNumRequest.h"
#include "model/DescribeLiveDomainOnlineUserNumResult.h"
#include "model/DescribeLiveDomainPushBpsDataRequest.h"
#include "model/DescribeLiveDomainPushBpsDataResult.h"
#include "model/DescribeLiveDomainPushTrafficDataRequest.h"
#include "model/DescribeLiveDomainPushTrafficDataResult.h"
#include "model/DescribeLiveDomainPvUvDataRequest.h"
#include "model/DescribeLiveDomainPvUvDataResult.h"
#include "model/DescribeLiveDomainRealTimeBpsDataRequest.h"
#include "model/DescribeLiveDomainRealTimeBpsDataResult.h"
#include "model/DescribeLiveDomainRealTimeHttpCodeDataRequest.h"
#include "model/DescribeLiveDomainRealTimeHttpCodeDataResult.h"
#include "model/DescribeLiveDomainRealTimeTrafficDataRequest.h"
#include "model/DescribeLiveDomainRealTimeTrafficDataResult.h"
#include "model/DescribeLiveDomainRealtimeLogDeliveryRequest.h"
#include "model/DescribeLiveDomainRealtimeLogDeliveryResult.h"
#include "model/DescribeLiveDomainRecordDataRequest.h"
#include "model/DescribeLiveDomainRecordDataResult.h"
#include "model/DescribeLiveDomainRecordUsageDataRequest.h"
#include "model/DescribeLiveDomainRecordUsageDataResult.h"
#include "model/DescribeLiveDomainSnapshotDataRequest.h"
#include "model/DescribeLiveDomainSnapshotDataResult.h"
#include "model/DescribeLiveDomainStagingConfigRequest.h"
#include "model/DescribeLiveDomainStagingConfigResult.h"
#include "model/DescribeLiveDomainStreamTranscodeDataRequest.h"
#include "model/DescribeLiveDomainStreamTranscodeDataResult.h"
#include "model/DescribeLiveDomainTimeShiftDataRequest.h"
#include "model/DescribeLiveDomainTimeShiftDataResult.h"
#include "model/DescribeLiveDomainTrafficDataRequest.h"
#include "model/DescribeLiveDomainTrafficDataResult.h"
#include "model/DescribeLiveDomainTranscodeDataRequest.h"
#include "model/DescribeLiveDomainTranscodeDataResult.h"
#include "model/DescribeLiveDrmUsageDataRequest.h"
#include "model/DescribeLiveDrmUsageDataResult.h"
#include "model/DescribeLiveEdgeTransferRequest.h"
#include "model/DescribeLiveEdgeTransferResult.h"
#include "model/DescribeLiveLazyPullStreamConfigRequest.h"
#include "model/DescribeLiveLazyPullStreamConfigResult.h"
#include "model/DescribeLiveProducerUsageDataRequest.h"
#include "model/DescribeLiveProducerUsageDataResult.h"
#include "model/DescribeLivePullStreamConfigRequest.h"
#include "model/DescribeLivePullStreamConfigResult.h"
#include "model/DescribeLiveRealtimeDeliveryAccRequest.h"
#include "model/DescribeLiveRealtimeDeliveryAccResult.h"
#include "model/DescribeLiveRealtimeLogAuthorizedRequest.h"
#include "model/DescribeLiveRealtimeLogAuthorizedResult.h"
#include "model/DescribeLiveRecordConfigRequest.h"
#include "model/DescribeLiveRecordConfigResult.h"
#include "model/DescribeLiveRecordNotifyConfigRequest.h"
#include "model/DescribeLiveRecordNotifyConfigResult.h"
#include "model/DescribeLiveRecordNotifyRecordsRequest.h"
#include "model/DescribeLiveRecordNotifyRecordsResult.h"
#include "model/DescribeLiveRecordVodConfigsRequest.h"
#include "model/DescribeLiveRecordVodConfigsResult.h"
#include "model/DescribeLiveShiftConfigsRequest.h"
#include "model/DescribeLiveShiftConfigsResult.h"
#include "model/DescribeLiveSnapshotConfigRequest.h"
#include "model/DescribeLiveSnapshotConfigResult.h"
#include "model/DescribeLiveSnapshotDetectPornConfigRequest.h"
#include "model/DescribeLiveSnapshotDetectPornConfigResult.h"
#include "model/DescribeLiveSnapshotNotifyConfigRequest.h"
#include "model/DescribeLiveSnapshotNotifyConfigResult.h"
#include "model/DescribeLiveStreamAuthCheckingRequest.h"
#include "model/DescribeLiveStreamAuthCheckingResult.h"
#include "model/DescribeLiveStreamBitRateDataRequest.h"
#include "model/DescribeLiveStreamBitRateDataResult.h"
#include "model/DescribeLiveStreamCountRequest.h"
#include "model/DescribeLiveStreamCountResult.h"
#include "model/DescribeLiveStreamDelayConfigRequest.h"
#include "model/DescribeLiveStreamDelayConfigResult.h"
#include "model/DescribeLiveStreamHistoryUserNumRequest.h"
#include "model/DescribeLiveStreamHistoryUserNumResult.h"
#include "model/DescribeLiveStreamMetricDetailDataRequest.h"
#include "model/DescribeLiveStreamMetricDetailDataResult.h"
#include "model/DescribeLiveStreamMonitorListRequest.h"
#include "model/DescribeLiveStreamMonitorListResult.h"
#include "model/DescribeLiveStreamOptimizedFeatureConfigRequest.h"
#include "model/DescribeLiveStreamOptimizedFeatureConfigResult.h"
#include "model/DescribeLiveStreamRecordContentRequest.h"
#include "model/DescribeLiveStreamRecordContentResult.h"
#include "model/DescribeLiveStreamRecordIndexFileRequest.h"
#include "model/DescribeLiveStreamRecordIndexFileResult.h"
#include "model/DescribeLiveStreamRecordIndexFilesRequest.h"
#include "model/DescribeLiveStreamRecordIndexFilesResult.h"
#include "model/DescribeLiveStreamSnapshotInfoRequest.h"
#include "model/DescribeLiveStreamSnapshotInfoResult.h"
#include "model/DescribeLiveStreamStateRequest.h"
#include "model/DescribeLiveStreamStateResult.h"
#include "model/DescribeLiveStreamTranscodeInfoRequest.h"
#include "model/DescribeLiveStreamTranscodeInfoResult.h"
#include "model/DescribeLiveStreamTranscodeStreamNumRequest.h"
#include "model/DescribeLiveStreamTranscodeStreamNumResult.h"
#include "model/DescribeLiveStreamWatermarkRulesRequest.h"
#include "model/DescribeLiveStreamWatermarkRulesResult.h"
#include "model/DescribeLiveStreamWatermarksRequest.h"
#include "model/DescribeLiveStreamWatermarksResult.h"
#include "model/DescribeLiveStreamsBlockListRequest.h"
#include "model/DescribeLiveStreamsBlockListResult.h"
#include "model/DescribeLiveStreamsControlHistoryRequest.h"
#include "model/DescribeLiveStreamsControlHistoryResult.h"
#include "model/DescribeLiveStreamsNotifyRecordsRequest.h"
#include "model/DescribeLiveStreamsNotifyRecordsResult.h"
#include "model/DescribeLiveStreamsNotifyUrlConfigRequest.h"
#include "model/DescribeLiveStreamsNotifyUrlConfigResult.h"
#include "model/DescribeLiveStreamsOnlineListRequest.h"
#include "model/DescribeLiveStreamsOnlineListResult.h"
#include "model/DescribeLiveStreamsPublishListRequest.h"
#include "model/DescribeLiveStreamsPublishListResult.h"
#include "model/DescribeLiveTagResourcesRequest.h"
#include "model/DescribeLiveTagResourcesResult.h"
#include "model/DescribeLiveTopDomainsByFlowRequest.h"
#include "model/DescribeLiveTopDomainsByFlowResult.h"
#include "model/DescribeLiveUserBillPredictionRequest.h"
#include "model/DescribeLiveUserBillPredictionResult.h"
#include "model/DescribeLiveUserDomainsRequest.h"
#include "model/DescribeLiveUserDomainsResult.h"
#include "model/DescribeLiveUserTagsRequest.h"
#include "model/DescribeLiveUserTagsResult.h"
#include "model/DescribeMeterLiveInteractionDauRequest.h"
#include "model/DescribeMeterLiveInteractionDauResult.h"
#include "model/DescribeMeterLiveRtcDurationRequest.h"
#include "model/DescribeMeterLiveRtcDurationResult.h"
#include "model/DescribeMixStreamListRequest.h"
#include "model/DescribeMixStreamListResult.h"
#include "model/DescribeRTSNativeSDKFirstFrameCostRequest.h"
#include "model/DescribeRTSNativeSDKFirstFrameCostResult.h"
#include "model/DescribeRTSNativeSDKFirstFrameDelayRequest.h"
#include "model/DescribeRTSNativeSDKFirstFrameDelayResult.h"
#include "model/DescribeRTSNativeSDKPlayFailStatusRequest.h"
#include "model/DescribeRTSNativeSDKPlayFailStatusResult.h"
#include "model/DescribeRTSNativeSDKPlayTimeRequest.h"
#include "model/DescribeRTSNativeSDKPlayTimeResult.h"
#include "model/DescribeRTSNativeSDKVvDataRequest.h"
#include "model/DescribeRTSNativeSDKVvDataResult.h"
#include "model/DescribeRoomKickoutUserListRequest.h"
#include "model/DescribeRoomKickoutUserListResult.h"
#include "model/DescribeRoomListRequest.h"
#include "model/DescribeRoomListResult.h"
#include "model/DescribeRoomStatusRequest.h"
#include "model/DescribeRoomStatusResult.h"
#include "model/DescribeShowListRequest.h"
#include "model/DescribeShowListResult.h"
#include "model/DescribeStudioLayoutsRequest.h"
#include "model/DescribeStudioLayoutsResult.h"
#include "model/DescribeToutiaoLivePlayRequest.h"
#include "model/DescribeToutiaoLivePlayResult.h"
#include "model/DescribeToutiaoLivePublishRequest.h"
#include "model/DescribeToutiaoLivePublishResult.h"
#include "model/DescribeUpBpsPeakDataRequest.h"
#include "model/DescribeUpBpsPeakDataResult.h"
#include "model/DescribeUpBpsPeakOfLineRequest.h"
#include "model/DescribeUpBpsPeakOfLineResult.h"
#include "model/DescribeUpPeakPublishStreamDataRequest.h"
#include "model/DescribeUpPeakPublishStreamDataResult.h"
#include "model/DisableLiveRealtimeLogDeliveryRequest.h"
#include "model/DisableLiveRealtimeLogDeliveryResult.h"
#include "model/DynamicUpdateWaterMarkStreamRuleRequest.h"
#include "model/DynamicUpdateWaterMarkStreamRuleResult.h"
#include "model/EditPlaylistRequest.h"
#include "model/EditPlaylistResult.h"
#include "model/EditShowAndReplaceRequest.h"
#include "model/EditShowAndReplaceResult.h"
#include "model/EffectCasterUrgentRequest.h"
#include "model/EffectCasterUrgentResult.h"
#include "model/EffectCasterVideoResourceRequest.h"
#include "model/EffectCasterVideoResourceResult.h"
#include "model/EnableLiveRealtimeLogDeliveryRequest.h"
#include "model/EnableLiveRealtimeLogDeliveryResult.h"
#include "model/ForbidLiveStreamRequest.h"
#include "model/ForbidLiveStreamResult.h"
#include "model/ForbidPushStreamRequest.h"
#include "model/ForbidPushStreamResult.h"
#include "model/GetAllCustomTemplatesRequest.h"
#include "model/GetAllCustomTemplatesResult.h"
#include "model/GetCustomTemplateRequest.h"
#include "model/GetCustomTemplateResult.h"
#include "model/GetEditingJobInfoRequest.h"
#include "model/GetEditingJobInfoResult.h"
#include "model/GetMessageAppRequest.h"
#include "model/GetMessageAppResult.h"
#include "model/GetMessageGroupRequest.h"
#include "model/GetMessageGroupResult.h"
#include "model/GetMessageTokenRequest.h"
#include "model/GetMessageTokenResult.h"
#include "model/GetMultiRateConfigRequest.h"
#include "model/GetMultiRateConfigResult.h"
#include "model/GetMultiRateConfigListRequest.h"
#include "model/GetMultiRateConfigListResult.h"
#include "model/HotLiveRtcStreamRequest.h"
#include "model/HotLiveRtcStreamResult.h"
#include "model/InitializeAutoShowListTaskRequest.h"
#include "model/InitializeAutoShowListTaskResult.h"
#include "model/JoinMessageGroupRequest.h"
#include "model/JoinMessageGroupResult.h"
#include "model/LeaveMessageGroupRequest.h"
#include "model/LeaveMessageGroupResult.h"
#include "model/ListLiveDelayConfigRequest.h"
#include "model/ListLiveDelayConfigResult.h"
#include "model/ListLiveRealtimeLogDeliveryRequest.h"
#include "model/ListLiveRealtimeLogDeliveryResult.h"
#include "model/ListLiveRealtimeLogDeliveryDomainsRequest.h"
#include "model/ListLiveRealtimeLogDeliveryDomainsResult.h"
#include "model/ListLiveRealtimeLogDeliveryInfosRequest.h"
#include "model/ListLiveRealtimeLogDeliveryInfosResult.h"
#include "model/ListMessageRequest.h"
#include "model/ListMessageResult.h"
#include "model/ListMessageAppRequest.h"
#include "model/ListMessageAppResult.h"
#include "model/ListMessageGroupRequest.h"
#include "model/ListMessageGroupResult.h"
#include "model/ListMessageGroupUserRequest.h"
#include "model/ListMessageGroupUserResult.h"
#include "model/ListMessageGroupUserByIdRequest.h"
#include "model/ListMessageGroupUserByIdResult.h"
#include "model/ListPlaylistRequest.h"
#include "model/ListPlaylistResult.h"
#include "model/ListPlaylistItemsRequest.h"
#include "model/ListPlaylistItemsResult.h"
#include "model/ModifyCasterComponentRequest.h"
#include "model/ModifyCasterComponentResult.h"
#include "model/ModifyCasterEpisodeRequest.h"
#include "model/ModifyCasterEpisodeResult.h"
#include "model/ModifyCasterLayoutRequest.h"
#include "model/ModifyCasterLayoutResult.h"
#include "model/ModifyCasterProgramRequest.h"
#include "model/ModifyCasterProgramResult.h"
#include "model/ModifyCasterVideoResourceRequest.h"
#include "model/ModifyCasterVideoResourceResult.h"
#include "model/ModifyLiveDomainSchdmByPropertyRequest.h"
#include "model/ModifyLiveDomainSchdmByPropertyResult.h"
#include "model/ModifyLiveRealtimeLogDeliveryRequest.h"
#include "model/ModifyLiveRealtimeLogDeliveryResult.h"
#include "model/ModifyShowListRequest.h"
#include "model/ModifyShowListResult.h"
#include "model/ModifyStudioLayoutRequest.h"
#include "model/ModifyStudioLayoutResult.h"
#include "model/MuteAllGroupUserRequest.h"
#include "model/MuteAllGroupUserResult.h"
#include "model/MuteGroupUserRequest.h"
#include "model/MuteGroupUserResult.h"
#include "model/OpenLiveShiftRequest.h"
#include "model/OpenLiveShiftResult.h"
#include "model/PlayChoosenShowRequest.h"
#include "model/PlayChoosenShowResult.h"
#include "model/PublishLiveStagingConfigToProductionRequest.h"
#include "model/PublishLiveStagingConfigToProductionResult.h"
#include "model/QueryMessageAppRequest.h"
#include "model/QueryMessageAppResult.h"
#include "model/QuerySnapshotCallbackAuthRequest.h"
#include "model/QuerySnapshotCallbackAuthResult.h"
#include "model/RealTimeRecordCommandRequest.h"
#include "model/RealTimeRecordCommandResult.h"
#include "model/RealTimeSnapshotCommandRequest.h"
#include "model/RealTimeSnapshotCommandResult.h"
#include "model/RemoveShowFromShowListRequest.h"
#include "model/RemoveShowFromShowListResult.h"
#include "model/RestartCasterRequest.h"
#include "model/RestartCasterResult.h"
#include "model/ResumeLiveStreamRequest.h"
#include "model/ResumeLiveStreamResult.h"
#include "model/RollbackLiveStagingConfigRequest.h"
#include "model/RollbackLiveStagingConfigResult.h"
#include "model/SendLikeRequest.h"
#include "model/SendLikeResult.h"
#include "model/SendMessageToGroupRequest.h"
#include "model/SendMessageToGroupResult.h"
#include "model/SendMessageToGroupUsersRequest.h"
#include "model/SendMessageToGroupUsersResult.h"
#include "model/SendRoomNotificationRequest.h"
#include "model/SendRoomNotificationResult.h"
#include "model/SendRoomUserNotificationRequest.h"
#include "model/SendRoomUserNotificationResult.h"
#include "model/SetCasterChannelRequest.h"
#include "model/SetCasterChannelResult.h"
#include "model/SetCasterConfigRequest.h"
#include "model/SetCasterConfigResult.h"
#include "model/SetCasterSceneConfigRequest.h"
#include "model/SetCasterSceneConfigResult.h"
#include "model/SetCasterSyncGroupRequest.h"
#include "model/SetCasterSyncGroupResult.h"
#include "model/SetCasterTimedEventRequest.h"
#include "model/SetCasterTimedEventResult.h"
#include "model/SetLiveDomainCertificateRequest.h"
#include "model/SetLiveDomainCertificateResult.h"
#include "model/SetLiveDomainStagingConfigRequest.h"
#include "model/SetLiveDomainStagingConfigResult.h"
#include "model/SetLiveEdgeTransferRequest.h"
#include "model/SetLiveEdgeTransferResult.h"
#include "model/SetLiveLazyPullStreamInfoConfigRequest.h"
#include "model/SetLiveLazyPullStreamInfoConfigResult.h"
#include "model/SetLiveMpuTaskSeiRequest.h"
#include "model/SetLiveMpuTaskSeiResult.h"
#include "model/SetLiveStreamDelayConfigRequest.h"
#include "model/SetLiveStreamDelayConfigResult.h"
#include "model/SetLiveStreamOptimizedFeatureConfigRequest.h"
#include "model/SetLiveStreamOptimizedFeatureConfigResult.h"
#include "model/SetLiveStreamsNotifyUrlConfigRequest.h"
#include "model/SetLiveStreamsNotifyUrlConfigResult.h"
#include "model/SetSnapshotCallbackAuthRequest.h"
#include "model/SetSnapshotCallbackAuthResult.h"
#include "model/StartCasterRequest.h"
#include "model/StartCasterResult.h"
#include "model/StartCasterSceneRequest.h"
#include "model/StartCasterSceneResult.h"
#include "model/StartLiveDomainRequest.h"
#include "model/StartLiveDomainResult.h"
#include "model/StartLiveStreamMonitorRequest.h"
#include "model/StartLiveStreamMonitorResult.h"
#include "model/StartPlaylistRequest.h"
#include "model/StartPlaylistResult.h"
#include "model/StopCasterRequest.h"
#include "model/StopCasterResult.h"
#include "model/StopCasterSceneRequest.h"
#include "model/StopCasterSceneResult.h"
#include "model/StopLiveDomainRequest.h"
#include "model/StopLiveDomainResult.h"
#include "model/StopLiveStreamMonitorRequest.h"
#include "model/StopLiveStreamMonitorResult.h"
#include "model/StopPlaylistRequest.h"
#include "model/StopPlaylistResult.h"
#include "model/TagLiveResourcesRequest.h"
#include "model/TagLiveResourcesResult.h"
#include "model/UnTagLiveResourcesRequest.h"
#include "model/UnTagLiveResourcesResult.h"
#include "model/UpdateCasterSceneAudioRequest.h"
#include "model/UpdateCasterSceneAudioResult.h"
#include "model/UpdateCasterSceneConfigRequest.h"
#include "model/UpdateCasterSceneConfigResult.h"
#include "model/UpdateLiveAppSnapshotConfigRequest.h"
#include "model/UpdateLiveAppSnapshotConfigResult.h"
#include "model/UpdateLiveAudioAuditConfigRequest.h"
#include "model/UpdateLiveAudioAuditConfigResult.h"
#include "model/UpdateLiveAudioAuditNotifyConfigRequest.h"
#include "model/UpdateLiveAudioAuditNotifyConfigResult.h"
#include "model/UpdateLiveCenterTransferRequest.h"
#include "model/UpdateLiveCenterTransferResult.h"
#include "model/UpdateLiveDelayConfigRequest.h"
#include "model/UpdateLiveDelayConfigResult.h"
#include "model/UpdateLiveDetectNotifyConfigRequest.h"
#include "model/UpdateLiveDetectNotifyConfigResult.h"
#include "model/UpdateLivePullStreamInfoConfigRequest.h"
#include "model/UpdateLivePullStreamInfoConfigResult.h"
#include "model/UpdateLiveRecordNotifyConfigRequest.h"
#include "model/UpdateLiveRecordNotifyConfigResult.h"
#include "model/UpdateLiveSnapshotDetectPornConfigRequest.h"
#include "model/UpdateLiveSnapshotDetectPornConfigResult.h"
#include "model/UpdateLiveSnapshotNotifyConfigRequest.h"
#include "model/UpdateLiveSnapshotNotifyConfigResult.h"
#include "model/UpdateLiveStreamMonitorRequest.h"
#include "model/UpdateLiveStreamMonitorResult.h"
#include "model/UpdateLiveStreamWatermarkRequest.h"
#include "model/UpdateLiveStreamWatermarkResult.h"
#include "model/UpdateLiveStreamWatermarkRuleRequest.h"
#include "model/UpdateLiveStreamWatermarkRuleResult.h"
#include "model/UpdateLiveTopLevelDomainRequest.h"
#include "model/UpdateLiveTopLevelDomainResult.h"
#include "model/UpdateMessageAppRequest.h"
#include "model/UpdateMessageAppResult.h"
#include "model/UpdateMessageGroupRequest.h"
#include "model/UpdateMessageGroupResult.h"
#include "model/UpdateMixStreamRequest.h"
#include "model/UpdateMixStreamResult.h"
#include "model/VerifyLiveDomainOwnerRequest.h"
#include "model/VerifyLiveDomainOwnerResult.h"


namespace AlibabaCloud
{
	namespace Live
	{
		class ALIBABACLOUD_LIVE_EXPORT LiveClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddCasterComponentResult> AddCasterComponentOutcome;
			typedef std::future<AddCasterComponentOutcome> AddCasterComponentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterComponentRequest&, const AddCasterComponentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterComponentAsyncHandler;
			typedef Outcome<Error, Model::AddCasterEpisodeResult> AddCasterEpisodeOutcome;
			typedef std::future<AddCasterEpisodeOutcome> AddCasterEpisodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterEpisodeRequest&, const AddCasterEpisodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterEpisodeAsyncHandler;
			typedef Outcome<Error, Model::AddCasterEpisodeGroupResult> AddCasterEpisodeGroupOutcome;
			typedef std::future<AddCasterEpisodeGroupOutcome> AddCasterEpisodeGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterEpisodeGroupRequest&, const AddCasterEpisodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterEpisodeGroupAsyncHandler;
			typedef Outcome<Error, Model::AddCasterEpisodeGroupContentResult> AddCasterEpisodeGroupContentOutcome;
			typedef std::future<AddCasterEpisodeGroupContentOutcome> AddCasterEpisodeGroupContentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterEpisodeGroupContentRequest&, const AddCasterEpisodeGroupContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterEpisodeGroupContentAsyncHandler;
			typedef Outcome<Error, Model::AddCasterLayoutResult> AddCasterLayoutOutcome;
			typedef std::future<AddCasterLayoutOutcome> AddCasterLayoutOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterLayoutRequest&, const AddCasterLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterLayoutAsyncHandler;
			typedef Outcome<Error, Model::AddCasterProgramResult> AddCasterProgramOutcome;
			typedef std::future<AddCasterProgramOutcome> AddCasterProgramOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterProgramRequest&, const AddCasterProgramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterProgramAsyncHandler;
			typedef Outcome<Error, Model::AddCasterVideoResourceResult> AddCasterVideoResourceOutcome;
			typedef std::future<AddCasterVideoResourceOutcome> AddCasterVideoResourceOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCasterVideoResourceRequest&, const AddCasterVideoResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasterVideoResourceAsyncHandler;
			typedef Outcome<Error, Model::AddCustomLiveStreamTranscodeResult> AddCustomLiveStreamTranscodeOutcome;
			typedef std::future<AddCustomLiveStreamTranscodeOutcome> AddCustomLiveStreamTranscodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddCustomLiveStreamTranscodeRequest&, const AddCustomLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::AddLiveAppRecordConfigResult> AddLiveAppRecordConfigOutcome;
			typedef std::future<AddLiveAppRecordConfigOutcome> AddLiveAppRecordConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveAppRecordConfigRequest&, const AddLiveAppRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveAppRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveAppSnapshotConfigResult> AddLiveAppSnapshotConfigOutcome;
			typedef std::future<AddLiveAppSnapshotConfigOutcome> AddLiveAppSnapshotConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveAppSnapshotConfigRequest&, const AddLiveAppSnapshotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveAppSnapshotConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveAudioAuditConfigResult> AddLiveAudioAuditConfigOutcome;
			typedef std::future<AddLiveAudioAuditConfigOutcome> AddLiveAudioAuditConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveAudioAuditConfigRequest&, const AddLiveAudioAuditConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveAudioAuditConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveAudioAuditNotifyConfigResult> AddLiveAudioAuditNotifyConfigOutcome;
			typedef std::future<AddLiveAudioAuditNotifyConfigOutcome> AddLiveAudioAuditNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveAudioAuditNotifyConfigRequest&, const AddLiveAudioAuditNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveAudioAuditNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveCenterTransferResult> AddLiveCenterTransferOutcome;
			typedef std::future<AddLiveCenterTransferOutcome> AddLiveCenterTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveCenterTransferRequest&, const AddLiveCenterTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveCenterTransferAsyncHandler;
			typedef Outcome<Error, Model::AddLiveDetectNotifyConfigResult> AddLiveDetectNotifyConfigOutcome;
			typedef std::future<AddLiveDetectNotifyConfigOutcome> AddLiveDetectNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveDetectNotifyConfigRequest&, const AddLiveDetectNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveDetectNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveDomainResult> AddLiveDomainOutcome;
			typedef std::future<AddLiveDomainOutcome> AddLiveDomainOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveDomainRequest&, const AddLiveDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveDomainAsyncHandler;
			typedef Outcome<Error, Model::AddLiveDomainMappingResult> AddLiveDomainMappingOutcome;
			typedef std::future<AddLiveDomainMappingOutcome> AddLiveDomainMappingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveDomainMappingRequest&, const AddLiveDomainMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveDomainMappingAsyncHandler;
			typedef Outcome<Error, Model::AddLiveDomainPlayMappingResult> AddLiveDomainPlayMappingOutcome;
			typedef std::future<AddLiveDomainPlayMappingOutcome> AddLiveDomainPlayMappingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveDomainPlayMappingRequest&, const AddLiveDomainPlayMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveDomainPlayMappingAsyncHandler;
			typedef Outcome<Error, Model::AddLivePullStreamInfoConfigResult> AddLivePullStreamInfoConfigOutcome;
			typedef std::future<AddLivePullStreamInfoConfigOutcome> AddLivePullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLivePullStreamInfoConfigRequest&, const AddLivePullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLivePullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveRecordNotifyConfigResult> AddLiveRecordNotifyConfigOutcome;
			typedef std::future<AddLiveRecordNotifyConfigOutcome> AddLiveRecordNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveRecordNotifyConfigRequest&, const AddLiveRecordNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveRecordNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveRecordVodConfigResult> AddLiveRecordVodConfigOutcome;
			typedef std::future<AddLiveRecordVodConfigOutcome> AddLiveRecordVodConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveRecordVodConfigRequest&, const AddLiveRecordVodConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveRecordVodConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveSnapshotDetectPornConfigResult> AddLiveSnapshotDetectPornConfigOutcome;
			typedef std::future<AddLiveSnapshotDetectPornConfigOutcome> AddLiveSnapshotDetectPornConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveSnapshotDetectPornConfigRequest&, const AddLiveSnapshotDetectPornConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveSnapshotDetectPornConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveSnapshotNotifyConfigResult> AddLiveSnapshotNotifyConfigOutcome;
			typedef std::future<AddLiveSnapshotNotifyConfigOutcome> AddLiveSnapshotNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveSnapshotNotifyConfigRequest&, const AddLiveSnapshotNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveSnapshotNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::AddLiveStreamTranscodeResult> AddLiveStreamTranscodeOutcome;
			typedef std::future<AddLiveStreamTranscodeOutcome> AddLiveStreamTranscodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveStreamTranscodeRequest&, const AddLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::AddLiveStreamWatermarkResult> AddLiveStreamWatermarkOutcome;
			typedef std::future<AddLiveStreamWatermarkOutcome> AddLiveStreamWatermarkOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveStreamWatermarkRequest&, const AddLiveStreamWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveStreamWatermarkAsyncHandler;
			typedef Outcome<Error, Model::AddLiveStreamWatermarkRuleResult> AddLiveStreamWatermarkRuleOutcome;
			typedef std::future<AddLiveStreamWatermarkRuleOutcome> AddLiveStreamWatermarkRuleOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddLiveStreamWatermarkRuleRequest&, const AddLiveStreamWatermarkRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveStreamWatermarkRuleAsyncHandler;
			typedef Outcome<Error, Model::AddMultiRateConfigResult> AddMultiRateConfigOutcome;
			typedef std::future<AddMultiRateConfigOutcome> AddMultiRateConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddMultiRateConfigRequest&, const AddMultiRateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMultiRateConfigAsyncHandler;
			typedef Outcome<Error, Model::AddPlaylistItemsResult> AddPlaylistItemsOutcome;
			typedef std::future<AddPlaylistItemsOutcome> AddPlaylistItemsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddPlaylistItemsRequest&, const AddPlaylistItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPlaylistItemsAsyncHandler;
			typedef Outcome<Error, Model::AddRtsLiveStreamTranscodeResult> AddRtsLiveStreamTranscodeOutcome;
			typedef std::future<AddRtsLiveStreamTranscodeOutcome> AddRtsLiveStreamTranscodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddRtsLiveStreamTranscodeRequest&, const AddRtsLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRtsLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::AddShowIntoShowListResult> AddShowIntoShowListOutcome;
			typedef std::future<AddShowIntoShowListOutcome> AddShowIntoShowListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddShowIntoShowListRequest&, const AddShowIntoShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddShowIntoShowListAsyncHandler;
			typedef Outcome<Error, Model::AddStudioLayoutResult> AddStudioLayoutOutcome;
			typedef std::future<AddStudioLayoutOutcome> AddStudioLayoutOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddStudioLayoutRequest&, const AddStudioLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddStudioLayoutAsyncHandler;
			typedef Outcome<Error, Model::AddTrancodeSEIResult> AddTrancodeSEIOutcome;
			typedef std::future<AddTrancodeSEIOutcome> AddTrancodeSEIOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AddTrancodeSEIRequest&, const AddTrancodeSEIOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTrancodeSEIAsyncHandler;
			typedef Outcome<Error, Model::AllowPushStreamResult> AllowPushStreamOutcome;
			typedef std::future<AllowPushStreamOutcome> AllowPushStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::AllowPushStreamRequest&, const AllowPushStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllowPushStreamAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteLiveDomainConfigsResult> BatchDeleteLiveDomainConfigsOutcome;
			typedef std::future<BatchDeleteLiveDomainConfigsOutcome> BatchDeleteLiveDomainConfigsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::BatchDeleteLiveDomainConfigsRequest&, const BatchDeleteLiveDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteLiveDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::BatchGetOnlineUsersResult> BatchGetOnlineUsersOutcome;
			typedef std::future<BatchGetOnlineUsersOutcome> BatchGetOnlineUsersOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::BatchGetOnlineUsersRequest&, const BatchGetOnlineUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetOnlineUsersAsyncHandler;
			typedef Outcome<Error, Model::BatchSetLiveDomainConfigsResult> BatchSetLiveDomainConfigsOutcome;
			typedef std::future<BatchSetLiveDomainConfigsOutcome> BatchSetLiveDomainConfigsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::BatchSetLiveDomainConfigsRequest&, const BatchSetLiveDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetLiveDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::CancelMuteAllGroupUserResult> CancelMuteAllGroupUserOutcome;
			typedef std::future<CancelMuteAllGroupUserOutcome> CancelMuteAllGroupUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CancelMuteAllGroupUserRequest&, const CancelMuteAllGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelMuteAllGroupUserAsyncHandler;
			typedef Outcome<Error, Model::CancelMuteGroupUserResult> CancelMuteGroupUserOutcome;
			typedef std::future<CancelMuteGroupUserOutcome> CancelMuteGroupUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CancelMuteGroupUserRequest&, const CancelMuteGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelMuteGroupUserAsyncHandler;
			typedef Outcome<Error, Model::CloseLiveShiftResult> CloseLiveShiftOutcome;
			typedef std::future<CloseLiveShiftOutcome> CloseLiveShiftOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CloseLiveShiftRequest&, const CloseLiveShiftOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseLiveShiftAsyncHandler;
			typedef Outcome<Error, Model::CopyCasterResult> CopyCasterOutcome;
			typedef std::future<CopyCasterOutcome> CopyCasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CopyCasterRequest&, const CopyCasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyCasterAsyncHandler;
			typedef Outcome<Error, Model::CopyCasterSceneConfigResult> CopyCasterSceneConfigOutcome;
			typedef std::future<CopyCasterSceneConfigOutcome> CopyCasterSceneConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CopyCasterSceneConfigRequest&, const CopyCasterSceneConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyCasterSceneConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateCasterResult> CreateCasterOutcome;
			typedef std::future<CreateCasterOutcome> CreateCasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateCasterRequest&, const CreateCasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCasterAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomTemplateResult> CreateCustomTemplateOutcome;
			typedef std::future<CreateCustomTemplateOutcome> CreateCustomTemplateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateCustomTemplateRequest&, const CreateCustomTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveDelayConfigResult> CreateLiveDelayConfigOutcome;
			typedef std::future<CreateLiveDelayConfigOutcome> CreateLiveDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLiveDelayConfigRequest&, const CreateLiveDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveRealTimeLogDeliveryResult> CreateLiveRealTimeLogDeliveryOutcome;
			typedef std::future<CreateLiveRealTimeLogDeliveryOutcome> CreateLiveRealTimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLiveRealTimeLogDeliveryRequest&, const CreateLiveRealTimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRealTimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveStreamMonitorResult> CreateLiveStreamMonitorOutcome;
			typedef std::future<CreateLiveStreamMonitorOutcome> CreateLiveStreamMonitorOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLiveStreamMonitorRequest&, const CreateLiveStreamMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveStreamMonitorAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveStreamRecordIndexFilesResult> CreateLiveStreamRecordIndexFilesOutcome;
			typedef std::future<CreateLiveStreamRecordIndexFilesOutcome> CreateLiveStreamRecordIndexFilesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLiveStreamRecordIndexFilesRequest&, const CreateLiveStreamRecordIndexFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveStreamRecordIndexFilesAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveTranscodeTemplateResult> CreateLiveTranscodeTemplateOutcome;
			typedef std::future<CreateLiveTranscodeTemplateOutcome> CreateLiveTranscodeTemplateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateLiveTranscodeTemplateRequest&, const CreateLiveTranscodeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveTranscodeTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateMessageAppResult> CreateMessageAppOutcome;
			typedef std::future<CreateMessageAppOutcome> CreateMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateMessageAppRequest&, const CreateMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMessageAppAsyncHandler;
			typedef Outcome<Error, Model::CreateMessageGroupResult> CreateMessageGroupOutcome;
			typedef std::future<CreateMessageGroupOutcome> CreateMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateMessageGroupRequest&, const CreateMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateMixStreamResult> CreateMixStreamOutcome;
			typedef std::future<CreateMixStreamOutcome> CreateMixStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::CreateMixStreamRequest&, const CreateMixStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMixStreamAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterResult> DeleteCasterOutcome;
			typedef std::future<DeleteCasterOutcome> DeleteCasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterRequest&, const DeleteCasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterComponentResult> DeleteCasterComponentOutcome;
			typedef std::future<DeleteCasterComponentOutcome> DeleteCasterComponentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterComponentRequest&, const DeleteCasterComponentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterComponentAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterEpisodeResult> DeleteCasterEpisodeOutcome;
			typedef std::future<DeleteCasterEpisodeOutcome> DeleteCasterEpisodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterEpisodeRequest&, const DeleteCasterEpisodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterEpisodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterEpisodeGroupResult> DeleteCasterEpisodeGroupOutcome;
			typedef std::future<DeleteCasterEpisodeGroupOutcome> DeleteCasterEpisodeGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterEpisodeGroupRequest&, const DeleteCasterEpisodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterEpisodeGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterLayoutResult> DeleteCasterLayoutOutcome;
			typedef std::future<DeleteCasterLayoutOutcome> DeleteCasterLayoutOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterLayoutRequest&, const DeleteCasterLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterLayoutAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterProgramResult> DeleteCasterProgramOutcome;
			typedef std::future<DeleteCasterProgramOutcome> DeleteCasterProgramOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterProgramRequest&, const DeleteCasterProgramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterProgramAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterSceneConfigResult> DeleteCasterSceneConfigOutcome;
			typedef std::future<DeleteCasterSceneConfigOutcome> DeleteCasterSceneConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterSceneConfigRequest&, const DeleteCasterSceneConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterSceneConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteCasterVideoResourceResult> DeleteCasterVideoResourceOutcome;
			typedef std::future<DeleteCasterVideoResourceOutcome> DeleteCasterVideoResourceOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCasterVideoResourceRequest&, const DeleteCasterVideoResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCasterVideoResourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomTemplateResult> DeleteCustomTemplateOutcome;
			typedef std::future<DeleteCustomTemplateOutcome> DeleteCustomTemplateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteCustomTemplateRequest&, const DeleteCustomTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAppRecordConfigResult> DeleteLiveAppRecordConfigOutcome;
			typedef std::future<DeleteLiveAppRecordConfigOutcome> DeleteLiveAppRecordConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveAppRecordConfigRequest&, const DeleteLiveAppRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAppRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAppSnapshotConfigResult> DeleteLiveAppSnapshotConfigOutcome;
			typedef std::future<DeleteLiveAppSnapshotConfigOutcome> DeleteLiveAppSnapshotConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveAppSnapshotConfigRequest&, const DeleteLiveAppSnapshotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAppSnapshotConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAudioAuditConfigResult> DeleteLiveAudioAuditConfigOutcome;
			typedef std::future<DeleteLiveAudioAuditConfigOutcome> DeleteLiveAudioAuditConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveAudioAuditConfigRequest&, const DeleteLiveAudioAuditConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAudioAuditConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveAudioAuditNotifyConfigResult> DeleteLiveAudioAuditNotifyConfigOutcome;
			typedef std::future<DeleteLiveAudioAuditNotifyConfigOutcome> DeleteLiveAudioAuditNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveAudioAuditNotifyConfigRequest&, const DeleteLiveAudioAuditNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAudioAuditNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveCenterTransferResult> DeleteLiveCenterTransferOutcome;
			typedef std::future<DeleteLiveCenterTransferOutcome> DeleteLiveCenterTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveCenterTransferRequest&, const DeleteLiveCenterTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveCenterTransferAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveDelayConfigResult> DeleteLiveDelayConfigOutcome;
			typedef std::future<DeleteLiveDelayConfigOutcome> DeleteLiveDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveDelayConfigRequest&, const DeleteLiveDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveDetectNotifyConfigResult> DeleteLiveDetectNotifyConfigOutcome;
			typedef std::future<DeleteLiveDetectNotifyConfigOutcome> DeleteLiveDetectNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveDetectNotifyConfigRequest&, const DeleteLiveDetectNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDetectNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveDomainResult> DeleteLiveDomainOutcome;
			typedef std::future<DeleteLiveDomainOutcome> DeleteLiveDomainOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveDomainRequest&, const DeleteLiveDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveDomainMappingResult> DeleteLiveDomainMappingOutcome;
			typedef std::future<DeleteLiveDomainMappingOutcome> DeleteLiveDomainMappingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveDomainMappingRequest&, const DeleteLiveDomainMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDomainMappingAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveDomainPlayMappingResult> DeleteLiveDomainPlayMappingOutcome;
			typedef std::future<DeleteLiveDomainPlayMappingOutcome> DeleteLiveDomainPlayMappingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveDomainPlayMappingRequest&, const DeleteLiveDomainPlayMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDomainPlayMappingAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveEdgeTransferResult> DeleteLiveEdgeTransferOutcome;
			typedef std::future<DeleteLiveEdgeTransferOutcome> DeleteLiveEdgeTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveEdgeTransferRequest&, const DeleteLiveEdgeTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveEdgeTransferAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveLazyPullStreamInfoConfigResult> DeleteLiveLazyPullStreamInfoConfigOutcome;
			typedef std::future<DeleteLiveLazyPullStreamInfoConfigOutcome> DeleteLiveLazyPullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveLazyPullStreamInfoConfigRequest&, const DeleteLiveLazyPullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveLazyPullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLivePullStreamInfoConfigResult> DeleteLivePullStreamInfoConfigOutcome;
			typedef std::future<DeleteLivePullStreamInfoConfigOutcome> DeleteLivePullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLivePullStreamInfoConfigRequest&, const DeleteLivePullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLivePullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveRealTimeLogLogstoreResult> DeleteLiveRealTimeLogLogstoreOutcome;
			typedef std::future<DeleteLiveRealTimeLogLogstoreOutcome> DeleteLiveRealTimeLogLogstoreOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveRealTimeLogLogstoreRequest&, const DeleteLiveRealTimeLogLogstoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRealTimeLogLogstoreAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveRealtimeLogDeliveryResult> DeleteLiveRealtimeLogDeliveryOutcome;
			typedef std::future<DeleteLiveRealtimeLogDeliveryOutcome> DeleteLiveRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveRealtimeLogDeliveryRequest&, const DeleteLiveRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveRecordNotifyConfigResult> DeleteLiveRecordNotifyConfigOutcome;
			typedef std::future<DeleteLiveRecordNotifyConfigOutcome> DeleteLiveRecordNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordNotifyConfigRequest&, const DeleteLiveRecordNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveRecordVodConfigResult> DeleteLiveRecordVodConfigOutcome;
			typedef std::future<DeleteLiveRecordVodConfigOutcome> DeleteLiveRecordVodConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordVodConfigRequest&, const DeleteLiveRecordVodConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordVodConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveSnapshotDetectPornConfigResult> DeleteLiveSnapshotDetectPornConfigOutcome;
			typedef std::future<DeleteLiveSnapshotDetectPornConfigOutcome> DeleteLiveSnapshotDetectPornConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveSnapshotDetectPornConfigRequest&, const DeleteLiveSnapshotDetectPornConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSnapshotDetectPornConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveSnapshotNotifyConfigResult> DeleteLiveSnapshotNotifyConfigOutcome;
			typedef std::future<DeleteLiveSnapshotNotifyConfigOutcome> DeleteLiveSnapshotNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveSnapshotNotifyConfigRequest&, const DeleteLiveSnapshotNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSnapshotNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveSpecificStagingConfigResult> DeleteLiveSpecificStagingConfigOutcome;
			typedef std::future<DeleteLiveSpecificStagingConfigOutcome> DeleteLiveSpecificStagingConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveSpecificStagingConfigRequest&, const DeleteLiveSpecificStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSpecificStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamMonitorResult> DeleteLiveStreamMonitorOutcome;
			typedef std::future<DeleteLiveStreamMonitorOutcome> DeleteLiveStreamMonitorOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamMonitorRequest&, const DeleteLiveStreamMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamMonitorAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamRecordIndexFilesResult> DeleteLiveStreamRecordIndexFilesOutcome;
			typedef std::future<DeleteLiveStreamRecordIndexFilesOutcome> DeleteLiveStreamRecordIndexFilesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamRecordIndexFilesRequest&, const DeleteLiveStreamRecordIndexFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamRecordIndexFilesAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamTranscodeResult> DeleteLiveStreamTranscodeOutcome;
			typedef std::future<DeleteLiveStreamTranscodeOutcome> DeleteLiveStreamTranscodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamTranscodeRequest&, const DeleteLiveStreamTranscodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamTranscodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamWatermarkResult> DeleteLiveStreamWatermarkOutcome;
			typedef std::future<DeleteLiveStreamWatermarkOutcome> DeleteLiveStreamWatermarkOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamWatermarkRequest&, const DeleteLiveStreamWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamWatermarkAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamWatermarkRuleResult> DeleteLiveStreamWatermarkRuleOutcome;
			typedef std::future<DeleteLiveStreamWatermarkRuleOutcome> DeleteLiveStreamWatermarkRuleOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamWatermarkRuleRequest&, const DeleteLiveStreamWatermarkRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamWatermarkRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveStreamsNotifyUrlConfigResult> DeleteLiveStreamsNotifyUrlConfigOutcome;
			typedef std::future<DeleteLiveStreamsNotifyUrlConfigOutcome> DeleteLiveStreamsNotifyUrlConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteLiveStreamsNotifyUrlConfigRequest&, const DeleteLiveStreamsNotifyUrlConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveStreamsNotifyUrlConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteMessageAppResult> DeleteMessageAppOutcome;
			typedef std::future<DeleteMessageAppOutcome> DeleteMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteMessageAppRequest&, const DeleteMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMessageAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteMixStreamResult> DeleteMixStreamOutcome;
			typedef std::future<DeleteMixStreamOutcome> DeleteMixStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteMixStreamRequest&, const DeleteMixStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMixStreamAsyncHandler;
			typedef Outcome<Error, Model::DeleteMultiRateConfigResult> DeleteMultiRateConfigOutcome;
			typedef std::future<DeleteMultiRateConfigOutcome> DeleteMultiRateConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteMultiRateConfigRequest&, const DeleteMultiRateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMultiRateConfigAsyncHandler;
			typedef Outcome<Error, Model::DeletePlaylistResult> DeletePlaylistOutcome;
			typedef std::future<DeletePlaylistOutcome> DeletePlaylistOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeletePlaylistRequest&, const DeletePlaylistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePlaylistAsyncHandler;
			typedef Outcome<Error, Model::DeletePlaylistItemsResult> DeletePlaylistItemsOutcome;
			typedef std::future<DeletePlaylistItemsOutcome> DeletePlaylistItemsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeletePlaylistItemsRequest&, const DeletePlaylistItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePlaylistItemsAsyncHandler;
			typedef Outcome<Error, Model::DeleteRoomResult> DeleteRoomOutcome;
			typedef std::future<DeleteRoomOutcome> DeleteRoomOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteRoomRequest&, const DeleteRoomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoomAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotCallbackAuthResult> DeleteSnapshotCallbackAuthOutcome;
			typedef std::future<DeleteSnapshotCallbackAuthOutcome> DeleteSnapshotCallbackAuthOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteSnapshotCallbackAuthRequest&, const DeleteSnapshotCallbackAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotCallbackAuthAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotFilesResult> DeleteSnapshotFilesOutcome;
			typedef std::future<DeleteSnapshotFilesOutcome> DeleteSnapshotFilesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteSnapshotFilesRequest&, const DeleteSnapshotFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotFilesAsyncHandler;
			typedef Outcome<Error, Model::DeleteStudioLayoutResult> DeleteStudioLayoutOutcome;
			typedef std::future<DeleteStudioLayoutOutcome> DeleteStudioLayoutOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DeleteStudioLayoutRequest&, const DeleteStudioLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStudioLayoutAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoShowListTasksResult> DescribeAutoShowListTasksOutcome;
			typedef std::future<DescribeAutoShowListTasksOutcome> DescribeAutoShowListTasksOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeAutoShowListTasksRequest&, const DescribeAutoShowListTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoShowListTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterChannelsResult> DescribeCasterChannelsOutcome;
			typedef std::future<DescribeCasterChannelsOutcome> DescribeCasterChannelsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterChannelsRequest&, const DescribeCasterChannelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterChannelsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterComponentsResult> DescribeCasterComponentsOutcome;
			typedef std::future<DescribeCasterComponentsOutcome> DescribeCasterComponentsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterComponentsRequest&, const DescribeCasterComponentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterComponentsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterConfigResult> DescribeCasterConfigOutcome;
			typedef std::future<DescribeCasterConfigOutcome> DescribeCasterConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterConfigRequest&, const DescribeCasterConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterLayoutsResult> DescribeCasterLayoutsOutcome;
			typedef std::future<DescribeCasterLayoutsOutcome> DescribeCasterLayoutsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterLayoutsRequest&, const DescribeCasterLayoutsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterLayoutsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterProgramResult> DescribeCasterProgramOutcome;
			typedef std::future<DescribeCasterProgramOutcome> DescribeCasterProgramOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterProgramRequest&, const DescribeCasterProgramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterProgramAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterSceneAudioResult> DescribeCasterSceneAudioOutcome;
			typedef std::future<DescribeCasterSceneAudioOutcome> DescribeCasterSceneAudioOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterSceneAudioRequest&, const DescribeCasterSceneAudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterSceneAudioAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterScenesResult> DescribeCasterScenesOutcome;
			typedef std::future<DescribeCasterScenesOutcome> DescribeCasterScenesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterScenesRequest&, const DescribeCasterScenesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterScenesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterStreamUrlResult> DescribeCasterStreamUrlOutcome;
			typedef std::future<DescribeCasterStreamUrlOutcome> DescribeCasterStreamUrlOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterStreamUrlRequest&, const DescribeCasterStreamUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterStreamUrlAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterSyncGroupResult> DescribeCasterSyncGroupOutcome;
			typedef std::future<DescribeCasterSyncGroupOutcome> DescribeCasterSyncGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterSyncGroupRequest&, const DescribeCasterSyncGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterSyncGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeCasterVideoResourcesResult> DescribeCasterVideoResourcesOutcome;
			typedef std::future<DescribeCasterVideoResourcesOutcome> DescribeCasterVideoResourcesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCasterVideoResourcesRequest&, const DescribeCasterVideoResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCasterVideoResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCastersResult> DescribeCastersOutcome;
			typedef std::future<DescribeCastersOutcome> DescribeCastersOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeCastersRequest&, const DescribeCastersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCastersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainUsageDataResult> DescribeDomainUsageDataOutcome;
			typedef std::future<DescribeDomainUsageDataOutcome> DescribeDomainUsageDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeDomainUsageDataRequest&, const DescribeDomainUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainWithIntegrityResult> DescribeDomainWithIntegrityOutcome;
			typedef std::future<DescribeDomainWithIntegrityOutcome> DescribeDomainWithIntegrityOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeDomainWithIntegrityRequest&, const DescribeDomainWithIntegrityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainWithIntegrityAsyncHandler;
			typedef Outcome<Error, Model::DescribeForbidPushStreamRoomListResult> DescribeForbidPushStreamRoomListOutcome;
			typedef std::future<DescribeForbidPushStreamRoomListOutcome> DescribeForbidPushStreamRoomListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeForbidPushStreamRoomListRequest&, const DescribeForbidPushStreamRoomListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForbidPushStreamRoomListAsyncHandler;
			typedef Outcome<Error, Model::DescribeHlsLiveStreamRealTimeBpsDataResult> DescribeHlsLiveStreamRealTimeBpsDataOutcome;
			typedef std::future<DescribeHlsLiveStreamRealTimeBpsDataOutcome> DescribeHlsLiveStreamRealTimeBpsDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeHlsLiveStreamRealTimeBpsDataRequest&, const DescribeHlsLiveStreamRealTimeBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHlsLiveStreamRealTimeBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveAudioAuditConfigResult> DescribeLiveAudioAuditConfigOutcome;
			typedef std::future<DescribeLiveAudioAuditConfigOutcome> DescribeLiveAudioAuditConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveAudioAuditConfigRequest&, const DescribeLiveAudioAuditConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAudioAuditConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveAudioAuditNotifyConfigResult> DescribeLiveAudioAuditNotifyConfigOutcome;
			typedef std::future<DescribeLiveAudioAuditNotifyConfigOutcome> DescribeLiveAudioAuditNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveAudioAuditNotifyConfigRequest&, const DescribeLiveAudioAuditNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveAudioAuditNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveCenterTransferResult> DescribeLiveCenterTransferOutcome;
			typedef std::future<DescribeLiveCenterTransferOutcome> DescribeLiveCenterTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveCenterTransferRequest&, const DescribeLiveCenterTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCenterTransferAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveCertificateDetailResult> DescribeLiveCertificateDetailOutcome;
			typedef std::future<DescribeLiveCertificateDetailOutcome> DescribeLiveCertificateDetailOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveCertificateDetailRequest&, const DescribeLiveCertificateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCertificateDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveCertificateListResult> DescribeLiveCertificateListOutcome;
			typedef std::future<DescribeLiveCertificateListOutcome> DescribeLiveCertificateListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveCertificateListRequest&, const DescribeLiveCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDelayConfigResult> DescribeLiveDelayConfigOutcome;
			typedef std::future<DescribeLiveDelayConfigOutcome> DescribeLiveDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDelayConfigRequest&, const DescribeLiveDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDelayedStreamingUsageResult> DescribeLiveDelayedStreamingUsageOutcome;
			typedef std::future<DescribeLiveDelayedStreamingUsageOutcome> DescribeLiveDelayedStreamingUsageOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDelayedStreamingUsageRequest&, const DescribeLiveDelayedStreamingUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDelayedStreamingUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDetectNotifyConfigResult> DescribeLiveDetectNotifyConfigOutcome;
			typedef std::future<DescribeLiveDetectNotifyConfigOutcome> DescribeLiveDetectNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDetectNotifyConfigRequest&, const DescribeLiveDetectNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDetectNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDetectPornDataResult> DescribeLiveDetectPornDataOutcome;
			typedef std::future<DescribeLiveDetectPornDataOutcome> DescribeLiveDetectPornDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDetectPornDataRequest&, const DescribeLiveDetectPornDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDetectPornDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainBpsDataResult> DescribeLiveDomainBpsDataOutcome;
			typedef std::future<DescribeLiveDomainBpsDataOutcome> DescribeLiveDomainBpsDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainBpsDataRequest&, const DescribeLiveDomainBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainBpsDataByLayerResult> DescribeLiveDomainBpsDataByLayerOutcome;
			typedef std::future<DescribeLiveDomainBpsDataByLayerOutcome> DescribeLiveDomainBpsDataByLayerOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainBpsDataByLayerRequest&, const DescribeLiveDomainBpsDataByLayerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainBpsDataByLayerAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainBpsDataByTimeStampResult> DescribeLiveDomainBpsDataByTimeStampOutcome;
			typedef std::future<DescribeLiveDomainBpsDataByTimeStampOutcome> DescribeLiveDomainBpsDataByTimeStampOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainBpsDataByTimeStampRequest&, const DescribeLiveDomainBpsDataByTimeStampOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainBpsDataByTimeStampAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainCertificateInfoResult> DescribeLiveDomainCertificateInfoOutcome;
			typedef std::future<DescribeLiveDomainCertificateInfoOutcome> DescribeLiveDomainCertificateInfoOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainCertificateInfoRequest&, const DescribeLiveDomainCertificateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainCertificateInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainConfigsResult> DescribeLiveDomainConfigsOutcome;
			typedef std::future<DescribeLiveDomainConfigsOutcome> DescribeLiveDomainConfigsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainConfigsRequest&, const DescribeLiveDomainConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainDetailResult> DescribeLiveDomainDetailOutcome;
			typedef std::future<DescribeLiveDomainDetailOutcome> DescribeLiveDomainDetailOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainDetailRequest&, const DescribeLiveDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainFrameRateAndBitRateDataResult> DescribeLiveDomainFrameRateAndBitRateDataOutcome;
			typedef std::future<DescribeLiveDomainFrameRateAndBitRateDataOutcome> DescribeLiveDomainFrameRateAndBitRateDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainFrameRateAndBitRateDataRequest&, const DescribeLiveDomainFrameRateAndBitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainFrameRateAndBitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainLimitResult> DescribeLiveDomainLimitOutcome;
			typedef std::future<DescribeLiveDomainLimitOutcome> DescribeLiveDomainLimitOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainLimitRequest&, const DescribeLiveDomainLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainLimitAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainLogResult> DescribeLiveDomainLogOutcome;
			typedef std::future<DescribeLiveDomainLogOutcome> DescribeLiveDomainLogOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainLogRequest&, const DescribeLiveDomainLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainMappingResult> DescribeLiveDomainMappingOutcome;
			typedef std::future<DescribeLiveDomainMappingOutcome> DescribeLiveDomainMappingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainMappingRequest&, const DescribeLiveDomainMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainMappingAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainOnlineUserNumResult> DescribeLiveDomainOnlineUserNumOutcome;
			typedef std::future<DescribeLiveDomainOnlineUserNumOutcome> DescribeLiveDomainOnlineUserNumOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainOnlineUserNumRequest&, const DescribeLiveDomainOnlineUserNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainOnlineUserNumAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainPushBpsDataResult> DescribeLiveDomainPushBpsDataOutcome;
			typedef std::future<DescribeLiveDomainPushBpsDataOutcome> DescribeLiveDomainPushBpsDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainPushBpsDataRequest&, const DescribeLiveDomainPushBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainPushBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainPushTrafficDataResult> DescribeLiveDomainPushTrafficDataOutcome;
			typedef std::future<DescribeLiveDomainPushTrafficDataOutcome> DescribeLiveDomainPushTrafficDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainPushTrafficDataRequest&, const DescribeLiveDomainPushTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainPushTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainPvUvDataResult> DescribeLiveDomainPvUvDataOutcome;
			typedef std::future<DescribeLiveDomainPvUvDataOutcome> DescribeLiveDomainPvUvDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainPvUvDataRequest&, const DescribeLiveDomainPvUvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainPvUvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainRealTimeBpsDataResult> DescribeLiveDomainRealTimeBpsDataOutcome;
			typedef std::future<DescribeLiveDomainRealTimeBpsDataOutcome> DescribeLiveDomainRealTimeBpsDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRealTimeBpsDataRequest&, const DescribeLiveDomainRealTimeBpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRealTimeBpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainRealTimeHttpCodeDataResult> DescribeLiveDomainRealTimeHttpCodeDataOutcome;
			typedef std::future<DescribeLiveDomainRealTimeHttpCodeDataOutcome> DescribeLiveDomainRealTimeHttpCodeDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRealTimeHttpCodeDataRequest&, const DescribeLiveDomainRealTimeHttpCodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRealTimeHttpCodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainRealTimeTrafficDataResult> DescribeLiveDomainRealTimeTrafficDataOutcome;
			typedef std::future<DescribeLiveDomainRealTimeTrafficDataOutcome> DescribeLiveDomainRealTimeTrafficDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRealTimeTrafficDataRequest&, const DescribeLiveDomainRealTimeTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRealTimeTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainRealtimeLogDeliveryResult> DescribeLiveDomainRealtimeLogDeliveryOutcome;
			typedef std::future<DescribeLiveDomainRealtimeLogDeliveryOutcome> DescribeLiveDomainRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRealtimeLogDeliveryRequest&, const DescribeLiveDomainRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainRecordDataResult> DescribeLiveDomainRecordDataOutcome;
			typedef std::future<DescribeLiveDomainRecordDataOutcome> DescribeLiveDomainRecordDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRecordDataRequest&, const DescribeLiveDomainRecordDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRecordDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainRecordUsageDataResult> DescribeLiveDomainRecordUsageDataOutcome;
			typedef std::future<DescribeLiveDomainRecordUsageDataOutcome> DescribeLiveDomainRecordUsageDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRecordUsageDataRequest&, const DescribeLiveDomainRecordUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRecordUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainSnapshotDataResult> DescribeLiveDomainSnapshotDataOutcome;
			typedef std::future<DescribeLiveDomainSnapshotDataOutcome> DescribeLiveDomainSnapshotDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainSnapshotDataRequest&, const DescribeLiveDomainSnapshotDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainSnapshotDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainStagingConfigResult> DescribeLiveDomainStagingConfigOutcome;
			typedef std::future<DescribeLiveDomainStagingConfigOutcome> DescribeLiveDomainStagingConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainStagingConfigRequest&, const DescribeLiveDomainStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainStreamTranscodeDataResult> DescribeLiveDomainStreamTranscodeDataOutcome;
			typedef std::future<DescribeLiveDomainStreamTranscodeDataOutcome> DescribeLiveDomainStreamTranscodeDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainStreamTranscodeDataRequest&, const DescribeLiveDomainStreamTranscodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainStreamTranscodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainTimeShiftDataResult> DescribeLiveDomainTimeShiftDataOutcome;
			typedef std::future<DescribeLiveDomainTimeShiftDataOutcome> DescribeLiveDomainTimeShiftDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainTimeShiftDataRequest&, const DescribeLiveDomainTimeShiftDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainTimeShiftDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainTrafficDataResult> DescribeLiveDomainTrafficDataOutcome;
			typedef std::future<DescribeLiveDomainTrafficDataOutcome> DescribeLiveDomainTrafficDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainTrafficDataRequest&, const DescribeLiveDomainTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDomainTranscodeDataResult> DescribeLiveDomainTranscodeDataOutcome;
			typedef std::future<DescribeLiveDomainTranscodeDataOutcome> DescribeLiveDomainTranscodeDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainTranscodeDataRequest&, const DescribeLiveDomainTranscodeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainTranscodeDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveDrmUsageDataResult> DescribeLiveDrmUsageDataOutcome;
			typedef std::future<DescribeLiveDrmUsageDataOutcome> DescribeLiveDrmUsageDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveDrmUsageDataRequest&, const DescribeLiveDrmUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDrmUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveEdgeTransferResult> DescribeLiveEdgeTransferOutcome;
			typedef std::future<DescribeLiveEdgeTransferOutcome> DescribeLiveEdgeTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveEdgeTransferRequest&, const DescribeLiveEdgeTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveEdgeTransferAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveLazyPullStreamConfigResult> DescribeLiveLazyPullStreamConfigOutcome;
			typedef std::future<DescribeLiveLazyPullStreamConfigOutcome> DescribeLiveLazyPullStreamConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveLazyPullStreamConfigRequest&, const DescribeLiveLazyPullStreamConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveLazyPullStreamConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveProducerUsageDataResult> DescribeLiveProducerUsageDataOutcome;
			typedef std::future<DescribeLiveProducerUsageDataOutcome> DescribeLiveProducerUsageDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveProducerUsageDataRequest&, const DescribeLiveProducerUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveProducerUsageDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLivePullStreamConfigResult> DescribeLivePullStreamConfigOutcome;
			typedef std::future<DescribeLivePullStreamConfigOutcome> DescribeLivePullStreamConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLivePullStreamConfigRequest&, const DescribeLivePullStreamConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePullStreamConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRealtimeDeliveryAccResult> DescribeLiveRealtimeDeliveryAccOutcome;
			typedef std::future<DescribeLiveRealtimeDeliveryAccOutcome> DescribeLiveRealtimeDeliveryAccOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveRealtimeDeliveryAccRequest&, const DescribeLiveRealtimeDeliveryAccOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRealtimeDeliveryAccAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRealtimeLogAuthorizedResult> DescribeLiveRealtimeLogAuthorizedOutcome;
			typedef std::future<DescribeLiveRealtimeLogAuthorizedOutcome> DescribeLiveRealtimeLogAuthorizedOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveRealtimeLogAuthorizedRequest&, const DescribeLiveRealtimeLogAuthorizedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRealtimeLogAuthorizedAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRecordConfigResult> DescribeLiveRecordConfigOutcome;
			typedef std::future<DescribeLiveRecordConfigOutcome> DescribeLiveRecordConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordConfigRequest&, const DescribeLiveRecordConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRecordNotifyConfigResult> DescribeLiveRecordNotifyConfigOutcome;
			typedef std::future<DescribeLiveRecordNotifyConfigOutcome> DescribeLiveRecordNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordNotifyConfigRequest&, const DescribeLiveRecordNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRecordNotifyRecordsResult> DescribeLiveRecordNotifyRecordsOutcome;
			typedef std::future<DescribeLiveRecordNotifyRecordsOutcome> DescribeLiveRecordNotifyRecordsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordNotifyRecordsRequest&, const DescribeLiveRecordNotifyRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordNotifyRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveRecordVodConfigsResult> DescribeLiveRecordVodConfigsOutcome;
			typedef std::future<DescribeLiveRecordVodConfigsOutcome> DescribeLiveRecordVodConfigsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordVodConfigsRequest&, const DescribeLiveRecordVodConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordVodConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveShiftConfigsResult> DescribeLiveShiftConfigsOutcome;
			typedef std::future<DescribeLiveShiftConfigsOutcome> DescribeLiveShiftConfigsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveShiftConfigsRequest&, const DescribeLiveShiftConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveShiftConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveSnapshotConfigResult> DescribeLiveSnapshotConfigOutcome;
			typedef std::future<DescribeLiveSnapshotConfigOutcome> DescribeLiveSnapshotConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotConfigRequest&, const DescribeLiveSnapshotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveSnapshotDetectPornConfigResult> DescribeLiveSnapshotDetectPornConfigOutcome;
			typedef std::future<DescribeLiveSnapshotDetectPornConfigOutcome> DescribeLiveSnapshotDetectPornConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotDetectPornConfigRequest&, const DescribeLiveSnapshotDetectPornConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotDetectPornConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveSnapshotNotifyConfigResult> DescribeLiveSnapshotNotifyConfigOutcome;
			typedef std::future<DescribeLiveSnapshotNotifyConfigOutcome> DescribeLiveSnapshotNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotNotifyConfigRequest&, const DescribeLiveSnapshotNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamAuthCheckingResult> DescribeLiveStreamAuthCheckingOutcome;
			typedef std::future<DescribeLiveStreamAuthCheckingOutcome> DescribeLiveStreamAuthCheckingOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamAuthCheckingRequest&, const DescribeLiveStreamAuthCheckingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamAuthCheckingAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamBitRateDataResult> DescribeLiveStreamBitRateDataOutcome;
			typedef std::future<DescribeLiveStreamBitRateDataOutcome> DescribeLiveStreamBitRateDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamBitRateDataRequest&, const DescribeLiveStreamBitRateDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamBitRateDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamCountResult> DescribeLiveStreamCountOutcome;
			typedef std::future<DescribeLiveStreamCountOutcome> DescribeLiveStreamCountOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamCountRequest&, const DescribeLiveStreamCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamDelayConfigResult> DescribeLiveStreamDelayConfigOutcome;
			typedef std::future<DescribeLiveStreamDelayConfigOutcome> DescribeLiveStreamDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamDelayConfigRequest&, const DescribeLiveStreamDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamHistoryUserNumResult> DescribeLiveStreamHistoryUserNumOutcome;
			typedef std::future<DescribeLiveStreamHistoryUserNumOutcome> DescribeLiveStreamHistoryUserNumOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamHistoryUserNumRequest&, const DescribeLiveStreamHistoryUserNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamHistoryUserNumAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamMetricDetailDataResult> DescribeLiveStreamMetricDetailDataOutcome;
			typedef std::future<DescribeLiveStreamMetricDetailDataOutcome> DescribeLiveStreamMetricDetailDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamMetricDetailDataRequest&, const DescribeLiveStreamMetricDetailDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamMetricDetailDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamMonitorListResult> DescribeLiveStreamMonitorListOutcome;
			typedef std::future<DescribeLiveStreamMonitorListOutcome> DescribeLiveStreamMonitorListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamMonitorListRequest&, const DescribeLiveStreamMonitorListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamMonitorListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamOptimizedFeatureConfigResult> DescribeLiveStreamOptimizedFeatureConfigOutcome;
			typedef std::future<DescribeLiveStreamOptimizedFeatureConfigOutcome> DescribeLiveStreamOptimizedFeatureConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamOptimizedFeatureConfigRequest&, const DescribeLiveStreamOptimizedFeatureConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamOptimizedFeatureConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRecordContentResult> DescribeLiveStreamRecordContentOutcome;
			typedef std::future<DescribeLiveStreamRecordContentOutcome> DescribeLiveStreamRecordContentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamRecordContentRequest&, const DescribeLiveStreamRecordContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRecordContentAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRecordIndexFileResult> DescribeLiveStreamRecordIndexFileOutcome;
			typedef std::future<DescribeLiveStreamRecordIndexFileOutcome> DescribeLiveStreamRecordIndexFileOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamRecordIndexFileRequest&, const DescribeLiveStreamRecordIndexFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRecordIndexFileAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamRecordIndexFilesResult> DescribeLiveStreamRecordIndexFilesOutcome;
			typedef std::future<DescribeLiveStreamRecordIndexFilesOutcome> DescribeLiveStreamRecordIndexFilesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamRecordIndexFilesRequest&, const DescribeLiveStreamRecordIndexFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamRecordIndexFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamSnapshotInfoResult> DescribeLiveStreamSnapshotInfoOutcome;
			typedef std::future<DescribeLiveStreamSnapshotInfoOutcome> DescribeLiveStreamSnapshotInfoOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamSnapshotInfoRequest&, const DescribeLiveStreamSnapshotInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamSnapshotInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamStateResult> DescribeLiveStreamStateOutcome;
			typedef std::future<DescribeLiveStreamStateOutcome> DescribeLiveStreamStateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamStateRequest&, const DescribeLiveStreamStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamStateAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamTranscodeInfoResult> DescribeLiveStreamTranscodeInfoOutcome;
			typedef std::future<DescribeLiveStreamTranscodeInfoOutcome> DescribeLiveStreamTranscodeInfoOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamTranscodeInfoRequest&, const DescribeLiveStreamTranscodeInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamTranscodeInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamTranscodeStreamNumResult> DescribeLiveStreamTranscodeStreamNumOutcome;
			typedef std::future<DescribeLiveStreamTranscodeStreamNumOutcome> DescribeLiveStreamTranscodeStreamNumOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamTranscodeStreamNumRequest&, const DescribeLiveStreamTranscodeStreamNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamTranscodeStreamNumAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamWatermarkRulesResult> DescribeLiveStreamWatermarkRulesOutcome;
			typedef std::future<DescribeLiveStreamWatermarkRulesOutcome> DescribeLiveStreamWatermarkRulesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamWatermarkRulesRequest&, const DescribeLiveStreamWatermarkRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamWatermarkRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamWatermarksResult> DescribeLiveStreamWatermarksOutcome;
			typedef std::future<DescribeLiveStreamWatermarksOutcome> DescribeLiveStreamWatermarksOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamWatermarksRequest&, const DescribeLiveStreamWatermarksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamWatermarksAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsBlockListResult> DescribeLiveStreamsBlockListOutcome;
			typedef std::future<DescribeLiveStreamsBlockListOutcome> DescribeLiveStreamsBlockListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsBlockListRequest&, const DescribeLiveStreamsBlockListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsBlockListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsControlHistoryResult> DescribeLiveStreamsControlHistoryOutcome;
			typedef std::future<DescribeLiveStreamsControlHistoryOutcome> DescribeLiveStreamsControlHistoryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsControlHistoryRequest&, const DescribeLiveStreamsControlHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsControlHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsNotifyRecordsResult> DescribeLiveStreamsNotifyRecordsOutcome;
			typedef std::future<DescribeLiveStreamsNotifyRecordsOutcome> DescribeLiveStreamsNotifyRecordsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsNotifyRecordsRequest&, const DescribeLiveStreamsNotifyRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsNotifyRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsNotifyUrlConfigResult> DescribeLiveStreamsNotifyUrlConfigOutcome;
			typedef std::future<DescribeLiveStreamsNotifyUrlConfigOutcome> DescribeLiveStreamsNotifyUrlConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsNotifyUrlConfigRequest&, const DescribeLiveStreamsNotifyUrlConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsNotifyUrlConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsOnlineListResult> DescribeLiveStreamsOnlineListOutcome;
			typedef std::future<DescribeLiveStreamsOnlineListOutcome> DescribeLiveStreamsOnlineListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsOnlineListRequest&, const DescribeLiveStreamsOnlineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsOnlineListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveStreamsPublishListResult> DescribeLiveStreamsPublishListOutcome;
			typedef std::future<DescribeLiveStreamsPublishListOutcome> DescribeLiveStreamsPublishListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamsPublishListRequest&, const DescribeLiveStreamsPublishListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamsPublishListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveTagResourcesResult> DescribeLiveTagResourcesOutcome;
			typedef std::future<DescribeLiveTagResourcesOutcome> DescribeLiveTagResourcesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveTagResourcesRequest&, const DescribeLiveTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveTopDomainsByFlowResult> DescribeLiveTopDomainsByFlowOutcome;
			typedef std::future<DescribeLiveTopDomainsByFlowOutcome> DescribeLiveTopDomainsByFlowOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveTopDomainsByFlowRequest&, const DescribeLiveTopDomainsByFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTopDomainsByFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveUserBillPredictionResult> DescribeLiveUserBillPredictionOutcome;
			typedef std::future<DescribeLiveUserBillPredictionOutcome> DescribeLiveUserBillPredictionOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveUserBillPredictionRequest&, const DescribeLiveUserBillPredictionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveUserBillPredictionAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveUserDomainsResult> DescribeLiveUserDomainsOutcome;
			typedef std::future<DescribeLiveUserDomainsOutcome> DescribeLiveUserDomainsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveUserDomainsRequest&, const DescribeLiveUserDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveUserDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLiveUserTagsResult> DescribeLiveUserTagsOutcome;
			typedef std::future<DescribeLiveUserTagsOutcome> DescribeLiveUserTagsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeLiveUserTagsRequest&, const DescribeLiveUserTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveUserTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterLiveInteractionDauResult> DescribeMeterLiveInteractionDauOutcome;
			typedef std::future<DescribeMeterLiveInteractionDauOutcome> DescribeMeterLiveInteractionDauOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeMeterLiveInteractionDauRequest&, const DescribeMeterLiveInteractionDauOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterLiveInteractionDauAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeterLiveRtcDurationResult> DescribeMeterLiveRtcDurationOutcome;
			typedef std::future<DescribeMeterLiveRtcDurationOutcome> DescribeMeterLiveRtcDurationOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeMeterLiveRtcDurationRequest&, const DescribeMeterLiveRtcDurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeterLiveRtcDurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeMixStreamListResult> DescribeMixStreamListOutcome;
			typedef std::future<DescribeMixStreamListOutcome> DescribeMixStreamListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeMixStreamListRequest&, const DescribeMixStreamListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMixStreamListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRTSNativeSDKFirstFrameCostResult> DescribeRTSNativeSDKFirstFrameCostOutcome;
			typedef std::future<DescribeRTSNativeSDKFirstFrameCostOutcome> DescribeRTSNativeSDKFirstFrameCostOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRTSNativeSDKFirstFrameCostRequest&, const DescribeRTSNativeSDKFirstFrameCostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRTSNativeSDKFirstFrameCostAsyncHandler;
			typedef Outcome<Error, Model::DescribeRTSNativeSDKFirstFrameDelayResult> DescribeRTSNativeSDKFirstFrameDelayOutcome;
			typedef std::future<DescribeRTSNativeSDKFirstFrameDelayOutcome> DescribeRTSNativeSDKFirstFrameDelayOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRTSNativeSDKFirstFrameDelayRequest&, const DescribeRTSNativeSDKFirstFrameDelayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRTSNativeSDKFirstFrameDelayAsyncHandler;
			typedef Outcome<Error, Model::DescribeRTSNativeSDKPlayFailStatusResult> DescribeRTSNativeSDKPlayFailStatusOutcome;
			typedef std::future<DescribeRTSNativeSDKPlayFailStatusOutcome> DescribeRTSNativeSDKPlayFailStatusOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRTSNativeSDKPlayFailStatusRequest&, const DescribeRTSNativeSDKPlayFailStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRTSNativeSDKPlayFailStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeRTSNativeSDKPlayTimeResult> DescribeRTSNativeSDKPlayTimeOutcome;
			typedef std::future<DescribeRTSNativeSDKPlayTimeOutcome> DescribeRTSNativeSDKPlayTimeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRTSNativeSDKPlayTimeRequest&, const DescribeRTSNativeSDKPlayTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRTSNativeSDKPlayTimeAsyncHandler;
			typedef Outcome<Error, Model::DescribeRTSNativeSDKVvDataResult> DescribeRTSNativeSDKVvDataOutcome;
			typedef std::future<DescribeRTSNativeSDKVvDataOutcome> DescribeRTSNativeSDKVvDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRTSNativeSDKVvDataRequest&, const DescribeRTSNativeSDKVvDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRTSNativeSDKVvDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeRoomKickoutUserListResult> DescribeRoomKickoutUserListOutcome;
			typedef std::future<DescribeRoomKickoutUserListOutcome> DescribeRoomKickoutUserListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRoomKickoutUserListRequest&, const DescribeRoomKickoutUserListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomKickoutUserListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRoomListResult> DescribeRoomListOutcome;
			typedef std::future<DescribeRoomListOutcome> DescribeRoomListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRoomListRequest&, const DescribeRoomListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRoomStatusResult> DescribeRoomStatusOutcome;
			typedef std::future<DescribeRoomStatusOutcome> DescribeRoomStatusOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeRoomStatusRequest&, const DescribeRoomStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeShowListResult> DescribeShowListOutcome;
			typedef std::future<DescribeShowListOutcome> DescribeShowListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeShowListRequest&, const DescribeShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShowListAsyncHandler;
			typedef Outcome<Error, Model::DescribeStudioLayoutsResult> DescribeStudioLayoutsOutcome;
			typedef std::future<DescribeStudioLayoutsOutcome> DescribeStudioLayoutsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeStudioLayoutsRequest&, const DescribeStudioLayoutsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStudioLayoutsAsyncHandler;
			typedef Outcome<Error, Model::DescribeToutiaoLivePlayResult> DescribeToutiaoLivePlayOutcome;
			typedef std::future<DescribeToutiaoLivePlayOutcome> DescribeToutiaoLivePlayOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeToutiaoLivePlayRequest&, const DescribeToutiaoLivePlayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeToutiaoLivePlayAsyncHandler;
			typedef Outcome<Error, Model::DescribeToutiaoLivePublishResult> DescribeToutiaoLivePublishOutcome;
			typedef std::future<DescribeToutiaoLivePublishOutcome> DescribeToutiaoLivePublishOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeToutiaoLivePublishRequest&, const DescribeToutiaoLivePublishOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeToutiaoLivePublishAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpBpsPeakDataResult> DescribeUpBpsPeakDataOutcome;
			typedef std::future<DescribeUpBpsPeakDataOutcome> DescribeUpBpsPeakDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeUpBpsPeakDataRequest&, const DescribeUpBpsPeakDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpBpsPeakDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpBpsPeakOfLineResult> DescribeUpBpsPeakOfLineOutcome;
			typedef std::future<DescribeUpBpsPeakOfLineOutcome> DescribeUpBpsPeakOfLineOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeUpBpsPeakOfLineRequest&, const DescribeUpBpsPeakOfLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpBpsPeakOfLineAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpPeakPublishStreamDataResult> DescribeUpPeakPublishStreamDataOutcome;
			typedef std::future<DescribeUpPeakPublishStreamDataOutcome> DescribeUpPeakPublishStreamDataOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DescribeUpPeakPublishStreamDataRequest&, const DescribeUpPeakPublishStreamDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpPeakPublishStreamDataAsyncHandler;
			typedef Outcome<Error, Model::DisableLiveRealtimeLogDeliveryResult> DisableLiveRealtimeLogDeliveryOutcome;
			typedef std::future<DisableLiveRealtimeLogDeliveryOutcome> DisableLiveRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DisableLiveRealtimeLogDeliveryRequest&, const DisableLiveRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableLiveRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DynamicUpdateWaterMarkStreamRuleResult> DynamicUpdateWaterMarkStreamRuleOutcome;
			typedef std::future<DynamicUpdateWaterMarkStreamRuleOutcome> DynamicUpdateWaterMarkStreamRuleOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::DynamicUpdateWaterMarkStreamRuleRequest&, const DynamicUpdateWaterMarkStreamRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DynamicUpdateWaterMarkStreamRuleAsyncHandler;
			typedef Outcome<Error, Model::EditPlaylistResult> EditPlaylistOutcome;
			typedef std::future<EditPlaylistOutcome> EditPlaylistOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::EditPlaylistRequest&, const EditPlaylistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EditPlaylistAsyncHandler;
			typedef Outcome<Error, Model::EditShowAndReplaceResult> EditShowAndReplaceOutcome;
			typedef std::future<EditShowAndReplaceOutcome> EditShowAndReplaceOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::EditShowAndReplaceRequest&, const EditShowAndReplaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EditShowAndReplaceAsyncHandler;
			typedef Outcome<Error, Model::EffectCasterUrgentResult> EffectCasterUrgentOutcome;
			typedef std::future<EffectCasterUrgentOutcome> EffectCasterUrgentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::EffectCasterUrgentRequest&, const EffectCasterUrgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EffectCasterUrgentAsyncHandler;
			typedef Outcome<Error, Model::EffectCasterVideoResourceResult> EffectCasterVideoResourceOutcome;
			typedef std::future<EffectCasterVideoResourceOutcome> EffectCasterVideoResourceOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::EffectCasterVideoResourceRequest&, const EffectCasterVideoResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EffectCasterVideoResourceAsyncHandler;
			typedef Outcome<Error, Model::EnableLiveRealtimeLogDeliveryResult> EnableLiveRealtimeLogDeliveryOutcome;
			typedef std::future<EnableLiveRealtimeLogDeliveryOutcome> EnableLiveRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::EnableLiveRealtimeLogDeliveryRequest&, const EnableLiveRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableLiveRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::ForbidLiveStreamResult> ForbidLiveStreamOutcome;
			typedef std::future<ForbidLiveStreamOutcome> ForbidLiveStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ForbidLiveStreamRequest&, const ForbidLiveStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ForbidLiveStreamAsyncHandler;
			typedef Outcome<Error, Model::ForbidPushStreamResult> ForbidPushStreamOutcome;
			typedef std::future<ForbidPushStreamOutcome> ForbidPushStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ForbidPushStreamRequest&, const ForbidPushStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ForbidPushStreamAsyncHandler;
			typedef Outcome<Error, Model::GetAllCustomTemplatesResult> GetAllCustomTemplatesOutcome;
			typedef std::future<GetAllCustomTemplatesOutcome> GetAllCustomTemplatesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetAllCustomTemplatesRequest&, const GetAllCustomTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllCustomTemplatesAsyncHandler;
			typedef Outcome<Error, Model::GetCustomTemplateResult> GetCustomTemplateOutcome;
			typedef std::future<GetCustomTemplateOutcome> GetCustomTemplateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetCustomTemplateRequest&, const GetCustomTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetEditingJobInfoResult> GetEditingJobInfoOutcome;
			typedef std::future<GetEditingJobInfoOutcome> GetEditingJobInfoOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetEditingJobInfoRequest&, const GetEditingJobInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEditingJobInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMessageAppResult> GetMessageAppOutcome;
			typedef std::future<GetMessageAppOutcome> GetMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetMessageAppRequest&, const GetMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMessageAppAsyncHandler;
			typedef Outcome<Error, Model::GetMessageGroupResult> GetMessageGroupOutcome;
			typedef std::future<GetMessageGroupOutcome> GetMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetMessageGroupRequest&, const GetMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::GetMessageTokenResult> GetMessageTokenOutcome;
			typedef std::future<GetMessageTokenOutcome> GetMessageTokenOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetMessageTokenRequest&, const GetMessageTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMessageTokenAsyncHandler;
			typedef Outcome<Error, Model::GetMultiRateConfigResult> GetMultiRateConfigOutcome;
			typedef std::future<GetMultiRateConfigOutcome> GetMultiRateConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetMultiRateConfigRequest&, const GetMultiRateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMultiRateConfigAsyncHandler;
			typedef Outcome<Error, Model::GetMultiRateConfigListResult> GetMultiRateConfigListOutcome;
			typedef std::future<GetMultiRateConfigListOutcome> GetMultiRateConfigListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::GetMultiRateConfigListRequest&, const GetMultiRateConfigListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMultiRateConfigListAsyncHandler;
			typedef Outcome<Error, Model::HotLiveRtcStreamResult> HotLiveRtcStreamOutcome;
			typedef std::future<HotLiveRtcStreamOutcome> HotLiveRtcStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::HotLiveRtcStreamRequest&, const HotLiveRtcStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HotLiveRtcStreamAsyncHandler;
			typedef Outcome<Error, Model::InitializeAutoShowListTaskResult> InitializeAutoShowListTaskOutcome;
			typedef std::future<InitializeAutoShowListTaskOutcome> InitializeAutoShowListTaskOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::InitializeAutoShowListTaskRequest&, const InitializeAutoShowListTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitializeAutoShowListTaskAsyncHandler;
			typedef Outcome<Error, Model::JoinMessageGroupResult> JoinMessageGroupOutcome;
			typedef std::future<JoinMessageGroupOutcome> JoinMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::JoinMessageGroupRequest&, const JoinMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::LeaveMessageGroupResult> LeaveMessageGroupOutcome;
			typedef std::future<LeaveMessageGroupOutcome> LeaveMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::LeaveMessageGroupRequest&, const LeaveMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LeaveMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::ListLiveDelayConfigResult> ListLiveDelayConfigOutcome;
			typedef std::future<ListLiveDelayConfigOutcome> ListLiveDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveDelayConfigRequest&, const ListLiveDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::ListLiveRealtimeLogDeliveryResult> ListLiveRealtimeLogDeliveryOutcome;
			typedef std::future<ListLiveRealtimeLogDeliveryOutcome> ListLiveRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveRealtimeLogDeliveryRequest&, const ListLiveRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::ListLiveRealtimeLogDeliveryDomainsResult> ListLiveRealtimeLogDeliveryDomainsOutcome;
			typedef std::future<ListLiveRealtimeLogDeliveryDomainsOutcome> ListLiveRealtimeLogDeliveryDomainsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveRealtimeLogDeliveryDomainsRequest&, const ListLiveRealtimeLogDeliveryDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveRealtimeLogDeliveryDomainsAsyncHandler;
			typedef Outcome<Error, Model::ListLiveRealtimeLogDeliveryInfosResult> ListLiveRealtimeLogDeliveryInfosOutcome;
			typedef std::future<ListLiveRealtimeLogDeliveryInfosOutcome> ListLiveRealtimeLogDeliveryInfosOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListLiveRealtimeLogDeliveryInfosRequest&, const ListLiveRealtimeLogDeliveryInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLiveRealtimeLogDeliveryInfosAsyncHandler;
			typedef Outcome<Error, Model::ListMessageResult> ListMessageOutcome;
			typedef std::future<ListMessageOutcome> ListMessageOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListMessageRequest&, const ListMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMessageAsyncHandler;
			typedef Outcome<Error, Model::ListMessageAppResult> ListMessageAppOutcome;
			typedef std::future<ListMessageAppOutcome> ListMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListMessageAppRequest&, const ListMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMessageAppAsyncHandler;
			typedef Outcome<Error, Model::ListMessageGroupResult> ListMessageGroupOutcome;
			typedef std::future<ListMessageGroupOutcome> ListMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListMessageGroupRequest&, const ListMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::ListMessageGroupUserResult> ListMessageGroupUserOutcome;
			typedef std::future<ListMessageGroupUserOutcome> ListMessageGroupUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListMessageGroupUserRequest&, const ListMessageGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMessageGroupUserAsyncHandler;
			typedef Outcome<Error, Model::ListMessageGroupUserByIdResult> ListMessageGroupUserByIdOutcome;
			typedef std::future<ListMessageGroupUserByIdOutcome> ListMessageGroupUserByIdOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListMessageGroupUserByIdRequest&, const ListMessageGroupUserByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMessageGroupUserByIdAsyncHandler;
			typedef Outcome<Error, Model::ListPlaylistResult> ListPlaylistOutcome;
			typedef std::future<ListPlaylistOutcome> ListPlaylistOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListPlaylistRequest&, const ListPlaylistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPlaylistAsyncHandler;
			typedef Outcome<Error, Model::ListPlaylistItemsResult> ListPlaylistItemsOutcome;
			typedef std::future<ListPlaylistItemsOutcome> ListPlaylistItemsOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ListPlaylistItemsRequest&, const ListPlaylistItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPlaylistItemsAsyncHandler;
			typedef Outcome<Error, Model::ModifyCasterComponentResult> ModifyCasterComponentOutcome;
			typedef std::future<ModifyCasterComponentOutcome> ModifyCasterComponentOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyCasterComponentRequest&, const ModifyCasterComponentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterComponentAsyncHandler;
			typedef Outcome<Error, Model::ModifyCasterEpisodeResult> ModifyCasterEpisodeOutcome;
			typedef std::future<ModifyCasterEpisodeOutcome> ModifyCasterEpisodeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyCasterEpisodeRequest&, const ModifyCasterEpisodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterEpisodeAsyncHandler;
			typedef Outcome<Error, Model::ModifyCasterLayoutResult> ModifyCasterLayoutOutcome;
			typedef std::future<ModifyCasterLayoutOutcome> ModifyCasterLayoutOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyCasterLayoutRequest&, const ModifyCasterLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterLayoutAsyncHandler;
			typedef Outcome<Error, Model::ModifyCasterProgramResult> ModifyCasterProgramOutcome;
			typedef std::future<ModifyCasterProgramOutcome> ModifyCasterProgramOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyCasterProgramRequest&, const ModifyCasterProgramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterProgramAsyncHandler;
			typedef Outcome<Error, Model::ModifyCasterVideoResourceResult> ModifyCasterVideoResourceOutcome;
			typedef std::future<ModifyCasterVideoResourceOutcome> ModifyCasterVideoResourceOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyCasterVideoResourceRequest&, const ModifyCasterVideoResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCasterVideoResourceAsyncHandler;
			typedef Outcome<Error, Model::ModifyLiveDomainSchdmByPropertyResult> ModifyLiveDomainSchdmByPropertyOutcome;
			typedef std::future<ModifyLiveDomainSchdmByPropertyOutcome> ModifyLiveDomainSchdmByPropertyOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyLiveDomainSchdmByPropertyRequest&, const ModifyLiveDomainSchdmByPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveDomainSchdmByPropertyAsyncHandler;
			typedef Outcome<Error, Model::ModifyLiveRealtimeLogDeliveryResult> ModifyLiveRealtimeLogDeliveryOutcome;
			typedef std::future<ModifyLiveRealtimeLogDeliveryOutcome> ModifyLiveRealtimeLogDeliveryOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyLiveRealtimeLogDeliveryRequest&, const ModifyLiveRealtimeLogDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveRealtimeLogDeliveryAsyncHandler;
			typedef Outcome<Error, Model::ModifyShowListResult> ModifyShowListOutcome;
			typedef std::future<ModifyShowListOutcome> ModifyShowListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyShowListRequest&, const ModifyShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyShowListAsyncHandler;
			typedef Outcome<Error, Model::ModifyStudioLayoutResult> ModifyStudioLayoutOutcome;
			typedef std::future<ModifyStudioLayoutOutcome> ModifyStudioLayoutOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ModifyStudioLayoutRequest&, const ModifyStudioLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStudioLayoutAsyncHandler;
			typedef Outcome<Error, Model::MuteAllGroupUserResult> MuteAllGroupUserOutcome;
			typedef std::future<MuteAllGroupUserOutcome> MuteAllGroupUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::MuteAllGroupUserRequest&, const MuteAllGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MuteAllGroupUserAsyncHandler;
			typedef Outcome<Error, Model::MuteGroupUserResult> MuteGroupUserOutcome;
			typedef std::future<MuteGroupUserOutcome> MuteGroupUserOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::MuteGroupUserRequest&, const MuteGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MuteGroupUserAsyncHandler;
			typedef Outcome<Error, Model::OpenLiveShiftResult> OpenLiveShiftOutcome;
			typedef std::future<OpenLiveShiftOutcome> OpenLiveShiftOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::OpenLiveShiftRequest&, const OpenLiveShiftOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenLiveShiftAsyncHandler;
			typedef Outcome<Error, Model::PlayChoosenShowResult> PlayChoosenShowOutcome;
			typedef std::future<PlayChoosenShowOutcome> PlayChoosenShowOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::PlayChoosenShowRequest&, const PlayChoosenShowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PlayChoosenShowAsyncHandler;
			typedef Outcome<Error, Model::PublishLiveStagingConfigToProductionResult> PublishLiveStagingConfigToProductionOutcome;
			typedef std::future<PublishLiveStagingConfigToProductionOutcome> PublishLiveStagingConfigToProductionOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::PublishLiveStagingConfigToProductionRequest&, const PublishLiveStagingConfigToProductionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishLiveStagingConfigToProductionAsyncHandler;
			typedef Outcome<Error, Model::QueryMessageAppResult> QueryMessageAppOutcome;
			typedef std::future<QueryMessageAppOutcome> QueryMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::QueryMessageAppRequest&, const QueryMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMessageAppAsyncHandler;
			typedef Outcome<Error, Model::QuerySnapshotCallbackAuthResult> QuerySnapshotCallbackAuthOutcome;
			typedef std::future<QuerySnapshotCallbackAuthOutcome> QuerySnapshotCallbackAuthOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::QuerySnapshotCallbackAuthRequest&, const QuerySnapshotCallbackAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySnapshotCallbackAuthAsyncHandler;
			typedef Outcome<Error, Model::RealTimeRecordCommandResult> RealTimeRecordCommandOutcome;
			typedef std::future<RealTimeRecordCommandOutcome> RealTimeRecordCommandOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RealTimeRecordCommandRequest&, const RealTimeRecordCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RealTimeRecordCommandAsyncHandler;
			typedef Outcome<Error, Model::RealTimeSnapshotCommandResult> RealTimeSnapshotCommandOutcome;
			typedef std::future<RealTimeSnapshotCommandOutcome> RealTimeSnapshotCommandOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RealTimeSnapshotCommandRequest&, const RealTimeSnapshotCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RealTimeSnapshotCommandAsyncHandler;
			typedef Outcome<Error, Model::RemoveShowFromShowListResult> RemoveShowFromShowListOutcome;
			typedef std::future<RemoveShowFromShowListOutcome> RemoveShowFromShowListOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RemoveShowFromShowListRequest&, const RemoveShowFromShowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveShowFromShowListAsyncHandler;
			typedef Outcome<Error, Model::RestartCasterResult> RestartCasterOutcome;
			typedef std::future<RestartCasterOutcome> RestartCasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RestartCasterRequest&, const RestartCasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartCasterAsyncHandler;
			typedef Outcome<Error, Model::ResumeLiveStreamResult> ResumeLiveStreamOutcome;
			typedef std::future<ResumeLiveStreamOutcome> ResumeLiveStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::ResumeLiveStreamRequest&, const ResumeLiveStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeLiveStreamAsyncHandler;
			typedef Outcome<Error, Model::RollbackLiveStagingConfigResult> RollbackLiveStagingConfigOutcome;
			typedef std::future<RollbackLiveStagingConfigOutcome> RollbackLiveStagingConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::RollbackLiveStagingConfigRequest&, const RollbackLiveStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackLiveStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::SendLikeResult> SendLikeOutcome;
			typedef std::future<SendLikeOutcome> SendLikeOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SendLikeRequest&, const SendLikeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendLikeAsyncHandler;
			typedef Outcome<Error, Model::SendMessageToGroupResult> SendMessageToGroupOutcome;
			typedef std::future<SendMessageToGroupOutcome> SendMessageToGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SendMessageToGroupRequest&, const SendMessageToGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageToGroupAsyncHandler;
			typedef Outcome<Error, Model::SendMessageToGroupUsersResult> SendMessageToGroupUsersOutcome;
			typedef std::future<SendMessageToGroupUsersOutcome> SendMessageToGroupUsersOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SendMessageToGroupUsersRequest&, const SendMessageToGroupUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageToGroupUsersAsyncHandler;
			typedef Outcome<Error, Model::SendRoomNotificationResult> SendRoomNotificationOutcome;
			typedef std::future<SendRoomNotificationOutcome> SendRoomNotificationOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SendRoomNotificationRequest&, const SendRoomNotificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendRoomNotificationAsyncHandler;
			typedef Outcome<Error, Model::SendRoomUserNotificationResult> SendRoomUserNotificationOutcome;
			typedef std::future<SendRoomUserNotificationOutcome> SendRoomUserNotificationOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SendRoomUserNotificationRequest&, const SendRoomUserNotificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendRoomUserNotificationAsyncHandler;
			typedef Outcome<Error, Model::SetCasterChannelResult> SetCasterChannelOutcome;
			typedef std::future<SetCasterChannelOutcome> SetCasterChannelOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetCasterChannelRequest&, const SetCasterChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCasterChannelAsyncHandler;
			typedef Outcome<Error, Model::SetCasterConfigResult> SetCasterConfigOutcome;
			typedef std::future<SetCasterConfigOutcome> SetCasterConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetCasterConfigRequest&, const SetCasterConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCasterConfigAsyncHandler;
			typedef Outcome<Error, Model::SetCasterSceneConfigResult> SetCasterSceneConfigOutcome;
			typedef std::future<SetCasterSceneConfigOutcome> SetCasterSceneConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetCasterSceneConfigRequest&, const SetCasterSceneConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCasterSceneConfigAsyncHandler;
			typedef Outcome<Error, Model::SetCasterSyncGroupResult> SetCasterSyncGroupOutcome;
			typedef std::future<SetCasterSyncGroupOutcome> SetCasterSyncGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetCasterSyncGroupRequest&, const SetCasterSyncGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCasterSyncGroupAsyncHandler;
			typedef Outcome<Error, Model::SetCasterTimedEventResult> SetCasterTimedEventOutcome;
			typedef std::future<SetCasterTimedEventOutcome> SetCasterTimedEventOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetCasterTimedEventRequest&, const SetCasterTimedEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCasterTimedEventAsyncHandler;
			typedef Outcome<Error, Model::SetLiveDomainCertificateResult> SetLiveDomainCertificateOutcome;
			typedef std::future<SetLiveDomainCertificateOutcome> SetLiveDomainCertificateOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveDomainCertificateRequest&, const SetLiveDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::SetLiveDomainStagingConfigResult> SetLiveDomainStagingConfigOutcome;
			typedef std::future<SetLiveDomainStagingConfigOutcome> SetLiveDomainStagingConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveDomainStagingConfigRequest&, const SetLiveDomainStagingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveDomainStagingConfigAsyncHandler;
			typedef Outcome<Error, Model::SetLiveEdgeTransferResult> SetLiveEdgeTransferOutcome;
			typedef std::future<SetLiveEdgeTransferOutcome> SetLiveEdgeTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveEdgeTransferRequest&, const SetLiveEdgeTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveEdgeTransferAsyncHandler;
			typedef Outcome<Error, Model::SetLiveLazyPullStreamInfoConfigResult> SetLiveLazyPullStreamInfoConfigOutcome;
			typedef std::future<SetLiveLazyPullStreamInfoConfigOutcome> SetLiveLazyPullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveLazyPullStreamInfoConfigRequest&, const SetLiveLazyPullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveLazyPullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::SetLiveMpuTaskSeiResult> SetLiveMpuTaskSeiOutcome;
			typedef std::future<SetLiveMpuTaskSeiOutcome> SetLiveMpuTaskSeiOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveMpuTaskSeiRequest&, const SetLiveMpuTaskSeiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveMpuTaskSeiAsyncHandler;
			typedef Outcome<Error, Model::SetLiveStreamDelayConfigResult> SetLiveStreamDelayConfigOutcome;
			typedef std::future<SetLiveStreamDelayConfigOutcome> SetLiveStreamDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveStreamDelayConfigRequest&, const SetLiveStreamDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveStreamDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::SetLiveStreamOptimizedFeatureConfigResult> SetLiveStreamOptimizedFeatureConfigOutcome;
			typedef std::future<SetLiveStreamOptimizedFeatureConfigOutcome> SetLiveStreamOptimizedFeatureConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveStreamOptimizedFeatureConfigRequest&, const SetLiveStreamOptimizedFeatureConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveStreamOptimizedFeatureConfigAsyncHandler;
			typedef Outcome<Error, Model::SetLiveStreamsNotifyUrlConfigResult> SetLiveStreamsNotifyUrlConfigOutcome;
			typedef std::future<SetLiveStreamsNotifyUrlConfigOutcome> SetLiveStreamsNotifyUrlConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetLiveStreamsNotifyUrlConfigRequest&, const SetLiveStreamsNotifyUrlConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLiveStreamsNotifyUrlConfigAsyncHandler;
			typedef Outcome<Error, Model::SetSnapshotCallbackAuthResult> SetSnapshotCallbackAuthOutcome;
			typedef std::future<SetSnapshotCallbackAuthOutcome> SetSnapshotCallbackAuthOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::SetSnapshotCallbackAuthRequest&, const SetSnapshotCallbackAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSnapshotCallbackAuthAsyncHandler;
			typedef Outcome<Error, Model::StartCasterResult> StartCasterOutcome;
			typedef std::future<StartCasterOutcome> StartCasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartCasterRequest&, const StartCasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartCasterAsyncHandler;
			typedef Outcome<Error, Model::StartCasterSceneResult> StartCasterSceneOutcome;
			typedef std::future<StartCasterSceneOutcome> StartCasterSceneOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartCasterSceneRequest&, const StartCasterSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartCasterSceneAsyncHandler;
			typedef Outcome<Error, Model::StartLiveDomainResult> StartLiveDomainOutcome;
			typedef std::future<StartLiveDomainOutcome> StartLiveDomainOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartLiveDomainRequest&, const StartLiveDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartLiveDomainAsyncHandler;
			typedef Outcome<Error, Model::StartLiveStreamMonitorResult> StartLiveStreamMonitorOutcome;
			typedef std::future<StartLiveStreamMonitorOutcome> StartLiveStreamMonitorOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartLiveStreamMonitorRequest&, const StartLiveStreamMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartLiveStreamMonitorAsyncHandler;
			typedef Outcome<Error, Model::StartPlaylistResult> StartPlaylistOutcome;
			typedef std::future<StartPlaylistOutcome> StartPlaylistOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StartPlaylistRequest&, const StartPlaylistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartPlaylistAsyncHandler;
			typedef Outcome<Error, Model::StopCasterResult> StopCasterOutcome;
			typedef std::future<StopCasterOutcome> StopCasterOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopCasterRequest&, const StopCasterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopCasterAsyncHandler;
			typedef Outcome<Error, Model::StopCasterSceneResult> StopCasterSceneOutcome;
			typedef std::future<StopCasterSceneOutcome> StopCasterSceneOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopCasterSceneRequest&, const StopCasterSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopCasterSceneAsyncHandler;
			typedef Outcome<Error, Model::StopLiveDomainResult> StopLiveDomainOutcome;
			typedef std::future<StopLiveDomainOutcome> StopLiveDomainOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopLiveDomainRequest&, const StopLiveDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopLiveDomainAsyncHandler;
			typedef Outcome<Error, Model::StopLiveStreamMonitorResult> StopLiveStreamMonitorOutcome;
			typedef std::future<StopLiveStreamMonitorOutcome> StopLiveStreamMonitorOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopLiveStreamMonitorRequest&, const StopLiveStreamMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopLiveStreamMonitorAsyncHandler;
			typedef Outcome<Error, Model::StopPlaylistResult> StopPlaylistOutcome;
			typedef std::future<StopPlaylistOutcome> StopPlaylistOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::StopPlaylistRequest&, const StopPlaylistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopPlaylistAsyncHandler;
			typedef Outcome<Error, Model::TagLiveResourcesResult> TagLiveResourcesOutcome;
			typedef std::future<TagLiveResourcesOutcome> TagLiveResourcesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::TagLiveResourcesRequest&, const TagLiveResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagLiveResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnTagLiveResourcesResult> UnTagLiveResourcesOutcome;
			typedef std::future<UnTagLiveResourcesOutcome> UnTagLiveResourcesOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UnTagLiveResourcesRequest&, const UnTagLiveResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnTagLiveResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateCasterSceneAudioResult> UpdateCasterSceneAudioOutcome;
			typedef std::future<UpdateCasterSceneAudioOutcome> UpdateCasterSceneAudioOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateCasterSceneAudioRequest&, const UpdateCasterSceneAudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCasterSceneAudioAsyncHandler;
			typedef Outcome<Error, Model::UpdateCasterSceneConfigResult> UpdateCasterSceneConfigOutcome;
			typedef std::future<UpdateCasterSceneConfigOutcome> UpdateCasterSceneConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateCasterSceneConfigRequest&, const UpdateCasterSceneConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCasterSceneConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveAppSnapshotConfigResult> UpdateLiveAppSnapshotConfigOutcome;
			typedef std::future<UpdateLiveAppSnapshotConfigOutcome> UpdateLiveAppSnapshotConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveAppSnapshotConfigRequest&, const UpdateLiveAppSnapshotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveAppSnapshotConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveAudioAuditConfigResult> UpdateLiveAudioAuditConfigOutcome;
			typedef std::future<UpdateLiveAudioAuditConfigOutcome> UpdateLiveAudioAuditConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveAudioAuditConfigRequest&, const UpdateLiveAudioAuditConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveAudioAuditConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveAudioAuditNotifyConfigResult> UpdateLiveAudioAuditNotifyConfigOutcome;
			typedef std::future<UpdateLiveAudioAuditNotifyConfigOutcome> UpdateLiveAudioAuditNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveAudioAuditNotifyConfigRequest&, const UpdateLiveAudioAuditNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveAudioAuditNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveCenterTransferResult> UpdateLiveCenterTransferOutcome;
			typedef std::future<UpdateLiveCenterTransferOutcome> UpdateLiveCenterTransferOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveCenterTransferRequest&, const UpdateLiveCenterTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveCenterTransferAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveDelayConfigResult> UpdateLiveDelayConfigOutcome;
			typedef std::future<UpdateLiveDelayConfigOutcome> UpdateLiveDelayConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveDelayConfigRequest&, const UpdateLiveDelayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveDelayConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveDetectNotifyConfigResult> UpdateLiveDetectNotifyConfigOutcome;
			typedef std::future<UpdateLiveDetectNotifyConfigOutcome> UpdateLiveDetectNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveDetectNotifyConfigRequest&, const UpdateLiveDetectNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveDetectNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLivePullStreamInfoConfigResult> UpdateLivePullStreamInfoConfigOutcome;
			typedef std::future<UpdateLivePullStreamInfoConfigOutcome> UpdateLivePullStreamInfoConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLivePullStreamInfoConfigRequest&, const UpdateLivePullStreamInfoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLivePullStreamInfoConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveRecordNotifyConfigResult> UpdateLiveRecordNotifyConfigOutcome;
			typedef std::future<UpdateLiveRecordNotifyConfigOutcome> UpdateLiveRecordNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveRecordNotifyConfigRequest&, const UpdateLiveRecordNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveRecordNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveSnapshotDetectPornConfigResult> UpdateLiveSnapshotDetectPornConfigOutcome;
			typedef std::future<UpdateLiveSnapshotDetectPornConfigOutcome> UpdateLiveSnapshotDetectPornConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveSnapshotDetectPornConfigRequest&, const UpdateLiveSnapshotDetectPornConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveSnapshotDetectPornConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveSnapshotNotifyConfigResult> UpdateLiveSnapshotNotifyConfigOutcome;
			typedef std::future<UpdateLiveSnapshotNotifyConfigOutcome> UpdateLiveSnapshotNotifyConfigOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveSnapshotNotifyConfigRequest&, const UpdateLiveSnapshotNotifyConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveSnapshotNotifyConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveStreamMonitorResult> UpdateLiveStreamMonitorOutcome;
			typedef std::future<UpdateLiveStreamMonitorOutcome> UpdateLiveStreamMonitorOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveStreamMonitorRequest&, const UpdateLiveStreamMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveStreamMonitorAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveStreamWatermarkResult> UpdateLiveStreamWatermarkOutcome;
			typedef std::future<UpdateLiveStreamWatermarkOutcome> UpdateLiveStreamWatermarkOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveStreamWatermarkRequest&, const UpdateLiveStreamWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveStreamWatermarkAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveStreamWatermarkRuleResult> UpdateLiveStreamWatermarkRuleOutcome;
			typedef std::future<UpdateLiveStreamWatermarkRuleOutcome> UpdateLiveStreamWatermarkRuleOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveStreamWatermarkRuleRequest&, const UpdateLiveStreamWatermarkRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveStreamWatermarkRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveTopLevelDomainResult> UpdateLiveTopLevelDomainOutcome;
			typedef std::future<UpdateLiveTopLevelDomainOutcome> UpdateLiveTopLevelDomainOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateLiveTopLevelDomainRequest&, const UpdateLiveTopLevelDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveTopLevelDomainAsyncHandler;
			typedef Outcome<Error, Model::UpdateMessageAppResult> UpdateMessageAppOutcome;
			typedef std::future<UpdateMessageAppOutcome> UpdateMessageAppOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateMessageAppRequest&, const UpdateMessageAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMessageAppAsyncHandler;
			typedef Outcome<Error, Model::UpdateMessageGroupResult> UpdateMessageGroupOutcome;
			typedef std::future<UpdateMessageGroupOutcome> UpdateMessageGroupOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateMessageGroupRequest&, const UpdateMessageGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMessageGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateMixStreamResult> UpdateMixStreamOutcome;
			typedef std::future<UpdateMixStreamOutcome> UpdateMixStreamOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::UpdateMixStreamRequest&, const UpdateMixStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMixStreamAsyncHandler;
			typedef Outcome<Error, Model::VerifyLiveDomainOwnerResult> VerifyLiveDomainOwnerOutcome;
			typedef std::future<VerifyLiveDomainOwnerOutcome> VerifyLiveDomainOwnerOutcomeCallable;
			typedef std::function<void(const LiveClient*, const Model::VerifyLiveDomainOwnerRequest&, const VerifyLiveDomainOwnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyLiveDomainOwnerAsyncHandler;

			LiveClient(const Credentials &credentials, const ClientConfiguration &configuration);
			LiveClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			LiveClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~LiveClient();
			AddCasterComponentOutcome addCasterComponent(const Model::AddCasterComponentRequest &request)const;
			void addCasterComponentAsync(const Model::AddCasterComponentRequest& request, const AddCasterComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterComponentOutcomeCallable addCasterComponentCallable(const Model::AddCasterComponentRequest& request) const;
			AddCasterEpisodeOutcome addCasterEpisode(const Model::AddCasterEpisodeRequest &request)const;
			void addCasterEpisodeAsync(const Model::AddCasterEpisodeRequest& request, const AddCasterEpisodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterEpisodeOutcomeCallable addCasterEpisodeCallable(const Model::AddCasterEpisodeRequest& request) const;
			AddCasterEpisodeGroupOutcome addCasterEpisodeGroup(const Model::AddCasterEpisodeGroupRequest &request)const;
			void addCasterEpisodeGroupAsync(const Model::AddCasterEpisodeGroupRequest& request, const AddCasterEpisodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterEpisodeGroupOutcomeCallable addCasterEpisodeGroupCallable(const Model::AddCasterEpisodeGroupRequest& request) const;
			AddCasterEpisodeGroupContentOutcome addCasterEpisodeGroupContent(const Model::AddCasterEpisodeGroupContentRequest &request)const;
			void addCasterEpisodeGroupContentAsync(const Model::AddCasterEpisodeGroupContentRequest& request, const AddCasterEpisodeGroupContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterEpisodeGroupContentOutcomeCallable addCasterEpisodeGroupContentCallable(const Model::AddCasterEpisodeGroupContentRequest& request) const;
			AddCasterLayoutOutcome addCasterLayout(const Model::AddCasterLayoutRequest &request)const;
			void addCasterLayoutAsync(const Model::AddCasterLayoutRequest& request, const AddCasterLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterLayoutOutcomeCallable addCasterLayoutCallable(const Model::AddCasterLayoutRequest& request) const;
			AddCasterProgramOutcome addCasterProgram(const Model::AddCasterProgramRequest &request)const;
			void addCasterProgramAsync(const Model::AddCasterProgramRequest& request, const AddCasterProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterProgramOutcomeCallable addCasterProgramCallable(const Model::AddCasterProgramRequest& request) const;
			AddCasterVideoResourceOutcome addCasterVideoResource(const Model::AddCasterVideoResourceRequest &request)const;
			void addCasterVideoResourceAsync(const Model::AddCasterVideoResourceRequest& request, const AddCasterVideoResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasterVideoResourceOutcomeCallable addCasterVideoResourceCallable(const Model::AddCasterVideoResourceRequest& request) const;
			AddCustomLiveStreamTranscodeOutcome addCustomLiveStreamTranscode(const Model::AddCustomLiveStreamTranscodeRequest &request)const;
			void addCustomLiveStreamTranscodeAsync(const Model::AddCustomLiveStreamTranscodeRequest& request, const AddCustomLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCustomLiveStreamTranscodeOutcomeCallable addCustomLiveStreamTranscodeCallable(const Model::AddCustomLiveStreamTranscodeRequest& request) const;
			AddLiveAppRecordConfigOutcome addLiveAppRecordConfig(const Model::AddLiveAppRecordConfigRequest &request)const;
			void addLiveAppRecordConfigAsync(const Model::AddLiveAppRecordConfigRequest& request, const AddLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveAppRecordConfigOutcomeCallable addLiveAppRecordConfigCallable(const Model::AddLiveAppRecordConfigRequest& request) const;
			AddLiveAppSnapshotConfigOutcome addLiveAppSnapshotConfig(const Model::AddLiveAppSnapshotConfigRequest &request)const;
			void addLiveAppSnapshotConfigAsync(const Model::AddLiveAppSnapshotConfigRequest& request, const AddLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveAppSnapshotConfigOutcomeCallable addLiveAppSnapshotConfigCallable(const Model::AddLiveAppSnapshotConfigRequest& request) const;
			AddLiveAudioAuditConfigOutcome addLiveAudioAuditConfig(const Model::AddLiveAudioAuditConfigRequest &request)const;
			void addLiveAudioAuditConfigAsync(const Model::AddLiveAudioAuditConfigRequest& request, const AddLiveAudioAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveAudioAuditConfigOutcomeCallable addLiveAudioAuditConfigCallable(const Model::AddLiveAudioAuditConfigRequest& request) const;
			AddLiveAudioAuditNotifyConfigOutcome addLiveAudioAuditNotifyConfig(const Model::AddLiveAudioAuditNotifyConfigRequest &request)const;
			void addLiveAudioAuditNotifyConfigAsync(const Model::AddLiveAudioAuditNotifyConfigRequest& request, const AddLiveAudioAuditNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveAudioAuditNotifyConfigOutcomeCallable addLiveAudioAuditNotifyConfigCallable(const Model::AddLiveAudioAuditNotifyConfigRequest& request) const;
			AddLiveCenterTransferOutcome addLiveCenterTransfer(const Model::AddLiveCenterTransferRequest &request)const;
			void addLiveCenterTransferAsync(const Model::AddLiveCenterTransferRequest& request, const AddLiveCenterTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveCenterTransferOutcomeCallable addLiveCenterTransferCallable(const Model::AddLiveCenterTransferRequest& request) const;
			AddLiveDetectNotifyConfigOutcome addLiveDetectNotifyConfig(const Model::AddLiveDetectNotifyConfigRequest &request)const;
			void addLiveDetectNotifyConfigAsync(const Model::AddLiveDetectNotifyConfigRequest& request, const AddLiveDetectNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveDetectNotifyConfigOutcomeCallable addLiveDetectNotifyConfigCallable(const Model::AddLiveDetectNotifyConfigRequest& request) const;
			AddLiveDomainOutcome addLiveDomain(const Model::AddLiveDomainRequest &request)const;
			void addLiveDomainAsync(const Model::AddLiveDomainRequest& request, const AddLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveDomainOutcomeCallable addLiveDomainCallable(const Model::AddLiveDomainRequest& request) const;
			AddLiveDomainMappingOutcome addLiveDomainMapping(const Model::AddLiveDomainMappingRequest &request)const;
			void addLiveDomainMappingAsync(const Model::AddLiveDomainMappingRequest& request, const AddLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveDomainMappingOutcomeCallable addLiveDomainMappingCallable(const Model::AddLiveDomainMappingRequest& request) const;
			AddLiveDomainPlayMappingOutcome addLiveDomainPlayMapping(const Model::AddLiveDomainPlayMappingRequest &request)const;
			void addLiveDomainPlayMappingAsync(const Model::AddLiveDomainPlayMappingRequest& request, const AddLiveDomainPlayMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveDomainPlayMappingOutcomeCallable addLiveDomainPlayMappingCallable(const Model::AddLiveDomainPlayMappingRequest& request) const;
			AddLivePullStreamInfoConfigOutcome addLivePullStreamInfoConfig(const Model::AddLivePullStreamInfoConfigRequest &request)const;
			void addLivePullStreamInfoConfigAsync(const Model::AddLivePullStreamInfoConfigRequest& request, const AddLivePullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLivePullStreamInfoConfigOutcomeCallable addLivePullStreamInfoConfigCallable(const Model::AddLivePullStreamInfoConfigRequest& request) const;
			AddLiveRecordNotifyConfigOutcome addLiveRecordNotifyConfig(const Model::AddLiveRecordNotifyConfigRequest &request)const;
			void addLiveRecordNotifyConfigAsync(const Model::AddLiveRecordNotifyConfigRequest& request, const AddLiveRecordNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveRecordNotifyConfigOutcomeCallable addLiveRecordNotifyConfigCallable(const Model::AddLiveRecordNotifyConfigRequest& request) const;
			AddLiveRecordVodConfigOutcome addLiveRecordVodConfig(const Model::AddLiveRecordVodConfigRequest &request)const;
			void addLiveRecordVodConfigAsync(const Model::AddLiveRecordVodConfigRequest& request, const AddLiveRecordVodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveRecordVodConfigOutcomeCallable addLiveRecordVodConfigCallable(const Model::AddLiveRecordVodConfigRequest& request) const;
			AddLiveSnapshotDetectPornConfigOutcome addLiveSnapshotDetectPornConfig(const Model::AddLiveSnapshotDetectPornConfigRequest &request)const;
			void addLiveSnapshotDetectPornConfigAsync(const Model::AddLiveSnapshotDetectPornConfigRequest& request, const AddLiveSnapshotDetectPornConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveSnapshotDetectPornConfigOutcomeCallable addLiveSnapshotDetectPornConfigCallable(const Model::AddLiveSnapshotDetectPornConfigRequest& request) const;
			AddLiveSnapshotNotifyConfigOutcome addLiveSnapshotNotifyConfig(const Model::AddLiveSnapshotNotifyConfigRequest &request)const;
			void addLiveSnapshotNotifyConfigAsync(const Model::AddLiveSnapshotNotifyConfigRequest& request, const AddLiveSnapshotNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveSnapshotNotifyConfigOutcomeCallable addLiveSnapshotNotifyConfigCallable(const Model::AddLiveSnapshotNotifyConfigRequest& request) const;
			AddLiveStreamTranscodeOutcome addLiveStreamTranscode(const Model::AddLiveStreamTranscodeRequest &request)const;
			void addLiveStreamTranscodeAsync(const Model::AddLiveStreamTranscodeRequest& request, const AddLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveStreamTranscodeOutcomeCallable addLiveStreamTranscodeCallable(const Model::AddLiveStreamTranscodeRequest& request) const;
			AddLiveStreamWatermarkOutcome addLiveStreamWatermark(const Model::AddLiveStreamWatermarkRequest &request)const;
			void addLiveStreamWatermarkAsync(const Model::AddLiveStreamWatermarkRequest& request, const AddLiveStreamWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveStreamWatermarkOutcomeCallable addLiveStreamWatermarkCallable(const Model::AddLiveStreamWatermarkRequest& request) const;
			AddLiveStreamWatermarkRuleOutcome addLiveStreamWatermarkRule(const Model::AddLiveStreamWatermarkRuleRequest &request)const;
			void addLiveStreamWatermarkRuleAsync(const Model::AddLiveStreamWatermarkRuleRequest& request, const AddLiveStreamWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLiveStreamWatermarkRuleOutcomeCallable addLiveStreamWatermarkRuleCallable(const Model::AddLiveStreamWatermarkRuleRequest& request) const;
			AddMultiRateConfigOutcome addMultiRateConfig(const Model::AddMultiRateConfigRequest &request)const;
			void addMultiRateConfigAsync(const Model::AddMultiRateConfigRequest& request, const AddMultiRateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMultiRateConfigOutcomeCallable addMultiRateConfigCallable(const Model::AddMultiRateConfigRequest& request) const;
			AddPlaylistItemsOutcome addPlaylistItems(const Model::AddPlaylistItemsRequest &request)const;
			void addPlaylistItemsAsync(const Model::AddPlaylistItemsRequest& request, const AddPlaylistItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPlaylistItemsOutcomeCallable addPlaylistItemsCallable(const Model::AddPlaylistItemsRequest& request) const;
			AddRtsLiveStreamTranscodeOutcome addRtsLiveStreamTranscode(const Model::AddRtsLiveStreamTranscodeRequest &request)const;
			void addRtsLiveStreamTranscodeAsync(const Model::AddRtsLiveStreamTranscodeRequest& request, const AddRtsLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRtsLiveStreamTranscodeOutcomeCallable addRtsLiveStreamTranscodeCallable(const Model::AddRtsLiveStreamTranscodeRequest& request) const;
			AddShowIntoShowListOutcome addShowIntoShowList(const Model::AddShowIntoShowListRequest &request)const;
			void addShowIntoShowListAsync(const Model::AddShowIntoShowListRequest& request, const AddShowIntoShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddShowIntoShowListOutcomeCallable addShowIntoShowListCallable(const Model::AddShowIntoShowListRequest& request) const;
			AddStudioLayoutOutcome addStudioLayout(const Model::AddStudioLayoutRequest &request)const;
			void addStudioLayoutAsync(const Model::AddStudioLayoutRequest& request, const AddStudioLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddStudioLayoutOutcomeCallable addStudioLayoutCallable(const Model::AddStudioLayoutRequest& request) const;
			AddTrancodeSEIOutcome addTrancodeSEI(const Model::AddTrancodeSEIRequest &request)const;
			void addTrancodeSEIAsync(const Model::AddTrancodeSEIRequest& request, const AddTrancodeSEIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTrancodeSEIOutcomeCallable addTrancodeSEICallable(const Model::AddTrancodeSEIRequest& request) const;
			AllowPushStreamOutcome allowPushStream(const Model::AllowPushStreamRequest &request)const;
			void allowPushStreamAsync(const Model::AllowPushStreamRequest& request, const AllowPushStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllowPushStreamOutcomeCallable allowPushStreamCallable(const Model::AllowPushStreamRequest& request) const;
			BatchDeleteLiveDomainConfigsOutcome batchDeleteLiveDomainConfigs(const Model::BatchDeleteLiveDomainConfigsRequest &request)const;
			void batchDeleteLiveDomainConfigsAsync(const Model::BatchDeleteLiveDomainConfigsRequest& request, const BatchDeleteLiveDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteLiveDomainConfigsOutcomeCallable batchDeleteLiveDomainConfigsCallable(const Model::BatchDeleteLiveDomainConfigsRequest& request) const;
			BatchGetOnlineUsersOutcome batchGetOnlineUsers(const Model::BatchGetOnlineUsersRequest &request)const;
			void batchGetOnlineUsersAsync(const Model::BatchGetOnlineUsersRequest& request, const BatchGetOnlineUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetOnlineUsersOutcomeCallable batchGetOnlineUsersCallable(const Model::BatchGetOnlineUsersRequest& request) const;
			BatchSetLiveDomainConfigsOutcome batchSetLiveDomainConfigs(const Model::BatchSetLiveDomainConfigsRequest &request)const;
			void batchSetLiveDomainConfigsAsync(const Model::BatchSetLiveDomainConfigsRequest& request, const BatchSetLiveDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetLiveDomainConfigsOutcomeCallable batchSetLiveDomainConfigsCallable(const Model::BatchSetLiveDomainConfigsRequest& request) const;
			CancelMuteAllGroupUserOutcome cancelMuteAllGroupUser(const Model::CancelMuteAllGroupUserRequest &request)const;
			void cancelMuteAllGroupUserAsync(const Model::CancelMuteAllGroupUserRequest& request, const CancelMuteAllGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelMuteAllGroupUserOutcomeCallable cancelMuteAllGroupUserCallable(const Model::CancelMuteAllGroupUserRequest& request) const;
			CancelMuteGroupUserOutcome cancelMuteGroupUser(const Model::CancelMuteGroupUserRequest &request)const;
			void cancelMuteGroupUserAsync(const Model::CancelMuteGroupUserRequest& request, const CancelMuteGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelMuteGroupUserOutcomeCallable cancelMuteGroupUserCallable(const Model::CancelMuteGroupUserRequest& request) const;
			CloseLiveShiftOutcome closeLiveShift(const Model::CloseLiveShiftRequest &request)const;
			void closeLiveShiftAsync(const Model::CloseLiveShiftRequest& request, const CloseLiveShiftAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseLiveShiftOutcomeCallable closeLiveShiftCallable(const Model::CloseLiveShiftRequest& request) const;
			CopyCasterOutcome copyCaster(const Model::CopyCasterRequest &request)const;
			void copyCasterAsync(const Model::CopyCasterRequest& request, const CopyCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyCasterOutcomeCallable copyCasterCallable(const Model::CopyCasterRequest& request) const;
			CopyCasterSceneConfigOutcome copyCasterSceneConfig(const Model::CopyCasterSceneConfigRequest &request)const;
			void copyCasterSceneConfigAsync(const Model::CopyCasterSceneConfigRequest& request, const CopyCasterSceneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyCasterSceneConfigOutcomeCallable copyCasterSceneConfigCallable(const Model::CopyCasterSceneConfigRequest& request) const;
			CreateCasterOutcome createCaster(const Model::CreateCasterRequest &request)const;
			void createCasterAsync(const Model::CreateCasterRequest& request, const CreateCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCasterOutcomeCallable createCasterCallable(const Model::CreateCasterRequest& request) const;
			CreateCustomTemplateOutcome createCustomTemplate(const Model::CreateCustomTemplateRequest &request)const;
			void createCustomTemplateAsync(const Model::CreateCustomTemplateRequest& request, const CreateCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomTemplateOutcomeCallable createCustomTemplateCallable(const Model::CreateCustomTemplateRequest& request) const;
			CreateLiveDelayConfigOutcome createLiveDelayConfig(const Model::CreateLiveDelayConfigRequest &request)const;
			void createLiveDelayConfigAsync(const Model::CreateLiveDelayConfigRequest& request, const CreateLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveDelayConfigOutcomeCallable createLiveDelayConfigCallable(const Model::CreateLiveDelayConfigRequest& request) const;
			CreateLiveRealTimeLogDeliveryOutcome createLiveRealTimeLogDelivery(const Model::CreateLiveRealTimeLogDeliveryRequest &request)const;
			void createLiveRealTimeLogDeliveryAsync(const Model::CreateLiveRealTimeLogDeliveryRequest& request, const CreateLiveRealTimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveRealTimeLogDeliveryOutcomeCallable createLiveRealTimeLogDeliveryCallable(const Model::CreateLiveRealTimeLogDeliveryRequest& request) const;
			CreateLiveStreamMonitorOutcome createLiveStreamMonitor(const Model::CreateLiveStreamMonitorRequest &request)const;
			void createLiveStreamMonitorAsync(const Model::CreateLiveStreamMonitorRequest& request, const CreateLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveStreamMonitorOutcomeCallable createLiveStreamMonitorCallable(const Model::CreateLiveStreamMonitorRequest& request) const;
			CreateLiveStreamRecordIndexFilesOutcome createLiveStreamRecordIndexFiles(const Model::CreateLiveStreamRecordIndexFilesRequest &request)const;
			void createLiveStreamRecordIndexFilesAsync(const Model::CreateLiveStreamRecordIndexFilesRequest& request, const CreateLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveStreamRecordIndexFilesOutcomeCallable createLiveStreamRecordIndexFilesCallable(const Model::CreateLiveStreamRecordIndexFilesRequest& request) const;
			CreateLiveTranscodeTemplateOutcome createLiveTranscodeTemplate(const Model::CreateLiveTranscodeTemplateRequest &request)const;
			void createLiveTranscodeTemplateAsync(const Model::CreateLiveTranscodeTemplateRequest& request, const CreateLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveTranscodeTemplateOutcomeCallable createLiveTranscodeTemplateCallable(const Model::CreateLiveTranscodeTemplateRequest& request) const;
			CreateMessageAppOutcome createMessageApp(const Model::CreateMessageAppRequest &request)const;
			void createMessageAppAsync(const Model::CreateMessageAppRequest& request, const CreateMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMessageAppOutcomeCallable createMessageAppCallable(const Model::CreateMessageAppRequest& request) const;
			CreateMessageGroupOutcome createMessageGroup(const Model::CreateMessageGroupRequest &request)const;
			void createMessageGroupAsync(const Model::CreateMessageGroupRequest& request, const CreateMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMessageGroupOutcomeCallable createMessageGroupCallable(const Model::CreateMessageGroupRequest& request) const;
			CreateMixStreamOutcome createMixStream(const Model::CreateMixStreamRequest &request)const;
			void createMixStreamAsync(const Model::CreateMixStreamRequest& request, const CreateMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMixStreamOutcomeCallable createMixStreamCallable(const Model::CreateMixStreamRequest& request) const;
			DeleteCasterOutcome deleteCaster(const Model::DeleteCasterRequest &request)const;
			void deleteCasterAsync(const Model::DeleteCasterRequest& request, const DeleteCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterOutcomeCallable deleteCasterCallable(const Model::DeleteCasterRequest& request) const;
			DeleteCasterComponentOutcome deleteCasterComponent(const Model::DeleteCasterComponentRequest &request)const;
			void deleteCasterComponentAsync(const Model::DeleteCasterComponentRequest& request, const DeleteCasterComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterComponentOutcomeCallable deleteCasterComponentCallable(const Model::DeleteCasterComponentRequest& request) const;
			DeleteCasterEpisodeOutcome deleteCasterEpisode(const Model::DeleteCasterEpisodeRequest &request)const;
			void deleteCasterEpisodeAsync(const Model::DeleteCasterEpisodeRequest& request, const DeleteCasterEpisodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterEpisodeOutcomeCallable deleteCasterEpisodeCallable(const Model::DeleteCasterEpisodeRequest& request) const;
			DeleteCasterEpisodeGroupOutcome deleteCasterEpisodeGroup(const Model::DeleteCasterEpisodeGroupRequest &request)const;
			void deleteCasterEpisodeGroupAsync(const Model::DeleteCasterEpisodeGroupRequest& request, const DeleteCasterEpisodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterEpisodeGroupOutcomeCallable deleteCasterEpisodeGroupCallable(const Model::DeleteCasterEpisodeGroupRequest& request) const;
			DeleteCasterLayoutOutcome deleteCasterLayout(const Model::DeleteCasterLayoutRequest &request)const;
			void deleteCasterLayoutAsync(const Model::DeleteCasterLayoutRequest& request, const DeleteCasterLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterLayoutOutcomeCallable deleteCasterLayoutCallable(const Model::DeleteCasterLayoutRequest& request) const;
			DeleteCasterProgramOutcome deleteCasterProgram(const Model::DeleteCasterProgramRequest &request)const;
			void deleteCasterProgramAsync(const Model::DeleteCasterProgramRequest& request, const DeleteCasterProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterProgramOutcomeCallable deleteCasterProgramCallable(const Model::DeleteCasterProgramRequest& request) const;
			DeleteCasterSceneConfigOutcome deleteCasterSceneConfig(const Model::DeleteCasterSceneConfigRequest &request)const;
			void deleteCasterSceneConfigAsync(const Model::DeleteCasterSceneConfigRequest& request, const DeleteCasterSceneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterSceneConfigOutcomeCallable deleteCasterSceneConfigCallable(const Model::DeleteCasterSceneConfigRequest& request) const;
			DeleteCasterVideoResourceOutcome deleteCasterVideoResource(const Model::DeleteCasterVideoResourceRequest &request)const;
			void deleteCasterVideoResourceAsync(const Model::DeleteCasterVideoResourceRequest& request, const DeleteCasterVideoResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCasterVideoResourceOutcomeCallable deleteCasterVideoResourceCallable(const Model::DeleteCasterVideoResourceRequest& request) const;
			DeleteCustomTemplateOutcome deleteCustomTemplate(const Model::DeleteCustomTemplateRequest &request)const;
			void deleteCustomTemplateAsync(const Model::DeleteCustomTemplateRequest& request, const DeleteCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomTemplateOutcomeCallable deleteCustomTemplateCallable(const Model::DeleteCustomTemplateRequest& request) const;
			DeleteLiveAppRecordConfigOutcome deleteLiveAppRecordConfig(const Model::DeleteLiveAppRecordConfigRequest &request)const;
			void deleteLiveAppRecordConfigAsync(const Model::DeleteLiveAppRecordConfigRequest& request, const DeleteLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveAppRecordConfigOutcomeCallable deleteLiveAppRecordConfigCallable(const Model::DeleteLiveAppRecordConfigRequest& request) const;
			DeleteLiveAppSnapshotConfigOutcome deleteLiveAppSnapshotConfig(const Model::DeleteLiveAppSnapshotConfigRequest &request)const;
			void deleteLiveAppSnapshotConfigAsync(const Model::DeleteLiveAppSnapshotConfigRequest& request, const DeleteLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveAppSnapshotConfigOutcomeCallable deleteLiveAppSnapshotConfigCallable(const Model::DeleteLiveAppSnapshotConfigRequest& request) const;
			DeleteLiveAudioAuditConfigOutcome deleteLiveAudioAuditConfig(const Model::DeleteLiveAudioAuditConfigRequest &request)const;
			void deleteLiveAudioAuditConfigAsync(const Model::DeleteLiveAudioAuditConfigRequest& request, const DeleteLiveAudioAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveAudioAuditConfigOutcomeCallable deleteLiveAudioAuditConfigCallable(const Model::DeleteLiveAudioAuditConfigRequest& request) const;
			DeleteLiveAudioAuditNotifyConfigOutcome deleteLiveAudioAuditNotifyConfig(const Model::DeleteLiveAudioAuditNotifyConfigRequest &request)const;
			void deleteLiveAudioAuditNotifyConfigAsync(const Model::DeleteLiveAudioAuditNotifyConfigRequest& request, const DeleteLiveAudioAuditNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveAudioAuditNotifyConfigOutcomeCallable deleteLiveAudioAuditNotifyConfigCallable(const Model::DeleteLiveAudioAuditNotifyConfigRequest& request) const;
			DeleteLiveCenterTransferOutcome deleteLiveCenterTransfer(const Model::DeleteLiveCenterTransferRequest &request)const;
			void deleteLiveCenterTransferAsync(const Model::DeleteLiveCenterTransferRequest& request, const DeleteLiveCenterTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveCenterTransferOutcomeCallable deleteLiveCenterTransferCallable(const Model::DeleteLiveCenterTransferRequest& request) const;
			DeleteLiveDelayConfigOutcome deleteLiveDelayConfig(const Model::DeleteLiveDelayConfigRequest &request)const;
			void deleteLiveDelayConfigAsync(const Model::DeleteLiveDelayConfigRequest& request, const DeleteLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveDelayConfigOutcomeCallable deleteLiveDelayConfigCallable(const Model::DeleteLiveDelayConfigRequest& request) const;
			DeleteLiveDetectNotifyConfigOutcome deleteLiveDetectNotifyConfig(const Model::DeleteLiveDetectNotifyConfigRequest &request)const;
			void deleteLiveDetectNotifyConfigAsync(const Model::DeleteLiveDetectNotifyConfigRequest& request, const DeleteLiveDetectNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveDetectNotifyConfigOutcomeCallable deleteLiveDetectNotifyConfigCallable(const Model::DeleteLiveDetectNotifyConfigRequest& request) const;
			DeleteLiveDomainOutcome deleteLiveDomain(const Model::DeleteLiveDomainRequest &request)const;
			void deleteLiveDomainAsync(const Model::DeleteLiveDomainRequest& request, const DeleteLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveDomainOutcomeCallable deleteLiveDomainCallable(const Model::DeleteLiveDomainRequest& request) const;
			DeleteLiveDomainMappingOutcome deleteLiveDomainMapping(const Model::DeleteLiveDomainMappingRequest &request)const;
			void deleteLiveDomainMappingAsync(const Model::DeleteLiveDomainMappingRequest& request, const DeleteLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveDomainMappingOutcomeCallable deleteLiveDomainMappingCallable(const Model::DeleteLiveDomainMappingRequest& request) const;
			DeleteLiveDomainPlayMappingOutcome deleteLiveDomainPlayMapping(const Model::DeleteLiveDomainPlayMappingRequest &request)const;
			void deleteLiveDomainPlayMappingAsync(const Model::DeleteLiveDomainPlayMappingRequest& request, const DeleteLiveDomainPlayMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveDomainPlayMappingOutcomeCallable deleteLiveDomainPlayMappingCallable(const Model::DeleteLiveDomainPlayMappingRequest& request) const;
			DeleteLiveEdgeTransferOutcome deleteLiveEdgeTransfer(const Model::DeleteLiveEdgeTransferRequest &request)const;
			void deleteLiveEdgeTransferAsync(const Model::DeleteLiveEdgeTransferRequest& request, const DeleteLiveEdgeTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveEdgeTransferOutcomeCallable deleteLiveEdgeTransferCallable(const Model::DeleteLiveEdgeTransferRequest& request) const;
			DeleteLiveLazyPullStreamInfoConfigOutcome deleteLiveLazyPullStreamInfoConfig(const Model::DeleteLiveLazyPullStreamInfoConfigRequest &request)const;
			void deleteLiveLazyPullStreamInfoConfigAsync(const Model::DeleteLiveLazyPullStreamInfoConfigRequest& request, const DeleteLiveLazyPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveLazyPullStreamInfoConfigOutcomeCallable deleteLiveLazyPullStreamInfoConfigCallable(const Model::DeleteLiveLazyPullStreamInfoConfigRequest& request) const;
			DeleteLivePullStreamInfoConfigOutcome deleteLivePullStreamInfoConfig(const Model::DeleteLivePullStreamInfoConfigRequest &request)const;
			void deleteLivePullStreamInfoConfigAsync(const Model::DeleteLivePullStreamInfoConfigRequest& request, const DeleteLivePullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLivePullStreamInfoConfigOutcomeCallable deleteLivePullStreamInfoConfigCallable(const Model::DeleteLivePullStreamInfoConfigRequest& request) const;
			DeleteLiveRealTimeLogLogstoreOutcome deleteLiveRealTimeLogLogstore(const Model::DeleteLiveRealTimeLogLogstoreRequest &request)const;
			void deleteLiveRealTimeLogLogstoreAsync(const Model::DeleteLiveRealTimeLogLogstoreRequest& request, const DeleteLiveRealTimeLogLogstoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveRealTimeLogLogstoreOutcomeCallable deleteLiveRealTimeLogLogstoreCallable(const Model::DeleteLiveRealTimeLogLogstoreRequest& request) const;
			DeleteLiveRealtimeLogDeliveryOutcome deleteLiveRealtimeLogDelivery(const Model::DeleteLiveRealtimeLogDeliveryRequest &request)const;
			void deleteLiveRealtimeLogDeliveryAsync(const Model::DeleteLiveRealtimeLogDeliveryRequest& request, const DeleteLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveRealtimeLogDeliveryOutcomeCallable deleteLiveRealtimeLogDeliveryCallable(const Model::DeleteLiveRealtimeLogDeliveryRequest& request) const;
			DeleteLiveRecordNotifyConfigOutcome deleteLiveRecordNotifyConfig(const Model::DeleteLiveRecordNotifyConfigRequest &request)const;
			void deleteLiveRecordNotifyConfigAsync(const Model::DeleteLiveRecordNotifyConfigRequest& request, const DeleteLiveRecordNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveRecordNotifyConfigOutcomeCallable deleteLiveRecordNotifyConfigCallable(const Model::DeleteLiveRecordNotifyConfigRequest& request) const;
			DeleteLiveRecordVodConfigOutcome deleteLiveRecordVodConfig(const Model::DeleteLiveRecordVodConfigRequest &request)const;
			void deleteLiveRecordVodConfigAsync(const Model::DeleteLiveRecordVodConfigRequest& request, const DeleteLiveRecordVodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveRecordVodConfigOutcomeCallable deleteLiveRecordVodConfigCallable(const Model::DeleteLiveRecordVodConfigRequest& request) const;
			DeleteLiveSnapshotDetectPornConfigOutcome deleteLiveSnapshotDetectPornConfig(const Model::DeleteLiveSnapshotDetectPornConfigRequest &request)const;
			void deleteLiveSnapshotDetectPornConfigAsync(const Model::DeleteLiveSnapshotDetectPornConfigRequest& request, const DeleteLiveSnapshotDetectPornConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveSnapshotDetectPornConfigOutcomeCallable deleteLiveSnapshotDetectPornConfigCallable(const Model::DeleteLiveSnapshotDetectPornConfigRequest& request) const;
			DeleteLiveSnapshotNotifyConfigOutcome deleteLiveSnapshotNotifyConfig(const Model::DeleteLiveSnapshotNotifyConfigRequest &request)const;
			void deleteLiveSnapshotNotifyConfigAsync(const Model::DeleteLiveSnapshotNotifyConfigRequest& request, const DeleteLiveSnapshotNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveSnapshotNotifyConfigOutcomeCallable deleteLiveSnapshotNotifyConfigCallable(const Model::DeleteLiveSnapshotNotifyConfigRequest& request) const;
			DeleteLiveSpecificStagingConfigOutcome deleteLiveSpecificStagingConfig(const Model::DeleteLiveSpecificStagingConfigRequest &request)const;
			void deleteLiveSpecificStagingConfigAsync(const Model::DeleteLiveSpecificStagingConfigRequest& request, const DeleteLiveSpecificStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveSpecificStagingConfigOutcomeCallable deleteLiveSpecificStagingConfigCallable(const Model::DeleteLiveSpecificStagingConfigRequest& request) const;
			DeleteLiveStreamMonitorOutcome deleteLiveStreamMonitor(const Model::DeleteLiveStreamMonitorRequest &request)const;
			void deleteLiveStreamMonitorAsync(const Model::DeleteLiveStreamMonitorRequest& request, const DeleteLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamMonitorOutcomeCallable deleteLiveStreamMonitorCallable(const Model::DeleteLiveStreamMonitorRequest& request) const;
			DeleteLiveStreamRecordIndexFilesOutcome deleteLiveStreamRecordIndexFiles(const Model::DeleteLiveStreamRecordIndexFilesRequest &request)const;
			void deleteLiveStreamRecordIndexFilesAsync(const Model::DeleteLiveStreamRecordIndexFilesRequest& request, const DeleteLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamRecordIndexFilesOutcomeCallable deleteLiveStreamRecordIndexFilesCallable(const Model::DeleteLiveStreamRecordIndexFilesRequest& request) const;
			DeleteLiveStreamTranscodeOutcome deleteLiveStreamTranscode(const Model::DeleteLiveStreamTranscodeRequest &request)const;
			void deleteLiveStreamTranscodeAsync(const Model::DeleteLiveStreamTranscodeRequest& request, const DeleteLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamTranscodeOutcomeCallable deleteLiveStreamTranscodeCallable(const Model::DeleteLiveStreamTranscodeRequest& request) const;
			DeleteLiveStreamWatermarkOutcome deleteLiveStreamWatermark(const Model::DeleteLiveStreamWatermarkRequest &request)const;
			void deleteLiveStreamWatermarkAsync(const Model::DeleteLiveStreamWatermarkRequest& request, const DeleteLiveStreamWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamWatermarkOutcomeCallable deleteLiveStreamWatermarkCallable(const Model::DeleteLiveStreamWatermarkRequest& request) const;
			DeleteLiveStreamWatermarkRuleOutcome deleteLiveStreamWatermarkRule(const Model::DeleteLiveStreamWatermarkRuleRequest &request)const;
			void deleteLiveStreamWatermarkRuleAsync(const Model::DeleteLiveStreamWatermarkRuleRequest& request, const DeleteLiveStreamWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamWatermarkRuleOutcomeCallable deleteLiveStreamWatermarkRuleCallable(const Model::DeleteLiveStreamWatermarkRuleRequest& request) const;
			DeleteLiveStreamsNotifyUrlConfigOutcome deleteLiveStreamsNotifyUrlConfig(const Model::DeleteLiveStreamsNotifyUrlConfigRequest &request)const;
			void deleteLiveStreamsNotifyUrlConfigAsync(const Model::DeleteLiveStreamsNotifyUrlConfigRequest& request, const DeleteLiveStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveStreamsNotifyUrlConfigOutcomeCallable deleteLiveStreamsNotifyUrlConfigCallable(const Model::DeleteLiveStreamsNotifyUrlConfigRequest& request) const;
			DeleteMessageAppOutcome deleteMessageApp(const Model::DeleteMessageAppRequest &request)const;
			void deleteMessageAppAsync(const Model::DeleteMessageAppRequest& request, const DeleteMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMessageAppOutcomeCallable deleteMessageAppCallable(const Model::DeleteMessageAppRequest& request) const;
			DeleteMixStreamOutcome deleteMixStream(const Model::DeleteMixStreamRequest &request)const;
			void deleteMixStreamAsync(const Model::DeleteMixStreamRequest& request, const DeleteMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMixStreamOutcomeCallable deleteMixStreamCallable(const Model::DeleteMixStreamRequest& request) const;
			DeleteMultiRateConfigOutcome deleteMultiRateConfig(const Model::DeleteMultiRateConfigRequest &request)const;
			void deleteMultiRateConfigAsync(const Model::DeleteMultiRateConfigRequest& request, const DeleteMultiRateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMultiRateConfigOutcomeCallable deleteMultiRateConfigCallable(const Model::DeleteMultiRateConfigRequest& request) const;
			DeletePlaylistOutcome deletePlaylist(const Model::DeletePlaylistRequest &request)const;
			void deletePlaylistAsync(const Model::DeletePlaylistRequest& request, const DeletePlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePlaylistOutcomeCallable deletePlaylistCallable(const Model::DeletePlaylistRequest& request) const;
			DeletePlaylistItemsOutcome deletePlaylistItems(const Model::DeletePlaylistItemsRequest &request)const;
			void deletePlaylistItemsAsync(const Model::DeletePlaylistItemsRequest& request, const DeletePlaylistItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePlaylistItemsOutcomeCallable deletePlaylistItemsCallable(const Model::DeletePlaylistItemsRequest& request) const;
			DeleteRoomOutcome deleteRoom(const Model::DeleteRoomRequest &request)const;
			void deleteRoomAsync(const Model::DeleteRoomRequest& request, const DeleteRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRoomOutcomeCallable deleteRoomCallable(const Model::DeleteRoomRequest& request) const;
			DeleteSnapshotCallbackAuthOutcome deleteSnapshotCallbackAuth(const Model::DeleteSnapshotCallbackAuthRequest &request)const;
			void deleteSnapshotCallbackAuthAsync(const Model::DeleteSnapshotCallbackAuthRequest& request, const DeleteSnapshotCallbackAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotCallbackAuthOutcomeCallable deleteSnapshotCallbackAuthCallable(const Model::DeleteSnapshotCallbackAuthRequest& request) const;
			DeleteSnapshotFilesOutcome deleteSnapshotFiles(const Model::DeleteSnapshotFilesRequest &request)const;
			void deleteSnapshotFilesAsync(const Model::DeleteSnapshotFilesRequest& request, const DeleteSnapshotFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotFilesOutcomeCallable deleteSnapshotFilesCallable(const Model::DeleteSnapshotFilesRequest& request) const;
			DeleteStudioLayoutOutcome deleteStudioLayout(const Model::DeleteStudioLayoutRequest &request)const;
			void deleteStudioLayoutAsync(const Model::DeleteStudioLayoutRequest& request, const DeleteStudioLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStudioLayoutOutcomeCallable deleteStudioLayoutCallable(const Model::DeleteStudioLayoutRequest& request) const;
			DescribeAutoShowListTasksOutcome describeAutoShowListTasks(const Model::DescribeAutoShowListTasksRequest &request)const;
			void describeAutoShowListTasksAsync(const Model::DescribeAutoShowListTasksRequest& request, const DescribeAutoShowListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoShowListTasksOutcomeCallable describeAutoShowListTasksCallable(const Model::DescribeAutoShowListTasksRequest& request) const;
			DescribeCasterChannelsOutcome describeCasterChannels(const Model::DescribeCasterChannelsRequest &request)const;
			void describeCasterChannelsAsync(const Model::DescribeCasterChannelsRequest& request, const DescribeCasterChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterChannelsOutcomeCallable describeCasterChannelsCallable(const Model::DescribeCasterChannelsRequest& request) const;
			DescribeCasterComponentsOutcome describeCasterComponents(const Model::DescribeCasterComponentsRequest &request)const;
			void describeCasterComponentsAsync(const Model::DescribeCasterComponentsRequest& request, const DescribeCasterComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterComponentsOutcomeCallable describeCasterComponentsCallable(const Model::DescribeCasterComponentsRequest& request) const;
			DescribeCasterConfigOutcome describeCasterConfig(const Model::DescribeCasterConfigRequest &request)const;
			void describeCasterConfigAsync(const Model::DescribeCasterConfigRequest& request, const DescribeCasterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterConfigOutcomeCallable describeCasterConfigCallable(const Model::DescribeCasterConfigRequest& request) const;
			DescribeCasterLayoutsOutcome describeCasterLayouts(const Model::DescribeCasterLayoutsRequest &request)const;
			void describeCasterLayoutsAsync(const Model::DescribeCasterLayoutsRequest& request, const DescribeCasterLayoutsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterLayoutsOutcomeCallable describeCasterLayoutsCallable(const Model::DescribeCasterLayoutsRequest& request) const;
			DescribeCasterProgramOutcome describeCasterProgram(const Model::DescribeCasterProgramRequest &request)const;
			void describeCasterProgramAsync(const Model::DescribeCasterProgramRequest& request, const DescribeCasterProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterProgramOutcomeCallable describeCasterProgramCallable(const Model::DescribeCasterProgramRequest& request) const;
			DescribeCasterSceneAudioOutcome describeCasterSceneAudio(const Model::DescribeCasterSceneAudioRequest &request)const;
			void describeCasterSceneAudioAsync(const Model::DescribeCasterSceneAudioRequest& request, const DescribeCasterSceneAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterSceneAudioOutcomeCallable describeCasterSceneAudioCallable(const Model::DescribeCasterSceneAudioRequest& request) const;
			DescribeCasterScenesOutcome describeCasterScenes(const Model::DescribeCasterScenesRequest &request)const;
			void describeCasterScenesAsync(const Model::DescribeCasterScenesRequest& request, const DescribeCasterScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterScenesOutcomeCallable describeCasterScenesCallable(const Model::DescribeCasterScenesRequest& request) const;
			DescribeCasterStreamUrlOutcome describeCasterStreamUrl(const Model::DescribeCasterStreamUrlRequest &request)const;
			void describeCasterStreamUrlAsync(const Model::DescribeCasterStreamUrlRequest& request, const DescribeCasterStreamUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterStreamUrlOutcomeCallable describeCasterStreamUrlCallable(const Model::DescribeCasterStreamUrlRequest& request) const;
			DescribeCasterSyncGroupOutcome describeCasterSyncGroup(const Model::DescribeCasterSyncGroupRequest &request)const;
			void describeCasterSyncGroupAsync(const Model::DescribeCasterSyncGroupRequest& request, const DescribeCasterSyncGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterSyncGroupOutcomeCallable describeCasterSyncGroupCallable(const Model::DescribeCasterSyncGroupRequest& request) const;
			DescribeCasterVideoResourcesOutcome describeCasterVideoResources(const Model::DescribeCasterVideoResourcesRequest &request)const;
			void describeCasterVideoResourcesAsync(const Model::DescribeCasterVideoResourcesRequest& request, const DescribeCasterVideoResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCasterVideoResourcesOutcomeCallable describeCasterVideoResourcesCallable(const Model::DescribeCasterVideoResourcesRequest& request) const;
			DescribeCastersOutcome describeCasters(const Model::DescribeCastersRequest &request)const;
			void describeCastersAsync(const Model::DescribeCastersRequest& request, const DescribeCastersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCastersOutcomeCallable describeCastersCallable(const Model::DescribeCastersRequest& request) const;
			DescribeDomainUsageDataOutcome describeDomainUsageData(const Model::DescribeDomainUsageDataRequest &request)const;
			void describeDomainUsageDataAsync(const Model::DescribeDomainUsageDataRequest& request, const DescribeDomainUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainUsageDataOutcomeCallable describeDomainUsageDataCallable(const Model::DescribeDomainUsageDataRequest& request) const;
			DescribeDomainWithIntegrityOutcome describeDomainWithIntegrity(const Model::DescribeDomainWithIntegrityRequest &request)const;
			void describeDomainWithIntegrityAsync(const Model::DescribeDomainWithIntegrityRequest& request, const DescribeDomainWithIntegrityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainWithIntegrityOutcomeCallable describeDomainWithIntegrityCallable(const Model::DescribeDomainWithIntegrityRequest& request) const;
			DescribeForbidPushStreamRoomListOutcome describeForbidPushStreamRoomList(const Model::DescribeForbidPushStreamRoomListRequest &request)const;
			void describeForbidPushStreamRoomListAsync(const Model::DescribeForbidPushStreamRoomListRequest& request, const DescribeForbidPushStreamRoomListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeForbidPushStreamRoomListOutcomeCallable describeForbidPushStreamRoomListCallable(const Model::DescribeForbidPushStreamRoomListRequest& request) const;
			DescribeHlsLiveStreamRealTimeBpsDataOutcome describeHlsLiveStreamRealTimeBpsData(const Model::DescribeHlsLiveStreamRealTimeBpsDataRequest &request)const;
			void describeHlsLiveStreamRealTimeBpsDataAsync(const Model::DescribeHlsLiveStreamRealTimeBpsDataRequest& request, const DescribeHlsLiveStreamRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHlsLiveStreamRealTimeBpsDataOutcomeCallable describeHlsLiveStreamRealTimeBpsDataCallable(const Model::DescribeHlsLiveStreamRealTimeBpsDataRequest& request) const;
			DescribeLiveAudioAuditConfigOutcome describeLiveAudioAuditConfig(const Model::DescribeLiveAudioAuditConfigRequest &request)const;
			void describeLiveAudioAuditConfigAsync(const Model::DescribeLiveAudioAuditConfigRequest& request, const DescribeLiveAudioAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveAudioAuditConfigOutcomeCallable describeLiveAudioAuditConfigCallable(const Model::DescribeLiveAudioAuditConfigRequest& request) const;
			DescribeLiveAudioAuditNotifyConfigOutcome describeLiveAudioAuditNotifyConfig(const Model::DescribeLiveAudioAuditNotifyConfigRequest &request)const;
			void describeLiveAudioAuditNotifyConfigAsync(const Model::DescribeLiveAudioAuditNotifyConfigRequest& request, const DescribeLiveAudioAuditNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveAudioAuditNotifyConfigOutcomeCallable describeLiveAudioAuditNotifyConfigCallable(const Model::DescribeLiveAudioAuditNotifyConfigRequest& request) const;
			DescribeLiveCenterTransferOutcome describeLiveCenterTransfer(const Model::DescribeLiveCenterTransferRequest &request)const;
			void describeLiveCenterTransferAsync(const Model::DescribeLiveCenterTransferRequest& request, const DescribeLiveCenterTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveCenterTransferOutcomeCallable describeLiveCenterTransferCallable(const Model::DescribeLiveCenterTransferRequest& request) const;
			DescribeLiveCertificateDetailOutcome describeLiveCertificateDetail(const Model::DescribeLiveCertificateDetailRequest &request)const;
			void describeLiveCertificateDetailAsync(const Model::DescribeLiveCertificateDetailRequest& request, const DescribeLiveCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveCertificateDetailOutcomeCallable describeLiveCertificateDetailCallable(const Model::DescribeLiveCertificateDetailRequest& request) const;
			DescribeLiveCertificateListOutcome describeLiveCertificateList(const Model::DescribeLiveCertificateListRequest &request)const;
			void describeLiveCertificateListAsync(const Model::DescribeLiveCertificateListRequest& request, const DescribeLiveCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveCertificateListOutcomeCallable describeLiveCertificateListCallable(const Model::DescribeLiveCertificateListRequest& request) const;
			DescribeLiveDelayConfigOutcome describeLiveDelayConfig(const Model::DescribeLiveDelayConfigRequest &request)const;
			void describeLiveDelayConfigAsync(const Model::DescribeLiveDelayConfigRequest& request, const DescribeLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDelayConfigOutcomeCallable describeLiveDelayConfigCallable(const Model::DescribeLiveDelayConfigRequest& request) const;
			DescribeLiveDelayedStreamingUsageOutcome describeLiveDelayedStreamingUsage(const Model::DescribeLiveDelayedStreamingUsageRequest &request)const;
			void describeLiveDelayedStreamingUsageAsync(const Model::DescribeLiveDelayedStreamingUsageRequest& request, const DescribeLiveDelayedStreamingUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDelayedStreamingUsageOutcomeCallable describeLiveDelayedStreamingUsageCallable(const Model::DescribeLiveDelayedStreamingUsageRequest& request) const;
			DescribeLiveDetectNotifyConfigOutcome describeLiveDetectNotifyConfig(const Model::DescribeLiveDetectNotifyConfigRequest &request)const;
			void describeLiveDetectNotifyConfigAsync(const Model::DescribeLiveDetectNotifyConfigRequest& request, const DescribeLiveDetectNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDetectNotifyConfigOutcomeCallable describeLiveDetectNotifyConfigCallable(const Model::DescribeLiveDetectNotifyConfigRequest& request) const;
			DescribeLiveDetectPornDataOutcome describeLiveDetectPornData(const Model::DescribeLiveDetectPornDataRequest &request)const;
			void describeLiveDetectPornDataAsync(const Model::DescribeLiveDetectPornDataRequest& request, const DescribeLiveDetectPornDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDetectPornDataOutcomeCallable describeLiveDetectPornDataCallable(const Model::DescribeLiveDetectPornDataRequest& request) const;
			DescribeLiveDomainBpsDataOutcome describeLiveDomainBpsData(const Model::DescribeLiveDomainBpsDataRequest &request)const;
			void describeLiveDomainBpsDataAsync(const Model::DescribeLiveDomainBpsDataRequest& request, const DescribeLiveDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainBpsDataOutcomeCallable describeLiveDomainBpsDataCallable(const Model::DescribeLiveDomainBpsDataRequest& request) const;
			DescribeLiveDomainBpsDataByLayerOutcome describeLiveDomainBpsDataByLayer(const Model::DescribeLiveDomainBpsDataByLayerRequest &request)const;
			void describeLiveDomainBpsDataByLayerAsync(const Model::DescribeLiveDomainBpsDataByLayerRequest& request, const DescribeLiveDomainBpsDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainBpsDataByLayerOutcomeCallable describeLiveDomainBpsDataByLayerCallable(const Model::DescribeLiveDomainBpsDataByLayerRequest& request) const;
			DescribeLiveDomainBpsDataByTimeStampOutcome describeLiveDomainBpsDataByTimeStamp(const Model::DescribeLiveDomainBpsDataByTimeStampRequest &request)const;
			void describeLiveDomainBpsDataByTimeStampAsync(const Model::DescribeLiveDomainBpsDataByTimeStampRequest& request, const DescribeLiveDomainBpsDataByTimeStampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainBpsDataByTimeStampOutcomeCallable describeLiveDomainBpsDataByTimeStampCallable(const Model::DescribeLiveDomainBpsDataByTimeStampRequest& request) const;
			DescribeLiveDomainCertificateInfoOutcome describeLiveDomainCertificateInfo(const Model::DescribeLiveDomainCertificateInfoRequest &request)const;
			void describeLiveDomainCertificateInfoAsync(const Model::DescribeLiveDomainCertificateInfoRequest& request, const DescribeLiveDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainCertificateInfoOutcomeCallable describeLiveDomainCertificateInfoCallable(const Model::DescribeLiveDomainCertificateInfoRequest& request) const;
			DescribeLiveDomainConfigsOutcome describeLiveDomainConfigs(const Model::DescribeLiveDomainConfigsRequest &request)const;
			void describeLiveDomainConfigsAsync(const Model::DescribeLiveDomainConfigsRequest& request, const DescribeLiveDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainConfigsOutcomeCallable describeLiveDomainConfigsCallable(const Model::DescribeLiveDomainConfigsRequest& request) const;
			DescribeLiveDomainDetailOutcome describeLiveDomainDetail(const Model::DescribeLiveDomainDetailRequest &request)const;
			void describeLiveDomainDetailAsync(const Model::DescribeLiveDomainDetailRequest& request, const DescribeLiveDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainDetailOutcomeCallable describeLiveDomainDetailCallable(const Model::DescribeLiveDomainDetailRequest& request) const;
			DescribeLiveDomainFrameRateAndBitRateDataOutcome describeLiveDomainFrameRateAndBitRateData(const Model::DescribeLiveDomainFrameRateAndBitRateDataRequest &request)const;
			void describeLiveDomainFrameRateAndBitRateDataAsync(const Model::DescribeLiveDomainFrameRateAndBitRateDataRequest& request, const DescribeLiveDomainFrameRateAndBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainFrameRateAndBitRateDataOutcomeCallable describeLiveDomainFrameRateAndBitRateDataCallable(const Model::DescribeLiveDomainFrameRateAndBitRateDataRequest& request) const;
			DescribeLiveDomainLimitOutcome describeLiveDomainLimit(const Model::DescribeLiveDomainLimitRequest &request)const;
			void describeLiveDomainLimitAsync(const Model::DescribeLiveDomainLimitRequest& request, const DescribeLiveDomainLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainLimitOutcomeCallable describeLiveDomainLimitCallable(const Model::DescribeLiveDomainLimitRequest& request) const;
			DescribeLiveDomainLogOutcome describeLiveDomainLog(const Model::DescribeLiveDomainLogRequest &request)const;
			void describeLiveDomainLogAsync(const Model::DescribeLiveDomainLogRequest& request, const DescribeLiveDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainLogOutcomeCallable describeLiveDomainLogCallable(const Model::DescribeLiveDomainLogRequest& request) const;
			DescribeLiveDomainMappingOutcome describeLiveDomainMapping(const Model::DescribeLiveDomainMappingRequest &request)const;
			void describeLiveDomainMappingAsync(const Model::DescribeLiveDomainMappingRequest& request, const DescribeLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainMappingOutcomeCallable describeLiveDomainMappingCallable(const Model::DescribeLiveDomainMappingRequest& request) const;
			DescribeLiveDomainOnlineUserNumOutcome describeLiveDomainOnlineUserNum(const Model::DescribeLiveDomainOnlineUserNumRequest &request)const;
			void describeLiveDomainOnlineUserNumAsync(const Model::DescribeLiveDomainOnlineUserNumRequest& request, const DescribeLiveDomainOnlineUserNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainOnlineUserNumOutcomeCallable describeLiveDomainOnlineUserNumCallable(const Model::DescribeLiveDomainOnlineUserNumRequest& request) const;
			DescribeLiveDomainPushBpsDataOutcome describeLiveDomainPushBpsData(const Model::DescribeLiveDomainPushBpsDataRequest &request)const;
			void describeLiveDomainPushBpsDataAsync(const Model::DescribeLiveDomainPushBpsDataRequest& request, const DescribeLiveDomainPushBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainPushBpsDataOutcomeCallable describeLiveDomainPushBpsDataCallable(const Model::DescribeLiveDomainPushBpsDataRequest& request) const;
			DescribeLiveDomainPushTrafficDataOutcome describeLiveDomainPushTrafficData(const Model::DescribeLiveDomainPushTrafficDataRequest &request)const;
			void describeLiveDomainPushTrafficDataAsync(const Model::DescribeLiveDomainPushTrafficDataRequest& request, const DescribeLiveDomainPushTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainPushTrafficDataOutcomeCallable describeLiveDomainPushTrafficDataCallable(const Model::DescribeLiveDomainPushTrafficDataRequest& request) const;
			DescribeLiveDomainPvUvDataOutcome describeLiveDomainPvUvData(const Model::DescribeLiveDomainPvUvDataRequest &request)const;
			void describeLiveDomainPvUvDataAsync(const Model::DescribeLiveDomainPvUvDataRequest& request, const DescribeLiveDomainPvUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainPvUvDataOutcomeCallable describeLiveDomainPvUvDataCallable(const Model::DescribeLiveDomainPvUvDataRequest& request) const;
			DescribeLiveDomainRealTimeBpsDataOutcome describeLiveDomainRealTimeBpsData(const Model::DescribeLiveDomainRealTimeBpsDataRequest &request)const;
			void describeLiveDomainRealTimeBpsDataAsync(const Model::DescribeLiveDomainRealTimeBpsDataRequest& request, const DescribeLiveDomainRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainRealTimeBpsDataOutcomeCallable describeLiveDomainRealTimeBpsDataCallable(const Model::DescribeLiveDomainRealTimeBpsDataRequest& request) const;
			DescribeLiveDomainRealTimeHttpCodeDataOutcome describeLiveDomainRealTimeHttpCodeData(const Model::DescribeLiveDomainRealTimeHttpCodeDataRequest &request)const;
			void describeLiveDomainRealTimeHttpCodeDataAsync(const Model::DescribeLiveDomainRealTimeHttpCodeDataRequest& request, const DescribeLiveDomainRealTimeHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainRealTimeHttpCodeDataOutcomeCallable describeLiveDomainRealTimeHttpCodeDataCallable(const Model::DescribeLiveDomainRealTimeHttpCodeDataRequest& request) const;
			DescribeLiveDomainRealTimeTrafficDataOutcome describeLiveDomainRealTimeTrafficData(const Model::DescribeLiveDomainRealTimeTrafficDataRequest &request)const;
			void describeLiveDomainRealTimeTrafficDataAsync(const Model::DescribeLiveDomainRealTimeTrafficDataRequest& request, const DescribeLiveDomainRealTimeTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainRealTimeTrafficDataOutcomeCallable describeLiveDomainRealTimeTrafficDataCallable(const Model::DescribeLiveDomainRealTimeTrafficDataRequest& request) const;
			DescribeLiveDomainRealtimeLogDeliveryOutcome describeLiveDomainRealtimeLogDelivery(const Model::DescribeLiveDomainRealtimeLogDeliveryRequest &request)const;
			void describeLiveDomainRealtimeLogDeliveryAsync(const Model::DescribeLiveDomainRealtimeLogDeliveryRequest& request, const DescribeLiveDomainRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainRealtimeLogDeliveryOutcomeCallable describeLiveDomainRealtimeLogDeliveryCallable(const Model::DescribeLiveDomainRealtimeLogDeliveryRequest& request) const;
			DescribeLiveDomainRecordDataOutcome describeLiveDomainRecordData(const Model::DescribeLiveDomainRecordDataRequest &request)const;
			void describeLiveDomainRecordDataAsync(const Model::DescribeLiveDomainRecordDataRequest& request, const DescribeLiveDomainRecordDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainRecordDataOutcomeCallable describeLiveDomainRecordDataCallable(const Model::DescribeLiveDomainRecordDataRequest& request) const;
			DescribeLiveDomainRecordUsageDataOutcome describeLiveDomainRecordUsageData(const Model::DescribeLiveDomainRecordUsageDataRequest &request)const;
			void describeLiveDomainRecordUsageDataAsync(const Model::DescribeLiveDomainRecordUsageDataRequest& request, const DescribeLiveDomainRecordUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainRecordUsageDataOutcomeCallable describeLiveDomainRecordUsageDataCallable(const Model::DescribeLiveDomainRecordUsageDataRequest& request) const;
			DescribeLiveDomainSnapshotDataOutcome describeLiveDomainSnapshotData(const Model::DescribeLiveDomainSnapshotDataRequest &request)const;
			void describeLiveDomainSnapshotDataAsync(const Model::DescribeLiveDomainSnapshotDataRequest& request, const DescribeLiveDomainSnapshotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainSnapshotDataOutcomeCallable describeLiveDomainSnapshotDataCallable(const Model::DescribeLiveDomainSnapshotDataRequest& request) const;
			DescribeLiveDomainStagingConfigOutcome describeLiveDomainStagingConfig(const Model::DescribeLiveDomainStagingConfigRequest &request)const;
			void describeLiveDomainStagingConfigAsync(const Model::DescribeLiveDomainStagingConfigRequest& request, const DescribeLiveDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainStagingConfigOutcomeCallable describeLiveDomainStagingConfigCallable(const Model::DescribeLiveDomainStagingConfigRequest& request) const;
			DescribeLiveDomainStreamTranscodeDataOutcome describeLiveDomainStreamTranscodeData(const Model::DescribeLiveDomainStreamTranscodeDataRequest &request)const;
			void describeLiveDomainStreamTranscodeDataAsync(const Model::DescribeLiveDomainStreamTranscodeDataRequest& request, const DescribeLiveDomainStreamTranscodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainStreamTranscodeDataOutcomeCallable describeLiveDomainStreamTranscodeDataCallable(const Model::DescribeLiveDomainStreamTranscodeDataRequest& request) const;
			DescribeLiveDomainTimeShiftDataOutcome describeLiveDomainTimeShiftData(const Model::DescribeLiveDomainTimeShiftDataRequest &request)const;
			void describeLiveDomainTimeShiftDataAsync(const Model::DescribeLiveDomainTimeShiftDataRequest& request, const DescribeLiveDomainTimeShiftDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainTimeShiftDataOutcomeCallable describeLiveDomainTimeShiftDataCallable(const Model::DescribeLiveDomainTimeShiftDataRequest& request) const;
			DescribeLiveDomainTrafficDataOutcome describeLiveDomainTrafficData(const Model::DescribeLiveDomainTrafficDataRequest &request)const;
			void describeLiveDomainTrafficDataAsync(const Model::DescribeLiveDomainTrafficDataRequest& request, const DescribeLiveDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainTrafficDataOutcomeCallable describeLiveDomainTrafficDataCallable(const Model::DescribeLiveDomainTrafficDataRequest& request) const;
			DescribeLiveDomainTranscodeDataOutcome describeLiveDomainTranscodeData(const Model::DescribeLiveDomainTranscodeDataRequest &request)const;
			void describeLiveDomainTranscodeDataAsync(const Model::DescribeLiveDomainTranscodeDataRequest& request, const DescribeLiveDomainTranscodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDomainTranscodeDataOutcomeCallable describeLiveDomainTranscodeDataCallable(const Model::DescribeLiveDomainTranscodeDataRequest& request) const;
			DescribeLiveDrmUsageDataOutcome describeLiveDrmUsageData(const Model::DescribeLiveDrmUsageDataRequest &request)const;
			void describeLiveDrmUsageDataAsync(const Model::DescribeLiveDrmUsageDataRequest& request, const DescribeLiveDrmUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveDrmUsageDataOutcomeCallable describeLiveDrmUsageDataCallable(const Model::DescribeLiveDrmUsageDataRequest& request) const;
			DescribeLiveEdgeTransferOutcome describeLiveEdgeTransfer(const Model::DescribeLiveEdgeTransferRequest &request)const;
			void describeLiveEdgeTransferAsync(const Model::DescribeLiveEdgeTransferRequest& request, const DescribeLiveEdgeTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveEdgeTransferOutcomeCallable describeLiveEdgeTransferCallable(const Model::DescribeLiveEdgeTransferRequest& request) const;
			DescribeLiveLazyPullStreamConfigOutcome describeLiveLazyPullStreamConfig(const Model::DescribeLiveLazyPullStreamConfigRequest &request)const;
			void describeLiveLazyPullStreamConfigAsync(const Model::DescribeLiveLazyPullStreamConfigRequest& request, const DescribeLiveLazyPullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveLazyPullStreamConfigOutcomeCallable describeLiveLazyPullStreamConfigCallable(const Model::DescribeLiveLazyPullStreamConfigRequest& request) const;
			DescribeLiveProducerUsageDataOutcome describeLiveProducerUsageData(const Model::DescribeLiveProducerUsageDataRequest &request)const;
			void describeLiveProducerUsageDataAsync(const Model::DescribeLiveProducerUsageDataRequest& request, const DescribeLiveProducerUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveProducerUsageDataOutcomeCallable describeLiveProducerUsageDataCallable(const Model::DescribeLiveProducerUsageDataRequest& request) const;
			DescribeLivePullStreamConfigOutcome describeLivePullStreamConfig(const Model::DescribeLivePullStreamConfigRequest &request)const;
			void describeLivePullStreamConfigAsync(const Model::DescribeLivePullStreamConfigRequest& request, const DescribeLivePullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLivePullStreamConfigOutcomeCallable describeLivePullStreamConfigCallable(const Model::DescribeLivePullStreamConfigRequest& request) const;
			DescribeLiveRealtimeDeliveryAccOutcome describeLiveRealtimeDeliveryAcc(const Model::DescribeLiveRealtimeDeliveryAccRequest &request)const;
			void describeLiveRealtimeDeliveryAccAsync(const Model::DescribeLiveRealtimeDeliveryAccRequest& request, const DescribeLiveRealtimeDeliveryAccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveRealtimeDeliveryAccOutcomeCallable describeLiveRealtimeDeliveryAccCallable(const Model::DescribeLiveRealtimeDeliveryAccRequest& request) const;
			DescribeLiveRealtimeLogAuthorizedOutcome describeLiveRealtimeLogAuthorized(const Model::DescribeLiveRealtimeLogAuthorizedRequest &request)const;
			void describeLiveRealtimeLogAuthorizedAsync(const Model::DescribeLiveRealtimeLogAuthorizedRequest& request, const DescribeLiveRealtimeLogAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveRealtimeLogAuthorizedOutcomeCallable describeLiveRealtimeLogAuthorizedCallable(const Model::DescribeLiveRealtimeLogAuthorizedRequest& request) const;
			DescribeLiveRecordConfigOutcome describeLiveRecordConfig(const Model::DescribeLiveRecordConfigRequest &request)const;
			void describeLiveRecordConfigAsync(const Model::DescribeLiveRecordConfigRequest& request, const DescribeLiveRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveRecordConfigOutcomeCallable describeLiveRecordConfigCallable(const Model::DescribeLiveRecordConfigRequest& request) const;
			DescribeLiveRecordNotifyConfigOutcome describeLiveRecordNotifyConfig(const Model::DescribeLiveRecordNotifyConfigRequest &request)const;
			void describeLiveRecordNotifyConfigAsync(const Model::DescribeLiveRecordNotifyConfigRequest& request, const DescribeLiveRecordNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveRecordNotifyConfigOutcomeCallable describeLiveRecordNotifyConfigCallable(const Model::DescribeLiveRecordNotifyConfigRequest& request) const;
			DescribeLiveRecordNotifyRecordsOutcome describeLiveRecordNotifyRecords(const Model::DescribeLiveRecordNotifyRecordsRequest &request)const;
			void describeLiveRecordNotifyRecordsAsync(const Model::DescribeLiveRecordNotifyRecordsRequest& request, const DescribeLiveRecordNotifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveRecordNotifyRecordsOutcomeCallable describeLiveRecordNotifyRecordsCallable(const Model::DescribeLiveRecordNotifyRecordsRequest& request) const;
			DescribeLiveRecordVodConfigsOutcome describeLiveRecordVodConfigs(const Model::DescribeLiveRecordVodConfigsRequest &request)const;
			void describeLiveRecordVodConfigsAsync(const Model::DescribeLiveRecordVodConfigsRequest& request, const DescribeLiveRecordVodConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveRecordVodConfigsOutcomeCallable describeLiveRecordVodConfigsCallable(const Model::DescribeLiveRecordVodConfigsRequest& request) const;
			DescribeLiveShiftConfigsOutcome describeLiveShiftConfigs(const Model::DescribeLiveShiftConfigsRequest &request)const;
			void describeLiveShiftConfigsAsync(const Model::DescribeLiveShiftConfigsRequest& request, const DescribeLiveShiftConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveShiftConfigsOutcomeCallable describeLiveShiftConfigsCallable(const Model::DescribeLiveShiftConfigsRequest& request) const;
			DescribeLiveSnapshotConfigOutcome describeLiveSnapshotConfig(const Model::DescribeLiveSnapshotConfigRequest &request)const;
			void describeLiveSnapshotConfigAsync(const Model::DescribeLiveSnapshotConfigRequest& request, const DescribeLiveSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveSnapshotConfigOutcomeCallable describeLiveSnapshotConfigCallable(const Model::DescribeLiveSnapshotConfigRequest& request) const;
			DescribeLiveSnapshotDetectPornConfigOutcome describeLiveSnapshotDetectPornConfig(const Model::DescribeLiveSnapshotDetectPornConfigRequest &request)const;
			void describeLiveSnapshotDetectPornConfigAsync(const Model::DescribeLiveSnapshotDetectPornConfigRequest& request, const DescribeLiveSnapshotDetectPornConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveSnapshotDetectPornConfigOutcomeCallable describeLiveSnapshotDetectPornConfigCallable(const Model::DescribeLiveSnapshotDetectPornConfigRequest& request) const;
			DescribeLiveSnapshotNotifyConfigOutcome describeLiveSnapshotNotifyConfig(const Model::DescribeLiveSnapshotNotifyConfigRequest &request)const;
			void describeLiveSnapshotNotifyConfigAsync(const Model::DescribeLiveSnapshotNotifyConfigRequest& request, const DescribeLiveSnapshotNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveSnapshotNotifyConfigOutcomeCallable describeLiveSnapshotNotifyConfigCallable(const Model::DescribeLiveSnapshotNotifyConfigRequest& request) const;
			DescribeLiveStreamAuthCheckingOutcome describeLiveStreamAuthChecking(const Model::DescribeLiveStreamAuthCheckingRequest &request)const;
			void describeLiveStreamAuthCheckingAsync(const Model::DescribeLiveStreamAuthCheckingRequest& request, const DescribeLiveStreamAuthCheckingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamAuthCheckingOutcomeCallable describeLiveStreamAuthCheckingCallable(const Model::DescribeLiveStreamAuthCheckingRequest& request) const;
			DescribeLiveStreamBitRateDataOutcome describeLiveStreamBitRateData(const Model::DescribeLiveStreamBitRateDataRequest &request)const;
			void describeLiveStreamBitRateDataAsync(const Model::DescribeLiveStreamBitRateDataRequest& request, const DescribeLiveStreamBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamBitRateDataOutcomeCallable describeLiveStreamBitRateDataCallable(const Model::DescribeLiveStreamBitRateDataRequest& request) const;
			DescribeLiveStreamCountOutcome describeLiveStreamCount(const Model::DescribeLiveStreamCountRequest &request)const;
			void describeLiveStreamCountAsync(const Model::DescribeLiveStreamCountRequest& request, const DescribeLiveStreamCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamCountOutcomeCallable describeLiveStreamCountCallable(const Model::DescribeLiveStreamCountRequest& request) const;
			DescribeLiveStreamDelayConfigOutcome describeLiveStreamDelayConfig(const Model::DescribeLiveStreamDelayConfigRequest &request)const;
			void describeLiveStreamDelayConfigAsync(const Model::DescribeLiveStreamDelayConfigRequest& request, const DescribeLiveStreamDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamDelayConfigOutcomeCallable describeLiveStreamDelayConfigCallable(const Model::DescribeLiveStreamDelayConfigRequest& request) const;
			DescribeLiveStreamHistoryUserNumOutcome describeLiveStreamHistoryUserNum(const Model::DescribeLiveStreamHistoryUserNumRequest &request)const;
			void describeLiveStreamHistoryUserNumAsync(const Model::DescribeLiveStreamHistoryUserNumRequest& request, const DescribeLiveStreamHistoryUserNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamHistoryUserNumOutcomeCallable describeLiveStreamHistoryUserNumCallable(const Model::DescribeLiveStreamHistoryUserNumRequest& request) const;
			DescribeLiveStreamMetricDetailDataOutcome describeLiveStreamMetricDetailData(const Model::DescribeLiveStreamMetricDetailDataRequest &request)const;
			void describeLiveStreamMetricDetailDataAsync(const Model::DescribeLiveStreamMetricDetailDataRequest& request, const DescribeLiveStreamMetricDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamMetricDetailDataOutcomeCallable describeLiveStreamMetricDetailDataCallable(const Model::DescribeLiveStreamMetricDetailDataRequest& request) const;
			DescribeLiveStreamMonitorListOutcome describeLiveStreamMonitorList(const Model::DescribeLiveStreamMonitorListRequest &request)const;
			void describeLiveStreamMonitorListAsync(const Model::DescribeLiveStreamMonitorListRequest& request, const DescribeLiveStreamMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamMonitorListOutcomeCallable describeLiveStreamMonitorListCallable(const Model::DescribeLiveStreamMonitorListRequest& request) const;
			DescribeLiveStreamOptimizedFeatureConfigOutcome describeLiveStreamOptimizedFeatureConfig(const Model::DescribeLiveStreamOptimizedFeatureConfigRequest &request)const;
			void describeLiveStreamOptimizedFeatureConfigAsync(const Model::DescribeLiveStreamOptimizedFeatureConfigRequest& request, const DescribeLiveStreamOptimizedFeatureConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamOptimizedFeatureConfigOutcomeCallable describeLiveStreamOptimizedFeatureConfigCallable(const Model::DescribeLiveStreamOptimizedFeatureConfigRequest& request) const;
			DescribeLiveStreamRecordContentOutcome describeLiveStreamRecordContent(const Model::DescribeLiveStreamRecordContentRequest &request)const;
			void describeLiveStreamRecordContentAsync(const Model::DescribeLiveStreamRecordContentRequest& request, const DescribeLiveStreamRecordContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamRecordContentOutcomeCallable describeLiveStreamRecordContentCallable(const Model::DescribeLiveStreamRecordContentRequest& request) const;
			DescribeLiveStreamRecordIndexFileOutcome describeLiveStreamRecordIndexFile(const Model::DescribeLiveStreamRecordIndexFileRequest &request)const;
			void describeLiveStreamRecordIndexFileAsync(const Model::DescribeLiveStreamRecordIndexFileRequest& request, const DescribeLiveStreamRecordIndexFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamRecordIndexFileOutcomeCallable describeLiveStreamRecordIndexFileCallable(const Model::DescribeLiveStreamRecordIndexFileRequest& request) const;
			DescribeLiveStreamRecordIndexFilesOutcome describeLiveStreamRecordIndexFiles(const Model::DescribeLiveStreamRecordIndexFilesRequest &request)const;
			void describeLiveStreamRecordIndexFilesAsync(const Model::DescribeLiveStreamRecordIndexFilesRequest& request, const DescribeLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamRecordIndexFilesOutcomeCallable describeLiveStreamRecordIndexFilesCallable(const Model::DescribeLiveStreamRecordIndexFilesRequest& request) const;
			DescribeLiveStreamSnapshotInfoOutcome describeLiveStreamSnapshotInfo(const Model::DescribeLiveStreamSnapshotInfoRequest &request)const;
			void describeLiveStreamSnapshotInfoAsync(const Model::DescribeLiveStreamSnapshotInfoRequest& request, const DescribeLiveStreamSnapshotInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamSnapshotInfoOutcomeCallable describeLiveStreamSnapshotInfoCallable(const Model::DescribeLiveStreamSnapshotInfoRequest& request) const;
			DescribeLiveStreamStateOutcome describeLiveStreamState(const Model::DescribeLiveStreamStateRequest &request)const;
			void describeLiveStreamStateAsync(const Model::DescribeLiveStreamStateRequest& request, const DescribeLiveStreamStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamStateOutcomeCallable describeLiveStreamStateCallable(const Model::DescribeLiveStreamStateRequest& request) const;
			DescribeLiveStreamTranscodeInfoOutcome describeLiveStreamTranscodeInfo(const Model::DescribeLiveStreamTranscodeInfoRequest &request)const;
			void describeLiveStreamTranscodeInfoAsync(const Model::DescribeLiveStreamTranscodeInfoRequest& request, const DescribeLiveStreamTranscodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamTranscodeInfoOutcomeCallable describeLiveStreamTranscodeInfoCallable(const Model::DescribeLiveStreamTranscodeInfoRequest& request) const;
			DescribeLiveStreamTranscodeStreamNumOutcome describeLiveStreamTranscodeStreamNum(const Model::DescribeLiveStreamTranscodeStreamNumRequest &request)const;
			void describeLiveStreamTranscodeStreamNumAsync(const Model::DescribeLiveStreamTranscodeStreamNumRequest& request, const DescribeLiveStreamTranscodeStreamNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamTranscodeStreamNumOutcomeCallable describeLiveStreamTranscodeStreamNumCallable(const Model::DescribeLiveStreamTranscodeStreamNumRequest& request) const;
			DescribeLiveStreamWatermarkRulesOutcome describeLiveStreamWatermarkRules(const Model::DescribeLiveStreamWatermarkRulesRequest &request)const;
			void describeLiveStreamWatermarkRulesAsync(const Model::DescribeLiveStreamWatermarkRulesRequest& request, const DescribeLiveStreamWatermarkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamWatermarkRulesOutcomeCallable describeLiveStreamWatermarkRulesCallable(const Model::DescribeLiveStreamWatermarkRulesRequest& request) const;
			DescribeLiveStreamWatermarksOutcome describeLiveStreamWatermarks(const Model::DescribeLiveStreamWatermarksRequest &request)const;
			void describeLiveStreamWatermarksAsync(const Model::DescribeLiveStreamWatermarksRequest& request, const DescribeLiveStreamWatermarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamWatermarksOutcomeCallable describeLiveStreamWatermarksCallable(const Model::DescribeLiveStreamWatermarksRequest& request) const;
			DescribeLiveStreamsBlockListOutcome describeLiveStreamsBlockList(const Model::DescribeLiveStreamsBlockListRequest &request)const;
			void describeLiveStreamsBlockListAsync(const Model::DescribeLiveStreamsBlockListRequest& request, const DescribeLiveStreamsBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsBlockListOutcomeCallable describeLiveStreamsBlockListCallable(const Model::DescribeLiveStreamsBlockListRequest& request) const;
			DescribeLiveStreamsControlHistoryOutcome describeLiveStreamsControlHistory(const Model::DescribeLiveStreamsControlHistoryRequest &request)const;
			void describeLiveStreamsControlHistoryAsync(const Model::DescribeLiveStreamsControlHistoryRequest& request, const DescribeLiveStreamsControlHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsControlHistoryOutcomeCallable describeLiveStreamsControlHistoryCallable(const Model::DescribeLiveStreamsControlHistoryRequest& request) const;
			DescribeLiveStreamsNotifyRecordsOutcome describeLiveStreamsNotifyRecords(const Model::DescribeLiveStreamsNotifyRecordsRequest &request)const;
			void describeLiveStreamsNotifyRecordsAsync(const Model::DescribeLiveStreamsNotifyRecordsRequest& request, const DescribeLiveStreamsNotifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsNotifyRecordsOutcomeCallable describeLiveStreamsNotifyRecordsCallable(const Model::DescribeLiveStreamsNotifyRecordsRequest& request) const;
			DescribeLiveStreamsNotifyUrlConfigOutcome describeLiveStreamsNotifyUrlConfig(const Model::DescribeLiveStreamsNotifyUrlConfigRequest &request)const;
			void describeLiveStreamsNotifyUrlConfigAsync(const Model::DescribeLiveStreamsNotifyUrlConfigRequest& request, const DescribeLiveStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsNotifyUrlConfigOutcomeCallable describeLiveStreamsNotifyUrlConfigCallable(const Model::DescribeLiveStreamsNotifyUrlConfigRequest& request) const;
			DescribeLiveStreamsOnlineListOutcome describeLiveStreamsOnlineList(const Model::DescribeLiveStreamsOnlineListRequest &request)const;
			void describeLiveStreamsOnlineListAsync(const Model::DescribeLiveStreamsOnlineListRequest& request, const DescribeLiveStreamsOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsOnlineListOutcomeCallable describeLiveStreamsOnlineListCallable(const Model::DescribeLiveStreamsOnlineListRequest& request) const;
			DescribeLiveStreamsPublishListOutcome describeLiveStreamsPublishList(const Model::DescribeLiveStreamsPublishListRequest &request)const;
			void describeLiveStreamsPublishListAsync(const Model::DescribeLiveStreamsPublishListRequest& request, const DescribeLiveStreamsPublishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveStreamsPublishListOutcomeCallable describeLiveStreamsPublishListCallable(const Model::DescribeLiveStreamsPublishListRequest& request) const;
			DescribeLiveTagResourcesOutcome describeLiveTagResources(const Model::DescribeLiveTagResourcesRequest &request)const;
			void describeLiveTagResourcesAsync(const Model::DescribeLiveTagResourcesRequest& request, const DescribeLiveTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveTagResourcesOutcomeCallable describeLiveTagResourcesCallable(const Model::DescribeLiveTagResourcesRequest& request) const;
			DescribeLiveTopDomainsByFlowOutcome describeLiveTopDomainsByFlow(const Model::DescribeLiveTopDomainsByFlowRequest &request)const;
			void describeLiveTopDomainsByFlowAsync(const Model::DescribeLiveTopDomainsByFlowRequest& request, const DescribeLiveTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveTopDomainsByFlowOutcomeCallable describeLiveTopDomainsByFlowCallable(const Model::DescribeLiveTopDomainsByFlowRequest& request) const;
			DescribeLiveUserBillPredictionOutcome describeLiveUserBillPrediction(const Model::DescribeLiveUserBillPredictionRequest &request)const;
			void describeLiveUserBillPredictionAsync(const Model::DescribeLiveUserBillPredictionRequest& request, const DescribeLiveUserBillPredictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveUserBillPredictionOutcomeCallable describeLiveUserBillPredictionCallable(const Model::DescribeLiveUserBillPredictionRequest& request) const;
			DescribeLiveUserDomainsOutcome describeLiveUserDomains(const Model::DescribeLiveUserDomainsRequest &request)const;
			void describeLiveUserDomainsAsync(const Model::DescribeLiveUserDomainsRequest& request, const DescribeLiveUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveUserDomainsOutcomeCallable describeLiveUserDomainsCallable(const Model::DescribeLiveUserDomainsRequest& request) const;
			DescribeLiveUserTagsOutcome describeLiveUserTags(const Model::DescribeLiveUserTagsRequest &request)const;
			void describeLiveUserTagsAsync(const Model::DescribeLiveUserTagsRequest& request, const DescribeLiveUserTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLiveUserTagsOutcomeCallable describeLiveUserTagsCallable(const Model::DescribeLiveUserTagsRequest& request) const;
			DescribeMeterLiveInteractionDauOutcome describeMeterLiveInteractionDau(const Model::DescribeMeterLiveInteractionDauRequest &request)const;
			void describeMeterLiveInteractionDauAsync(const Model::DescribeMeterLiveInteractionDauRequest& request, const DescribeMeterLiveInteractionDauAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterLiveInteractionDauOutcomeCallable describeMeterLiveInteractionDauCallable(const Model::DescribeMeterLiveInteractionDauRequest& request) const;
			DescribeMeterLiveRtcDurationOutcome describeMeterLiveRtcDuration(const Model::DescribeMeterLiveRtcDurationRequest &request)const;
			void describeMeterLiveRtcDurationAsync(const Model::DescribeMeterLiveRtcDurationRequest& request, const DescribeMeterLiveRtcDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeterLiveRtcDurationOutcomeCallable describeMeterLiveRtcDurationCallable(const Model::DescribeMeterLiveRtcDurationRequest& request) const;
			DescribeMixStreamListOutcome describeMixStreamList(const Model::DescribeMixStreamListRequest &request)const;
			void describeMixStreamListAsync(const Model::DescribeMixStreamListRequest& request, const DescribeMixStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMixStreamListOutcomeCallable describeMixStreamListCallable(const Model::DescribeMixStreamListRequest& request) const;
			DescribeRTSNativeSDKFirstFrameCostOutcome describeRTSNativeSDKFirstFrameCost(const Model::DescribeRTSNativeSDKFirstFrameCostRequest &request)const;
			void describeRTSNativeSDKFirstFrameCostAsync(const Model::DescribeRTSNativeSDKFirstFrameCostRequest& request, const DescribeRTSNativeSDKFirstFrameCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRTSNativeSDKFirstFrameCostOutcomeCallable describeRTSNativeSDKFirstFrameCostCallable(const Model::DescribeRTSNativeSDKFirstFrameCostRequest& request) const;
			DescribeRTSNativeSDKFirstFrameDelayOutcome describeRTSNativeSDKFirstFrameDelay(const Model::DescribeRTSNativeSDKFirstFrameDelayRequest &request)const;
			void describeRTSNativeSDKFirstFrameDelayAsync(const Model::DescribeRTSNativeSDKFirstFrameDelayRequest& request, const DescribeRTSNativeSDKFirstFrameDelayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRTSNativeSDKFirstFrameDelayOutcomeCallable describeRTSNativeSDKFirstFrameDelayCallable(const Model::DescribeRTSNativeSDKFirstFrameDelayRequest& request) const;
			DescribeRTSNativeSDKPlayFailStatusOutcome describeRTSNativeSDKPlayFailStatus(const Model::DescribeRTSNativeSDKPlayFailStatusRequest &request)const;
			void describeRTSNativeSDKPlayFailStatusAsync(const Model::DescribeRTSNativeSDKPlayFailStatusRequest& request, const DescribeRTSNativeSDKPlayFailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRTSNativeSDKPlayFailStatusOutcomeCallable describeRTSNativeSDKPlayFailStatusCallable(const Model::DescribeRTSNativeSDKPlayFailStatusRequest& request) const;
			DescribeRTSNativeSDKPlayTimeOutcome describeRTSNativeSDKPlayTime(const Model::DescribeRTSNativeSDKPlayTimeRequest &request)const;
			void describeRTSNativeSDKPlayTimeAsync(const Model::DescribeRTSNativeSDKPlayTimeRequest& request, const DescribeRTSNativeSDKPlayTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRTSNativeSDKPlayTimeOutcomeCallable describeRTSNativeSDKPlayTimeCallable(const Model::DescribeRTSNativeSDKPlayTimeRequest& request) const;
			DescribeRTSNativeSDKVvDataOutcome describeRTSNativeSDKVvData(const Model::DescribeRTSNativeSDKVvDataRequest &request)const;
			void describeRTSNativeSDKVvDataAsync(const Model::DescribeRTSNativeSDKVvDataRequest& request, const DescribeRTSNativeSDKVvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRTSNativeSDKVvDataOutcomeCallable describeRTSNativeSDKVvDataCallable(const Model::DescribeRTSNativeSDKVvDataRequest& request) const;
			DescribeRoomKickoutUserListOutcome describeRoomKickoutUserList(const Model::DescribeRoomKickoutUserListRequest &request)const;
			void describeRoomKickoutUserListAsync(const Model::DescribeRoomKickoutUserListRequest& request, const DescribeRoomKickoutUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRoomKickoutUserListOutcomeCallable describeRoomKickoutUserListCallable(const Model::DescribeRoomKickoutUserListRequest& request) const;
			DescribeRoomListOutcome describeRoomList(const Model::DescribeRoomListRequest &request)const;
			void describeRoomListAsync(const Model::DescribeRoomListRequest& request, const DescribeRoomListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRoomListOutcomeCallable describeRoomListCallable(const Model::DescribeRoomListRequest& request) const;
			DescribeRoomStatusOutcome describeRoomStatus(const Model::DescribeRoomStatusRequest &request)const;
			void describeRoomStatusAsync(const Model::DescribeRoomStatusRequest& request, const DescribeRoomStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRoomStatusOutcomeCallable describeRoomStatusCallable(const Model::DescribeRoomStatusRequest& request) const;
			DescribeShowListOutcome describeShowList(const Model::DescribeShowListRequest &request)const;
			void describeShowListAsync(const Model::DescribeShowListRequest& request, const DescribeShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeShowListOutcomeCallable describeShowListCallable(const Model::DescribeShowListRequest& request) const;
			DescribeStudioLayoutsOutcome describeStudioLayouts(const Model::DescribeStudioLayoutsRequest &request)const;
			void describeStudioLayoutsAsync(const Model::DescribeStudioLayoutsRequest& request, const DescribeStudioLayoutsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStudioLayoutsOutcomeCallable describeStudioLayoutsCallable(const Model::DescribeStudioLayoutsRequest& request) const;
			DescribeToutiaoLivePlayOutcome describeToutiaoLivePlay(const Model::DescribeToutiaoLivePlayRequest &request)const;
			void describeToutiaoLivePlayAsync(const Model::DescribeToutiaoLivePlayRequest& request, const DescribeToutiaoLivePlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeToutiaoLivePlayOutcomeCallable describeToutiaoLivePlayCallable(const Model::DescribeToutiaoLivePlayRequest& request) const;
			DescribeToutiaoLivePublishOutcome describeToutiaoLivePublish(const Model::DescribeToutiaoLivePublishRequest &request)const;
			void describeToutiaoLivePublishAsync(const Model::DescribeToutiaoLivePublishRequest& request, const DescribeToutiaoLivePublishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeToutiaoLivePublishOutcomeCallable describeToutiaoLivePublishCallable(const Model::DescribeToutiaoLivePublishRequest& request) const;
			DescribeUpBpsPeakDataOutcome describeUpBpsPeakData(const Model::DescribeUpBpsPeakDataRequest &request)const;
			void describeUpBpsPeakDataAsync(const Model::DescribeUpBpsPeakDataRequest& request, const DescribeUpBpsPeakDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpBpsPeakDataOutcomeCallable describeUpBpsPeakDataCallable(const Model::DescribeUpBpsPeakDataRequest& request) const;
			DescribeUpBpsPeakOfLineOutcome describeUpBpsPeakOfLine(const Model::DescribeUpBpsPeakOfLineRequest &request)const;
			void describeUpBpsPeakOfLineAsync(const Model::DescribeUpBpsPeakOfLineRequest& request, const DescribeUpBpsPeakOfLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpBpsPeakOfLineOutcomeCallable describeUpBpsPeakOfLineCallable(const Model::DescribeUpBpsPeakOfLineRequest& request) const;
			DescribeUpPeakPublishStreamDataOutcome describeUpPeakPublishStreamData(const Model::DescribeUpPeakPublishStreamDataRequest &request)const;
			void describeUpPeakPublishStreamDataAsync(const Model::DescribeUpPeakPublishStreamDataRequest& request, const DescribeUpPeakPublishStreamDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpPeakPublishStreamDataOutcomeCallable describeUpPeakPublishStreamDataCallable(const Model::DescribeUpPeakPublishStreamDataRequest& request) const;
			DisableLiveRealtimeLogDeliveryOutcome disableLiveRealtimeLogDelivery(const Model::DisableLiveRealtimeLogDeliveryRequest &request)const;
			void disableLiveRealtimeLogDeliveryAsync(const Model::DisableLiveRealtimeLogDeliveryRequest& request, const DisableLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableLiveRealtimeLogDeliveryOutcomeCallable disableLiveRealtimeLogDeliveryCallable(const Model::DisableLiveRealtimeLogDeliveryRequest& request) const;
			DynamicUpdateWaterMarkStreamRuleOutcome dynamicUpdateWaterMarkStreamRule(const Model::DynamicUpdateWaterMarkStreamRuleRequest &request)const;
			void dynamicUpdateWaterMarkStreamRuleAsync(const Model::DynamicUpdateWaterMarkStreamRuleRequest& request, const DynamicUpdateWaterMarkStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DynamicUpdateWaterMarkStreamRuleOutcomeCallable dynamicUpdateWaterMarkStreamRuleCallable(const Model::DynamicUpdateWaterMarkStreamRuleRequest& request) const;
			EditPlaylistOutcome editPlaylist(const Model::EditPlaylistRequest &request)const;
			void editPlaylistAsync(const Model::EditPlaylistRequest& request, const EditPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EditPlaylistOutcomeCallable editPlaylistCallable(const Model::EditPlaylistRequest& request) const;
			EditShowAndReplaceOutcome editShowAndReplace(const Model::EditShowAndReplaceRequest &request)const;
			void editShowAndReplaceAsync(const Model::EditShowAndReplaceRequest& request, const EditShowAndReplaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EditShowAndReplaceOutcomeCallable editShowAndReplaceCallable(const Model::EditShowAndReplaceRequest& request) const;
			EffectCasterUrgentOutcome effectCasterUrgent(const Model::EffectCasterUrgentRequest &request)const;
			void effectCasterUrgentAsync(const Model::EffectCasterUrgentRequest& request, const EffectCasterUrgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EffectCasterUrgentOutcomeCallable effectCasterUrgentCallable(const Model::EffectCasterUrgentRequest& request) const;
			EffectCasterVideoResourceOutcome effectCasterVideoResource(const Model::EffectCasterVideoResourceRequest &request)const;
			void effectCasterVideoResourceAsync(const Model::EffectCasterVideoResourceRequest& request, const EffectCasterVideoResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EffectCasterVideoResourceOutcomeCallable effectCasterVideoResourceCallable(const Model::EffectCasterVideoResourceRequest& request) const;
			EnableLiveRealtimeLogDeliveryOutcome enableLiveRealtimeLogDelivery(const Model::EnableLiveRealtimeLogDeliveryRequest &request)const;
			void enableLiveRealtimeLogDeliveryAsync(const Model::EnableLiveRealtimeLogDeliveryRequest& request, const EnableLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableLiveRealtimeLogDeliveryOutcomeCallable enableLiveRealtimeLogDeliveryCallable(const Model::EnableLiveRealtimeLogDeliveryRequest& request) const;
			ForbidLiveStreamOutcome forbidLiveStream(const Model::ForbidLiveStreamRequest &request)const;
			void forbidLiveStreamAsync(const Model::ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ForbidLiveStreamOutcomeCallable forbidLiveStreamCallable(const Model::ForbidLiveStreamRequest& request) const;
			ForbidPushStreamOutcome forbidPushStream(const Model::ForbidPushStreamRequest &request)const;
			void forbidPushStreamAsync(const Model::ForbidPushStreamRequest& request, const ForbidPushStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ForbidPushStreamOutcomeCallable forbidPushStreamCallable(const Model::ForbidPushStreamRequest& request) const;
			GetAllCustomTemplatesOutcome getAllCustomTemplates(const Model::GetAllCustomTemplatesRequest &request)const;
			void getAllCustomTemplatesAsync(const Model::GetAllCustomTemplatesRequest& request, const GetAllCustomTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllCustomTemplatesOutcomeCallable getAllCustomTemplatesCallable(const Model::GetAllCustomTemplatesRequest& request) const;
			GetCustomTemplateOutcome getCustomTemplate(const Model::GetCustomTemplateRequest &request)const;
			void getCustomTemplateAsync(const Model::GetCustomTemplateRequest& request, const GetCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCustomTemplateOutcomeCallable getCustomTemplateCallable(const Model::GetCustomTemplateRequest& request) const;
			GetEditingJobInfoOutcome getEditingJobInfo(const Model::GetEditingJobInfoRequest &request)const;
			void getEditingJobInfoAsync(const Model::GetEditingJobInfoRequest& request, const GetEditingJobInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEditingJobInfoOutcomeCallable getEditingJobInfoCallable(const Model::GetEditingJobInfoRequest& request) const;
			GetMessageAppOutcome getMessageApp(const Model::GetMessageAppRequest &request)const;
			void getMessageAppAsync(const Model::GetMessageAppRequest& request, const GetMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMessageAppOutcomeCallable getMessageAppCallable(const Model::GetMessageAppRequest& request) const;
			GetMessageGroupOutcome getMessageGroup(const Model::GetMessageGroupRequest &request)const;
			void getMessageGroupAsync(const Model::GetMessageGroupRequest& request, const GetMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMessageGroupOutcomeCallable getMessageGroupCallable(const Model::GetMessageGroupRequest& request) const;
			GetMessageTokenOutcome getMessageToken(const Model::GetMessageTokenRequest &request)const;
			void getMessageTokenAsync(const Model::GetMessageTokenRequest& request, const GetMessageTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMessageTokenOutcomeCallable getMessageTokenCallable(const Model::GetMessageTokenRequest& request) const;
			GetMultiRateConfigOutcome getMultiRateConfig(const Model::GetMultiRateConfigRequest &request)const;
			void getMultiRateConfigAsync(const Model::GetMultiRateConfigRequest& request, const GetMultiRateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMultiRateConfigOutcomeCallable getMultiRateConfigCallable(const Model::GetMultiRateConfigRequest& request) const;
			GetMultiRateConfigListOutcome getMultiRateConfigList(const Model::GetMultiRateConfigListRequest &request)const;
			void getMultiRateConfigListAsync(const Model::GetMultiRateConfigListRequest& request, const GetMultiRateConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMultiRateConfigListOutcomeCallable getMultiRateConfigListCallable(const Model::GetMultiRateConfigListRequest& request) const;
			HotLiveRtcStreamOutcome hotLiveRtcStream(const Model::HotLiveRtcStreamRequest &request)const;
			void hotLiveRtcStreamAsync(const Model::HotLiveRtcStreamRequest& request, const HotLiveRtcStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HotLiveRtcStreamOutcomeCallable hotLiveRtcStreamCallable(const Model::HotLiveRtcStreamRequest& request) const;
			InitializeAutoShowListTaskOutcome initializeAutoShowListTask(const Model::InitializeAutoShowListTaskRequest &request)const;
			void initializeAutoShowListTaskAsync(const Model::InitializeAutoShowListTaskRequest& request, const InitializeAutoShowListTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitializeAutoShowListTaskOutcomeCallable initializeAutoShowListTaskCallable(const Model::InitializeAutoShowListTaskRequest& request) const;
			JoinMessageGroupOutcome joinMessageGroup(const Model::JoinMessageGroupRequest &request)const;
			void joinMessageGroupAsync(const Model::JoinMessageGroupRequest& request, const JoinMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinMessageGroupOutcomeCallable joinMessageGroupCallable(const Model::JoinMessageGroupRequest& request) const;
			LeaveMessageGroupOutcome leaveMessageGroup(const Model::LeaveMessageGroupRequest &request)const;
			void leaveMessageGroupAsync(const Model::LeaveMessageGroupRequest& request, const LeaveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LeaveMessageGroupOutcomeCallable leaveMessageGroupCallable(const Model::LeaveMessageGroupRequest& request) const;
			ListLiveDelayConfigOutcome listLiveDelayConfig(const Model::ListLiveDelayConfigRequest &request)const;
			void listLiveDelayConfigAsync(const Model::ListLiveDelayConfigRequest& request, const ListLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveDelayConfigOutcomeCallable listLiveDelayConfigCallable(const Model::ListLiveDelayConfigRequest& request) const;
			ListLiveRealtimeLogDeliveryOutcome listLiveRealtimeLogDelivery(const Model::ListLiveRealtimeLogDeliveryRequest &request)const;
			void listLiveRealtimeLogDeliveryAsync(const Model::ListLiveRealtimeLogDeliveryRequest& request, const ListLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveRealtimeLogDeliveryOutcomeCallable listLiveRealtimeLogDeliveryCallable(const Model::ListLiveRealtimeLogDeliveryRequest& request) const;
			ListLiveRealtimeLogDeliveryDomainsOutcome listLiveRealtimeLogDeliveryDomains(const Model::ListLiveRealtimeLogDeliveryDomainsRequest &request)const;
			void listLiveRealtimeLogDeliveryDomainsAsync(const Model::ListLiveRealtimeLogDeliveryDomainsRequest& request, const ListLiveRealtimeLogDeliveryDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveRealtimeLogDeliveryDomainsOutcomeCallable listLiveRealtimeLogDeliveryDomainsCallable(const Model::ListLiveRealtimeLogDeliveryDomainsRequest& request) const;
			ListLiveRealtimeLogDeliveryInfosOutcome listLiveRealtimeLogDeliveryInfos(const Model::ListLiveRealtimeLogDeliveryInfosRequest &request)const;
			void listLiveRealtimeLogDeliveryInfosAsync(const Model::ListLiveRealtimeLogDeliveryInfosRequest& request, const ListLiveRealtimeLogDeliveryInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLiveRealtimeLogDeliveryInfosOutcomeCallable listLiveRealtimeLogDeliveryInfosCallable(const Model::ListLiveRealtimeLogDeliveryInfosRequest& request) const;
			ListMessageOutcome listMessage(const Model::ListMessageRequest &request)const;
			void listMessageAsync(const Model::ListMessageRequest& request, const ListMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMessageOutcomeCallable listMessageCallable(const Model::ListMessageRequest& request) const;
			ListMessageAppOutcome listMessageApp(const Model::ListMessageAppRequest &request)const;
			void listMessageAppAsync(const Model::ListMessageAppRequest& request, const ListMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMessageAppOutcomeCallable listMessageAppCallable(const Model::ListMessageAppRequest& request) const;
			ListMessageGroupOutcome listMessageGroup(const Model::ListMessageGroupRequest &request)const;
			void listMessageGroupAsync(const Model::ListMessageGroupRequest& request, const ListMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMessageGroupOutcomeCallable listMessageGroupCallable(const Model::ListMessageGroupRequest& request) const;
			ListMessageGroupUserOutcome listMessageGroupUser(const Model::ListMessageGroupUserRequest &request)const;
			void listMessageGroupUserAsync(const Model::ListMessageGroupUserRequest& request, const ListMessageGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMessageGroupUserOutcomeCallable listMessageGroupUserCallable(const Model::ListMessageGroupUserRequest& request) const;
			ListMessageGroupUserByIdOutcome listMessageGroupUserById(const Model::ListMessageGroupUserByIdRequest &request)const;
			void listMessageGroupUserByIdAsync(const Model::ListMessageGroupUserByIdRequest& request, const ListMessageGroupUserByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMessageGroupUserByIdOutcomeCallable listMessageGroupUserByIdCallable(const Model::ListMessageGroupUserByIdRequest& request) const;
			ListPlaylistOutcome listPlaylist(const Model::ListPlaylistRequest &request)const;
			void listPlaylistAsync(const Model::ListPlaylistRequest& request, const ListPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPlaylistOutcomeCallable listPlaylistCallable(const Model::ListPlaylistRequest& request) const;
			ListPlaylistItemsOutcome listPlaylistItems(const Model::ListPlaylistItemsRequest &request)const;
			void listPlaylistItemsAsync(const Model::ListPlaylistItemsRequest& request, const ListPlaylistItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPlaylistItemsOutcomeCallable listPlaylistItemsCallable(const Model::ListPlaylistItemsRequest& request) const;
			ModifyCasterComponentOutcome modifyCasterComponent(const Model::ModifyCasterComponentRequest &request)const;
			void modifyCasterComponentAsync(const Model::ModifyCasterComponentRequest& request, const ModifyCasterComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCasterComponentOutcomeCallable modifyCasterComponentCallable(const Model::ModifyCasterComponentRequest& request) const;
			ModifyCasterEpisodeOutcome modifyCasterEpisode(const Model::ModifyCasterEpisodeRequest &request)const;
			void modifyCasterEpisodeAsync(const Model::ModifyCasterEpisodeRequest& request, const ModifyCasterEpisodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCasterEpisodeOutcomeCallable modifyCasterEpisodeCallable(const Model::ModifyCasterEpisodeRequest& request) const;
			ModifyCasterLayoutOutcome modifyCasterLayout(const Model::ModifyCasterLayoutRequest &request)const;
			void modifyCasterLayoutAsync(const Model::ModifyCasterLayoutRequest& request, const ModifyCasterLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCasterLayoutOutcomeCallable modifyCasterLayoutCallable(const Model::ModifyCasterLayoutRequest& request) const;
			ModifyCasterProgramOutcome modifyCasterProgram(const Model::ModifyCasterProgramRequest &request)const;
			void modifyCasterProgramAsync(const Model::ModifyCasterProgramRequest& request, const ModifyCasterProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCasterProgramOutcomeCallable modifyCasterProgramCallable(const Model::ModifyCasterProgramRequest& request) const;
			ModifyCasterVideoResourceOutcome modifyCasterVideoResource(const Model::ModifyCasterVideoResourceRequest &request)const;
			void modifyCasterVideoResourceAsync(const Model::ModifyCasterVideoResourceRequest& request, const ModifyCasterVideoResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCasterVideoResourceOutcomeCallable modifyCasterVideoResourceCallable(const Model::ModifyCasterVideoResourceRequest& request) const;
			ModifyLiveDomainSchdmByPropertyOutcome modifyLiveDomainSchdmByProperty(const Model::ModifyLiveDomainSchdmByPropertyRequest &request)const;
			void modifyLiveDomainSchdmByPropertyAsync(const Model::ModifyLiveDomainSchdmByPropertyRequest& request, const ModifyLiveDomainSchdmByPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLiveDomainSchdmByPropertyOutcomeCallable modifyLiveDomainSchdmByPropertyCallable(const Model::ModifyLiveDomainSchdmByPropertyRequest& request) const;
			ModifyLiveRealtimeLogDeliveryOutcome modifyLiveRealtimeLogDelivery(const Model::ModifyLiveRealtimeLogDeliveryRequest &request)const;
			void modifyLiveRealtimeLogDeliveryAsync(const Model::ModifyLiveRealtimeLogDeliveryRequest& request, const ModifyLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLiveRealtimeLogDeliveryOutcomeCallable modifyLiveRealtimeLogDeliveryCallable(const Model::ModifyLiveRealtimeLogDeliveryRequest& request) const;
			ModifyShowListOutcome modifyShowList(const Model::ModifyShowListRequest &request)const;
			void modifyShowListAsync(const Model::ModifyShowListRequest& request, const ModifyShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyShowListOutcomeCallable modifyShowListCallable(const Model::ModifyShowListRequest& request) const;
			ModifyStudioLayoutOutcome modifyStudioLayout(const Model::ModifyStudioLayoutRequest &request)const;
			void modifyStudioLayoutAsync(const Model::ModifyStudioLayoutRequest& request, const ModifyStudioLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyStudioLayoutOutcomeCallable modifyStudioLayoutCallable(const Model::ModifyStudioLayoutRequest& request) const;
			MuteAllGroupUserOutcome muteAllGroupUser(const Model::MuteAllGroupUserRequest &request)const;
			void muteAllGroupUserAsync(const Model::MuteAllGroupUserRequest& request, const MuteAllGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MuteAllGroupUserOutcomeCallable muteAllGroupUserCallable(const Model::MuteAllGroupUserRequest& request) const;
			MuteGroupUserOutcome muteGroupUser(const Model::MuteGroupUserRequest &request)const;
			void muteGroupUserAsync(const Model::MuteGroupUserRequest& request, const MuteGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MuteGroupUserOutcomeCallable muteGroupUserCallable(const Model::MuteGroupUserRequest& request) const;
			OpenLiveShiftOutcome openLiveShift(const Model::OpenLiveShiftRequest &request)const;
			void openLiveShiftAsync(const Model::OpenLiveShiftRequest& request, const OpenLiveShiftAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenLiveShiftOutcomeCallable openLiveShiftCallable(const Model::OpenLiveShiftRequest& request) const;
			PlayChoosenShowOutcome playChoosenShow(const Model::PlayChoosenShowRequest &request)const;
			void playChoosenShowAsync(const Model::PlayChoosenShowRequest& request, const PlayChoosenShowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PlayChoosenShowOutcomeCallable playChoosenShowCallable(const Model::PlayChoosenShowRequest& request) const;
			PublishLiveStagingConfigToProductionOutcome publishLiveStagingConfigToProduction(const Model::PublishLiveStagingConfigToProductionRequest &request)const;
			void publishLiveStagingConfigToProductionAsync(const Model::PublishLiveStagingConfigToProductionRequest& request, const PublishLiveStagingConfigToProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishLiveStagingConfigToProductionOutcomeCallable publishLiveStagingConfigToProductionCallable(const Model::PublishLiveStagingConfigToProductionRequest& request) const;
			QueryMessageAppOutcome queryMessageApp(const Model::QueryMessageAppRequest &request)const;
			void queryMessageAppAsync(const Model::QueryMessageAppRequest& request, const QueryMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMessageAppOutcomeCallable queryMessageAppCallable(const Model::QueryMessageAppRequest& request) const;
			QuerySnapshotCallbackAuthOutcome querySnapshotCallbackAuth(const Model::QuerySnapshotCallbackAuthRequest &request)const;
			void querySnapshotCallbackAuthAsync(const Model::QuerySnapshotCallbackAuthRequest& request, const QuerySnapshotCallbackAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySnapshotCallbackAuthOutcomeCallable querySnapshotCallbackAuthCallable(const Model::QuerySnapshotCallbackAuthRequest& request) const;
			RealTimeRecordCommandOutcome realTimeRecordCommand(const Model::RealTimeRecordCommandRequest &request)const;
			void realTimeRecordCommandAsync(const Model::RealTimeRecordCommandRequest& request, const RealTimeRecordCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RealTimeRecordCommandOutcomeCallable realTimeRecordCommandCallable(const Model::RealTimeRecordCommandRequest& request) const;
			RealTimeSnapshotCommandOutcome realTimeSnapshotCommand(const Model::RealTimeSnapshotCommandRequest &request)const;
			void realTimeSnapshotCommandAsync(const Model::RealTimeSnapshotCommandRequest& request, const RealTimeSnapshotCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RealTimeSnapshotCommandOutcomeCallable realTimeSnapshotCommandCallable(const Model::RealTimeSnapshotCommandRequest& request) const;
			RemoveShowFromShowListOutcome removeShowFromShowList(const Model::RemoveShowFromShowListRequest &request)const;
			void removeShowFromShowListAsync(const Model::RemoveShowFromShowListRequest& request, const RemoveShowFromShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveShowFromShowListOutcomeCallable removeShowFromShowListCallable(const Model::RemoveShowFromShowListRequest& request) const;
			RestartCasterOutcome restartCaster(const Model::RestartCasterRequest &request)const;
			void restartCasterAsync(const Model::RestartCasterRequest& request, const RestartCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartCasterOutcomeCallable restartCasterCallable(const Model::RestartCasterRequest& request) const;
			ResumeLiveStreamOutcome resumeLiveStream(const Model::ResumeLiveStreamRequest &request)const;
			void resumeLiveStreamAsync(const Model::ResumeLiveStreamRequest& request, const ResumeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeLiveStreamOutcomeCallable resumeLiveStreamCallable(const Model::ResumeLiveStreamRequest& request) const;
			RollbackLiveStagingConfigOutcome rollbackLiveStagingConfig(const Model::RollbackLiveStagingConfigRequest &request)const;
			void rollbackLiveStagingConfigAsync(const Model::RollbackLiveStagingConfigRequest& request, const RollbackLiveStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackLiveStagingConfigOutcomeCallable rollbackLiveStagingConfigCallable(const Model::RollbackLiveStagingConfigRequest& request) const;
			SendLikeOutcome sendLike(const Model::SendLikeRequest &request)const;
			void sendLikeAsync(const Model::SendLikeRequest& request, const SendLikeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendLikeOutcomeCallable sendLikeCallable(const Model::SendLikeRequest& request) const;
			SendMessageToGroupOutcome sendMessageToGroup(const Model::SendMessageToGroupRequest &request)const;
			void sendMessageToGroupAsync(const Model::SendMessageToGroupRequest& request, const SendMessageToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendMessageToGroupOutcomeCallable sendMessageToGroupCallable(const Model::SendMessageToGroupRequest& request) const;
			SendMessageToGroupUsersOutcome sendMessageToGroupUsers(const Model::SendMessageToGroupUsersRequest &request)const;
			void sendMessageToGroupUsersAsync(const Model::SendMessageToGroupUsersRequest& request, const SendMessageToGroupUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendMessageToGroupUsersOutcomeCallable sendMessageToGroupUsersCallable(const Model::SendMessageToGroupUsersRequest& request) const;
			SendRoomNotificationOutcome sendRoomNotification(const Model::SendRoomNotificationRequest &request)const;
			void sendRoomNotificationAsync(const Model::SendRoomNotificationRequest& request, const SendRoomNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendRoomNotificationOutcomeCallable sendRoomNotificationCallable(const Model::SendRoomNotificationRequest& request) const;
			SendRoomUserNotificationOutcome sendRoomUserNotification(const Model::SendRoomUserNotificationRequest &request)const;
			void sendRoomUserNotificationAsync(const Model::SendRoomUserNotificationRequest& request, const SendRoomUserNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendRoomUserNotificationOutcomeCallable sendRoomUserNotificationCallable(const Model::SendRoomUserNotificationRequest& request) const;
			SetCasterChannelOutcome setCasterChannel(const Model::SetCasterChannelRequest &request)const;
			void setCasterChannelAsync(const Model::SetCasterChannelRequest& request, const SetCasterChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCasterChannelOutcomeCallable setCasterChannelCallable(const Model::SetCasterChannelRequest& request) const;
			SetCasterConfigOutcome setCasterConfig(const Model::SetCasterConfigRequest &request)const;
			void setCasterConfigAsync(const Model::SetCasterConfigRequest& request, const SetCasterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCasterConfigOutcomeCallable setCasterConfigCallable(const Model::SetCasterConfigRequest& request) const;
			SetCasterSceneConfigOutcome setCasterSceneConfig(const Model::SetCasterSceneConfigRequest &request)const;
			void setCasterSceneConfigAsync(const Model::SetCasterSceneConfigRequest& request, const SetCasterSceneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCasterSceneConfigOutcomeCallable setCasterSceneConfigCallable(const Model::SetCasterSceneConfigRequest& request) const;
			SetCasterSyncGroupOutcome setCasterSyncGroup(const Model::SetCasterSyncGroupRequest &request)const;
			void setCasterSyncGroupAsync(const Model::SetCasterSyncGroupRequest& request, const SetCasterSyncGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCasterSyncGroupOutcomeCallable setCasterSyncGroupCallable(const Model::SetCasterSyncGroupRequest& request) const;
			SetCasterTimedEventOutcome setCasterTimedEvent(const Model::SetCasterTimedEventRequest &request)const;
			void setCasterTimedEventAsync(const Model::SetCasterTimedEventRequest& request, const SetCasterTimedEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCasterTimedEventOutcomeCallable setCasterTimedEventCallable(const Model::SetCasterTimedEventRequest& request) const;
			SetLiveDomainCertificateOutcome setLiveDomainCertificate(const Model::SetLiveDomainCertificateRequest &request)const;
			void setLiveDomainCertificateAsync(const Model::SetLiveDomainCertificateRequest& request, const SetLiveDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveDomainCertificateOutcomeCallable setLiveDomainCertificateCallable(const Model::SetLiveDomainCertificateRequest& request) const;
			SetLiveDomainStagingConfigOutcome setLiveDomainStagingConfig(const Model::SetLiveDomainStagingConfigRequest &request)const;
			void setLiveDomainStagingConfigAsync(const Model::SetLiveDomainStagingConfigRequest& request, const SetLiveDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveDomainStagingConfigOutcomeCallable setLiveDomainStagingConfigCallable(const Model::SetLiveDomainStagingConfigRequest& request) const;
			SetLiveEdgeTransferOutcome setLiveEdgeTransfer(const Model::SetLiveEdgeTransferRequest &request)const;
			void setLiveEdgeTransferAsync(const Model::SetLiveEdgeTransferRequest& request, const SetLiveEdgeTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveEdgeTransferOutcomeCallable setLiveEdgeTransferCallable(const Model::SetLiveEdgeTransferRequest& request) const;
			SetLiveLazyPullStreamInfoConfigOutcome setLiveLazyPullStreamInfoConfig(const Model::SetLiveLazyPullStreamInfoConfigRequest &request)const;
			void setLiveLazyPullStreamInfoConfigAsync(const Model::SetLiveLazyPullStreamInfoConfigRequest& request, const SetLiveLazyPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveLazyPullStreamInfoConfigOutcomeCallable setLiveLazyPullStreamInfoConfigCallable(const Model::SetLiveLazyPullStreamInfoConfigRequest& request) const;
			SetLiveMpuTaskSeiOutcome setLiveMpuTaskSei(const Model::SetLiveMpuTaskSeiRequest &request)const;
			void setLiveMpuTaskSeiAsync(const Model::SetLiveMpuTaskSeiRequest& request, const SetLiveMpuTaskSeiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveMpuTaskSeiOutcomeCallable setLiveMpuTaskSeiCallable(const Model::SetLiveMpuTaskSeiRequest& request) const;
			SetLiveStreamDelayConfigOutcome setLiveStreamDelayConfig(const Model::SetLiveStreamDelayConfigRequest &request)const;
			void setLiveStreamDelayConfigAsync(const Model::SetLiveStreamDelayConfigRequest& request, const SetLiveStreamDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveStreamDelayConfigOutcomeCallable setLiveStreamDelayConfigCallable(const Model::SetLiveStreamDelayConfigRequest& request) const;
			SetLiveStreamOptimizedFeatureConfigOutcome setLiveStreamOptimizedFeatureConfig(const Model::SetLiveStreamOptimizedFeatureConfigRequest &request)const;
			void setLiveStreamOptimizedFeatureConfigAsync(const Model::SetLiveStreamOptimizedFeatureConfigRequest& request, const SetLiveStreamOptimizedFeatureConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveStreamOptimizedFeatureConfigOutcomeCallable setLiveStreamOptimizedFeatureConfigCallable(const Model::SetLiveStreamOptimizedFeatureConfigRequest& request) const;
			SetLiveStreamsNotifyUrlConfigOutcome setLiveStreamsNotifyUrlConfig(const Model::SetLiveStreamsNotifyUrlConfigRequest &request)const;
			void setLiveStreamsNotifyUrlConfigAsync(const Model::SetLiveStreamsNotifyUrlConfigRequest& request, const SetLiveStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLiveStreamsNotifyUrlConfigOutcomeCallable setLiveStreamsNotifyUrlConfigCallable(const Model::SetLiveStreamsNotifyUrlConfigRequest& request) const;
			SetSnapshotCallbackAuthOutcome setSnapshotCallbackAuth(const Model::SetSnapshotCallbackAuthRequest &request)const;
			void setSnapshotCallbackAuthAsync(const Model::SetSnapshotCallbackAuthRequest& request, const SetSnapshotCallbackAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSnapshotCallbackAuthOutcomeCallable setSnapshotCallbackAuthCallable(const Model::SetSnapshotCallbackAuthRequest& request) const;
			StartCasterOutcome startCaster(const Model::StartCasterRequest &request)const;
			void startCasterAsync(const Model::StartCasterRequest& request, const StartCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartCasterOutcomeCallable startCasterCallable(const Model::StartCasterRequest& request) const;
			StartCasterSceneOutcome startCasterScene(const Model::StartCasterSceneRequest &request)const;
			void startCasterSceneAsync(const Model::StartCasterSceneRequest& request, const StartCasterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartCasterSceneOutcomeCallable startCasterSceneCallable(const Model::StartCasterSceneRequest& request) const;
			StartLiveDomainOutcome startLiveDomain(const Model::StartLiveDomainRequest &request)const;
			void startLiveDomainAsync(const Model::StartLiveDomainRequest& request, const StartLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartLiveDomainOutcomeCallable startLiveDomainCallable(const Model::StartLiveDomainRequest& request) const;
			StartLiveStreamMonitorOutcome startLiveStreamMonitor(const Model::StartLiveStreamMonitorRequest &request)const;
			void startLiveStreamMonitorAsync(const Model::StartLiveStreamMonitorRequest& request, const StartLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartLiveStreamMonitorOutcomeCallable startLiveStreamMonitorCallable(const Model::StartLiveStreamMonitorRequest& request) const;
			StartPlaylistOutcome startPlaylist(const Model::StartPlaylistRequest &request)const;
			void startPlaylistAsync(const Model::StartPlaylistRequest& request, const StartPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartPlaylistOutcomeCallable startPlaylistCallable(const Model::StartPlaylistRequest& request) const;
			StopCasterOutcome stopCaster(const Model::StopCasterRequest &request)const;
			void stopCasterAsync(const Model::StopCasterRequest& request, const StopCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopCasterOutcomeCallable stopCasterCallable(const Model::StopCasterRequest& request) const;
			StopCasterSceneOutcome stopCasterScene(const Model::StopCasterSceneRequest &request)const;
			void stopCasterSceneAsync(const Model::StopCasterSceneRequest& request, const StopCasterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopCasterSceneOutcomeCallable stopCasterSceneCallable(const Model::StopCasterSceneRequest& request) const;
			StopLiveDomainOutcome stopLiveDomain(const Model::StopLiveDomainRequest &request)const;
			void stopLiveDomainAsync(const Model::StopLiveDomainRequest& request, const StopLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopLiveDomainOutcomeCallable stopLiveDomainCallable(const Model::StopLiveDomainRequest& request) const;
			StopLiveStreamMonitorOutcome stopLiveStreamMonitor(const Model::StopLiveStreamMonitorRequest &request)const;
			void stopLiveStreamMonitorAsync(const Model::StopLiveStreamMonitorRequest& request, const StopLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopLiveStreamMonitorOutcomeCallable stopLiveStreamMonitorCallable(const Model::StopLiveStreamMonitorRequest& request) const;
			StopPlaylistOutcome stopPlaylist(const Model::StopPlaylistRequest &request)const;
			void stopPlaylistAsync(const Model::StopPlaylistRequest& request, const StopPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopPlaylistOutcomeCallable stopPlaylistCallable(const Model::StopPlaylistRequest& request) const;
			TagLiveResourcesOutcome tagLiveResources(const Model::TagLiveResourcesRequest &request)const;
			void tagLiveResourcesAsync(const Model::TagLiveResourcesRequest& request, const TagLiveResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagLiveResourcesOutcomeCallable tagLiveResourcesCallable(const Model::TagLiveResourcesRequest& request) const;
			UnTagLiveResourcesOutcome unTagLiveResources(const Model::UnTagLiveResourcesRequest &request)const;
			void unTagLiveResourcesAsync(const Model::UnTagLiveResourcesRequest& request, const UnTagLiveResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnTagLiveResourcesOutcomeCallable unTagLiveResourcesCallable(const Model::UnTagLiveResourcesRequest& request) const;
			UpdateCasterSceneAudioOutcome updateCasterSceneAudio(const Model::UpdateCasterSceneAudioRequest &request)const;
			void updateCasterSceneAudioAsync(const Model::UpdateCasterSceneAudioRequest& request, const UpdateCasterSceneAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCasterSceneAudioOutcomeCallable updateCasterSceneAudioCallable(const Model::UpdateCasterSceneAudioRequest& request) const;
			UpdateCasterSceneConfigOutcome updateCasterSceneConfig(const Model::UpdateCasterSceneConfigRequest &request)const;
			void updateCasterSceneConfigAsync(const Model::UpdateCasterSceneConfigRequest& request, const UpdateCasterSceneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCasterSceneConfigOutcomeCallable updateCasterSceneConfigCallable(const Model::UpdateCasterSceneConfigRequest& request) const;
			UpdateLiveAppSnapshotConfigOutcome updateLiveAppSnapshotConfig(const Model::UpdateLiveAppSnapshotConfigRequest &request)const;
			void updateLiveAppSnapshotConfigAsync(const Model::UpdateLiveAppSnapshotConfigRequest& request, const UpdateLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveAppSnapshotConfigOutcomeCallable updateLiveAppSnapshotConfigCallable(const Model::UpdateLiveAppSnapshotConfigRequest& request) const;
			UpdateLiveAudioAuditConfigOutcome updateLiveAudioAuditConfig(const Model::UpdateLiveAudioAuditConfigRequest &request)const;
			void updateLiveAudioAuditConfigAsync(const Model::UpdateLiveAudioAuditConfigRequest& request, const UpdateLiveAudioAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveAudioAuditConfigOutcomeCallable updateLiveAudioAuditConfigCallable(const Model::UpdateLiveAudioAuditConfigRequest& request) const;
			UpdateLiveAudioAuditNotifyConfigOutcome updateLiveAudioAuditNotifyConfig(const Model::UpdateLiveAudioAuditNotifyConfigRequest &request)const;
			void updateLiveAudioAuditNotifyConfigAsync(const Model::UpdateLiveAudioAuditNotifyConfigRequest& request, const UpdateLiveAudioAuditNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveAudioAuditNotifyConfigOutcomeCallable updateLiveAudioAuditNotifyConfigCallable(const Model::UpdateLiveAudioAuditNotifyConfigRequest& request) const;
			UpdateLiveCenterTransferOutcome updateLiveCenterTransfer(const Model::UpdateLiveCenterTransferRequest &request)const;
			void updateLiveCenterTransferAsync(const Model::UpdateLiveCenterTransferRequest& request, const UpdateLiveCenterTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveCenterTransferOutcomeCallable updateLiveCenterTransferCallable(const Model::UpdateLiveCenterTransferRequest& request) const;
			UpdateLiveDelayConfigOutcome updateLiveDelayConfig(const Model::UpdateLiveDelayConfigRequest &request)const;
			void updateLiveDelayConfigAsync(const Model::UpdateLiveDelayConfigRequest& request, const UpdateLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveDelayConfigOutcomeCallable updateLiveDelayConfigCallable(const Model::UpdateLiveDelayConfigRequest& request) const;
			UpdateLiveDetectNotifyConfigOutcome updateLiveDetectNotifyConfig(const Model::UpdateLiveDetectNotifyConfigRequest &request)const;
			void updateLiveDetectNotifyConfigAsync(const Model::UpdateLiveDetectNotifyConfigRequest& request, const UpdateLiveDetectNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveDetectNotifyConfigOutcomeCallable updateLiveDetectNotifyConfigCallable(const Model::UpdateLiveDetectNotifyConfigRequest& request) const;
			UpdateLivePullStreamInfoConfigOutcome updateLivePullStreamInfoConfig(const Model::UpdateLivePullStreamInfoConfigRequest &request)const;
			void updateLivePullStreamInfoConfigAsync(const Model::UpdateLivePullStreamInfoConfigRequest& request, const UpdateLivePullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLivePullStreamInfoConfigOutcomeCallable updateLivePullStreamInfoConfigCallable(const Model::UpdateLivePullStreamInfoConfigRequest& request) const;
			UpdateLiveRecordNotifyConfigOutcome updateLiveRecordNotifyConfig(const Model::UpdateLiveRecordNotifyConfigRequest &request)const;
			void updateLiveRecordNotifyConfigAsync(const Model::UpdateLiveRecordNotifyConfigRequest& request, const UpdateLiveRecordNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveRecordNotifyConfigOutcomeCallable updateLiveRecordNotifyConfigCallable(const Model::UpdateLiveRecordNotifyConfigRequest& request) const;
			UpdateLiveSnapshotDetectPornConfigOutcome updateLiveSnapshotDetectPornConfig(const Model::UpdateLiveSnapshotDetectPornConfigRequest &request)const;
			void updateLiveSnapshotDetectPornConfigAsync(const Model::UpdateLiveSnapshotDetectPornConfigRequest& request, const UpdateLiveSnapshotDetectPornConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveSnapshotDetectPornConfigOutcomeCallable updateLiveSnapshotDetectPornConfigCallable(const Model::UpdateLiveSnapshotDetectPornConfigRequest& request) const;
			UpdateLiveSnapshotNotifyConfigOutcome updateLiveSnapshotNotifyConfig(const Model::UpdateLiveSnapshotNotifyConfigRequest &request)const;
			void updateLiveSnapshotNotifyConfigAsync(const Model::UpdateLiveSnapshotNotifyConfigRequest& request, const UpdateLiveSnapshotNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveSnapshotNotifyConfigOutcomeCallable updateLiveSnapshotNotifyConfigCallable(const Model::UpdateLiveSnapshotNotifyConfigRequest& request) const;
			UpdateLiveStreamMonitorOutcome updateLiveStreamMonitor(const Model::UpdateLiveStreamMonitorRequest &request)const;
			void updateLiveStreamMonitorAsync(const Model::UpdateLiveStreamMonitorRequest& request, const UpdateLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveStreamMonitorOutcomeCallable updateLiveStreamMonitorCallable(const Model::UpdateLiveStreamMonitorRequest& request) const;
			UpdateLiveStreamWatermarkOutcome updateLiveStreamWatermark(const Model::UpdateLiveStreamWatermarkRequest &request)const;
			void updateLiveStreamWatermarkAsync(const Model::UpdateLiveStreamWatermarkRequest& request, const UpdateLiveStreamWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveStreamWatermarkOutcomeCallable updateLiveStreamWatermarkCallable(const Model::UpdateLiveStreamWatermarkRequest& request) const;
			UpdateLiveStreamWatermarkRuleOutcome updateLiveStreamWatermarkRule(const Model::UpdateLiveStreamWatermarkRuleRequest &request)const;
			void updateLiveStreamWatermarkRuleAsync(const Model::UpdateLiveStreamWatermarkRuleRequest& request, const UpdateLiveStreamWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveStreamWatermarkRuleOutcomeCallable updateLiveStreamWatermarkRuleCallable(const Model::UpdateLiveStreamWatermarkRuleRequest& request) const;
			UpdateLiveTopLevelDomainOutcome updateLiveTopLevelDomain(const Model::UpdateLiveTopLevelDomainRequest &request)const;
			void updateLiveTopLevelDomainAsync(const Model::UpdateLiveTopLevelDomainRequest& request, const UpdateLiveTopLevelDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveTopLevelDomainOutcomeCallable updateLiveTopLevelDomainCallable(const Model::UpdateLiveTopLevelDomainRequest& request) const;
			UpdateMessageAppOutcome updateMessageApp(const Model::UpdateMessageAppRequest &request)const;
			void updateMessageAppAsync(const Model::UpdateMessageAppRequest& request, const UpdateMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMessageAppOutcomeCallable updateMessageAppCallable(const Model::UpdateMessageAppRequest& request) const;
			UpdateMessageGroupOutcome updateMessageGroup(const Model::UpdateMessageGroupRequest &request)const;
			void updateMessageGroupAsync(const Model::UpdateMessageGroupRequest& request, const UpdateMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMessageGroupOutcomeCallable updateMessageGroupCallable(const Model::UpdateMessageGroupRequest& request) const;
			UpdateMixStreamOutcome updateMixStream(const Model::UpdateMixStreamRequest &request)const;
			void updateMixStreamAsync(const Model::UpdateMixStreamRequest& request, const UpdateMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMixStreamOutcomeCallable updateMixStreamCallable(const Model::UpdateMixStreamRequest& request) const;
			VerifyLiveDomainOwnerOutcome verifyLiveDomainOwner(const Model::VerifyLiveDomainOwnerRequest &request)const;
			void verifyLiveDomainOwnerAsync(const Model::VerifyLiveDomainOwnerRequest& request, const VerifyLiveDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyLiveDomainOwnerOutcomeCallable verifyLiveDomainOwnerCallable(const Model::VerifyLiveDomainOwnerRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_LIVE_LIVECLIENT_H_
