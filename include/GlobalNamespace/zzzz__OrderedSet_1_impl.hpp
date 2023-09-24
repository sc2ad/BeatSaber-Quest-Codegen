#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__OrderedSet_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "GlobalNamespace/zzzz__OrderedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder::GlobalNamespace__OrderedSet_1__ProcessOrder(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T>  GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder::Lifo{0};
constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T>  GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder::Fifo{1};
constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T>  GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder::DontCare{2};
constexpr void GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>::__set_value(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>::__get_value() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>::__set_previous(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>::__get_previous() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>::__set_next(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>::__get_next() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>::__set_isRemoved(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>::__get_isRemoved() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>::__set_clearCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>::__get_clearCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>::New_ctor(T value, int32_t clearCount)  {
GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>(value, clearCount))};
return o;
}
 void GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>::_ctor(T value, int32_t clearCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, clearCount);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::operator System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::__set___4__this(GlobalNamespace::OrderedSet_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OrderedSet_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OrderedSet_1<T>>(value));
}
constexpr GlobalNamespace::OrderedSet_1<T> GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OrderedSet_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::__set__next_5__2(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::__get__next_5__2() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T> GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  GlobalNamespace::OrderedSet_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::OrderedSet_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OrderedSet_1<T>::__set__comparison(System::Comparison_1<T> value)  {
::cordl_internals::setInstanceField<System::Comparison_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Comparison_1<T>>(value));
}
constexpr System::Comparison_1<T> GlobalNamespace::OrderedSet_1<T>::__get__comparison() const {
return ::cordl_internals::getInstanceField<System::Comparison_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OrderedSet_1<T>::__set__processOrder(GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> GlobalNamespace::OrderedSet_1<T>::__get__processOrder() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OrderedSet_1<T>::__set__sortIndices(System::Collections::Generic::Dictionary_2<T,GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<T,GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<T,GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<T,GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>> GlobalNamespace::OrderedSet_1<T>::__get__sortIndices() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<T,GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OrderedSet_1<T>::__set__head(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> GlobalNamespace::OrderedSet_1<T>::__get__head() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OrderedSet_1<T>::__set__tail(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> GlobalNamespace::OrderedSet_1<T>::__get__tail() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OrderedSet_1<T>::__set__clearCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OrderedSet_1<T>::__get__clearCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::OrderedSet_1<T>::get_count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "get_count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param processOrder: GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> (default: 2)
 GlobalNamespace::OrderedSet_1<T> GlobalNamespace::OrderedSet_1<T>::New_ctor(System::Comparison_1<T> comparison, GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> processOrder)  {
GlobalNamespace::OrderedSet_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::OrderedSet_1<T>>(comparison, processOrder))};
return o;
}
/// @param processOrder: GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> (default: 2)
 void GlobalNamespace::OrderedSet_1<T>::_ctor(System::Comparison_1<T> comparison, GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> processOrder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Comparison_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, comparison, processOrder);
}
 void GlobalNamespace::OrderedSet_1<T>::Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void GlobalNamespace::OrderedSet_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OrderedSet_1<T>::Contains(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool GlobalNamespace::OrderedSet_1<T>::Remove(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void GlobalNamespace::OrderedSet_1<T>::UpdateSortedPosition(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "UpdateSortedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void GlobalNamespace::OrderedSet_1<T>::AppendNode(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "AppendNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void GlobalNamespace::OrderedSet_1<T>::AppendNodeUnchecked(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "AppendNodeUnchecked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void GlobalNamespace::OrderedSet_1<T>::PrependNode(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "PrependNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void GlobalNamespace::OrderedSet_1<T>::PrependNodeUnchecked(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "PrependNodeUnchecked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void GlobalNamespace::OrderedSet_1<T>::SwapNodes(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> previous, GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "SwapNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, previous, next);
}
 void GlobalNamespace::OrderedSet_1<T>::RemoveNode(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "RemoveNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void GlobalNamespace::OrderedSet_1<T>::UpdateSortedPosition(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "UpdateSortedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 System::Collections::Generic::IEnumerator_1<T> GlobalNamespace::OrderedSet_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::OrderedSet_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::OrderedSet_1<T>::GetFirstOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "GetFirstOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OrderedSet_1<T>::TryGetFirst(ByRef<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OrderedSet_1<T>>::get(),
                            "TryGetFirst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
