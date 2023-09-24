#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  System::System__ArraySegment_1__Enumerator<T>::operator System::Collections::Generic::IEnumerator_1<T>() const {
return System::Collections::Generic::IEnumerator_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IDisposable
constexpr  System::System__ArraySegment_1__Enumerator<T>::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::System__ArraySegment_1__Enumerator<T>::operator System::Collections::IEnumerator() const {
return System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_end", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_current", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__ArraySegment_1__Enumerator<T>::System__ArraySegment_1__Enumerator(::ArrayW<T> _array, int32_t _start, int32_t _end, int32_t _current) noexcept : ::bs_hook::ValueTypeWrapper() {this->_array = _array;
this->_start = _start;
this->_end = _end;
this->_current = _current;
}
constexpr void System::System__ArraySegment_1__Enumerator<T>::__set__array(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x0>(this->__instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::System__ArraySegment_1__Enumerator<T>::__get__array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x0>(this->__instance);
}
constexpr void System::System__ArraySegment_1__Enumerator<T>::__set__start(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__ArraySegment_1__Enumerator<T>::__get__start() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::System__ArraySegment_1__Enumerator<T>::__set__end(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__ArraySegment_1__Enumerator<T>::__get__end() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void System::System__ArraySegment_1__Enumerator<T>::__set__current(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__ArraySegment_1__Enumerator<T>::__get__current() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
 void System::System__ArraySegment_1__Enumerator<T>::_ctor(System::ArraySegment_1<T> arraySegment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__ArraySegment_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ArraySegment_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, arraySegment);
}
 bool System::System__ArraySegment_1__Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__ArraySegment_1__Enumerator<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 T System::System__ArraySegment_1__Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__ArraySegment_1__Enumerator<T>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::System__ArraySegment_1__Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__ArraySegment_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::System__ArraySegment_1__Enumerator<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__ArraySegment_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::System__ArraySegment_1__Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__ArraySegment_1__Enumerator<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  System::System__ArraySegment_1__Enumerator<T>::operator System::Collections::Generic::IEnumerator_1<T>() const {
return System::Collections::Generic::IEnumerator_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IDisposable
constexpr  System::System__ArraySegment_1__Enumerator<T>::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::System__ArraySegment_1__Enumerator<T>::operator System::Collections::IEnumerator() const {
return System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_end", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_current", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__ArraySegment_1__Enumerator<T>::System__ArraySegment_1__Enumerator(::ArrayW<T> _array, int32_t _start, int32_t _end, int32_t _current) noexcept : ::bs_hook::ValueTypeWrapper() {this->_array = _array;
this->_start = _start;
this->_end = _end;
this->_current = _current;
}
constexpr void System::System__ArraySegment_1__Enumerator<T>::__set__array(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x0>(this->__instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::System__ArraySegment_1__Enumerator<T>::__get__array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x0>(this->__instance);
}
constexpr void System::System__ArraySegment_1__Enumerator<T>::__set__start(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__ArraySegment_1__Enumerator<T>::__get__start() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::System__ArraySegment_1__Enumerator<T>::__set__end(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__ArraySegment_1__Enumerator<T>::__get__end() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void System::System__ArraySegment_1__Enumerator<T>::__set__current(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__ArraySegment_1__Enumerator<T>::__get__current() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
 void System::System__ArraySegment_1__Enumerator<T>::_ctor(System::ArraySegment_1<T> arraySegment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__ArraySegment_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ArraySegment_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, arraySegment);
}
 bool System::System__ArraySegment_1__Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__ArraySegment_1__Enumerator<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 T System::System__ArraySegment_1__Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__ArraySegment_1__Enumerator<T>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::System__ArraySegment_1__Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__ArraySegment_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::System__ArraySegment_1__Enumerator<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__ArraySegment_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::System__ArraySegment_1__Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__ArraySegment_1__Enumerator<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IList_1<T>
constexpr  System::ArraySegment_1<T>::operator System::Collections::Generic::IList_1<T>() const {
return System::Collections::Generic::IList_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::ICollection_1<T>
constexpr  System::ArraySegment_1<T>::operator System::Collections::Generic::ICollection_1<T>() const {
return System::Collections::Generic::ICollection_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  System::ArraySegment_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const {
return System::Collections::Generic::IEnumerable_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::ArraySegment_1<T>::operator System::Collections::IEnumerable() const {
return System::Collections::IEnumerable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<T>
constexpr  System::ArraySegment_1<T>::operator System::Collections::Generic::IReadOnlyList_1<T>() const {
return System::Collections::Generic::IReadOnlyList_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr  System::ArraySegment_1<T>::operator System::Collections::Generic::IReadOnlyCollection_1<T>() const {
return System::Collections::Generic::IReadOnlyCollection_1<T>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::ArraySegment_1<T>::ArraySegment_1(::ArrayW<T> _array, int32_t _offset, int32_t _count) noexcept : ::bs_hook::ValueTypeWrapper() {this->_array = _array;
this->_offset = _offset;
this->_count = _count;
}
 void System::ArraySegment_1<T>::__set__Empty_k__BackingField(System::ArraySegment_1<T> value)  {
::cordl_internals::setStaticField<System::ArraySegment_1<T>, "<Empty>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get>(std::forward<System::ArraySegment_1<T>>(value));
}
 System::ArraySegment_1<T> System::ArraySegment_1<T>::__get__Empty_k__BackingField()  {
return ::cordl_internals::getStaticField<System::ArraySegment_1<T>, "<Empty>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get>();
}
constexpr void System::ArraySegment_1<T>::__set__array(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x0>(this->__instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::ArraySegment_1<T>::__get__array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x0>(this->__instance);
}
constexpr void System::ArraySegment_1<T>::__set__offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ArraySegment_1<T>::__get__offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::ArraySegment_1<T>::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ArraySegment_1<T>::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
 System::ArraySegment_1<T> System::ArraySegment_1<T>::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "get_Empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ArraySegment_1<T>, false>(nullptr, ___internal_method);
}
 void System::ArraySegment_1<T>::_ctor(::ArrayW<T> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, array);
}
 void System::ArraySegment_1<T>::_ctor(::ArrayW<T> array, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, array, offset, count);
}
 ::ArrayW<T> System::ArraySegment_1<T>::get_Array()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "get_Array",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ArraySegment_1<T>::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "get_Offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ArraySegment_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::System__ArraySegment_1__Enumerator<T> System::ArraySegment_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__ArraySegment_1__Enumerator<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ArraySegment_1<T>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::ArraySegment_1<T>::CopyTo(::ArrayW<T> destination, int32_t destinationIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, destination, destinationIndex);
}
 bool System::ArraySegment_1<T>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ArraySegment_1<T>::Equals(System::ArraySegment_1<T> obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ArraySegment_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 T System::ArraySegment_1<T>::System_Collections_Generic_IList_T__get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IList<T>.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 void System::ArraySegment_1<T>::System_Collections_Generic_IList_T__set_Item(int32_t index, T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IList<T>.set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index, value);
}
 int32_t System::ArraySegment_1<T>::System_Collections_Generic_IList_T__IndexOf(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IList<T>.IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
 void System::ArraySegment_1<T>::System_Collections_Generic_IList_T__Insert(int32_t index, T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IList<T>.Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index, item);
}
 void System::ArraySegment_1<T>::System_Collections_Generic_IList_T__RemoveAt(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IList<T>.RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 T System::ArraySegment_1<T>::System_Collections_Generic_IReadOnlyList_T__get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IReadOnlyList<T>.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 bool System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
 void System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Contains(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
 bool System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Remove(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
 System::Collections::Generic::IEnumerator_1<T> System::ArraySegment_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Collections::IEnumerator System::ArraySegment_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::ArraySegment_1<T>::ThrowInvalidOperationIfDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "ThrowInvalidOperationIfDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IList_1<T>
constexpr  System::ArraySegment_1<T>::operator System::Collections::Generic::IList_1<T>() const {
return System::Collections::Generic::IList_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::ICollection_1<T>
constexpr  System::ArraySegment_1<T>::operator System::Collections::Generic::ICollection_1<T>() const {
return System::Collections::Generic::ICollection_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  System::ArraySegment_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const {
return System::Collections::Generic::IEnumerable_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::ArraySegment_1<T>::operator System::Collections::IEnumerable() const {
return System::Collections::IEnumerable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<T>
constexpr  System::ArraySegment_1<T>::operator System::Collections::Generic::IReadOnlyList_1<T>() const {
return System::Collections::Generic::IReadOnlyList_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr  System::ArraySegment_1<T>::operator System::Collections::Generic::IReadOnlyCollection_1<T>() const {
return System::Collections::Generic::IReadOnlyCollection_1<T>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::ArraySegment_1<T>::ArraySegment_1(::ArrayW<T> _array, int32_t _offset, int32_t _count) noexcept : ::bs_hook::ValueTypeWrapper() {this->_array = _array;
this->_offset = _offset;
this->_count = _count;
}
 void System::ArraySegment_1<T>::__set__Empty_k__BackingField(System::ArraySegment_1<T> value)  {
::cordl_internals::setStaticField<System::ArraySegment_1<T>, "<Empty>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get>(std::forward<System::ArraySegment_1<T>>(value));
}
 System::ArraySegment_1<T> System::ArraySegment_1<T>::__get__Empty_k__BackingField()  {
return ::cordl_internals::getStaticField<System::ArraySegment_1<T>, "<Empty>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get>();
}
constexpr void System::ArraySegment_1<T>::__set__array(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x0>(this->__instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::ArraySegment_1<T>::__get__array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x0>(this->__instance);
}
constexpr void System::ArraySegment_1<T>::__set__offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ArraySegment_1<T>::__get__offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::ArraySegment_1<T>::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ArraySegment_1<T>::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
 System::ArraySegment_1<T> System::ArraySegment_1<T>::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "get_Empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ArraySegment_1<T>, false>(nullptr, ___internal_method);
}
 void System::ArraySegment_1<T>::_ctor(::ArrayW<T> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, array);
}
 void System::ArraySegment_1<T>::_ctor(::ArrayW<T> array, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, array, offset, count);
}
 ::ArrayW<T> System::ArraySegment_1<T>::get_Array()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "get_Array",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ArraySegment_1<T>::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "get_Offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ArraySegment_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::System__ArraySegment_1__Enumerator<T> System::ArraySegment_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__ArraySegment_1__Enumerator<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ArraySegment_1<T>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::ArraySegment_1<T>::CopyTo(::ArrayW<T> destination, int32_t destinationIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, destination, destinationIndex);
}
 bool System::ArraySegment_1<T>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ArraySegment_1<T>::Equals(System::ArraySegment_1<T> obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ArraySegment_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 T System::ArraySegment_1<T>::System_Collections_Generic_IList_T__get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IList<T>.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 void System::ArraySegment_1<T>::System_Collections_Generic_IList_T__set_Item(int32_t index, T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IList<T>.set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index, value);
}
 int32_t System::ArraySegment_1<T>::System_Collections_Generic_IList_T__IndexOf(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IList<T>.IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
 void System::ArraySegment_1<T>::System_Collections_Generic_IList_T__Insert(int32_t index, T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IList<T>.Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index, item);
}
 void System::ArraySegment_1<T>::System_Collections_Generic_IList_T__RemoveAt(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IList<T>.RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 T System::ArraySegment_1<T>::System_Collections_Generic_IReadOnlyList_T__get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IReadOnlyList<T>.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 bool System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
 void System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Contains(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
 bool System::ArraySegment_1<T>::System_Collections_Generic_ICollection_T__Remove(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.ICollection<T>.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
 System::Collections::Generic::IEnumerator_1<T> System::ArraySegment_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Collections::IEnumerator System::ArraySegment_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::ArraySegment_1<T>::ThrowInvalidOperationIfDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArraySegment_1<T>>::get(),
                            "ThrowInvalidOperationIfDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
