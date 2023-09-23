#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncCachedLoader_2_def.hpp"
#include "GlobalNamespace/zzzz__HMCache_2_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask::*)(TKey, System::Threading::Tasks::TaskCompletionSource_1<TValue>, System::Threading::CancellationToken)>(&GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCompletionSource_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "keyId", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "taskCompletionSource", ty: "System::Threading::Tasks::TaskCompletionSource_1<TValue>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask(TKey keyId, System::Threading::Tasks::TaskCompletionSource_1<TValue> taskCompletionSource, System::Threading::CancellationToken cancellationToken) noexcept : ::bs_hook::ValueTypeWrapper() {this->keyId = keyId;
this->taskCompletionSource = taskCompletionSource;
this->cancellationToken = cancellationToken;
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask::__set_keyId(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x0>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask::__get_keyId() const {
return ::cordl_internals::getInstanceField<TKey, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask::__set_taskCompletionSource(System::Threading::Tasks::TaskCompletionSource_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<TValue>, 0x8>(this->__instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<TValue>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<TValue> GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask::__get_taskCompletionSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<TValue>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask::_ctor(TKey keyId, System::Threading::Tasks::TaskCompletionSource_1<TValue> taskCompletionSource, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCompletionSource_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, keyId, taskCompletionSource, cancellationToken);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::*)()>(&GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyId", ty: "TKey", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<TValue>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> __t__builder, TKey keyId, System::Threading::CancellationToken cancellationToken, GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->keyId = keyId;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue> GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TValue>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::__set_keyId(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x10>(this->__instance, std::forward<TKey>(value));
}
constexpr TKey GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::__get_keyId() const {
return ::cordl_internals::getInstanceField<TKey, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::__set___4__this(GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>, 0x20>(this->__instance, std::forward<GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>>(value));
}
constexpr GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<TValue>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<TValue>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<TValue> GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<TValue>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::*)()>(&GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_scheduledTask_5__2", ty: "GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<TValue>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> __4__this, GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue> _scheduledTask_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<TValue> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_scheduledTask_5__2 = _scheduledTask_5__2;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::__set___4__this(GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>, 0x10>(this->__instance, std::forward<GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>>(value));
}
constexpr GlobalNamespace::AsyncCachedLoader_2<TKey,TValue> GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AsyncCachedLoader_2<TKey,TValue>, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::__set__scheduledTask_5__2(GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>, 0x18>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue> GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::__get__scheduledTask_5__2() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<TValue>, 0x20>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<TValue>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<TValue> GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<TValue>, 0x20>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2___LoadAllAsync_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::AsyncCachedLoader_2.ClearCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AsyncCachedLoader_2::*)()>(&GlobalNamespace::AsyncCachedLoader_2::ClearCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncCachedLoader_2>::get(),
                            "ClearCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AsyncCachedLoader_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AsyncCachedLoader_2::*)(int32_t, System::Func_3<TKey,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<TValue>>)>(&GlobalNamespace::AsyncCachedLoader_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncCachedLoader_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TKey,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<TValue>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AsyncCachedLoader_2.LoadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<TValue> (GlobalNamespace::AsyncCachedLoader_2::*)(TKey, System::Threading::CancellationToken)>(&GlobalNamespace::AsyncCachedLoader_2::LoadAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncCachedLoader_2>::get(),
                            "LoadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AsyncCachedLoader_2.LoadAllAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AsyncCachedLoader_2::*)()>(&GlobalNamespace::AsyncCachedLoader_2::LoadAllAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncCachedLoader_2>::get(),
                            "LoadAllAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AsyncCachedLoader_2::__set__scheduledTaskList(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>> GlobalNamespace::AsyncCachedLoader_2::__get__scheduledTaskList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__AsyncCachedLoader_2__ScheduledTask<TKey,TValue>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AsyncCachedLoader_2::__set__cache(GlobalNamespace::HMCache_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::HMCache_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::HMCache_2<TKey,TValue>>(value));
}
constexpr GlobalNamespace::HMCache_2<TKey,TValue> GlobalNamespace::AsyncCachedLoader_2::__get__cache() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::HMCache_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AsyncCachedLoader_2::__set__resultValueFunc(System::Func_3<TKey,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<TValue>> value)  {
::cordl_internals::setInstanceField<System::Func_3<TKey,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<TValue>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_3<TKey,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<TValue>>>(value));
}
constexpr System::Func_3<TKey,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<TValue>> GlobalNamespace::AsyncCachedLoader_2::__get__resultValueFunc() const {
return ::cordl_internals::getInstanceField<System::Func_3<TKey,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<TValue>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AsyncCachedLoader_2::__set__isLoading(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::AsyncCachedLoader_2::__get__isLoading() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::AsyncCachedLoader_2::ClearCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncCachedLoader_2>::get(),
                            "ClearCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "maxNumberCachedElements", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resultValueFunc", ty: "System::Func_3<TKey,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<TValue>>", modifiers: "", def_value: None }]
 GlobalNamespace::AsyncCachedLoader_2::AsyncCachedLoader_2(int32_t maxNumberCachedElements, System::Func_3<TKey,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<TValue>> resultValueFunc)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AsyncCachedLoader_2>(maxNumberCachedElements, resultValueFunc))) {}
 void GlobalNamespace::AsyncCachedLoader_2::_ctor(int32_t maxNumberCachedElements, System::Func_3<TKey,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<TValue>> resultValueFunc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncCachedLoader_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TKey,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<TValue>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNumberCachedElements, resultValueFunc);
}
 System::Threading::Tasks::Task_1<TValue> GlobalNamespace::AsyncCachedLoader_2::LoadAsync(TKey keyId, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncCachedLoader_2>::get(),
                            "LoadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TValue>, false>(const_cast<void*>(instance), ___internal_method, keyId, cancellationToken);
}
 void GlobalNamespace::AsyncCachedLoader_2::LoadAllAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncCachedLoader_2>::get(),
                            "LoadAllAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
