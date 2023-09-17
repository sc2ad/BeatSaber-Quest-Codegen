#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__TaskExtensions_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
template<typename T>
 ::System::Threading::Tasks::Task_1<T> ::GlobalNamespace::TaskExtensions::WithCancellation(::System::Threading::Tasks::Task_1<T> task, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TaskExtensions>::get(),
                        "WithCancellation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>, false>(nullptr, ___internal_method, task, cancellationToken);
}
template<typename T>
 void ::GlobalNamespace::TaskExtensions::WaitForTask(::System::Threading::Tasks::Task_1<T> task, ::System::Threading::Tasks::TaskCompletionSource_1<T> tcs)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TaskExtensions>::get(),
                        "WaitForTask",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task, tcs);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1::*)()>(&::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1._WithCancellation_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1::*)()>(&::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1::_WithCancellation_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1>::get(),
                            "<WithCancellation>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<T> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<T>>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T> ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1>())) {}
 void ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1::_WithCancellation_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1>::get(),
                            "<WithCancellation>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>::*)()>(&::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>._WithCancellation_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>::*)()>(&::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>::_WithCancellation_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>>::get(),
                            "<WithCancellation>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool> ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1>())) {}
 void ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>::_WithCancellation_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions____c__DisplayClass0_0_1<bool>>::get(),
                            "<WithCancellation>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::*)()>(&::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap1", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Threading::Tasks::TaskCompletionSource_1<T> tcs, ::System::Threading::Tasks::Task_1<T> task, ::System::Threading::Tasks::TaskCompletionSource_1<T> __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->tcs = tcs;
this->task = task;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<T> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>, 0x10>(this->__instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<T>>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T> ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::__set_task(::System::Threading::Tasks::Task_1<T> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<T>, 0x18>(this->__instance, std::forward<::System::Threading::Tasks::Task_1<T>>(value));
}
constexpr ::System::Threading::Tasks::Task_1<T> ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::__get_task() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<T>, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::__set___7__wrap1(::System::Threading::Tasks::TaskCompletionSource_1<T> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>, 0x20>(this->__instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<T>>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T> ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<T> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<T>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<T> ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::*)()>(&::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<bool>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<bool>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap1", ty: "::System::Threading::Tasks::TaskCompletionSource_1<bool>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Threading::Tasks::TaskCompletionSource_1<bool> tcs, ::System::Threading::Tasks::Task_1<bool> task, ::System::Threading::Tasks::TaskCompletionSource_1<bool> __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->tcs = tcs;
this->task = task;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x10>(this->__instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool> ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::__set_task(::System::Threading::Tasks::Task_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<bool>, 0x18>(this->__instance, std::forward<::System::Threading::Tasks::Task_1<bool>>(value));
}
constexpr ::System::Threading::Tasks::Task_1<bool> ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::__get_task() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<bool>, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::__set___7__wrap1(::System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x20>(this->__instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool> ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__TaskExtensions___WaitForTask_d__1_1<bool>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
} // end anonymous namespace
