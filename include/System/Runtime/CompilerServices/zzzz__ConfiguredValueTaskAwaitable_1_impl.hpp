#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/zzzz__Action_def.hpp"
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(System::Threading::Tasks::ValueTask_1<TResult> _value) noexcept : ::bs_hook::ValueTypeWrapper() {this->_value = _value;
}
constexpr void System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::__set__value(System::Threading::Tasks::ValueTask_1<TResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::ValueTask_1<TResult>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::ValueTask_1<TResult>>(value));
}
constexpr System::Threading::Tasks::ValueTask_1<TResult> System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::__get__value() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::ValueTask_1<TResult>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::_ctor(System::Threading::Tasks::ValueTask_1<TResult> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ValueTask_1<TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TResult System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(System::Threading::Tasks::ValueTask_1<TResult> _value) noexcept : ::bs_hook::ValueTypeWrapper() {this->_value = _value;
}
constexpr void System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::__set__value(System::Threading::Tasks::ValueTask_1<TResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::ValueTask_1<TResult>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::ValueTask_1<TResult>>(value));
}
constexpr System::Threading::Tasks::ValueTask_1<TResult> System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::__get__value() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::ValueTask_1<TResult>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::_ctor(System::Threading::Tasks::ValueTask_1<TResult> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ValueTask_1<TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TResult System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::ConfiguredValueTaskAwaitable_1(System::Threading::Tasks::ValueTask_1<TResult> _value) noexcept : ::bs_hook::ValueTypeWrapper() {this->_value = _value;
}
constexpr void System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::__set__value(System::Threading::Tasks::ValueTask_1<TResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::ValueTask_1<TResult>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::ValueTask_1<TResult>>(value));
}
constexpr System::Threading::Tasks::ValueTask_1<TResult> System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::__get__value() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::ValueTask_1<TResult>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::_ctor(System::Threading::Tasks::ValueTask_1<TResult> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ValueTask_1<TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult> System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>>::get(),
                            "GetAwaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::ConfiguredValueTaskAwaitable_1(System::Threading::Tasks::ValueTask_1<TResult> _value) noexcept : ::bs_hook::ValueTypeWrapper() {this->_value = _value;
}
constexpr void System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::__set__value(System::Threading::Tasks::ValueTask_1<TResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::ValueTask_1<TResult>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::ValueTask_1<TResult>>(value));
}
constexpr System::Threading::Tasks::ValueTask_1<TResult> System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::__get__value() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::ValueTask_1<TResult>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::_ctor(System::Threading::Tasks::ValueTask_1<TResult> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ValueTask_1<TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult> System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>>::get(),
                            "GetAwaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
