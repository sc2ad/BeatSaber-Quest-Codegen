#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__PlatformInternal_def.hpp"
#include "Oculus/Platform/Models/zzzz__HttpTransferUpdate_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccountList_def.hpp"
#include "Oculus/Platform/zzzz__ServiceProvider_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Oculus__Platform__PlatformInternal__MessageTypeInternal(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::AbuseReport_LaunchAdvancedReportFlow{1286683246u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Application_ExecuteCoordinatedLaunch{645772532u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Application_GetInstalledApplications{1376744524u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Avatar_UpdateMetaData{2077219214u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Cal_FinalizeApplication{497667029u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Cal_GetSuggestedApplications{1450209301u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Cal_ProposeApplication{1317270237u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Colocation_GetCurrentMapUuid{878018226u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Colocation_RequestMap{840263277u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Colocation_ShareMap{409847005u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::DeviceApplicationIntegrity_GetAttestationToken{271557598u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::GraphAPI_Get{822018158u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::GraphAPI_Post{1990567876u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::HTTP_Get{1874211363u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::HTTP_GetToFile{1317133401u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::HTTP_MultiPartPost{1480774160u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::HTTP_Post{1798743375u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Livestreaming_IsAllowedForApplication{191729014u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Livestreaming_StartPartyStream{2066701532u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Livestreaming_StartStream{1343932350u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Livestreaming_StopPartyStream{661065560u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Livestreaming_StopStream{1155796426u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Livestreaming_UpdateMicStatus{475495815u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_Connect{1684899167u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_Disconnect{359268021u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_GetSessions{1859521077u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_GetVoipAttenuation{288016919u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_GetVoipAttenuationDefault{1467721888u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_SetVoipAttenuation{882366454u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_SetVoipAttenuationModel{1788128654u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_SetVoipChannelCfg{1553310963u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_SetVoipGroup{1477614734u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_SetVoipListentoChannels{1590749746u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_SetVoipMicSource{855832432u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_SetVoipSessionMuted{1434844938u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_SetVoipSpeaktoChannels{766496213u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::NetSync_SetVoipStreamMode{1742839095u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Party_Create{450042703u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Party_GatherInApplication{1921499523u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Party_Get{1586058173u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Party_GetCurrentForUser{1489764138u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Party_Invite{901104867u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Party_Join{1744993395u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Party_Leave{848430801u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::RichPresence_SetDestination{1328734477u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::RichPresence_SetIsJoinable{1050353505u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::RichPresence_SetLobbySession{1895893271u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::RichPresence_SetMatchSession{1675623566u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Room_CreateOrUpdateAndJoinNamed{2089683601u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Room_GetNamedRooms{125660812u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Room_GetSocialRooms{1636310390u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_CancelRecordingForReportFlow{65065289u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_GetLinkedAccounts{1469314134u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_GetUserCapabilities{303837564u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_LaunchProfile{171537047u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_LaunchReportFlow{1449304081u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_LaunchReportFlow2{2139314275u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_NewEntitledTestUser{292822787u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_NewTestUser{921194380u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_NewTestUserFriends{517416647u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_StartRecordingForReportFlow{1819161571u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_StopRecordingAndLaunchReportFlow{1618513035u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_StopRecordingAndLaunchReportFlow2{432190251u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::User_TestUserCreateDeviceManifest{1701884605u};
constexpr Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal  Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal::Voip_ReportAppVoipSessions{408048078u};
//  Writing Method size for method: Oculus::Platform::Oculus__Platform__PlatformInternal__HTTP.SetHttpTransferUpdateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::HttpTransferUpdate>)>(&Oculus::Platform::Oculus__Platform__PlatformInternal__HTTP::SetHttpTransferUpdateCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2598bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__PlatformInternal__HTTP>::get(),
                            "SetHttpTransferUpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::HttpTransferUpdate>>::get()}
                        )));
    return ___internal_method;
  }
};
 void Oculus::Platform::Oculus__Platform__PlatformInternal__HTTP::SetHttpTransferUpdateCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::HttpTransferUpdate> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__PlatformInternal__HTTP>::get(),
                            "SetHttpTransferUpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::HttpTransferUpdate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
//  Writing Method size for method: Oculus::Platform::Oculus__Platform__PlatformInternal__Users.GetLinkedAccounts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::LinkedAccountList> (*)(::ArrayW<Oculus::Platform::ServiceProvider>)>(&Oculus::Platform::Oculus__Platform__PlatformInternal__Users::GetLinkedAccounts)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2598c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__PlatformInternal__Users>::get(),
                            "GetLinkedAccounts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Oculus::Platform::ServiceProvider>>::get()}
                        )));
    return ___internal_method;
  }
};
 Oculus::Platform::Request_1<Oculus::Platform::Models::LinkedAccountList> Oculus::Platform::Oculus__Platform__PlatformInternal__Users::GetLinkedAccounts(::ArrayW<Oculus::Platform::ServiceProvider> providers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Oculus__Platform__PlatformInternal__Users>::get(),
                            "GetLinkedAccounts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Oculus::Platform::ServiceProvider>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::LinkedAccountList>, false>(nullptr, ___internal_method, providers);
}
//  Writing Method size for method: Oculus::Platform::PlatformInternal.CrashApplication
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::PlatformInternal::CrashApplication)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2597ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::PlatformInternal>::get(),
                            "CrashApplication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::PlatformInternal.ParseMessageHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Message (*)(::cordl_internals::intptr_t, Oculus::Platform::Oculus__Platform__Message__MessageType)>(&Oculus::Platform::PlatformInternal::ParseMessageHandle)> {
  constexpr static std::size_t size = 0xa7c;
  constexpr static std::size_t addrs = 0x2597f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::PlatformInternal>::get(),
                            "ParseMessageHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message__MessageType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::PlatformInternal.InitializeStandaloneAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize> (*)(uint64_t, ::StringW)>(&Oculus::Platform::PlatformInternal::InitializeStandaloneAsync)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x259898c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::PlatformInternal>::get(),
                            "InitializeStandaloneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void Oculus::Platform::PlatformInternal::CrashApplication()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::PlatformInternal>::get(),
                            "CrashApplication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Message Oculus::Platform::PlatformInternal::ParseMessageHandle(::cordl_internals::intptr_t messageHandle, Oculus::Platform::Oculus__Platform__Message__MessageType messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::PlatformInternal>::get(),
                            "ParseMessageHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message__MessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Message, false>(nullptr, ___internal_method, messageHandle, messageType);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize> Oculus::Platform::PlatformInternal::InitializeStandaloneAsync(uint64_t appID, ::StringW accessToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::PlatformInternal>::get(),
                            "InitializeStandaloneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize>, false>(nullptr, ___internal_method, appID, accessToken);
}
