#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::*)(::System::Threading::Tasks::ValueTask)>(&::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236da28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::*)()>(&::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x236da30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::*)()>(&::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x236db38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::*)(::System::Action)>(&::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x236dc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return ::System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter(::System::Threading::Tasks::ValueTask _value) noexcept : ::bs_hook::ValueTypeWrapper() {this->_value = _value;
}
constexpr void ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::__set__value(::System::Threading::Tasks::ValueTask value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::ValueTask, 0x0>(this->__instance, std::forward<::System::Threading::Tasks::ValueTask>(value));
}
constexpr ::System::Threading::Tasks::ValueTask ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::__get__value() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::ValueTask, 0x0>(this->__instance);
}
 void ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::_ctor(::System::Threading::Tasks::ValueTask value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter::UnsafeOnCompleted(::System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
//  Writing Method size for method: ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::*)(::System::Threading::Tasks::ValueTask)>(&::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236da14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable.GetAwaiter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter (::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::*)()>(&::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x236da1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>::get(),
                            "GetAwaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaitable(::System::Threading::Tasks::ValueTask _value) noexcept : ::bs_hook::ValueTypeWrapper() {this->_value = _value;
}
constexpr void ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::__set__value(::System::Threading::Tasks::ValueTask value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::ValueTask, 0x0>(this->__instance, std::forward<::System::Threading::Tasks::ValueTask>(value));
}
constexpr ::System::Threading::Tasks::ValueTask ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::__get__value() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::ValueTask, 0x0>(this->__instance);
}
 void ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::_ctor(::System::Threading::Tasks::ValueTask value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>::get(),
                            "GetAwaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
