#pragma once
#include "GlobalNamespace/zzzz__MockScoreSyncStateSender_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncStateNetSerializable_def.hpp"
//  Writing Method size for method: GlobalNamespace::MockScoreSyncStateSender._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockScoreSyncStateSender::*)(GlobalNamespace::IMultiplayerSessionManager)>(&GlobalNamespace::MockScoreSyncStateSender::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2279ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockScoreSyncStateSender>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockScoreSyncStateSender.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockScoreSyncStateSender::*)()>(&GlobalNamespace::MockScoreSyncStateSender::Dispose)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2279c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockScoreSyncStateSender>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockScoreSyncStateSender.SendScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockScoreSyncStateSender::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&GlobalNamespace::MockScoreSyncStateSender::SendScore)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x227cfc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockScoreSyncStateSender>::get(),
                            "SendScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockScoreSyncStateSender.HandleScoreSyncStateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockScoreSyncStateSender::*)(GlobalNamespace::StandardScoreSyncStateNetSerializable, GlobalNamespace::IConnectedPlayer)>(&GlobalNamespace::MockScoreSyncStateSender::HandleScoreSyncStateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227f500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockScoreSyncStateSender>::get(),
                            "HandleScoreSyncStateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::StandardScoreSyncStateNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::MockScoreSyncStateSender::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockScoreSyncStateSender::__set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::MockScoreSyncStateSender::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "msm", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }]
 GlobalNamespace::MockScoreSyncStateSender::MockScoreSyncStateSender(GlobalNamespace::IMultiplayerSessionManager msm)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MockScoreSyncStateSender>(msm))) {}
 void GlobalNamespace::MockScoreSyncStateSender::_ctor(GlobalNamespace::IMultiplayerSessionManager msm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockScoreSyncStateSender>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msm);
}
 void GlobalNamespace::MockScoreSyncStateSender::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockScoreSyncStateSender>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MockScoreSyncStateSender::SendScore(int32_t modifiedScore, int32_t multipliedScore, int32_t immediateMaxPossibleMultipliedScore, int32_t combo, int32_t multiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockScoreSyncStateSender>::get(),
                            "SendScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, modifiedScore, multipliedScore, immediateMaxPossibleMultipliedScore, combo, multiplier);
}
 void GlobalNamespace::MockScoreSyncStateSender::HandleScoreSyncStateUpdate(GlobalNamespace::StandardScoreSyncStateNetSerializable nodePose, GlobalNamespace::IConnectedPlayer connectedPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockScoreSyncStateSender>::get(),
                            "HandleScoreSyncStateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::StandardScoreSyncStateNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nodePose, connectedPlayer);
}
