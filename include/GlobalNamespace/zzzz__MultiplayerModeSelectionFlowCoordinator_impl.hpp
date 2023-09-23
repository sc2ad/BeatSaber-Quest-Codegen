#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__ServerCodeEntryViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__SelectMultiplayerLobbyDestination_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__LobbyDataModelsManager_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerStatusModel_def.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormData_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerUnavailableReason_def.hpp"
#include "GlobalNamespace/zzzz__GameServerBrowserFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameServerLobbyFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAuthFeatureFlag_def.hpp"
#include "GlobalNamespace/zzzz__JoinQuickPlayViewController_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMaskModelSO_def.hpp"
#include "GlobalNamespace/zzzz__CreateServerViewController_def.hpp"
#include "GlobalNamespace/zzzz__IQuickPlaySetupModel_def.hpp"
#include "GlobalNamespace/zzzz__AvatarDataModel_def.hpp"
#include "GlobalNamespace/zzzz__JoiningLobbyViewController_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionViewController_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::MoveNext)> {
  constexpr static std::size_t size = 0xae8;
  constexpr static std::size_t addrs = 0x21416d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21421c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::MultiplayerModeSelectionFlowCoordinator", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_multiplayerStatusData_5__2", ty: "GlobalNamespace::MultiplayerStatusData", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_exception_5__3", ty: "System::Exception", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MultiplayerStatusData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::QuickPlaySetupData>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::MultiplayerModeSelectionFlowCoordinator __4__this, GlobalNamespace::MultiplayerStatusData _multiplayerStatusData_5__2, System::Exception _exception_5__3, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MultiplayerStatusData> __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::QuickPlaySetupData> __u__3) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_multiplayerStatusData_5__2 = _multiplayerStatusData_5__2;
