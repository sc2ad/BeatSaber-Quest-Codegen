#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCode_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
//  Writing Method size for method: ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::*)(::GlobalNamespace::MultiplayerPlacementErrorCode, ::BGNet::Core::GameLift::PlayerSessionInfo, int32_t, ::StringW, ::StringW, ::StringW, ::StringW)>(&::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdd3d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlacementErrorCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::GameLift::PlayerSessionInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "errorCode", ty: "::GlobalNamespace::MultiplayerPlacementErrorCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerSessionInfo", ty: "::BGNet::Core::GameLift::PlayerSessionInfo", modifiers: "", def_value: Some("csnull") }, CppParam { name: "pollIntervalMs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ticketId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ticketStatus", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "placementId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "placementStatus", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::GetMultiplayerInstanceResponse(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode, ::BGNet::Core::GameLift::PlayerSessionInfo playerSessionInfo, int32_t pollIntervalMs, ::StringW ticketId, ::StringW ticketStatus, ::StringW placementId, ::StringW placementStatus) noexcept : ::bs_hook::ValueTypeWrapper() {this->errorCode = errorCode;
this->playerSessionInfo = playerSessionInfo;
this->pollIntervalMs = pollIntervalMs;
this->ticketId = ticketId;
this->ticketStatus = ticketStatus;
this->placementId = placementId;
this->placementStatus = placementStatus;
}
constexpr void ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__set_errorCode(::GlobalNamespace::MultiplayerPlacementErrorCode value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerPlacementErrorCode, 0x0>(this->__instance, std::forward<::GlobalNamespace::MultiplayerPlacementErrorCode>(value));
}
constexpr ::GlobalNamespace::MultiplayerPlacementErrorCode ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__get_errorCode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlacementErrorCode, 0x0>(this->__instance);
}
constexpr void ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__set_playerSessionInfo(::BGNet::Core::GameLift::PlayerSessionInfo value)  {
::cordl_internals::setInstanceField<::BGNet::Core::GameLift::PlayerSessionInfo, 0x8>(this->__instance, std::forward<::BGNet::Core::GameLift::PlayerSessionInfo>(value));
}
constexpr ::BGNet::Core::GameLift::PlayerSessionInfo ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__get_playerSessionInfo() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::GameLift::PlayerSessionInfo, 0x8>(this->__instance);
}
constexpr void ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__set_pollIntervalMs(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__get_pollIntervalMs() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__set_ticketId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__get_ticketId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__set_ticketStatus(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__get_ticketStatus() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__set_placementId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__get_placementId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__set_placementStatus(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::__get_placementStatus() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
/// @param ticketId: ::StringW (default: csnull)
/// @param ticketStatus: ::StringW (default: csnull)
/// @param placementId: ::StringW (default: csnull)
/// @param placementStatus: ::StringW (default: csnull)
 void ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse::_ctor(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode, ::BGNet::Core::GameLift::PlayerSessionInfo playerSessionInfo, int32_t pollIntervalMs, ::StringW ticketId, ::StringW ticketStatus, ::StringW placementId, ::StringW placementStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlacementErrorCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::GameLift::PlayerSessionInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, errorCode, playerSessionInfo, pollIntervalMs, ticketId, ticketStatus, placementId, placementStatus);
}
} // end anonymous namespace
