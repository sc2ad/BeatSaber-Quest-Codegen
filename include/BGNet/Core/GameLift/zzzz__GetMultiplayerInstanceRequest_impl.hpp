#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceRequest_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__ServiceEnvironment_def.hpp"
//  Writing Method size for method: BGNet::Core::GameLift::GetMultiplayerInstanceRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::GetMultiplayerInstanceRequest::*)(::StringW, GlobalNamespace::ServiceEnvironment, ::StringW, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration, GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform, ::StringW, ::StringW, ::StringW, ::StringW, System::Collections::Generic::Dictionary_2<::StringW,int64_t>, ::StringW, ::StringW)>(&BGNet::Core::GameLift::GetMultiplayerInstanceRequest::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdd34e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GetMultiplayerInstanceRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ServiceEnvironment>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "serviceEnvironment", ty: "GlobalNamespace::ServiceEnvironment", modifiers: "", def_value: Some("{}") }, CppParam { name: "singleUseAuthToken", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "beatmapLevelSelectionMask", ty: "GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayServerConfiguration", ty: "GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "privateGameSecret", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "privateGameCode", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "platform", ty: "GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform", modifiers: "", def_value: Some("{}") }, CppParam { name: "authUserId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "gameliftRegionLatencies", ty: "System::Collections::Generic::Dictionary_2<::StringW,int64_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ticketId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "placementId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr BGNet::Core::GameLift::GetMultiplayerInstanceRequest::GetMultiplayerInstanceRequest(::StringW version, GlobalNamespace::ServiceEnvironment serviceEnvironment, ::StringW singleUseAuthToken, GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW userId, ::StringW privateGameSecret, ::StringW privateGameCode, GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform platform, ::StringW authUserId, System::Collections::Generic::Dictionary_2<::StringW,int64_t> gameliftRegionLatencies, ::StringW ticketId, ::StringW placementId) noexcept : ::bs_hook::ValueTypeWrapper() {this->version = version;
this->serviceEnvironment = serviceEnvironment;
this->singleUseAuthToken = singleUseAuthToken;
this->beatmapLevelSelectionMask = beatmapLevelSelectionMask;
this->gameplayServerConfiguration = gameplayServerConfiguration;
this->userId = userId;
this->privateGameSecret = privateGameSecret;
this->privateGameCode = privateGameCode;
this->platform = platform;
this->authUserId = authUserId;
this->gameliftRegionLatencies = gameliftRegionLatencies;
this->ticketId = ticketId;
this->placementId = placementId;
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_version(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_serviceEnvironment(GlobalNamespace::ServiceEnvironment value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ServiceEnvironment, 0x8>(this->__instance, std::forward<GlobalNamespace::ServiceEnvironment>(value));
}
constexpr GlobalNamespace::ServiceEnvironment BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_serviceEnvironment() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ServiceEnvironment, 0x8>(this->__instance);
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_singleUseAuthToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_singleUseAuthToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_beatmapLevelSelectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x18>(this->__instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_beatmapLevelSelectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x18>(this->__instance);
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_gameplayServerConfiguration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x30>(this->__instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_gameplayServerConfiguration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x30>(this->__instance);
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->__instance);
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_privateGameSecret(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_privateGameSecret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->__instance);
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_privateGameCode(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_privateGameCode() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->__instance);
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_platform(GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform, 0x60>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>(value));
}
constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_platform() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform, 0x60>(this->__instance);
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_authUserId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_authUserId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->__instance);
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_gameliftRegionLatencies(System::Collections::Generic::Dictionary_2<::StringW,int64_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,int64_t>, 0x70>(this->__instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,int64_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,int64_t> BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_gameliftRegionLatencies() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,int64_t>, 0x70>(this->__instance);
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_ticketId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_ticketId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this->__instance);
}
constexpr void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__set_placementId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::GameLift::GetMultiplayerInstanceRequest::__get_placementId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this->__instance);
}
/// @param ticketId: ::StringW (default: csnull)
/// @param placementId: ::StringW (default: csnull)
 void BGNet::Core::GameLift::GetMultiplayerInstanceRequest::_ctor(::StringW version, GlobalNamespace::ServiceEnvironment serviceEnvironment, ::StringW userId, GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform platform, ::StringW authUserId, ::StringW singleUseAuthToken, ::StringW privateGameSecret, ::StringW privateGameCode, System::Collections::Generic::Dictionary_2<::StringW,int64_t> gameliftRegionLatencies, ::StringW ticketId, ::StringW placementId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::GameLift::GetMultiplayerInstanceRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ServiceEnvironment>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, version, serviceEnvironment, userId, beatmapLevelSelectionMask, gameplayServerConfiguration, platform, authUserId, singleUseAuthToken, privateGameSecret, privateGameCode, gameliftRegionLatencies, ticketId, placementId);
}
