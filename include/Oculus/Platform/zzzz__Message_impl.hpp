#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationSuggestionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__InstalledApplicationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStartResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserDataStoreUpdateResponse_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetworkingPeer_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__BlockedUserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PingResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingStats_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomInviteNotificationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__OrgScopedID_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDeleteResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadCancelResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingVideoStats_def.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchFriendRequestFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyID_def.hpp"
#include "Oculus/Platform/Models/zzzz__ShareMediaResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationFinalized_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchReportFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageData_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyUpdateNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchBlockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ProductList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValueList_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__DestinationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingApplicationStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResultAndRoom_def.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/Models/zzzz__PidList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageConflictMetadata_def.hpp"
#include "Oculus/Platform/Models/zzzz__AbuseReportRecording_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAndRoomList_def.hpp"
#include "Oculus/Platform/Models/zzzz__MicrophoneAvailabilityState_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardList_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomList_def.hpp"
#include "Oculus/Platform/Models/zzzz__HttpTransferUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Error_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationProposed_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserReportID_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadataList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchUnblockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingBrowseResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomInviteNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageUpdateResponse_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::____Oculus__Platform__Message__Callback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::____Oculus__Platform__Message__Callback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::Oculus::Platform::____Oculus__Platform__Message__Callback::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x257f7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__Callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::____Oculus__Platform__Message__Callback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::____Oculus__Platform__Message__Callback::*)(::Oculus::Platform::Message)>(&::Oculus::Platform::____Oculus__Platform__Message__Callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x257f928;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::____Oculus__Platform__Message__Callback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__Callback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::____Oculus__Platform__Message__Callback.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::Oculus::Platform::____Oculus__Platform__Message__Callback::*)(::Oculus::Platform::Message, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::Oculus::Platform::____Oculus__Platform__Message__Callback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x257f93c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::____Oculus__Platform__Message__Callback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__Callback>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::____Oculus__Platform__Message__Callback.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::____Oculus__Platform__Message__Callback::*)(::System::IAsyncResult)>(&::Oculus::Platform::____Oculus__Platform__Message__Callback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x257f95c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::____Oculus__Platform__Message__Callback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__Callback>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::____Oculus__Platform__Message__Callback::____Oculus__Platform__Message__Callback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____Oculus__Platform__Message__Callback>(object, method))) {}
 void ::Oculus::Platform::____Oculus__Platform__Message__Callback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__Callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::Oculus::Platform::____Oculus__Platform__Message__Callback::Invoke(::Oculus::Platform::Message message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__Callback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 ::System::IAsyncResult ::Oculus::Platform::____Oculus__Platform__Message__Callback::BeginInvoke(::Oculus::Platform::Message message, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__Callback>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, message, callback, object);
}
 void ::Oculus::Platform::____Oculus__Platform__Message__Callback::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__Callback>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType::____Oculus__Platform__Message__MessageType(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::____Oculus__Platform__Message__MessageType::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::Oculus::Platform::____Oculus__Platform__Message__MessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Unknown{0u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AbuseReport_ReportRequestHandled{1267661958u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Achievements_AddCount{65495601u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Achievements_AddFields{346693929u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Achievements_GetAllDefinitions{64177549u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Achievements_GetAllProgress{1335877149u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Achievements_GetDefinitionsByName{1653670332u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Achievements_GetNextAchievementDefinitionArrayPage{712888917u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Achievements_GetNextAchievementProgressArrayPage{792913703u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Achievements_GetProgressByName{354837425u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Achievements_Unlock{1497156573u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::ApplicationLifecycle_GetRegisteredPIDs{82169698u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::ApplicationLifecycle_GetSessionKey{984570141u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::ApplicationLifecycle_RegisterSessionKey{1303818232u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Application_GetVersion{1751583246u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Application_LaunchOtherApp{1424151032u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_Delete{1834842246u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_DeleteById{1525206354u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_DeleteByName{1108001231u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_Download{289710021u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_DownloadById{755009938u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_DownloadByName{1664536314u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_DownloadCancel{134927303u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_DownloadCancelById{1365611796u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_DownloadCancelByName{1147858170u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_GetList{1258057588u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_Status{47394656u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_StatusById{1570069816u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::AssetFile_StatusByName{1104140880u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Avatar_LaunchAvatarEditor{99737939u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_Create{1750718017u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_DeclineInvite{1452177088u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_Delete{642287050u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_Get{2002276083u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_GetEntries{303739999u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_GetEntriesAfterRank{143202943u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_GetEntriesByIds{828705244u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_GetList{1126581078u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_GetNextChallenges{1534894518u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_GetNextEntries{2135728326u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_GetPreviousChallenges{246678541u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_GetPreviousEntries{2026439792u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_Join{556040297u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_Leave{694228709u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Challenges_UpdateInfo{292929120u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::CloudStorage2_GetUserDirectoryPath{1990471406u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::CloudStorage_Delete{685393261u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::CloudStorage_GetNextCloudStorageMetadataArrayPage{1544004335u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::CloudStorage_Load{1082420033u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::CloudStorage_LoadBucketMetadata{1931977997u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::CloudStorage_LoadConflictMetadata{1146770162u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::CloudStorage_LoadHandle{845863478u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::CloudStorage_LoadMetadata{65446546u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::CloudStorage_ResolveKeepLocal{811109637u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::CloudStorage_ResolveKeepRemote{1965400838u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::CloudStorage_Save{1270570030u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Entitlement_GetIsViewerEntitled{409688241u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_Clear{1839897795u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_GetInvitableUsers{592167921u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_GetNextApplicationInviteArrayPage{83411186u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_GetSentInvites{136710833u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_LaunchInvitePanel{262066079u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_LaunchMultiplayerErrorDialog{693481252u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_LaunchRejoinDialog{360121199u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_LaunchRosterPanel{896698498u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_SendInvites{231461732u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_Set{1734302756u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_SetDeeplinkMessageOverride{1377492749u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_SetDestination{1281042058u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_SetIsJoinable{714018901u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_SetLobbySession{1224693182u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::GroupPresence_SetMatchSession{827098296u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::IAP_ConsumePurchase{532378329u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::IAP_GetNextProductArrayPage{467225263u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::IAP_GetNextPurchaseArrayPage{1196886677u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::IAP_GetProductsBySKU{2124073717u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::IAP_GetViewerPurchases{974095385u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::IAP_GetViewerPurchasesDurableCache{1666817579u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::IAP_LaunchCheckoutFlow{1067126029u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::LanguagePack_GetCurrent{529592533u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::LanguagePack_SetCurrent{1531952096u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Leaderboard_Get{1792298744u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Leaderboard_GetEntries{1572030284u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Leaderboard_GetEntriesAfterRank{406293487u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Leaderboard_GetEntriesByIds{962624508u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Leaderboard_GetNextEntries{1310751961u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Leaderboard_GetNextLeaderboardArrayPage{905344667u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Leaderboard_GetPreviousEntries{1224858304u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Leaderboard_WriteEntry{293587198u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Leaderboard_WriteEntryWithSupplementaryMetric{1925616378u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_Browse{509948616u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_Browse2{1715641947u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_Cancel{543705519u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_Cancel2{285117908u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_CreateAndEnqueueRoom{1615617480u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_CreateAndEnqueueRoom2{693889755u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_CreateRoom{54203178u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_CreateRoom2{1231922052u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_Enqueue{1086418033u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_Enqueue2{303174325u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_EnqueueRoom{1888108644u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_EnqueueRoom2{1428741028u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_GetAdminSnapshot{1008820116u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_GetStats{1123849272u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_JoinRoom{1295177725u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_ReportResultInsecure{439800205u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Matchmaking_StartMatch{1154746693u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Media_ShareToFacebook{14912239u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_GetNextRoomInviteNotificationArrayPage{102890359u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_GetRoomInvites{1871801234u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_MarkAsRead{1903319523u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Party_GetCurrent{1200830304u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::RichPresence_Clear{1471632051u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::RichPresence_GetDestinations{1483681044u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::RichPresence_GetNextDestinationArrayPage{1731624773u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::RichPresence_Set{1007973641u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_CreateAndJoinPrivate{1977017207u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_CreateAndJoinPrivate2{1513775683u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_Get{1704628152u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_GetCurrent{161916164u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_GetCurrentForUser{234887141u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_GetInvitableUsers{506615698u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_GetInvitableUsers2{1330899120u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_GetModeratedRooms{159645047u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_GetNextRoomArrayPage{1317239238u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_InviteUser{1093266451u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_Join{382373641u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_Join2{1303059522u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_KickUser{1233344310u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_LaunchInvitableUserFlow{843047539u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_Leave{1916281973u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_SetDescription{809796911u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_UpdateDataStore{40779816u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_UpdateMembershipLockStatus{923514796u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_UpdateOwner{850803997u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Room_UpdatePrivateRoomJoinPolicy{289473179u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::UserDataStore_PrivateDeleteEntryByKey{1552510782u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::UserDataStore_PrivateGetEntries{1821016616u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::UserDataStore_PrivateGetEntryByKey{470188825u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::UserDataStore_PrivateWriteEntry{1104315019u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::UserDataStore_PublicDeleteEntryByKey{500557307u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::UserDataStore_PublicGetEntries{377310146u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::UserDataStore_PublicGetEntryByKey{425486022u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::UserDataStore_PublicWriteEntry{875973130u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_Get{1808768583u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetAccessToken{111696574u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetBlockedUsers{2099254614u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetLoggedInUser{1131361373u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetLoggedInUserFriends{1484532365u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetLoggedInUserFriendsAndRooms{1585908615u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetLoggedInUserRecentlyMetUsersAndRooms{694139440u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetNextBlockedUserArrayPage{2083192267u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetNextUserAndRoomArrayPage{2143146719u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetNextUserArrayPage{645723971u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetNextUserCapabilityArrayPage{587854745u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetOrgScopedID{418426907u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetSdkAccounts{1733454467u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_GetUserProof{578880643u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_LaunchBlockFlow{1876305192u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_LaunchFriendRequestFlow{151303576u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::User_LaunchUnblockFlow{346172055u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Voip_GetMicrophoneAvailability{1951195973u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Voip_SetSystemVoipSuppressed{1161808298u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_AbuseReport_ReportButtonPressed{608644972u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_ApplicationLifecycle_LaunchIntentChanged{78859427u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_AssetFile_DownloadUpdate{803015885u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Cal_FinalizeApplication{1963741337u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Cal_ProposeApplication{779375093u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_GroupPresence_InvitationsSent{1738179766u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_GroupPresence_JoinIntentReceived{2000194038u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_GroupPresence_LeaveIntentReceived{1194846749u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_HTTP_Transfer{2111073839u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Livestreaming_StatusChange{575101294u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Matchmaking_MatchFound{197393623u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_NetSync_ConnectionStatusChanged{120882378u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_NetSync_SessionsChanged{947814198u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Networking_ConnectionStateChange{1577243802u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Networking_PeerConnectRequest{1295114959u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Networking_PingResult{1360343058u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Party_PartyUpdate{487688882u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Room_InviteAccepted{1829794225u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Room_InviteReceived{1783209300u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Room_RoomUpdate{1626094639u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Session_InvitationsSent{133810304u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Voip_ConnectRequest{908343318u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Voip_MicrophoneAvailabilityStateUpdate{1042336599u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Voip_StateChange{888120928u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Voip_SystemVoipState{1490179237u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Vrcamera_GetDataChannelMessageUpdate{1860498236u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Notification_Vrcamera_GetSurfaceUpdate{938610820u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Platform_InitializeWithAccessToken{896085803u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Platform_InitializeStandaloneOculus{1375260172u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Platform_InitializeAndroidAsynchronous{450037684u};
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType  ::Oculus::Platform::____Oculus__Platform__Message__MessageType::Platform_InitializeWindowsAsynchronous{1839708815u};
//  Writing Method size for method: ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x257f968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message (::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::*)(::cordl_internals::intptr_t, ::Oculus::Platform::____Oculus__Platform__Message__MessageType)>(&::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x257fa2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::*)(::cordl_internals::intptr_t, ::Oculus::Platform::____Oculus__Platform__Message__MessageType, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x257fa40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message (::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::*)(::System::IAsyncResult)>(&::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x257faf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::____Oculus__Platform__Message__ExtraMessageTypesHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____Oculus__Platform__Message__ExtraMessageTypesHandler>(object, method))) {}
 void ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::Oculus::Platform::Message ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::Invoke(::cordl_internals::intptr_t messageHandle, ::Oculus::Platform::____Oculus__Platform__Message__MessageType message_type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message__MessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message, false>(const_cast<void*>(instance), ___internal_method, messageHandle, message_type);
}
 ::System::IAsyncResult ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::BeginInvoke(::cordl_internals::intptr_t messageHandle, ::Oculus::Platform::____Oculus__Platform__Message__MessageType message_type, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, messageHandle, message_type, callback, object);
}
 ::Oculus::Platform::Message ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::Oculus::Platform::Message._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Message::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Message::_ctor)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x257b7b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::Finalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257ba68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::____Oculus__Platform__Message__MessageType (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257ba70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_IsError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_IsError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x257ba78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "get_IsError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_RequestID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_RequestID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257ba88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "get_RequestID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Error (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257ba90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPingResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PingResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPingResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257ba98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetworkingPeer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetworkingPeer (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetworkingPeer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257baa0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetHttpTransferUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::HttpTransferUpdate (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetHttpTransferUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257baa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPlatformInitialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PlatformInitialize (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPlatformInitialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bab0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAbuseReportRecording
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AbuseReportRecording (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAbuseReportRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAchievementDefinitions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AchievementDefinitionList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAchievementDefinitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bac0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAchievementProgressList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AchievementProgressList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAchievementProgressList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bac8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAchievementUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AchievementUpdate (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAchievementUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bad0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetApplicationInviteList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationInviteList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetApplicationInviteList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bad8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetApplicationVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationVersion (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetApplicationVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bae0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetDetails (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bae8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetDetailsList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetDetailsList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetDetailsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257baf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDeleteResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDeleteResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetFileDeleteResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257baf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDownloadCancelResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadCancelResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetFileDownloadCancelResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDownloadResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetFileDownloadResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDownloadUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadUpdate (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetFileDownloadUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAvatarEditorResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AvatarEditorResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAvatarEditorResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetBlockedUserList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::BlockedUserList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetBlockedUserList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetCalApplicationFinalized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CalApplicationFinalized (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetCalApplicationFinalized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetCalApplicationProposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CalApplicationProposed (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetCalApplicationProposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetCalApplicationSuggestionList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CalApplicationSuggestionList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetCalApplicationSuggestionList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetChallenge
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Challenge (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetChallenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetChallengeEntryList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ChallengeEntryList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetChallengeEntryList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetChallengeList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ChallengeList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetChallengeList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetCloudStorageConflictMetadata
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageConflictMetadata (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetCloudStorageConflictMetadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetCloudStorageData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageData (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetCloudStorageData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetCloudStorageMetadata
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageMetadata (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetCloudStorageMetadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetCloudStorageMetadataList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageMetadataList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetCloudStorageMetadataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetCloudStorageUpdateResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageUpdateResponse (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetCloudStorageUpdateResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetDataStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW> (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetDataStore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetDestinationList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::DestinationList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetDestinationList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetGroupPresenceJoinIntent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::GroupPresenceJoinIntent (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetGroupPresenceJoinIntent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetGroupPresenceLeaveIntent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::GroupPresenceLeaveIntent (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetGroupPresenceLeaveIntent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bb98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetInstalledApplicationList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::InstalledApplicationList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetInstalledApplicationList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bba0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetInvitePanelResultInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::InvitePanelResultInfo (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetInvitePanelResultInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bba8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchBlockFlowResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchBlockFlowResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLaunchBlockFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bbb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchFriendRequestFlowResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchFriendRequestFlowResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLaunchFriendRequestFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bbb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchInvitePanelFlowResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchInvitePanelFlowResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLaunchInvitePanelFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bbc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchReportFlowResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchReportFlowResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLaunchReportFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bbc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchUnblockFlowResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchUnblockFlowResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLaunchUnblockFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bbd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLeaderboardDidUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLeaderboardDidUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bbd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLeaderboardEntryList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LeaderboardEntryList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLeaderboardEntryList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bbe0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLeaderboardList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LeaderboardList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLeaderboardList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bbe8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLinkedAccountList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LinkedAccountList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLinkedAccountList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bbf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingApplicationStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingApplicationStatus (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLivestreamingApplicationStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bbf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingStartResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingStartResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLivestreamingStartResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingStatus (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLivestreamingStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingVideoStats
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingVideoStats (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLivestreamingVideoStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetMatchmakingAdminSnapshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingAdminSnapshot (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetMatchmakingAdminSnapshot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetMatchmakingBrowseResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingBrowseResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetMatchmakingBrowseResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  54
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetMatchmakingEnqueueResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingEnqueueResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetMatchmakingEnqueueResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetMatchmakingEnqueueResultAndRoom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetMatchmakingEnqueueResultAndRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  56
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetMatchmakingStats
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingStats (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetMatchmakingStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  57
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetMicrophoneAvailabilityState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MicrophoneAvailabilityState (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetMicrophoneAvailabilityState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  58
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncConnection (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetSyncConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncSessionList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSessionList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetSyncSessionList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  60
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncSessionsChangedNotification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSessionsChangedNotification (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetSyncSessionsChangedNotification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncSetSessionPropertyResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetSyncSetSessionPropertyResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  62
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncVoipAttenuationValueList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetSyncVoipAttenuationValueList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  63
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetOrgScopedID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::OrgScopedID (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetOrgScopedID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  64
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetParty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Party (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetParty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  65
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPartyID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PartyID (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPartyID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  66
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPartyUpdateNotification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PartyUpdateNotification (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPartyUpdateNotification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  67
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPidList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PidList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPidList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  68
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetProductList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ProductList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetProductList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bc98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  69
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPurchase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Purchase (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPurchase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  70
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPurchaseList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PurchaseList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPurchaseList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  71
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetRejoinDialogResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::RejoinDialogResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetRejoinDialogResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bcb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetRoom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Room (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bcb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  73
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetRoomInviteNotification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::RoomInviteNotification (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetRoomInviteNotification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bcc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  74
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetRoomInviteNotificationList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::RoomInviteNotificationList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetRoomInviteNotificationList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bcc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  75
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetRoomList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::RoomList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetRoomList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bcd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  76
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetSdkAccountList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SdkAccountList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetSdkAccountList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bcd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  77
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetSendInvitesResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SendInvitesResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetSendInvitesResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bce0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  78
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetShareMediaResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ShareMediaResult (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetShareMediaResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bce8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  79
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bcf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  80
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetSystemVoipState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SystemVoipState (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetSystemVoipState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bcf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  81
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::User (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bd00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  82
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserAndRoomList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserAndRoomList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserAndRoomList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bd08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  83
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserCapabilityList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserCapabilityList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserCapabilityList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bd10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  84
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserDataStoreUpdateResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserDataStoreUpdateResponse (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserDataStoreUpdateResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bd18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  85
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserList (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bd20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  86
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserProof
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserProof (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserProof)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bd28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  87
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserReportID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserReportID (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserReportID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bd30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                                  88
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.ParseMessageHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message (*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Message::ParseMessageHandle)> {
  constexpr static std::size_t size = 0x2068;
  constexpr static std::size_t addrs = 0x257bd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "ParseMessageHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.PopMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Message (*)()>(&::Oculus::Platform::Message::PopMessage)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2553de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "PopMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.set_HandleExtraMessageTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler)>(&::Oculus::Platform::Message::set_HandleExtraMessageTypes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x257f768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "set_HandleExtraMessageTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_HandleExtraMessageTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler (*)()>(&::Oculus::Platform::Message::get_HandleExtraMessageTypes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x257f7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "get_HandleExtraMessageTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::Message::__set_type(::Oculus::Platform::____Oculus__Platform__Message__MessageType value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::____Oculus__Platform__Message__MessageType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::____Oculus__Platform__Message__MessageType>(value));
}
constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType ::Oculus::Platform::Message::__get_type() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::____Oculus__Platform__Message__MessageType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Message::__set_requestID(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::Oculus::Platform::Message::__get_requestID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Message::__set_error(::Oculus::Platform::Models::Error value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Error, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::Error>(value));
}
constexpr ::Oculus::Platform::Models::Error ::Oculus::Platform::Message::__get_error() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Error, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Oculus::Platform::Message::__set__HandleExtraMessageTypes_k__BackingField(::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler value)  {
::cordl_internals::setStaticField<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler, "<HandleExtraMessageTypes>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get>(std::forward<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler>(value));
}
 ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler ::Oculus::Platform::Message::__get__HandleExtraMessageTypes_k__BackingField()  {
return ::cordl_internals::getStaticField<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler, "<HandleExtraMessageTypes>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get>();
}
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Message::Message(::cordl_internals::intptr_t c_message)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Message>(c_message))) {}
 void ::Oculus::Platform::Message::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 void ::Oculus::Platform::Message::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::____Oculus__Platform__Message__MessageType ::Oculus::Platform::Message::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::____Oculus__Platform__Message__MessageType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Oculus::Platform::Message::get_IsError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "get_IsError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 uint64_t ::Oculus::Platform::Message::get_RequestID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "get_RequestID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::Error ::Oculus::Platform::Message::GetError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Error, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::PingResult ::Oculus::Platform::Message::GetPingResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetPingResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PingResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::NetworkingPeer ::Oculus::Platform::Message::GetNetworkingPeer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetNetworkingPeer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetworkingPeer, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::HttpTransferUpdate ::Oculus::Platform::Message::GetHttpTransferUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetHttpTransferUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::HttpTransferUpdate, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::PlatformInitialize ::Oculus::Platform::Message::GetPlatformInitialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetPlatformInitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PlatformInitialize, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::AbuseReportRecording ::Oculus::Platform::Message::GetAbuseReportRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetAbuseReportRecording",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AbuseReportRecording, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::AchievementDefinitionList ::Oculus::Platform::Message::GetAchievementDefinitions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetAchievementDefinitions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementDefinitionList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::AchievementProgressList ::Oculus::Platform::Message::GetAchievementProgressList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetAchievementProgressList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementProgressList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::AchievementUpdate ::Oculus::Platform::Message::GetAchievementUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetAchievementUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementUpdate, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::ApplicationInviteList ::Oculus::Platform::Message::GetApplicationInviteList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetApplicationInviteList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationInviteList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::ApplicationVersion ::Oculus::Platform::Message::GetApplicationVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetApplicationVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationVersion, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::AssetDetails ::Oculus::Platform::Message::GetAssetDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetAssetDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetails, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::AssetDetailsList ::Oculus::Platform::Message::GetAssetDetailsList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetAssetDetailsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetailsList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::AssetFileDeleteResult ::Oculus::Platform::Message::GetAssetFileDeleteResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetAssetFileDeleteResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDeleteResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::AssetFileDownloadCancelResult ::Oculus::Platform::Message::GetAssetFileDownloadCancelResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetAssetFileDownloadCancelResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadCancelResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::AssetFileDownloadResult ::Oculus::Platform::Message::GetAssetFileDownloadResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetAssetFileDownloadResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::AssetFileDownloadUpdate ::Oculus::Platform::Message::GetAssetFileDownloadUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetAssetFileDownloadUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadUpdate, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::AvatarEditorResult ::Oculus::Platform::Message::GetAvatarEditorResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetAvatarEditorResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AvatarEditorResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::BlockedUserList ::Oculus::Platform::Message::GetBlockedUserList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetBlockedUserList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::BlockedUserList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::CalApplicationFinalized ::Oculus::Platform::Message::GetCalApplicationFinalized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetCalApplicationFinalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CalApplicationFinalized, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::CalApplicationProposed ::Oculus::Platform::Message::GetCalApplicationProposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetCalApplicationProposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CalApplicationProposed, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::CalApplicationSuggestionList ::Oculus::Platform::Message::GetCalApplicationSuggestionList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetCalApplicationSuggestionList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CalApplicationSuggestionList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::Challenge ::Oculus::Platform::Message::GetChallenge()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetChallenge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Challenge, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::ChallengeEntryList ::Oculus::Platform::Message::GetChallengeEntryList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetChallengeEntryList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeEntryList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::ChallengeList ::Oculus::Platform::Message::GetChallengeList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetChallengeList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::CloudStorageConflictMetadata ::Oculus::Platform::Message::GetCloudStorageConflictMetadata()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetCloudStorageConflictMetadata",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageConflictMetadata, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::CloudStorageData ::Oculus::Platform::Message::GetCloudStorageData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetCloudStorageData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageData, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::CloudStorageMetadata ::Oculus::Platform::Message::GetCloudStorageMetadata()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetCloudStorageMetadata",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageMetadata, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::CloudStorageMetadataList ::Oculus::Platform::Message::GetCloudStorageMetadataList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetCloudStorageMetadataList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageMetadataList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::CloudStorageUpdateResponse ::Oculus::Platform::Message::GetCloudStorageUpdateResponse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetCloudStorageUpdateResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageUpdateResponse, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> ::Oculus::Platform::Message::GetDataStore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetDataStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::DestinationList ::Oculus::Platform::Message::GetDestinationList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetDestinationList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::DestinationList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::GroupPresenceJoinIntent ::Oculus::Platform::Message::GetGroupPresenceJoinIntent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetGroupPresenceJoinIntent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceJoinIntent, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::GroupPresenceLeaveIntent ::Oculus::Platform::Message::GetGroupPresenceLeaveIntent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetGroupPresenceLeaveIntent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceLeaveIntent, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::InstalledApplicationList ::Oculus::Platform::Message::GetInstalledApplicationList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetInstalledApplicationList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InstalledApplicationList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::InvitePanelResultInfo ::Oculus::Platform::Message::GetInvitePanelResultInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetInvitePanelResultInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InvitePanelResultInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LaunchBlockFlowResult ::Oculus::Platform::Message::GetLaunchBlockFlowResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLaunchBlockFlowResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchBlockFlowResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LaunchFriendRequestFlowResult ::Oculus::Platform::Message::GetLaunchFriendRequestFlowResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLaunchFriendRequestFlowResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchFriendRequestFlowResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LaunchInvitePanelFlowResult ::Oculus::Platform::Message::GetLaunchInvitePanelFlowResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLaunchInvitePanelFlowResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchInvitePanelFlowResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LaunchReportFlowResult ::Oculus::Platform::Message::GetLaunchReportFlowResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLaunchReportFlowResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchReportFlowResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LaunchUnblockFlowResult ::Oculus::Platform::Message::GetLaunchUnblockFlowResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLaunchUnblockFlowResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchUnblockFlowResult, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Oculus::Platform::Message::GetLeaderboardDidUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLeaderboardDidUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LeaderboardEntryList ::Oculus::Platform::Message::GetLeaderboardEntryList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLeaderboardEntryList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LeaderboardEntryList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LeaderboardList ::Oculus::Platform::Message::GetLeaderboardList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLeaderboardList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LeaderboardList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LinkedAccountList ::Oculus::Platform::Message::GetLinkedAccountList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLinkedAccountList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LinkedAccountList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LivestreamingApplicationStatus ::Oculus::Platform::Message::GetLivestreamingApplicationStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLivestreamingApplicationStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingApplicationStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LivestreamingStartResult ::Oculus::Platform::Message::GetLivestreamingStartResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLivestreamingStartResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStartResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LivestreamingStatus ::Oculus::Platform::Message::GetLivestreamingStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLivestreamingStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LivestreamingVideoStats ::Oculus::Platform::Message::GetLivestreamingVideoStats()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetLivestreamingVideoStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingVideoStats, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::MatchmakingAdminSnapshot ::Oculus::Platform::Message::GetMatchmakingAdminSnapshot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetMatchmakingAdminSnapshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingAdminSnapshot, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::MatchmakingBrowseResult ::Oculus::Platform::Message::GetMatchmakingBrowseResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetMatchmakingBrowseResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingBrowseResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::MatchmakingEnqueueResult ::Oculus::Platform::Message::GetMatchmakingEnqueueResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetMatchmakingEnqueueResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingEnqueueResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom ::Oculus::Platform::Message::GetMatchmakingEnqueueResultAndRoom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetMatchmakingEnqueueResultAndRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::MatchmakingStats ::Oculus::Platform::Message::GetMatchmakingStats()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetMatchmakingStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingStats, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::MicrophoneAvailabilityState ::Oculus::Platform::Message::GetMicrophoneAvailabilityState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetMicrophoneAvailabilityState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MicrophoneAvailabilityState, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::NetSyncConnection ::Oculus::Platform::Message::GetNetSyncConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetNetSyncConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncConnection, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::NetSyncSessionList ::Oculus::Platform::Message::GetNetSyncSessionList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetNetSyncSessionList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::NetSyncSessionsChangedNotification ::Oculus::Platform::Message::GetNetSyncSessionsChangedNotification()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetNetSyncSessionsChangedNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionsChangedNotification, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult ::Oculus::Platform::Message::GetNetSyncSetSessionPropertyResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetNetSyncSetSessionPropertyResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList ::Oculus::Platform::Message::GetNetSyncVoipAttenuationValueList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetNetSyncVoipAttenuationValueList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::OrgScopedID ::Oculus::Platform::Message::GetOrgScopedID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetOrgScopedID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::OrgScopedID, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::Party ::Oculus::Platform::Message::GetParty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetParty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Party, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::PartyID ::Oculus::Platform::Message::GetPartyID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetPartyID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PartyID, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::PartyUpdateNotification ::Oculus::Platform::Message::GetPartyUpdateNotification()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetPartyUpdateNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PartyUpdateNotification, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::PidList ::Oculus::Platform::Message::GetPidList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetPidList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PidList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::ProductList ::Oculus::Platform::Message::GetProductList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetProductList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ProductList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::Purchase ::Oculus::Platform::Message::GetPurchase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetPurchase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Purchase, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::PurchaseList ::Oculus::Platform::Message::GetPurchaseList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetPurchaseList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PurchaseList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::RejoinDialogResult ::Oculus::Platform::Message::GetRejoinDialogResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetRejoinDialogResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RejoinDialogResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::Room ::Oculus::Platform::Message::GetRoom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Room, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::RoomInviteNotification ::Oculus::Platform::Message::GetRoomInviteNotification()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetRoomInviteNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RoomInviteNotification, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::RoomInviteNotificationList ::Oculus::Platform::Message::GetRoomInviteNotificationList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetRoomInviteNotificationList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RoomInviteNotificationList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::RoomList ::Oculus::Platform::Message::GetRoomList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetRoomList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RoomList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::SdkAccountList ::Oculus::Platform::Message::GetSdkAccountList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetSdkAccountList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SdkAccountList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::SendInvitesResult ::Oculus::Platform::Message::GetSendInvitesResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetSendInvitesResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SendInvitesResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::ShareMediaResult ::Oculus::Platform::Message::GetShareMediaResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetShareMediaResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ShareMediaResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::Oculus::Platform::Message::GetString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::SystemVoipState ::Oculus::Platform::Message::GetSystemVoipState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetSystemVoipState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SystemVoipState, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::User ::Oculus::Platform::Message::GetUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::User, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::UserAndRoomList ::Oculus::Platform::Message::GetUserAndRoomList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetUserAndRoomList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserAndRoomList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::UserCapabilityList ::Oculus::Platform::Message::GetUserCapabilityList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetUserCapabilityList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserCapabilityList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::UserDataStoreUpdateResponse ::Oculus::Platform::Message::GetUserDataStoreUpdateResponse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetUserDataStoreUpdateResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserDataStoreUpdateResponse, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::UserList ::Oculus::Platform::Message::GetUserList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetUserList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::UserProof ::Oculus::Platform::Message::GetUserProof()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetUserProof",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserProof, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::UserReportID ::Oculus::Platform::Message::GetUserReportID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "GetUserReportID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserReportID, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Message ::Oculus::Platform::Message::ParseMessageHandle(::cordl_internals::intptr_t messageHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "ParseMessageHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message, false>(nullptr, ___internal_method, messageHandle);
}
 ::Oculus::Platform::Message ::Oculus::Platform::Message::PopMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "PopMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message, false>(nullptr, ___internal_method);
}
 void ::Oculus::Platform::Message::set_HandleExtraMessageTypes(::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "set_HandleExtraMessageTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler ::Oculus::Platform::Message::get_HandleExtraMessageTypes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Message>::get(),
                            "get_HandleExtraMessageTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