this->_exception_5__3 = _exception_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__set___4__this(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, 0x28>(this->__instance, std::forward<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>(value));
}
constexpr GlobalNamespace::MultiplayerModeSelectionFlowCoordinator GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__set__multiplayerStatusData_5__2(GlobalNamespace::MultiplayerStatusData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerStatusData, 0x30>(this->__instance, std::forward<GlobalNamespace::MultiplayerStatusData>(value));
}
constexpr GlobalNamespace::MultiplayerStatusData GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__get__multiplayerStatusData_5__2() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerStatusData, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__set__exception_5__3(System::Exception value)  {
::cordl_internals::setInstanceField<System::Exception, 0x38>(this->__instance, std::forward<System::Exception>(value));
}
constexpr System::Exception GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__get__exception_5__3() const {
return ::cordl_internals::getInstanceField<System::Exception, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MultiplayerStatusData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MultiplayerStatusData>, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MultiplayerStatusData>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MultiplayerStatusData> GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MultiplayerStatusData>, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::QuickPlaySetupData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::QuickPlaySetupData>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::QuickPlaySetupData>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::QuickPlaySetupData> GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__get___u__3() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::QuickPlaySetupData>, 0x50>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::MoveNext)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x21421cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x214255c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::MultiplayerModeSelectionFlowCoordinator", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::MultiplayerModeSelectionFlowCoordinator __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::__set___4__this(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, 0x28>(this->__instance, std::forward<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>(value));
}
constexpr GlobalNamespace::MultiplayerModeSelectionFlowCoordinator GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2134f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21356c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(GlobalNamespace::SelectMultiplayerLobbyDestination)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x213e458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SelectMultiplayerLobbyDestination>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x213e460;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x213e9d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.BackButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(HMUI::ViewController)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x213edd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.TopViewControllerWillChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(HMUI::ViewController, HMUI::ViewController, HMUI::HMUI__ViewController__AnimationType)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x213eea0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.TransitionDidStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TransitionDidStart)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x213f0ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.TransitionDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TransitionDidFinish)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x213f24c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x213fa8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleMultiplayerLobbyConnectionControllerConnectionSuccess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyConnectionControllerConnectionSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x213faa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleMultiplayerLobbyConnectionControllerConnectionSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleMultiplayerLobbyConnectionControllerConnectionFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType, GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyConnectionControllerConnectionFailed)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x213faac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleMultiplayerLobbyConnectionControllerConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleMultiplayerLobbyControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(GlobalNamespace::MultiplayerModeSelectionViewController, GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyControllerDidFinish)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x213fb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleMultiplayerLobbyControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerModeSelectionViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleGameServerBrowserFlowCoordinatorDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(GlobalNamespace::GameServerBrowserFlowCoordinator)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleGameServerBrowserFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2140150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleGameServerBrowserFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameServerBrowserFlowCoordinator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleJoiningLobbyViewControllerDidCancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleJoiningLobbyViewControllerDidCancel)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2140164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleJoiningLobbyViewControllerDidCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleJoinQuickPlayViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(bool)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleJoinQuickPlayViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x2140228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleJoinQuickPlayViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleServerCodeEntryViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(bool, ::StringW)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleServerCodeEntryViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2140614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleServerCodeEntryViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleCreateServerViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(bool, GlobalNamespace::CreateServerFormData)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleCreateServerViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x2140738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleCreateServerViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CreateServerFormData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleGameServerLobbyFlowCoordinatorDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleGameServerLobbyFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2140af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleGameServerLobbyFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleGameServerLobbyFlowCoordinatorWillFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleGameServerLobbyFlowCoordinatorWillFinish)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2140d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleGameServerLobbyFlowCoordinatorWillFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleConnectedPlayerManagerCreated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(GlobalNamespace::INetworkPlayerModel)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleConnectedPlayerManagerCreated)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2140de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleConnectedPlayerManagerCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayerModel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.TryShowModeSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(bool)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TryShowModeSelection)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x213e938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "TryShowModeSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.ResolveAndPresentNextFlowCoordinator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::ResolveAndPresentNextFlowCoordinator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x213f4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "ResolveAndPresentNextFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.PresentConnectionErrorDialog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType, GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::PresentConnectionErrorDialog)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x213f564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "PresentConnectionErrorDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.PresentMasterServerUnavailableErrorDialog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(GlobalNamespace::MultiplayerUnavailableReason, System::Exception, System::Nullable_1<int64_t>, ::StringW)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::PresentMasterServerUnavailableErrorDialog)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x2140fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "PresentMasterServerUnavailableErrorDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerUnavailableReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.ProcessDeeplinkingToLobby
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::ProcessDeeplinkingToLobby)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x214141c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "ProcessDeeplinkingToLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2141510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator._ResolveAndPresentNextFlowCoordinator_b__52_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_ResolveAndPresentNextFlowCoordinator_b__52_0)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2141518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "<ResolveAndPresentNextFlowCoordinator>b__52_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator._PresentConnectionErrorDialog_b__53_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(int32_t)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_PresentConnectionErrorDialog_b__53_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2141688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "<PresentConnectionErrorDialog>b__53_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator._PresentConnectionErrorDialog_b__53_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(int32_t)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_PresentConnectionErrorDialog_b__53_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21416a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "<PresentConnectionErrorDialog>b__53_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator._PresentMasterServerUnavailableErrorDialog_b__54_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(int32_t)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_PresentMasterServerUnavailableErrorDialog_b__54_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21416b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "<PresentMasterServerUnavailableErrorDialog>b__54_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__ambienceAudioClip(UnityEngine::AudioClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AudioClip, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AudioClip>(value));
}
constexpr UnityEngine::AudioClip GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__ambienceAudioClip() const {
return ::cordl_internals::getInstanceField<UnityEngine::AudioClip, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__songPackMaskModel(GlobalNamespace::SongPackMaskModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPackMaskModelSO, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongPackMaskModelSO>(value));
}
constexpr GlobalNamespace::SongPackMaskModelSO GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__songPackMaskModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPackMaskModelSO, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__gameServerBrowserFlowCoordinator(GlobalNamespace::GameServerBrowserFlowCoordinator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameServerBrowserFlowCoordinator, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameServerBrowserFlowCoordinator>(value));
}
constexpr GlobalNamespace::GameServerBrowserFlowCoordinator GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__gameServerBrowserFlowCoordinator() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameServerBrowserFlowCoordinator, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__gameServerLobbyFlowCoordinator(GlobalNamespace::GameServerLobbyFlowCoordinator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameServerLobbyFlowCoordinator, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameServerLobbyFlowCoordinator>(value));
}
constexpr GlobalNamespace::GameServerLobbyFlowCoordinator GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__gameServerLobbyFlowCoordinator() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameServerLobbyFlowCoordinator, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__multiplayerModeSelectionViewController(GlobalNamespace::MultiplayerModeSelectionViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerModeSelectionViewController, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerModeSelectionViewController>(value));
}
constexpr GlobalNamespace::MultiplayerModeSelectionViewController GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__multiplayerModeSelectionViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerModeSelectionViewController, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__createServerViewController(GlobalNamespace::CreateServerViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::CreateServerViewController, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::CreateServerViewController>(value));
}
constexpr GlobalNamespace::CreateServerViewController GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__createServerViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::CreateServerViewController, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__joinQuickPlayViewController(GlobalNamespace::JoinQuickPlayViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::JoinQuickPlayViewController, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::JoinQuickPlayViewController>(value));
}
constexpr GlobalNamespace::JoinQuickPlayViewController GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__joinQuickPlayViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::JoinQuickPlayViewController, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__serverCodeEntryViewController(GlobalNamespace::ServerCodeEntryViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ServerCodeEntryViewController, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ServerCodeEntryViewController>(value));
}
constexpr GlobalNamespace::ServerCodeEntryViewController GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__serverCodeEntryViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ServerCodeEntryViewController, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__simpleDialogPromptViewController(GlobalNamespace::SimpleDialogPromptViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SimpleDialogPromptViewController, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SimpleDialogPromptViewController>(value));
}
constexpr GlobalNamespace::SimpleDialogPromptViewController GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__simpleDialogPromptViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SimpleDialogPromptViewController, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__joiningLobbyViewController(GlobalNamespace::JoiningLobbyViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::JoiningLobbyViewController, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::JoiningLobbyViewController>(value));
}
constexpr GlobalNamespace::JoiningLobbyViewController GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__joiningLobbyViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::JoiningLobbyViewController, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__unifiedNetworkPlayerModel(GlobalNamespace::IUnifiedNetworkPlayerModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IUnifiedNetworkPlayerModel, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IUnifiedNetworkPlayerModel>(value));
}
constexpr GlobalNamespace::IUnifiedNetworkPlayerModel GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__unifiedNetworkPlayerModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IUnifiedNetworkPlayerModel, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__avatarDataModel(GlobalNamespace::AvatarDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AvatarDataModel, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AvatarDataModel>(value));
}
constexpr GlobalNamespace::AvatarDataModel GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__avatarDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AvatarDataModel, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__fadeInOutController(GlobalNamespace::FadeInOutController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FadeInOutController, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FadeInOutController>(value));
}
constexpr GlobalNamespace::FadeInOutController GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__fadeInOutController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FadeInOutController, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__lobbyDataModelsManager(GlobalNamespace::LobbyDataModelsManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LobbyDataModelsManager, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LobbyDataModelsManager>(value));
}
constexpr GlobalNamespace::LobbyDataModelsManager GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__lobbyDataModelsManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LobbyDataModelsManager, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__multiplayerLobbyConnectionController(GlobalNamespace::MultiplayerLobbyConnectionController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLobbyConnectionController, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLobbyConnectionController>(value));
}
constexpr GlobalNamespace::MultiplayerLobbyConnectionController GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__multiplayerLobbyConnectionController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLobbyConnectionController, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__multiplayerStatusModel(GlobalNamespace::IMultiplayerStatusModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerStatusModel, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerStatusModel>(value));
}
constexpr GlobalNamespace::IMultiplayerStatusModel GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__multiplayerStatusModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerStatusModel, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__quickPlaySetupModel(GlobalNamespace::IQuickPlaySetupModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IQuickPlaySetupModel, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IQuickPlaySetupModel>(value));
}
constexpr GlobalNamespace::IQuickPlaySetupModel GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__quickPlaySetupModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IQuickPlaySetupModel, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__playerDataModel(GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerDataModel, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerDataModel>(value));
}
constexpr GlobalNamespace::PlayerDataModel GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerDataModel, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__songPreviewPlayer(GlobalNamespace::SongPreviewPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPreviewPlayer, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongPreviewPlayer>(value));
}
constexpr GlobalNamespace::SongPreviewPlayer GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__songPreviewPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPreviewPlayer, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__analyticsModel(GlobalNamespace::IAnalyticsModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAnalyticsModel, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IAnalyticsModel>(value));
}
constexpr GlobalNamespace::IAnalyticsModel GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAnalyticsModel, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__lobbyGameStateController(GlobalNamespace::ILobbyGameStateController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ILobbyGameStateController, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ILobbyGameStateController>(value));
}
constexpr GlobalNamespace::ILobbyGameStateController GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__lobbyGameStateController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ILobbyGameStateController, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__xPlatformAuthFeatureFlag(GlobalNamespace::XPlatformAuthFeatureFlag value)  {
::cordl_internals::setInstanceField<GlobalNamespace::XPlatformAuthFeatureFlag, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::XPlatformAuthFeatureFlag>(value));
}
constexpr GlobalNamespace::XPlatformAuthFeatureFlag GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__xPlatformAuthFeatureFlag() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::XPlatformAuthFeatureFlag, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set_didFinishEvent(System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>>(value));
}
constexpr System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__joiningLobbyCancellationTokenSource(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenSource, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenSource>(value));
}
constexpr System::Threading::CancellationTokenSource GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__joiningLobbyCancellationTokenSource() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenSource, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__cancellationTokenSource(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenSource, 0x170>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenSource>(value));
}
constexpr System::Threading::CancellationTokenSource GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__cancellationTokenSource() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenSource, 0x170>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__transitionFinishedTaskSource(System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x178>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__transitionFinishedTaskSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x178>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__checkingAvailabilityTaskSource(System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x180>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__checkingAvailabilityTaskSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x180>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__quickPlaySetupData(GlobalNamespace::QuickPlaySetupData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::QuickPlaySetupData, 0x188>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::QuickPlaySetupData>(value));
}
constexpr GlobalNamespace::QuickPlaySetupData GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__quickPlaySetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::QuickPlaySetupData, 0x188>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__lobbyDestination(GlobalNamespace::SelectMultiplayerLobbyDestination value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SelectMultiplayerLobbyDestination, 0x190>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SelectMultiplayerLobbyDestination>(value));
}
constexpr GlobalNamespace::SelectMultiplayerLobbyDestination GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__lobbyDestination() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SelectMultiplayerLobbyDestination, 0x190>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::add_didFinishEvent(System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::remove_didFinishEvent(System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::Setup(GlobalNamespace::SelectMultiplayerLobbyDestination lobbyDestination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SelectMultiplayerLobbyDestination>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lobbyDestination);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::BackButtonWasPressed(HMUI::ViewController topViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "BackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topViewController);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TopViewControllerWillChange(HMUI::ViewController oldViewController, HMUI::ViewController newViewController, HMUI::HMUI__ViewController__AnimationType animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "TopViewControllerWillChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oldViewController, newViewController, animationType);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TransitionDidStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "TransitionDidStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TransitionDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "TransitionDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyConnectionControllerConnectionSuccess()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleMultiplayerLobbyConnectionControllerConnectionSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyConnectionControllerConnectionFailed(GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType connectionType, GlobalNamespace::ConnectionFailedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleMultiplayerLobbyConnectionControllerConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectionType, reason);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyControllerDidFinish(GlobalNamespace::MultiplayerModeSelectionViewController viewController, GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton menuButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleMultiplayerLobbyControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerModeSelectionViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController, menuButton);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleGameServerBrowserFlowCoordinatorDidFinish(GlobalNamespace::GameServerBrowserFlowCoordinator flowCoordinator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleGameServerBrowserFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameServerBrowserFlowCoordinator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flowCoordinator);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleJoiningLobbyViewControllerDidCancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleJoiningLobbyViewControllerDidCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleJoinQuickPlayViewControllerDidFinish(bool success)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleJoinQuickPlayViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, success);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleServerCodeEntryViewControllerDidFinish(bool success, ::StringW code)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleServerCodeEntryViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, success, code);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleCreateServerViewControllerDidFinish(bool success, GlobalNamespace::CreateServerFormData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleCreateServerViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CreateServerFormData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, success, data);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleGameServerLobbyFlowCoordinatorDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleGameServerLobbyFlowCoordinatorDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleGameServerLobbyFlowCoordinatorWillFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleGameServerLobbyFlowCoordinatorWillFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleConnectedPlayerManagerCreated(GlobalNamespace::INetworkPlayerModel networkPlayerModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "HandleConnectedPlayerManagerCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPlayerModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, networkPlayerModel);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TryShowModeSelection(bool shouldProvideInitialViewControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "TryShowModeSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shouldProvideInitialViewControllers);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::ResolveAndPresentNextFlowCoordinator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "ResolveAndPresentNextFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::PresentConnectionErrorDialog(GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType connectionType, GlobalNamespace::ConnectionFailedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "PresentConnectionErrorDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectionType, reason);
}
/// @param maintenanceWindowEndTime: System::Nullable_1<int64_t> (default: {})
/// @param remoteLocalizedMessage: ::StringW (default: csnull)
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::PresentMasterServerUnavailableErrorDialog(GlobalNamespace::MultiplayerUnavailableReason reason, System::Exception exception, System::Nullable_1<int64_t> maintenanceWindowEndTime, ::StringW remoteLocalizedMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "PresentMasterServerUnavailableErrorDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerUnavailableReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason, exception, maintenanceWindowEndTime, remoteLocalizedMessage);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::ProcessDeeplinkingToLobby()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "ProcessDeeplinkingToLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::MultiplayerModeSelectionFlowCoordinator()  : HMUI::FlowCoordinator(THROW_UNLESS(::il2cpp_utils::New<MultiplayerModeSelectionFlowCoordinator>())) {}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_ResolveAndPresentNextFlowCoordinator_b__52_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "<ResolveAndPresentNextFlowCoordinator>b__52_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_PresentConnectionErrorDialog_b__53_0(int32_t btnId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "<PresentConnectionErrorDialog>b__53_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, btnId);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_PresentConnectionErrorDialog_b__53_1(int32_t btnId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "<PresentConnectionErrorDialog>b__53_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, btnId);
}
 void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_PresentMasterServerUnavailableErrorDialog_b__54_0(int32_t btnId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>::get(),
                            "<PresentMasterServerUnavailableErrorDialog>b__54_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, btnId);
}
