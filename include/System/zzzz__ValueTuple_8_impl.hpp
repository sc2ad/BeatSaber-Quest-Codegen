#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__ValueTuple_8_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IValueTupleInternal_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/zzzz__ValueTuple_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
/// @brief Convert operator to System::IEquatable_1<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>
constexpr  System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::operator System::IEquatable_1<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>() const {
return System::IEquatable_1<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::operator System::Collections::IStructuralEquatable() const {
return System::Collections::IStructuralEquatable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::operator System::Collections::IStructuralComparable() const {
return System::Collections::IStructuralComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable
constexpr  System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::operator System::IComparable() const {
return System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IComparable_1<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>
constexpr  System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::operator System::IComparable_1<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>() const {
return System::IComparable_1<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IValueTupleInternal
constexpr  System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::operator System::IValueTupleInternal() const {
return System::IValueTupleInternal(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::operator System::Runtime::CompilerServices::ITuple() const {
return System::Runtime::CompilerServices::ITuple(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Item1", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item3", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item5", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item6", ty: "T6", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item7", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Rest", ty: "System::ValueTuple_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::ValueTuple_8(::cordl_internals::intptr_t Item1, T2 Item2, ::cordl_internals::intptr_t Item3, T4 Item4, ::cordl_internals::intptr_t Item5, T6 Item6, bool Item7, System::ValueTuple_1<bool> Rest) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item1 = Item1;
this->Item2 = Item2;
this->Item3 = Item3;
this->Item4 = Item4;
this->Item5 = Item5;
this->Item6 = Item6;
this->Item7 = Item7;
this->Rest = Rest;
}
constexpr void System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__set_Item1(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__get_Item1() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__set_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->__instance, std::forward<T2>(value));
}
constexpr T2 System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->__instance);
}
constexpr void System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__set_Item3(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__get_Item3() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance);
}
constexpr void System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__set_Item4(T4 value)  {
::cordl_internals::setInstanceField<T4, 0x18>(this->__instance, std::forward<T4>(value));
}
constexpr T4 System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__get_Item4() const {
return ::cordl_internals::getInstanceField<T4, 0x18>(this->__instance);
}
constexpr void System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__set_Item5(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__get_Item5() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance);
}
constexpr void System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__set_Item6(T6 value)  {
::cordl_internals::setInstanceField<T6, 0x28>(this->__instance, std::forward<T6>(value));
}
constexpr T6 System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__get_Item6() const {
return ::cordl_internals::getInstanceField<T6, 0x28>(this->__instance);
}
constexpr void System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__set_Item7(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__get_Item7() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
constexpr void System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__set_Rest(System::ValueTuple_1<bool> value)  {
::cordl_internals::setInstanceField<System::ValueTuple_1<bool>, 0x38>(this->__instance, std::forward<System::ValueTuple_1<bool>>(value));
}
constexpr System::ValueTuple_1<bool> System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::__get_Rest() const {
return ::cordl_internals::getInstanceField<System::ValueTuple_1<bool>, 0x38>(this->__instance);
}
 void System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::_ctor(::cordl_internals::intptr_t item1, T2 item2, ::cordl_internals::intptr_t item3, T4 item4, ::cordl_internals::intptr_t item5, T6 item6, bool item7, System::ValueTuple_1<bool> rest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T6>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item1, item2, item3, item4, item5, item6, item7, rest);
}
 bool System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::Equals(System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::CompareTo(System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, comparer);
}
 int32_t System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::GetHashCodeCore(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "GetHashCodeCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 int32_t System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::System_IValueTupleInternal_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "System.IValueTupleInternal.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparer);
}
 ::StringW System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::System_IValueTupleInternal_ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "System.IValueTupleInternal.ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ValueTuple_8<::cordl_internals::intptr_t,T2,::cordl_internals::intptr_t,T4,::cordl_internals::intptr_t,T6,bool,System::ValueTuple_1<bool>>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
