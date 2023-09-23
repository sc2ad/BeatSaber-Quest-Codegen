#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneMonobehavior_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunner_def.hpp"
#include "UnityEngine/zzzz__FrameTiming_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::*)()>(&GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xdcbc34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdcbe34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::StandaloneMonobehavior", modifiers: "", def_value: Some("csnull") }, CppParam { name: "action", ty: "System::Action", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::StandaloneMonobehavior __4__this, System::Action action, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->action = action;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::__set___4__this(GlobalNamespace::StandaloneMonobehavior value)  {
::cordl_internals::setInstanceField<GlobalNamespace::StandaloneMonobehavior, 0x28>(this->__instance, std::forward<GlobalNamespace::StandaloneMonobehavior>(value));
}
constexpr GlobalNamespace::StandaloneMonobehavior GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::StandaloneMonobehavior, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::__set_action(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x30>(this->__instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::__get_action() const {
return ::cordl_internals::getInstanceField<System::Action, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___Dispatch_d__20>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::*)()>(&GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xdcbe40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdcc0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::StandaloneMonobehavior", modifiers: "", def_value: Some("csnull") }, CppParam { name: "action", ty: "System::Func_1<System::Threading::Tasks::Task>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::StandaloneMonobehavior __4__this, System::Func_1<System::Threading::Tasks::Task> action, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->action = action;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::__set___4__this(GlobalNamespace::StandaloneMonobehavior value)  {
::cordl_internals::setInstanceField<GlobalNamespace::StandaloneMonobehavior, 0x20>(this->__instance, std::forward<GlobalNamespace::StandaloneMonobehavior>(value));
}
constexpr GlobalNamespace::StandaloneMonobehavior GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::StandaloneMonobehavior, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::__set_action(System::Func_1<System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<System::Func_1<System::Threading::Tasks::Task>, 0x28>(this->__instance, std::forward<System::Func_1<System::Threading::Tasks::Task>>(value));
}
constexpr System::Func_1<System::Threading::Tasks::Task> GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::__get_action() const {
return ::cordl_internals::getInstanceField<System::Func_1<System::Threading::Tasks::Task>, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___DispatchAsync_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xdcbc0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::*)()>(&GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdcc0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::*)()>(&GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xdcc100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::*)()>(&GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdcc274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::*)()>(&GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdcc27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::*)()>(&GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdcc2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__set___4__this(GlobalNamespace::StandaloneMonobehavior value)  {
::cordl_internals::setInstanceField<GlobalNamespace::StandaloneMonobehavior, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::StandaloneMonobehavior>(value));
}
constexpr GlobalNamespace::StandaloneMonobehavior GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::StandaloneMonobehavior, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__set_tcs(System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get_tcs() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>(__1__state))) {}
 void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandaloneMonobehavior___RunAsyncCoroutine_d__25>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.get_objectLifeTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::get_objectLifeTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xdcb7bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "get_objectLifeTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.get_deltaTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::get_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdcb7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "get_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.get_lastFrameTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::get_lastFrameTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdcb7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "get_lastFrameTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.get_frameCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::get_frameCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbdc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "get_frameCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.get_isReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::get_isReady)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xdcb858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "get_isReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdcb8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdcb8c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::StandaloneMonobehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdcb8c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::StandaloneMonobehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdcb8cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::StandaloneMonobehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.OnApplicationPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)(bool)>(&GlobalNamespace::StandaloneMonobehavior::OnApplicationPause)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdcb8d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::StandaloneMonobehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.Dispatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)(System::Action)>(&GlobalNamespace::StandaloneMonobehavior::Dispatch)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdcb8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "Dispatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.DispatchAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::StandaloneMonobehavior::*)(System::Func_1<System::Threading::Tasks::Task>)>(&GlobalNamespace::StandaloneMonobehavior::DispatchAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xdcb970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "DispatchAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.RunAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::StandaloneMonobehavior::*)(GlobalNamespace::IStandaloneThreadRunner, System::Threading::CancellationToken)>(&GlobalNamespace::StandaloneMonobehavior::RunAsync)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xdcba48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "RunAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IStandaloneThreadRunner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::Stop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdcbc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.RunAsyncCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::StandaloneMonobehavior::*)(System::Threading::Tasks::TaskCompletionSource_1<bool>, System::Threading::CancellationToken)>(&GlobalNamespace::StandaloneMonobehavior::RunAsyncCoroutine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xdcbb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "RunAsyncCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCompletionSource_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior.GetLastFrameTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::GetLastFrameTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xdcb7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "GetLastFrameTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandaloneMonobehavior._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::*)()>(&GlobalNamespace::StandaloneMonobehavior::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xdbfb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IStandaloneMonobehavior
constexpr  GlobalNamespace::StandaloneMonobehavior::operator GlobalNamespace::IStandaloneMonobehavior() const noexcept {
return GlobalNamespace::IStandaloneMonobehavior(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandaloneMonobehavior::__set__readyTcs(System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> GlobalNamespace::StandaloneMonobehavior::__get__readyTcs() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandaloneMonobehavior::__set__isRunning(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::StandaloneMonobehavior::__get__isRunning() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandaloneMonobehavior::__set__startTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::StandaloneMonobehavior::__get__startTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandaloneMonobehavior::__set__lastFrameTimings(::ArrayW<UnityEngine::FrameTiming> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::FrameTiming>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::FrameTiming>>(value));
}
constexpr ::ArrayW<UnityEngine::FrameTiming> GlobalNamespace::StandaloneMonobehavior::__get__lastFrameTimings() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::FrameTiming>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandaloneMonobehavior::__set__lastFrameTimeCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::StandaloneMonobehavior::__get__lastFrameTimeCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::StandaloneMonobehavior::get_objectLifeTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "get_objectLifeTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::StandaloneMonobehavior::get_deltaTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "get_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::StandaloneMonobehavior::get_lastFrameTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "get_lastFrameTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::StandaloneMonobehavior::get_frameCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "get_frameCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::StandaloneMonobehavior::get_isReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "get_isReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandaloneMonobehavior::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandaloneMonobehavior::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandaloneMonobehavior::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandaloneMonobehavior::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandaloneMonobehavior::OnApplicationPause(bool pauseStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pauseStatus);
}
 void GlobalNamespace::StandaloneMonobehavior::Dispatch(System::Action action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "Dispatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
 System::Threading::Tasks::Task GlobalNamespace::StandaloneMonobehavior::DispatchAsync(System::Func_1<System::Threading::Tasks::Task> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "DispatchAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, action);
}
template<typename T>
 T GlobalNamespace::StandaloneMonobehavior::Create()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                        "Create",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
 System::Threading::Tasks::Task GlobalNamespace::StandaloneMonobehavior::RunAsync(GlobalNamespace::IStandaloneThreadRunner runner, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "RunAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IStandaloneThreadRunner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, runner, cancellationToken);
}
 void GlobalNamespace::StandaloneMonobehavior::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::StandaloneMonobehavior::RunAsyncCoroutine(System::Threading::Tasks::TaskCompletionSource_1<bool> tcs, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "RunAsyncCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCompletionSource_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method, tcs, cancellationToken);
}
 float_t GlobalNamespace::StandaloneMonobehavior::GetLastFrameTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            "GetLastFrameTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::StandaloneMonobehavior::StandaloneMonobehavior()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<StandaloneMonobehavior>())) {}
 void GlobalNamespace::StandaloneMonobehavior::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandaloneMonobehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
