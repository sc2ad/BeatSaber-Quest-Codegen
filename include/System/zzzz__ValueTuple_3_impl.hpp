#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/zzzz__IValueTupleInternal_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>() const {
return System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>() const {
return System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: Some("csnull") }]
constexpr System::ValueTuple_3<T1,T2,T3>::ValueTuple_3(T1 Item1, T2 Item2, T3 Item3) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
this->Item3 = Item3;
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 System::ValueTuple_3<T1,T2,T3>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 System::ValueTuple_3<T1,T2,T3>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item3(T3 value)  {
::cordl_internals::setInstanceField<T3, 0x10>(this->__instance, std::forward<T3>(value));
}
constexpr T3 System::ValueTuple_3<T1,T2,T3>::__get_Item3() const {
return ::cordl_internals::getInstanceField<T3, 0x10>(this->__instance);
}
 void System::ValueTuple_3<T1,T2,T3>::_ctor(T1 item1, T2 item2, T3 item3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2, item3);
}
 bool System::ValueTuple_3<T1,T2,T3>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_3<T1,T2,T3>::Equals(System::ValueTuple_3<T1,T2,T3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::CompareTo(System::ValueTuple_3<T1,T2,T3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_3<T1,T2,T3>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_3<T1,T2,T3>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>() const {
return System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>() const {
return System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: Some("{}") }]
constexpr System::ValueTuple_3<T1,T2,T3>::ValueTuple_3(T1 Item1, T2 Item2, T3 Item3) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
this->Item3 = Item3;
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 System::ValueTuple_3<T1,T2,T3>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 System::ValueTuple_3<T1,T2,T3>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item3(T3 value)  {
::cordl_internals::setInstanceField<T3, 0x10>(this->__instance, std::forward<T3>(value));
}
constexpr T3 System::ValueTuple_3<T1,T2,T3>::__get_Item3() const {
return ::cordl_internals::getInstanceField<T3, 0x10>(this->__instance);
}
 void System::ValueTuple_3<T1,T2,T3>::_ctor(T1 item1, T2 item2, T3 item3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2, item3);
}
 bool System::ValueTuple_3<T1,T2,T3>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_3<T1,T2,T3>::Equals(System::ValueTuple_3<T1,T2,T3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::CompareTo(System::ValueTuple_3<T1,T2,T3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_3<T1,T2,T3>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_3<T1,T2,T3>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>() const {
return System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>() const {
return System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: Some("{}") }]
constexpr System::ValueTuple_3<T1,T2,T3>::ValueTuple_3(T1 Item1, T2 Item2, T3 Item3) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
this->Item3 = Item3;
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 System::ValueTuple_3<T1,T2,T3>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 System::ValueTuple_3<T1,T2,T3>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item3(T3 value)  {
::cordl_internals::setInstanceField<T3, 0x10>(this->__instance, std::forward<T3>(value));
}
constexpr T3 System::ValueTuple_3<T1,T2,T3>::__get_Item3() const {
return ::cordl_internals::getInstanceField<T3, 0x10>(this->__instance);
}
 void System::ValueTuple_3<T1,T2,T3>::_ctor(T1 item1, T2 item2, T3 item3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2, item3);
}
 bool System::ValueTuple_3<T1,T2,T3>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_3<T1,T2,T3>::Equals(System::ValueTuple_3<T1,T2,T3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::CompareTo(System::ValueTuple_3<T1,T2,T3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_3<T1,T2,T3>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_3<T1,T2,T3>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>
constexpr  System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::operator System::IEquatable_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>() const {
return System::IEquatable_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>
constexpr  System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::operator System::IComparable_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>() const {
return System::IComparable_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "System::Int32Enum", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "System::Int32Enum", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: Some("csnull") }]
constexpr System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::ValueTuple_3(System::Int32Enum Item1, System::Int32Enum Item2, T3 Item3) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
this->Item3 = Item3;
}
constexpr void System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::__set_Item1(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x0>(this->__instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::__get_Item1() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::__set_Item2(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x8>(this->__instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::__get_Item2() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x8>(this->__instance);
}
constexpr void System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::__set_Item3(T3 value)  {
::cordl_internals::setInstanceField<T3, 0x10>(this->__instance, std::forward<T3>(value));
}
constexpr T3 System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::__get_Item3() const {
return ::cordl_internals::getInstanceField<T3, 0x10>(this->__instance);
}
 void System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::_ctor(System::Int32Enum item1, System::Int32Enum item2, T3 item3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2, item3);
}
 bool System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::Equals(System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::CompareTo(System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,T3>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>() const {
return System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>() const {
return System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: Some("{}") }]
constexpr System::ValueTuple_3<T1,T2,T3>::ValueTuple_3(T1 Item1, T2 Item2, T3 Item3) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
this->Item3 = Item3;
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 System::ValueTuple_3<T1,T2,T3>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 System::ValueTuple_3<T1,T2,T3>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item3(T3 value)  {
::cordl_internals::setInstanceField<T3, 0x10>(this->__instance, std::forward<T3>(value));
}
constexpr T3 System::ValueTuple_3<T1,T2,T3>::__get_Item3() const {
return ::cordl_internals::getInstanceField<T3, 0x10>(this->__instance);
}
 void System::ValueTuple_3<T1,T2,T3>::_ctor(T1 item1, T2 item2, T3 item3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2, item3);
}
 bool System::ValueTuple_3<T1,T2,T3>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_3<T1,T2,T3>::Equals(System::ValueTuple_3<T1,T2,T3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::CompareTo(System::ValueTuple_3<T1,T2,T3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_3<T1,T2,T3>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_3<T1,T2,T3>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>() const {
return System::IEquatable_1<System::ValueTuple_3<T1,T2,T3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>() const {
return System::IComparable_1<System::ValueTuple_3<T1,T2,T3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_3<T1,T2,T3>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: Some("{}") }]
constexpr System::ValueTuple_3<T1,T2,T3>::ValueTuple_3(T1 Item1, T2 Item2, T3 Item3) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
this->Item3 = Item3;
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 System::ValueTuple_3<T1,T2,T3>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 System::ValueTuple_3<T1,T2,T3>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
constexpr void System::ValueTuple_3<T1,T2,T3>::__set_Item3(T3 value)  {
::cordl_internals::setInstanceField<T3, 0x10>(this->__instance, std::forward<T3>(value));
}
constexpr T3 System::ValueTuple_3<T1,T2,T3>::__get_Item3() const {
return ::cordl_internals::getInstanceField<T3, 0x10>(this->__instance);
}
 void System::ValueTuple_3<T1,T2,T3>::_ctor(T1 item1, T2 item2, T3 item3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2, item3);
}
 bool System::ValueTuple_3<T1,T2,T3>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_3<T1,T2,T3>::Equals(System::ValueTuple_3<T1,T2,T3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::CompareTo(System::ValueTuple_3<T1,T2,T3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_3<T1,T2,T3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_3<T1,T2,T3>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_3<T1,T2,T3>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_3<T1,T2,T3>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_3<T1,T2,T3>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
