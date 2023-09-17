#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MainMenuDestinationRequestController_def.hpp"
#include "GlobalNamespace/zzzz__MenuScenesTransitionSetupDataSO_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "GlobalNamespace/zzzz__IDestinationRequestManager_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0::*)()>(&::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bce20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0._ProcessDestinationRequest_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0::*)(::Zenject::DiContainer)>(&::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0::_ProcessDestinationRequest_b__0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21bce28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0>::get(),
                            "<ProcessDestinationRequest>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0::__set_menuDestination(::GlobalNamespace::MenuDestination value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuDestination, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MenuDestination>(value));
}
constexpr ::GlobalNamespace::MenuDestination ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0::__get_menuDestination() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuDestination, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0::_ProcessDestinationRequest_b__0(::Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0>::get(),
                            "<ProcessDestinationRequest>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::*)()>(&::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x21bcefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21bd45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "menuDestination", ty: "::GlobalNamespace::MenuDestination", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainMenuDestinationRequestController", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::MenuDestination menuDestination, ::GlobalNamespace::MainMenuDestinationRequestController __4__this, ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0 __8__1, ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->menuDestination = menuDestination;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__set_menuDestination(::GlobalNamespace::MenuDestination value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuDestination, 0x28>(this->__instance, std::forward<::GlobalNamespace::MenuDestination>(value));
}
constexpr ::GlobalNamespace::MenuDestination ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__get_menuDestination() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuDestination, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__set___4__this(::GlobalNamespace::MainMenuDestinationRequestController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainMenuDestinationRequestController, 0x30>(this->__instance, std::forward<::GlobalNamespace::MainMenuDestinationRequestController>(value));
}
constexpr ::GlobalNamespace::MainMenuDestinationRequestController ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainMenuDestinationRequestController, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__set___8__1(::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0 value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0, 0x38>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0 ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__get___8__1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__set__cancellationToken_5__2(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x40>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x48>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)()>(&::GlobalNamespace::MainMenuDestinationRequestController::Initialize)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x21bc750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)()>(&::GlobalNamespace::MainMenuDestinationRequestController::Dispose)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x21bc9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.HandleGameScenesManagerInstallEarlyBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)(::GlobalNamespace::ScenesTransitionSetupDataSO, ::Zenject::DiContainer)>(&::GlobalNamespace::MainMenuDestinationRequestController::HandleGameScenesManagerInstallEarlyBindings)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x21bcb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController>::get(),
                            "HandleGameScenesManagerInstallEarlyBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.HandleDestinationRequestManagerDidSendMenuDestinationRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)(::GlobalNamespace::MenuDestination)>(&::GlobalNamespace::MainMenuDestinationRequestController::HandleDestinationRequestManagerDidSendMenuDestinationRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21bce14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController>::get(),
                            "HandleDestinationRequestManagerDidSendMenuDestinationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.ProcessDestinationRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)(::GlobalNamespace::MenuDestination)>(&::GlobalNamespace::MainMenuDestinationRequestController::ProcessDestinationRequest)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21bc92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController>::get(),
                            "ProcessDestinationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)()>(&::GlobalNamespace::MainMenuDestinationRequestController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bce18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::IInitializable
constexpr  ::GlobalNamespace::MainMenuDestinationRequestController::operator ::Zenject::IInitializable() const noexcept {
return ::Zenject::IInitializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::MainMenuDestinationRequestController::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainMenuDestinationRequestController::__set__destinationRequestManager(::GlobalNamespace::IDestinationRequestManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IDestinationRequestManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IDestinationRequestManager>(value));
}
constexpr ::GlobalNamespace::IDestinationRequestManager ::GlobalNamespace::MainMenuDestinationRequestController::__get__destinationRequestManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDestinationRequestManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainMenuDestinationRequestController::__set__menuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MenuScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::MenuScenesTransitionSetupDataSO ::GlobalNamespace::MainMenuDestinationRequestController::__get__menuScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainMenuDestinationRequestController::__set__gameScenesManager(::GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameScenesManager>(value));
}
constexpr ::GlobalNamespace::GameScenesManager ::GlobalNamespace::MainMenuDestinationRequestController::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainMenuDestinationRequestController::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::GlobalNamespace::MainMenuDestinationRequestController::__get__cancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MainMenuDestinationRequestController::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MainMenuDestinationRequestController::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MainMenuDestinationRequestController::HandleGameScenesManagerInstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, ::Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController>::get(),
                            "HandleGameScenesManagerInstallEarlyBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scenesTransitionSetupData, container);
}
 void ::GlobalNamespace::MainMenuDestinationRequestController::HandleDestinationRequestManagerDidSendMenuDestinationRequest(::GlobalNamespace::MenuDestination menuDestination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController>::get(),
                            "HandleDestinationRequestManagerDidSendMenuDestinationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, menuDestination);
}
 void ::GlobalNamespace::MainMenuDestinationRequestController::ProcessDestinationRequest(::GlobalNamespace::MenuDestination menuDestination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController>::get(),
                            "ProcessDestinationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, menuDestination);
}
// Ctor Parameters []
 ::GlobalNamespace::MainMenuDestinationRequestController::MainMenuDestinationRequestController()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MainMenuDestinationRequestController>())) {}
 void ::GlobalNamespace::MainMenuDestinationRequestController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
