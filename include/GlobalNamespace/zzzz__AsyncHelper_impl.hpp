#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__AsyncHelper_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::*)()>(&::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x1f74f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f750bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0 __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::__set___4__this(::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0 value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0, 0x20>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0 ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance);
}
 void ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass1_0____RunSync_b__0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0::*)()>(&::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f74e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0._RunSync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0::*)()>(&::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0::_RunSync_b__0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1f74e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0>::get(),
                            "<RunSync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0::__set_asyncTask(::System::Func_1<::System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<::System::Func_1<::System::Threading::Tasks::Task>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_1<::System::Threading::Tasks::Task>>(value));
}
constexpr ::System::Func_1<::System::Threading::Tasks::Task> ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0::__get_asyncTask() const {
return ::cordl_internals::getInstanceField<::System::Func_1<::System::Threading::Tasks::Task>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__AsyncHelper____c__DisplayClass1_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0::_RunSync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass1_0>::get(),
                            "<RunSync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::AsyncHelper.RunSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_1<::System::Threading::Tasks::Task>)>(&::GlobalNamespace::AsyncHelper::RunSync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1f74d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncHelper>::get(),
                            "RunSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
template<typename T>
 T ::GlobalNamespace::AsyncHelper::RunSync(::System::Func_1<::System::Threading::Tasks::Task_1<T>> asyncTask)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncHelper>::get(),
                        "RunSync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task_1<T>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, asyncTask);
}
 void ::GlobalNamespace::AsyncHelper::RunSync(::System::Func_1<::System::Threading::Tasks::Task> asyncTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncHelper>::get(),
                            "RunSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncTask);
}
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::*)()>(&::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::__set___4__this(::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T>, 0x10>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T>>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T> ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1<T>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<T> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x18>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<T>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<T> ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x18>(this->__instance);
}
 void ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1____RunSync_b__0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1::*)()>(&::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1._RunSync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1::*)()>(&::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1::_RunSync_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1>::get(),
                            "<RunSync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1::__set_asyncTask(::System::Func_1<::System::Threading::Tasks::Task_1<T>> value)  {
::cordl_internals::setInstanceField<::System::Func_1<::System::Threading::Tasks::Task_1<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_1<::System::Threading::Tasks::Task_1<T>>>(value));
}
constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<T>> ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1::__get_asyncTask() const {
return ::cordl_internals::getInstanceField<::System::Func_1<::System::Threading::Tasks::Task_1<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1::__set_result(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1::__get_result() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1>())) {}
 void ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1::_RunSync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AsyncHelper____c__DisplayClass0_0_1>::get(),
                            "<RunSync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace