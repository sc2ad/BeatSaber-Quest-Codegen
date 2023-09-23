#pragma once
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
#include "GlobalNamespace/zzzz__PublicServerInfo_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftClientConnectionRequestHandler_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "BGNet/Core/GameLift/zzzz__IGameLiftPlayerSessionProvider_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__ICertificateValidator_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState::GlobalNamespace__GameLiftConnectionManager__ConnectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState  GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState::Unconnected{0};
constexpr GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState  GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState::Connecting{1};
constexpr GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState  GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState::Connected{2};
constexpr GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState  GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState::Disconnecting{3};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::*)()>(&GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xdabd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::GameLiftConnectionManager>
constexpr  GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::GameLiftConnectionManager>() const noexcept {
return GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::GameLiftConnectionManager>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__set_authenticationTokenProviderTask(System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_authenticationTokenProviderTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__set_gameLiftPlayerSessionProvider(BGNet::Core::GameLift::IGameLiftPlayerSessionProvider value)  {
::cordl_internals::setInstanceField<BGNet::Core::GameLift::IGameLiftPlayerSessionProvider, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::GameLift::IGameLiftPlayerSessionProvider>(value));
}
constexpr BGNet::Core::GameLift::IGameLiftPlayerSessionProvider GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_gameLiftPlayerSessionProvider() const {
return ::cordl_internals::getInstanceField<BGNet::Core::GameLift::IGameLiftPlayerSessionProvider, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_selectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__set_configuration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_configuration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase>())) {}
 void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams::*)()>(&GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xdabd64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams::__set_secret(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams::__set_code(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams::__get_code() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams()  : GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams>())) {}
 void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams::*)()>(&GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xdabd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams::GlobalNamespace__GameLiftConnectionManager__StartClientParams()  : GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__GameLiftConnectionManager__StartClientParams>())) {}
 void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::*)()>(&GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::MoveNext)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0xdabdbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdac3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::GameLiftConnectionManager", modifiers: "", def_value: Some("csnull") }, CppParam { name: "secret", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IAuthenticationTokenProvider>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::PlayerSessionInfo>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::GameLiftConnectionManager __4__this, ::StringW secret, ::StringW code, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IAuthenticationTokenProvider> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::PlayerSessionInfo> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->secret = secret;
