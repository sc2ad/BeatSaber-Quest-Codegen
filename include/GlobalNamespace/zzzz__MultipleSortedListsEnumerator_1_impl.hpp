#pragma once
#include "GlobalNamespace/zzzz__MultipleSortedListsEnumerator_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__BinaryHeap_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "GlobalNamespace/zzzz__MultipleSortedListsEnumerator_1_def.hpp"
/// @brief Convert operator to System::IComparable_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>
constexpr  GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>::operator System::IComparable_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>() const noexcept {
return System::IComparable_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>::__set__dataList(System::Collections::Generic::IReadOnlyList_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IReadOnlyList_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IReadOnlyList_1<T>>(value));
}
constexpr System::Collections::Generic::IReadOnlyList_1<T> GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>::__get__dataList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IReadOnlyList_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>::__set__idx(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>::__get__idx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>::__set__currentValue(T value)  {
::cordl_internals::setInstanceField<T, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>::__get__currentValue() const {
return ::cordl_internals::getInstanceField<T, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>::get_currentValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>::get(),
                            "get_currentValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>::New_ctor(System::Collections::Generic::IReadOnlyList_1<T> dataList)  {
GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>(dataList))};
return o;
}
 void GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>::_ctor(System::Collections::Generic::IReadOnlyList_1<T> dataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataList);
}
 bool GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>::MoveToNextItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>::get(),
                            "MoveToNextItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>::CompareTo(GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> heapItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, heapItem);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::operator System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__set___4__this(GlobalNamespace::MultipleSortedListsEnumerator_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultipleSortedListsEnumerator_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultipleSortedListsEnumerator_1<T>>(value));
}
constexpr GlobalNamespace::MultipleSortedListsEnumerator_1<T> GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultipleSortedListsEnumerator_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__set__heapItem_5__2(GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__get__heapItem_5__2() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T> GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::MultipleSortedListsEnumerator_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultipleSortedListsEnumerator_1<T>::__set__heap(GlobalNamespace::BinaryHeap_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BinaryHeap_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BinaryHeap_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>>(value));
}
constexpr GlobalNamespace::BinaryHeap_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>> GlobalNamespace::MultipleSortedListsEnumerator_1<T>::__get__heap() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BinaryHeap_1<GlobalNamespace::GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::MultipleSortedListsEnumerator_1<T> GlobalNamespace::MultipleSortedListsEnumerator_1<T>::New_ctor(::ArrayW<System::Collections::Generic::IReadOnlyList_1<T>> dataList)  {
GlobalNamespace::MultipleSortedListsEnumerator_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MultipleSortedListsEnumerator_1<T>>(dataList))};
return o;
}
 void GlobalNamespace::MultipleSortedListsEnumerator_1<T>::_ctor(::ArrayW<System::Collections::Generic::IReadOnlyList_1<T>> dataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultipleSortedListsEnumerator_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::Generic::IReadOnlyList_1<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataList);
}
 System::Collections::IEnumerator GlobalNamespace::MultipleSortedListsEnumerator_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultipleSortedListsEnumerator_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<T> GlobalNamespace::MultipleSortedListsEnumerator_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultipleSortedListsEnumerator_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
