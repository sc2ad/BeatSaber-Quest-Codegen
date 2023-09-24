#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__IValueTupleInternal_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_2<T1,UnityEngine::Vector3>>
constexpr  System::ValueTuple_2<T1,UnityEngine::Vector3>::operator System::IEquatable_1<System::ValueTuple_2<T1,UnityEngine::Vector3>>() const {
return System::IEquatable_1<System::ValueTuple_2<T1,UnityEngine::Vector3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_2<T1,UnityEngine::Vector3>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_2<T1,UnityEngine::Vector3>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_2<T1,UnityEngine::Vector3>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_2<T1,UnityEngine::Vector3>>
constexpr  System::ValueTuple_2<T1,UnityEngine::Vector3>::operator System::IComparable_1<System::ValueTuple_2<T1,UnityEngine::Vector3>>() const {
return System::IComparable_1<System::ValueTuple_2<T1,UnityEngine::Vector3>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_2<T1,UnityEngine::Vector3>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_2<T1,UnityEngine::Vector3>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr System::ValueTuple_2<T1,UnityEngine::Vector3>::ValueTuple_2(T1 Item1, UnityEngine::Vector3 Item2) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
}
constexpr void System::ValueTuple_2<T1,UnityEngine::Vector3>::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 System::ValueTuple_2<T1,UnityEngine::Vector3>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_2<T1,UnityEngine::Vector3>::__set_Item2(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x8>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 System::ValueTuple_2<T1,UnityEngine::Vector3>::__get_Item2() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x8>(this->__instance);
}
 void System::ValueTuple_2<T1,UnityEngine::Vector3>::_ctor(T1 item1, UnityEngine::Vector3 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2);
}
 bool System::ValueTuple_2<T1,UnityEngine::Vector3>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_2<T1,UnityEngine::Vector3>::Equals(System::ValueTuple_2<T1,UnityEngine::Vector3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_2<T1,UnityEngine::Vector3>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,UnityEngine::Vector3>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,UnityEngine::Vector3>::CompareTo(System::ValueTuple_2<T1,UnityEngine::Vector3> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,UnityEngine::Vector3>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,UnityEngine::Vector3>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,UnityEngine::Vector3>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,UnityEngine::Vector3>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,UnityEngine::Vector3>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_2<T1,UnityEngine::Vector3>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_2<T1,UnityEngine::Vector3>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,UnityEngine::Vector3>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,UnityEngine::Vector3>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_2<bool,T2>>
constexpr  System::ValueTuple_2<bool,T2>::operator System::IEquatable_1<System::ValueTuple_2<bool,T2>>() const {
return System::IEquatable_1<System::ValueTuple_2<bool,T2>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_2<bool,T2>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_2<bool,T2>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_2<bool,T2>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_2<bool,T2>>
constexpr  System::ValueTuple_2<bool,T2>::operator System::IComparable_1<System::ValueTuple_2<bool,T2>>() const {
return System::IComparable_1<System::ValueTuple_2<bool,T2>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_2<bool,T2>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_2<bool,T2>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }]
constexpr System::ValueTuple_2<bool,T2>::ValueTuple_2(bool Item1, T2 Item2) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
}
constexpr void System::ValueTuple_2<bool,T2>::__set_Item1(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::ValueTuple_2<bool,T2>::__get_Item1() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_2<bool,T2>::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 System::ValueTuple_2<bool,T2>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
 void System::ValueTuple_2<bool,T2>::_ctor(bool item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2);
}
 bool System::ValueTuple_2<bool,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_2<bool,T2>::Equals(System::ValueTuple_2<bool,T2> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<bool,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_2<bool,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<bool,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<bool,T2>::CompareTo(System::ValueTuple_2<bool,T2> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<bool,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<bool,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<bool,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<bool,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<bool,T2>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<bool,T2>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_2<bool,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_2<bool,T2>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<bool,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<bool,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_2<T1,T2>>
constexpr  System::ValueTuple_2<T1,T2>::operator System::IEquatable_1<System::ValueTuple_2<T1,T2>>() const {
return System::IEquatable_1<System::ValueTuple_2<T1,T2>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_2<T1,T2>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_2<T1,T2>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_2<T1,T2>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_2<T1,T2>>
constexpr  System::ValueTuple_2<T1,T2>::operator System::IComparable_1<System::ValueTuple_2<T1,T2>>() const {
return System::IComparable_1<System::ValueTuple_2<T1,T2>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_2<T1,T2>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_2<T1,T2>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("{}") }]
constexpr System::ValueTuple_2<T1,T2>::ValueTuple_2(T1 Item1, T2 Item2) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
}
constexpr void System::ValueTuple_2<T1,T2>::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 System::ValueTuple_2<T1,T2>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_2<T1,T2>::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 System::ValueTuple_2<T1,T2>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
 void System::ValueTuple_2<T1,T2>::_ctor(T1 item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2);
}
 bool System::ValueTuple_2<T1,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_2<T1,T2>::Equals(System::ValueTuple_2<T1,T2> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,T2>::CompareTo(System::ValueTuple_2<T1,T2> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_2<T1,T2>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_2<T1,T2>>
constexpr  System::ValueTuple_2<T1,T2>::operator System::IEquatable_1<System::ValueTuple_2<T1,T2>>() const {
return System::IEquatable_1<System::ValueTuple_2<T1,T2>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_2<T1,T2>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_2<T1,T2>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_2<T1,T2>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_2<T1,T2>>
constexpr  System::ValueTuple_2<T1,T2>::operator System::IComparable_1<System::ValueTuple_2<T1,T2>>() const {
return System::IComparable_1<System::ValueTuple_2<T1,T2>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_2<T1,T2>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_2<T1,T2>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("{}") }]
constexpr System::ValueTuple_2<T1,T2>::ValueTuple_2(T1 Item1, T2 Item2) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
}
constexpr void System::ValueTuple_2<T1,T2>::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 System::ValueTuple_2<T1,T2>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_2<T1,T2>::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 System::ValueTuple_2<T1,T2>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
 void System::ValueTuple_2<T1,T2>::_ctor(T1 item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2);
}
 bool System::ValueTuple_2<T1,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_2<T1,T2>::Equals(System::ValueTuple_2<T1,T2> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,T2>::CompareTo(System::ValueTuple_2<T1,T2> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_2<T1,T2>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_2<T1,bool>>
constexpr  System::ValueTuple_2<T1,bool>::operator System::IEquatable_1<System::ValueTuple_2<T1,bool>>() const {
return System::IEquatable_1<System::ValueTuple_2<T1,bool>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_2<T1,bool>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_2<T1,bool>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_2<T1,bool>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_2<T1,bool>>
constexpr  System::ValueTuple_2<T1,bool>::operator System::IComparable_1<System::ValueTuple_2<T1,bool>>() const {
return System::IComparable_1<System::ValueTuple_2<T1,bool>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_2<T1,bool>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_2<T1,bool>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr System::ValueTuple_2<T1,bool>::ValueTuple_2(T1 Item1, bool Item2) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
}
constexpr void System::ValueTuple_2<T1,bool>::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 System::ValueTuple_2<T1,bool>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_2<T1,bool>::__set_Item2(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::ValueTuple_2<T1,bool>::__get_Item2() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
 void System::ValueTuple_2<T1,bool>::_ctor(T1 item1, bool item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2);
}
 bool System::ValueTuple_2<T1,bool>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_2<T1,bool>::Equals(System::ValueTuple_2<T1,bool> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_2<T1,bool>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,bool>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,bool>::CompareTo(System::ValueTuple_2<T1,bool> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,bool>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,bool>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,bool>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,bool>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,bool>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_2<T1,bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_2<T1,bool>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,bool>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_2<System::Int32Enum,T2>>
constexpr  System::ValueTuple_2<System::Int32Enum,T2>::operator System::IEquatable_1<System::ValueTuple_2<System::Int32Enum,T2>>() const {
return System::IEquatable_1<System::ValueTuple_2<System::Int32Enum,T2>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_2<System::Int32Enum,T2>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_2<System::Int32Enum,T2>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_2<System::Int32Enum,T2>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_2<System::Int32Enum,T2>>
constexpr  System::ValueTuple_2<System::Int32Enum,T2>::operator System::IComparable_1<System::ValueTuple_2<System::Int32Enum,T2>>() const {
return System::IComparable_1<System::ValueTuple_2<System::Int32Enum,T2>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_2<System::Int32Enum,T2>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_2<System::Int32Enum,T2>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "System::Int32Enum", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }]
constexpr System::ValueTuple_2<System::Int32Enum,T2>::ValueTuple_2(System::Int32Enum Item1, T2 Item2) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
}
constexpr void System::ValueTuple_2<System::Int32Enum,T2>::__set_Item1(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x0>(this->__instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::ValueTuple_2<System::Int32Enum,T2>::__get_Item1() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_2<System::Int32Enum,T2>::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 System::ValueTuple_2<System::Int32Enum,T2>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
 void System::ValueTuple_2<System::Int32Enum,T2>::_ctor(System::Int32Enum item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2);
}
 bool System::ValueTuple_2<System::Int32Enum,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_2<System::Int32Enum,T2>::Equals(System::ValueTuple_2<System::Int32Enum,T2> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<System::Int32Enum,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_2<System::Int32Enum,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<System::Int32Enum,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<System::Int32Enum,T2>::CompareTo(System::ValueTuple_2<System::Int32Enum,T2> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<System::Int32Enum,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<System::Int32Enum,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<System::Int32Enum,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<System::Int32Enum,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<System::Int32Enum,T2>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<System::Int32Enum,T2>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_2<System::Int32Enum,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_2<System::Int32Enum,T2>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<System::Int32Enum,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<System::Int32Enum,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_2<T1,bool>>
constexpr  System::ValueTuple_2<T1,bool>::operator System::IEquatable_1<System::ValueTuple_2<T1,bool>>() const {
return System::IEquatable_1<System::ValueTuple_2<T1,bool>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_2<T1,bool>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_2<T1,bool>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_2<T1,bool>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_2<T1,bool>>
constexpr  System::ValueTuple_2<T1,bool>::operator System::IComparable_1<System::ValueTuple_2<T1,bool>>() const {
return System::IComparable_1<System::ValueTuple_2<T1,bool>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_2<T1,bool>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_2<T1,bool>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr System::ValueTuple_2<T1,bool>::ValueTuple_2(T1 Item1, bool Item2) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
}
constexpr void System::ValueTuple_2<T1,bool>::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 System::ValueTuple_2<T1,bool>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_2<T1,bool>::__set_Item2(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::ValueTuple_2<T1,bool>::__get_Item2() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
 void System::ValueTuple_2<T1,bool>::_ctor(T1 item1, bool item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2);
}
 bool System::ValueTuple_2<T1,bool>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_2<T1,bool>::Equals(System::ValueTuple_2<T1,bool> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_2<T1,bool>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,bool>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,bool>::CompareTo(System::ValueTuple_2<T1,bool> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,bool>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,bool>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,bool>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,bool>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,bool>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_2<T1,bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_2<T1,bool>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,bool>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,bool>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_2<T1,T2>>
constexpr  System::ValueTuple_2<T1,T2>::operator System::IEquatable_1<System::ValueTuple_2<T1,T2>>() const {
return System::IEquatable_1<System::ValueTuple_2<T1,T2>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_2<T1,T2>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_2<T1,T2>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_2<T1,T2>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_2<T1,T2>>
constexpr  System::ValueTuple_2<T1,T2>::operator System::IComparable_1<System::ValueTuple_2<T1,T2>>() const {
return System::IComparable_1<System::ValueTuple_2<T1,T2>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_2<T1,T2>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_2<T1,T2>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("{}") }]
constexpr System::ValueTuple_2<T1,T2>::ValueTuple_2(T1 Item1, T2 Item2) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
}
constexpr void System::ValueTuple_2<T1,T2>::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 System::ValueTuple_2<T1,T2>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_2<T1,T2>::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 System::ValueTuple_2<T1,T2>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
 void System::ValueTuple_2<T1,T2>::_ctor(T1 item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2);
}
 bool System::ValueTuple_2<T1,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_2<T1,T2>::Equals(System::ValueTuple_2<T1,T2> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,T2>::CompareTo(System::ValueTuple_2<T1,T2> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_2<T1,T2>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_2<T1,T2>>
constexpr  System::ValueTuple_2<T1,T2>::operator System::IEquatable_1<System::ValueTuple_2<T1,T2>>() const {
return System::IEquatable_1<System::ValueTuple_2<T1,T2>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_2<T1,T2>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_2<T1,T2>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_2<T1,T2>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_2<T1,T2>>
constexpr  System::ValueTuple_2<T1,T2>::operator System::IComparable_1<System::ValueTuple_2<T1,T2>>() const {
return System::IComparable_1<System::ValueTuple_2<T1,T2>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_2<T1,T2>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_2<T1,T2>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }]
constexpr System::ValueTuple_2<T1,T2>::ValueTuple_2(T1 Item1, T2 Item2) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
}
constexpr void System::ValueTuple_2<T1,T2>::__set_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->__instance, std::forward<T1>(value));
}
constexpr T1 System::ValueTuple_2<T1,T2>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_2<T1,T2>::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 System::ValueTuple_2<T1,T2>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
 void System::ValueTuple_2<T1,T2>::_ctor(T1 item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2);
}
 bool System::ValueTuple_2<T1,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_2<T1,T2>::Equals(System::ValueTuple_2<T1,T2> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,T2>::CompareTo(System::ValueTuple_2<T1,T2> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_2<T1,T2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_2<T1,T2>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_2<T1,T2>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_2<T1,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