this->code = code;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set___4__this(GlobalNamespace::GameLiftConnectionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameLiftConnectionManager, 0x28>(this->__instance, std::forward<GlobalNamespace::GameLiftConnectionManager>(value));
}
constexpr GlobalNamespace::GameLiftConnectionManager GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameLiftConnectionManager, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set_secret(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set_code(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get_code() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IAuthenticationTokenProvider> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IAuthenticationTokenProvider>, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IAuthenticationTokenProvider>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IAuthenticationTokenProvider> GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IAuthenticationTokenProvider>, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::PlayerSessionInfo> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::PlayerSessionInfo>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::PlayerSessionInfo>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::PlayerSessionInfo> GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::PlayerSessionInfo>, 0x50>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.add_onInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action)>(&GlobalNamespace::GameLiftConnectionManager::add_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xda9d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.remove_onInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action)>(&GlobalNamespace::GameLiftConnectionManager::remove_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xda9dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.add_onConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action)>(&GlobalNamespace::GameLiftConnectionManager::add_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xda9e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.remove_onConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action)>(&GlobalNamespace::GameLiftConnectionManager::remove_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xda9ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.add_onDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action_1<GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::GameLiftConnectionManager::add_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xda9f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.remove_onDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action_1<GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::GameLiftConnectionManager::remove_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdaa030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.add_onConnectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action_1<GlobalNamespace::ConnectionFailedReason>)>(&GlobalNamespace::GameLiftConnectionManager::add_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdaa0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.remove_onConnectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action_1<GlobalNamespace::ConnectionFailedReason>)>(&GlobalNamespace::GameLiftConnectionManager::remove_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdaa190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.add_onConnectionConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action_1<GlobalNamespace::IConnection>)>(&GlobalNamespace::GameLiftConnectionManager::add_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdaa240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnection>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.remove_onConnectionConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action_1<GlobalNamespace::IConnection>)>(&GlobalNamespace::GameLiftConnectionManager::remove_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdaa2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnection>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.add_onConnectionDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::GameLiftConnectionManager::add_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdaa3a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.remove_onConnectionDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::GameLiftConnectionManager::remove_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdaa450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.add_onReceivedDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>)>(&GlobalNamespace::GameLiftConnectionManager::add_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdaa500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.remove_onReceivedDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>)>(&GlobalNamespace::GameLiftConnectionManager::remove_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdaa5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_userId)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xdaa660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_userName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xdaa74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_isConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_isConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdaa838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_isConnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_isConnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdaa848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_isDisconnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdaa858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_connectionCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_connectionCount)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xdaa868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_connectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xdaa90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_isDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_isDisposed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xdaa9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_isDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_playerSessionId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_playerSessionId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdaaa54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_playerSessionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_selectionMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelSelectionMask (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_selectionMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdaaa70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_configuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdaaa84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_code
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaaa98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_code",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.get_secret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::get_secret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdaaaa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.SendToAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(LiteNetLib::Utils::NetDataWriter, BGNet::Core::DeliveryMethod)>(&GlobalNamespace::GameLiftConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xdaaaa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.SendToAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(LiteNetLib::Utils::NetDataWriter, BGNet::Core::DeliveryMethod, GlobalNamespace::IConnection)>(&GlobalNamespace::GameLiftConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xdaab64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::PollUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xdaac28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xdaacc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(BGNet::Core::ITimeProvider, BGNet::Core::ITaskUtility, GlobalNamespace::IConnectionManager, GlobalNamespace::ICertificateValidator)>(&GlobalNamespace::GameLiftConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0xdaae8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ICertificateValidator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.DisposeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::DisposeAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xdab33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xdab3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::GameLiftConnectionManager::Disconnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdab480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.DisconnectInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::GameLiftConnectionManager::DisconnectInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdab6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "DisconnectInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.DisconnectInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(GlobalNamespace::DisconnectedReason, GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::GameLiftConnectionManager::DisconnectInternal)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xdab488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "DisconnectInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.GetConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnection (GlobalNamespace::GameLiftConnectionManager::*)(int32_t)>(&GlobalNamespace::GameLiftConnectionManager::GetConnection)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xdab6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "GetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.HandleConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)()>(&GlobalNamespace::GameLiftConnectionManager::HandleConnected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xdab7a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "HandleConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.HandleConnectionConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(GlobalNamespace::IConnection)>(&GlobalNamespace::GameLiftConnectionManager::HandleConnectionConnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdab7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "HandleConnectionConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.HandleConnectionDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(GlobalNamespace::IConnection, GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::GameLiftConnectionManager::HandleConnectionDisconnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdab7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "HandleConnectionDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.HandleConnectionFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::GameLiftConnectionManager::HandleConnectionFailed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdab80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "HandleConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.HandleReceivedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(GlobalNamespace::IConnection, LiteNetLib::Utils::NetDataReader, BGNet::Core::DeliveryMethod)>(&GlobalNamespace::GameLiftConnectionManager::HandleReceivedData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdab818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "HandleReceivedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.GameLiftConnectToServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(::StringW, ::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::GameLiftConnectionManager::GameLiftConnectToServer)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xdab834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "GameLiftConnectToServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.HandleConnectToServerSuccess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(::StringW, ::StringW, int32_t, ::StringW, ::StringW, ::StringW, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::GameLiftConnectionManager::HandleConnectToServerSuccess)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xdab8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "HandleConnectToServerSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftConnectionManager.GetPublicServers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftConnectionManager::*)(System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>>, System::Action_1<GlobalNamespace::ConnectionFailedReason>, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration, int32_t, int32_t)>(&GlobalNamespace::GameLiftConnectionManager::GetPublicServers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xdabcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "GetPublicServers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IConnectionManager
constexpr  GlobalNamespace::GameLiftConnectionManager::operator GlobalNamespace::IConnectionManager() const noexcept {
return GlobalNamespace::IConnectionManager(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr  GlobalNamespace::GameLiftConnectionManager::operator GlobalNamespace::IPollable() const noexcept {
return GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GameLiftConnectionManager::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__timeProvider(BGNet::Core::ITimeProvider value)  {
::cordl_internals::setInstanceField<BGNet::Core::ITimeProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::ITimeProvider>(value));
}
constexpr BGNet::Core::ITimeProvider GlobalNamespace::GameLiftConnectionManager::__get__timeProvider() const {
return ::cordl_internals::getInstanceField<BGNet::Core::ITimeProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__taskUtility(BGNet::Core::ITaskUtility value)  {
::cordl_internals::setInstanceField<BGNet::Core::ITaskUtility, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::ITaskUtility>(value));
}
constexpr BGNet::Core::ITaskUtility GlobalNamespace::GameLiftConnectionManager::__get__taskUtility() const {
return ::cordl_internals::getInstanceField<BGNet::Core::ITaskUtility, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__connectionManager(GlobalNamespace::IConnectionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectionManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectionManager>(value));
}
constexpr GlobalNamespace::IConnectionManager GlobalNamespace::GameLiftConnectionManager::__get__connectionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectionManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__certificateValidator(GlobalNamespace::ICertificateValidator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ICertificateValidator, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ICertificateValidator>(value));
}
constexpr GlobalNamespace::ICertificateValidator GlobalNamespace::GameLiftConnectionManager::__get__certificateValidator() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ICertificateValidator, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__code(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GameLiftConnectionManager::__get__code() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__secret(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GameLiftConnectionManager::__get__secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GameLiftConnectionManager::__get__selectionMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSelectionMask, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__configuration(GlobalNamespace::GameplayServerConfiguration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameLiftConnectionManager::__get__configuration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerConfiguration, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__connectionState(GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState GlobalNamespace::GameLiftConnectionManager::__get__connectionState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__connectionCancellationTokenSource(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenSource, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenSource>(value));
}
constexpr System::Threading::CancellationTokenSource GlobalNamespace::GameLiftConnectionManager::__get__connectionCancellationTokenSource() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenSource, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__authenticationTokenProviderTask(System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> GlobalNamespace::GameLiftConnectionManager::__get__authenticationTokenProviderTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__gameLiftPlayerSessionProvider(BGNet::Core::GameLift::IGameLiftPlayerSessionProvider value)  {
::cordl_internals::setInstanceField<BGNet::Core::GameLift::IGameLiftPlayerSessionProvider, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::GameLift::IGameLiftPlayerSessionProvider>(value));
}
constexpr BGNet::Core::GameLift::IGameLiftPlayerSessionProvider GlobalNamespace::GameLiftConnectionManager::__get__gameLiftPlayerSessionProvider() const {
return ::cordl_internals::getInstanceField<BGNet::Core::GameLift::IGameLiftPlayerSessionProvider, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__connectionRequestHandler(GlobalNamespace::GameLiftClientConnectionRequestHandler value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameLiftClientConnectionRequestHandler, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameLiftClientConnectionRequestHandler>(value));
}
constexpr GlobalNamespace::GameLiftClientConnectionRequestHandler GlobalNamespace::GameLiftConnectionManager::__get__connectionRequestHandler() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameLiftClientConnectionRequestHandler, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onInitializedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GameLiftConnectionManager::__get_onInitializedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onConnectedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GameLiftConnectionManager::__get_onConnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::DisconnectedReason>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::DisconnectedReason>>(value));
}
constexpr System::Action_1<GlobalNamespace::DisconnectedReason> GlobalNamespace::GameLiftConnectionManager::__get_onDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::DisconnectedReason>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::ConnectionFailedReason>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::ConnectionFailedReason>>(value));
}
constexpr System::Action_1<GlobalNamespace::ConnectionFailedReason> GlobalNamespace::GameLiftConnectionManager::__get_onConnectionFailedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::ConnectionFailedReason>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnection>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnection>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnection> GlobalNamespace::GameLiftConnectionManager::__get_onConnectionConnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnection>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>>(value));
}
constexpr System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> GlobalNamespace::GameLiftConnectionManager::__get_onConnectionDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value)  {
::cordl_internals::setInstanceField<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>>(value));
}
constexpr System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> GlobalNamespace::GameLiftConnectionManager::__get_onReceivedDataEvent() const {
return ::cordl_internals::getInstanceField<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GameLiftConnectionManager::add_onInitializedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::remove_onInitializedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::add_onConnectedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::remove_onConnectedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::add_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::remove_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::add_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::remove_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::add_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnection>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::remove_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnection>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::add_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::remove_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::add_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "add_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameLiftConnectionManager::remove_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "remove_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW GlobalNamespace::GameLiftConnectionManager::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GameLiftConnectionManager::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameLiftConnectionManager::get_isConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameLiftConnectionManager::get_isConnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameLiftConnectionManager::get_isDisconnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GameLiftConnectionManager::get_connectionCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_connectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameLiftConnectionManager::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameLiftConnectionManager::get_isDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_isDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GameLiftConnectionManager::get_playerSessionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_playerSessionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GameLiftConnectionManager::get_selectionMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapLevelSelectionMask, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameLiftConnectionManager::get_configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayServerConfiguration, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GameLiftConnectionManager::get_code()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_code",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GameLiftConnectionManager::get_secret()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "get_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameLiftConnectionManager::SendToAll(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, deliveryMethod);
}
 void GlobalNamespace::GameLiftConnectionManager::SendToAll(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod, GlobalNamespace::IConnection excludingConnection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, deliveryMethod, excludingConnection);
}
 void GlobalNamespace::GameLiftConnectionManager::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GameLiftConnectionManager::GameLiftConnectionManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GameLiftConnectionManager>())) {}
 void GlobalNamespace::GameLiftConnectionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "connectionManager", ty: "GlobalNamespace::IConnectionManager", modifiers: "", def_value: None }, CppParam { name: "certificateValidator", ty: "GlobalNamespace::ICertificateValidator", modifiers: "", def_value: None }]
 GlobalNamespace::GameLiftConnectionManager::GameLiftConnectionManager(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IConnectionManager connectionManager, GlobalNamespace::ICertificateValidator certificateValidator)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GameLiftConnectionManager>(timeProvider, taskUtility, connectionManager, certificateValidator))) {}
 void GlobalNamespace::GameLiftConnectionManager::_ctor(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IConnectionManager connectionManager, GlobalNamespace::ICertificateValidator certificateValidator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ICertificateValidator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeProvider, taskUtility, connectionManager, certificateValidator);
}
template<typename T>
 bool GlobalNamespace::GameLiftConnectionManager::Init(GlobalNamespace::IConnectionInitParams_1<T> initParams)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                        "Init",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectionInitParams_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, initParams);
}
 System::Threading::Tasks::Task GlobalNamespace::GameLiftConnectionManager::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameLiftConnectionManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param disconnectedReason: GlobalNamespace::DisconnectedReason (default: 2)
 void GlobalNamespace::GameLiftConnectionManager::Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
 void GlobalNamespace::GameLiftConnectionManager::DisconnectInternal(GlobalNamespace::ConnectionFailedReason connectionFailedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "DisconnectInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectionFailedReason);
}
 void GlobalNamespace::GameLiftConnectionManager::DisconnectInternal(GlobalNamespace::DisconnectedReason disconnectedReason, GlobalNamespace::ConnectionFailedReason connectionFailedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "DisconnectInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason, connectionFailedReason);
}
 GlobalNamespace::IConnection GlobalNamespace::GameLiftConnectionManager::GetConnection(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "GetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnection, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void GlobalNamespace::GameLiftConnectionManager::HandleConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "HandleConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameLiftConnectionManager::HandleConnectionConnected(GlobalNamespace::IConnection connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "HandleConnectionConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connection);
}
 void GlobalNamespace::GameLiftConnectionManager::HandleConnectionDisconnected(GlobalNamespace::IConnection connection, GlobalNamespace::DisconnectedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "HandleConnectionDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connection, reason);
}
 void GlobalNamespace::GameLiftConnectionManager::HandleConnectionFailed(GlobalNamespace::ConnectionFailedReason failedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "HandleConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, failedReason);
}
 void GlobalNamespace::GameLiftConnectionManager::HandleReceivedData(GlobalNamespace::IConnection connection, LiteNetLib::Utils::NetDataReader reader, BGNet::Core::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "HandleReceivedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connection, reader, deliveryMethod);
}
 void GlobalNamespace::GameLiftConnectionManager::GameLiftConnectToServer(::StringW secret, ::StringW code, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "GameLiftConnectToServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, secret, code, cancellationToken);
}
 void GlobalNamespace::GameLiftConnectionManager::HandleConnectToServerSuccess(::StringW playerSessionId, ::StringW hostName, int32_t port, ::StringW gameSessionId, ::StringW secret, ::StringW code, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "HandleConnectToServerSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerSessionId, hostName, port, gameSessionId, secret, code, selectionMask, configuration);
}
/// @param offset: int32_t (default: 0)
/// @param count: int32_t (default: 20)
 void GlobalNamespace::GameLiftConnectionManager::GetPublicServers(System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>> onSuccess, System::Action_1<GlobalNamespace::ConnectionFailedReason> onFailure, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftConnectionManager>::get(),
                            "GetPublicServers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSuccess, onFailure, selectionMask, configuration, offset, count);
}
