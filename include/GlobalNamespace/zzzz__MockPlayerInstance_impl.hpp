#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerInstance_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__IMockBeatmapDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerFiniteStateMachine_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunner_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneMonobehavior_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::*)()>(&GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x227e20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x227e424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::MockPlayerInstance", modifiers: "", def_value: Some("csnull") }, CppParam { name: "runner", ty: "GlobalNamespace::IStandaloneThreadRunner", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::GlobalNamespace__MockPlayerInstance___RunAsync_d__18(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Threading::CancellationToken token, GlobalNamespace::MockPlayerInstance __4__this, GlobalNamespace::IStandaloneThreadRunner runner, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->token = token;
this->__4__this = __4__this;
this->runner = runner;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::__set_token(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::__get_token() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::__set___4__this(GlobalNamespace::MockPlayerInstance value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MockPlayerInstance, 0x28>(this->__instance, std::forward<GlobalNamespace::MockPlayerInstance>(value));
}
constexpr GlobalNamespace::MockPlayerInstance GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MockPlayerInstance, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::__set_runner(GlobalNamespace::IStandaloneThreadRunner value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IStandaloneThreadRunner, 0x30>(this->__instance, std::forward<GlobalNamespace::IStandaloneThreadRunner>(value));
}
constexpr GlobalNamespace::IStandaloneThreadRunner GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::__get_runner() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IStandaloneThreadRunner, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance___RunAsync_d__18>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::*)()>(&GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x227e430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x227e5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::MockPlayerInstance", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::GlobalNamespace__MockPlayerInstance___Stop_d__21(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::MockPlayerInstance __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::__set___4__this(GlobalNamespace::MockPlayerInstance value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MockPlayerInstance, 0x28>(this->__instance, std::forward<GlobalNamespace::MockPlayerInstance>(value));
}
constexpr GlobalNamespace::MockPlayerInstance GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MockPlayerInstance, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance___Stop_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::*)()>(&GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x227e5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x227e7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::MockPlayerInstance", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::MockPlayerInstance __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::__set___4__this(GlobalNamespace::MockPlayerInstance value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MockPlayerInstance, 0x20>(this->__instance, std::forward<GlobalNamespace::MockPlayerInstance>(value));
}
constexpr GlobalNamespace::MockPlayerInstance GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MockPlayerInstance, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance___DisposeAsync_d__22>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227da60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227da68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227da70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)(BGNet::Core::ITimeProvider, BGNet::Core::ITaskUtility, GlobalNamespace::IMockBeatmapDataProvider, GlobalNamespace::IConnectionManager)>(&GlobalNamespace::MockPlayerInstance::_ctor)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x227da78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMockBeatmapDataProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectionManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::Tick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x227de00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance.RunAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::MockPlayerInstance::*)(GlobalNamespace::IStandaloneThreadRunner, System::Threading::CancellationToken)>(&GlobalNamespace::MockPlayerInstance::RunAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x227de18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "RunAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IStandaloneThreadRunner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance.Dispatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)(System::Action)>(&GlobalNamespace::MockPlayerInstance::Dispatch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x227def4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "Dispatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance.DispatchAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::MockPlayerInstance::*)(System::Func_1<System::Threading::Tasks::Task>)>(&GlobalNamespace::MockPlayerInstance::DispatchAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x227df10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "DispatchAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::Stop)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x227df2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance.DisposeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::DisposeAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x227dfc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::Dispose)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x227e088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance.__ctor_b__15_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::MockPlayerInstance::__ctor_b__15_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227e13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "<.ctor>b__15_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance.__ctor_b__15_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerInstance::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::MockPlayerInstance::__ctor_b__15_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227e140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "<.ctor>b__15_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockPlayerInstance._DisposeAsync_b__22_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::MockPlayerInstance::*)()>(&GlobalNamespace::MockPlayerInstance::_DisposeAsync_b__22_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x227e144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "<DisposeAsync>b__22_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IStandaloneMonobehavior
constexpr  GlobalNamespace::MockPlayerInstance::operator GlobalNamespace::IStandaloneMonobehavior() const noexcept {
return GlobalNamespace::IStandaloneMonobehavior(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::MockPlayerInstance::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MockPlayerInstance::__get__id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MockPlayerInstance::__get__userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MockPlayerInstance::__get__userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__timeProvider(BGNet::Core::ITimeProvider value)  {
::cordl_internals::setInstanceField<BGNet::Core::ITimeProvider, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::ITimeProvider>(value));
}
constexpr BGNet::Core::ITimeProvider GlobalNamespace::MockPlayerInstance::__get__timeProvider() const {
return ::cordl_internals::getInstanceField<BGNet::Core::ITimeProvider, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__taskUtility(BGNet::Core::ITaskUtility value)  {
::cordl_internals::setInstanceField<BGNet::Core::ITaskUtility, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::ITaskUtility>(value));
}
constexpr BGNet::Core::ITaskUtility GlobalNamespace::MockPlayerInstance::__get__taskUtility() const {
return ::cordl_internals::getInstanceField<BGNet::Core::ITaskUtility, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__cancellationTokenSource(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenSource, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenSource>(value));
}
constexpr System::Threading::CancellationTokenSource GlobalNamespace::MockPlayerInstance::__get__cancellationTokenSource() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenSource, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__multiplayerSessionManager(GlobalNamespace::MultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerSessionManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::MultiplayerSessionManager GlobalNamespace::MockPlayerInstance::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerSessionManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__connectedPlayerManager(GlobalNamespace::ConnectedPlayerManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ConnectedPlayerManager, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ConnectedPlayerManager>(value));
}
constexpr GlobalNamespace::ConnectedPlayerManager GlobalNamespace::MockPlayerInstance::__get__connectedPlayerManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ConnectedPlayerManager, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MockPlayerInstance::__set__fsm(GlobalNamespace::MockPlayerFiniteStateMachine value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MockPlayerFiniteStateMachine, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MockPlayerFiniteStateMachine>(value));
}
constexpr GlobalNamespace::MockPlayerFiniteStateMachine GlobalNamespace::MockPlayerInstance::__get__fsm() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MockPlayerFiniteStateMachine, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GlobalNamespace::MockPlayerInstance::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::MockPlayerInstance::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::MockPlayerInstance::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "beatmapDataProvider", ty: "GlobalNamespace::IMockBeatmapDataProvider", modifiers: "", def_value: None }, CppParam { name: "connectionManager", ty: "GlobalNamespace::IConnectionManager", modifiers: "", def_value: None }]
 GlobalNamespace::MockPlayerInstance::MockPlayerInstance(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IMockBeatmapDataProvider beatmapDataProvider, GlobalNamespace::IConnectionManager connectionManager)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MockPlayerInstance>(timeProvider, taskUtility, beatmapDataProvider, connectionManager))) {}
 void GlobalNamespace::MockPlayerInstance::_ctor(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IMockBeatmapDataProvider beatmapDataProvider, GlobalNamespace::IConnectionManager connectionManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMockBeatmapDataProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectionManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeProvider, taskUtility, beatmapDataProvider, connectionManager);
}
 void GlobalNamespace::MockPlayerInstance::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void GlobalNamespace::MockPlayerInstance::ConnectToServer(GlobalNamespace::IConnectionInitParams_1<T> connectionInitParams)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                        "ConnectToServer",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectionInitParams_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectionInitParams);
}
 System::Threading::Tasks::Task GlobalNamespace::MockPlayerInstance::RunAsync(GlobalNamespace::IStandaloneThreadRunner runner, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "RunAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IStandaloneThreadRunner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, runner, token);
}
 void GlobalNamespace::MockPlayerInstance::Dispatch(System::Action action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "Dispatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
 System::Threading::Tasks::Task GlobalNamespace::MockPlayerInstance::DispatchAsync(System::Func_1<System::Threading::Tasks::Task> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "DispatchAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, action);
}
 void GlobalNamespace::MockPlayerInstance::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task GlobalNamespace::MockPlayerInstance::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MockPlayerInstance::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MockPlayerInstance::__ctor_b__15_0(GlobalNamespace::ConnectionFailedReason r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "<.ctor>b__15_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, r);
}
 void GlobalNamespace::MockPlayerInstance::__ctor_b__15_1(GlobalNamespace::DisconnectedReason r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "<.ctor>b__15_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, r);
}
 System::Threading::Tasks::Task GlobalNamespace::MockPlayerInstance::_DisposeAsync_b__22_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockPlayerInstance>::get(),
                            "<DisposeAsync>b__22_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1::*)()>(&GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1._ConnectToServer_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1::*)()>(&GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1::_ConnectToServer_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1>::get(),
                            "<ConnectToServer>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1::__set___4__this(GlobalNamespace::MockPlayerInstance value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MockPlayerInstance, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MockPlayerInstance>(value));
}
constexpr GlobalNamespace::MockPlayerInstance GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MockPlayerInstance, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1::__set_connectionInitParams(GlobalNamespace::IConnectionInitParams_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectionInitParams_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectionInitParams_1<T>>(value));
}
constexpr GlobalNamespace::IConnectionInitParams_1<T> GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1::__get_connectionInitParams() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectionInitParams_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1>())) {}
 void GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1::_ConnectToServer_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MockPlayerInstance____c__DisplayClass17_0_1>::get(),
                            "<ConnectToServer>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
