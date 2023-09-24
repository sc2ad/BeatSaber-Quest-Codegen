#pragma once
#include "System/Collections/Generic/zzzz__LowLevelList_1_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::operator System::Collections::Generic::IEnumerator_1<T>() const {
return System::Collections::Generic::IEnumerator_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::operator System::Collections::IEnumerator() const {
return System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_list", ty: "System::Collections::Generic::LowLevelListWithIList_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: Some("csnull") }]
constexpr System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::System__Collections__Generic__LowLevelListWithIList_1__Enumerator(System::Collections::Generic::LowLevelListWithIList_1<T> _list, int32_t _index, int32_t _version, T _current) noexcept : ::bs_hook::ValueTypeWrapper() {this->_list = _list;
this->_index = _index;
this->_version = _version;
this->_current = _current;
}
constexpr void System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::__set__list(System::Collections::Generic::LowLevelListWithIList_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LowLevelListWithIList_1<T>, 0x0>(this->__instance, std::forward<System::Collections::Generic::LowLevelListWithIList_1<T>>(value));
}
constexpr System::Collections::Generic::LowLevelListWithIList_1<T> System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::__get__list() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LowLevelListWithIList_1<T>, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::__set__index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::__set__version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::__set__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->__instance, std::forward<T>(value));
}
constexpr T System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::__get__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->__instance);
}
 void System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::_ctor(System::Collections::Generic::LowLevelListWithIList_1<T> list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LowLevelListWithIList_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, list);
}
 void System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::MoveNextRare()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            "MoveNextRare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 T System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::System__Collections__Generic__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IList_1<T>
constexpr  System::Collections::Generic::LowLevelListWithIList_1<T>::operator System::Collections::Generic::IList_1<T>() const noexcept {
return System::Collections::Generic::IList_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::ICollection_1<T>
constexpr  System::Collections::Generic::LowLevelListWithIList_1<T>::operator System::Collections::Generic::ICollection_1<T>() const noexcept {
return System::Collections::Generic::ICollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  System::Collections::Generic::LowLevelListWithIList_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::Generic::LowLevelListWithIList_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::LowLevelListWithIList_1<T> System::Collections::Generic::LowLevelListWithIList_1<T>::New_ctor()  {
System::Collections::Generic::LowLevelListWithIList_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::LowLevelListWithIList_1<T>>())};
return o;
}
 void System::Collections::Generic::LowLevelListWithIList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LowLevelListWithIList_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::LowLevelListWithIList_1<T> System::Collections::Generic::LowLevelListWithIList_1<T>::New_ctor(int32_t capacity)  {
System::Collections::Generic::LowLevelListWithIList_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::LowLevelListWithIList_1<T>>(capacity))};
return o;
}
 void System::Collections::Generic::LowLevelListWithIList_1<T>::_ctor(int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LowLevelListWithIList_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, capacity);
}
 bool System::Collections::Generic::LowLevelListWithIList_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LowLevelListWithIList_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<T> System::Collections::Generic::LowLevelListWithIList_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LowLevelListWithIList_1<T>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator System::Collections::Generic::LowLevelListWithIList_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::LowLevelListWithIList_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
