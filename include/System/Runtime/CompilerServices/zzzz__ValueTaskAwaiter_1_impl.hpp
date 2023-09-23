#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
//  Writing Method size for method: System::Runtime::CompilerServices::ValueTaskAwaiter_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::ValueTaskAwaiter_1::*)(System::Threading::Tasks::ValueTask_1<TResult>)>(&System::Runtime::CompilerServices::ValueTaskAwaiter_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ValueTask_1<TResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::ValueTaskAwaiter_1.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::ValueTaskAwaiter_1::*)()>(&System::Runtime::CompilerServices::ValueTaskAwaiter_1::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::ValueTaskAwaiter_1.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TResult (System::Runtime::CompilerServices::ValueTaskAwaiter_1::*)()>(&System::Runtime::CompilerServices::ValueTaskAwaiter_1::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::ValueTaskAwaiter_1.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::ValueTaskAwaiter_1::*)(System::Action)>(&System::Runtime::CompilerServices::ValueTaskAwaiter_1::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::ValueTaskAwaiter_1::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::CompilerServices::ValueTaskAwaiter_1::ValueTaskAwaiter_1(System::Threading::Tasks::ValueTask_1<TResult> _value) noexcept : ::bs_hook::ValueTypeWrapper() {this->_value = _value;
}
constexpr void System::Runtime::CompilerServices::ValueTaskAwaiter_1::__set__value(System::Threading::Tasks::ValueTask_1<TResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::ValueTask_1<TResult>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::ValueTask_1<TResult>>(value));
}
constexpr System::Threading::Tasks::ValueTask_1<TResult> System::Runtime::CompilerServices::ValueTaskAwaiter_1::__get__value() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::ValueTask_1<TResult>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::ValueTaskAwaiter_1::_ctor(System::Threading::Tasks::ValueTask_1<TResult> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ValueTask_1<TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool System::Runtime::CompilerServices::ValueTaskAwaiter_1::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TResult System::Runtime::CompilerServices::ValueTaskAwaiter_1::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::ValueTaskAwaiter_1::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
//  Writing Method size for method: System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::*)(System::Threading::Tasks::ValueTask_1<int32_t>)>(&System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ValueTask_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::*)()>(&System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::*)()>(&System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::*)(System::Action)>(&System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::ValueTaskAwaiter_1(System::Threading::Tasks::ValueTask_1<int32_t> _value) noexcept : ::bs_hook::ValueTypeWrapper() {this->_value = _value;
}
constexpr void System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::__set__value(System::Threading::Tasks::ValueTask_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::ValueTask_1<int32_t>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::ValueTask_1<int32_t>>(value));
}
constexpr System::Threading::Tasks::ValueTask_1<int32_t> System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::__get__value() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::ValueTask_1<int32_t>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::_ctor(System::Threading::Tasks::ValueTask_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ValueTask_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
