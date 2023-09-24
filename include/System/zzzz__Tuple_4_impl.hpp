#pragma once
#include "System/zzzz__Tuple_4_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__ITupleInternal_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::Tuple_4<T1,T2,T3,T4>::operator System::Collections::IStructuralEquatable() const noexcept {
return System::Collections::IStructuralEquatable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::Tuple_4<T1,T2,T3,T4>::operator System::Collections::IStructuralComparable() const noexcept {
return System::Collections::IStructuralComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  System::Tuple_4<T1,T2,T3,T4>::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ITupleInternal
constexpr  System::Tuple_4<T1,T2,T3,T4>::operator System::ITupleInternal() const noexcept {
return System::ITupleInternal(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::Tuple_4<T1,T2,T3,T4>::operator System::Runtime::CompilerServices::ITuple() const noexcept {
return System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_4<T1,T2,T3,T4>::__set_m_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T1>(value));
}
constexpr T1 System::Tuple_4<T1,T2,T3,T4>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_4<T1,T2,T3,T4>::__set_m_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 System::Tuple_4<T1,T2,T3,T4>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_4<T1,T2,T3,T4>::__set_m_Item3(T3 value)  {
::cordl_internals::setInstanceField<T3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T3>(value));
}
constexpr T3 System::Tuple_4<T1,T2,T3,T4>::__get_m_Item3() const {
return ::cordl_internals::getInstanceField<T3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_4<T1,T2,T3,T4>::__set_m_Item4(T4 value)  {
::cordl_internals::setInstanceField<T4, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T4>(value));
}
constexpr T4 System::Tuple_4<T1,T2,T3,T4>::__get_m_Item4() const {
return ::cordl_internals::getInstanceField<T4, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T1 System::Tuple_4<T1,T2,T3,T4>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(const_cast<void*>(instance), ___internal_method);
}
 T2 System::Tuple_4<T1,T2,T3,T4>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(const_cast<void*>(instance), ___internal_method);
}
 T3 System::Tuple_4<T1,T2,T3,T4>::get_Item3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "get_Item3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T3, false>(const_cast<void*>(instance), ___internal_method);
}
 T4 System::Tuple_4<T1,T2,T3,T4>::get_Item4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "get_Item4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T4, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Tuple_4<T1,T2,T3,T4> System::Tuple_4<T1,T2,T3,T4>::New_ctor(T1 item1, T2 item2, T3 item3, T4 item4)  {
System::Tuple_4<T1,T2,T3,T4> o{THROW_UNLESS(::il2cpp_utils::New<System::Tuple_4<T1,T2,T3,T4>>(item1, item2, item3, item4))};
return o;
}
 void System::Tuple_4<T1,T2,T3,T4>::_ctor(T1 item1, T2 item2, T3 item3, T4 item4)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item1, item2, item3, item4);
}
 bool System::Tuple_4<T1,T2,T3,T4>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Tuple_4<T1,T2,T3,T4>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_4<T1,T2,T3,T4>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Tuple_4<T1,T2,T3,T4>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_4<T1,T2,T3,T4>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Tuple_4<T1,T2,T3,T4>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 ::StringW System::Tuple_4<T1,T2,T3,T4>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Tuple_4<T1,T2,T3,T4>::System_ITupleInternal_ToString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 int32_t System::Tuple_4<T1,T2,T3,T4>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,T4>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::Tuple_4<T1,T2,T3,bool>::operator System::Collections::IStructuralEquatable() const noexcept {
return System::Collections::IStructuralEquatable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::Tuple_4<T1,T2,T3,bool>::operator System::Collections::IStructuralComparable() const noexcept {
return System::Collections::IStructuralComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  System::Tuple_4<T1,T2,T3,bool>::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ITupleInternal
constexpr  System::Tuple_4<T1,T2,T3,bool>::operator System::ITupleInternal() const noexcept {
return System::ITupleInternal(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::Tuple_4<T1,T2,T3,bool>::operator System::Runtime::CompilerServices::ITuple() const noexcept {
return System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_4<T1,T2,T3,bool>::__set_m_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T1>(value));
}
constexpr T1 System::Tuple_4<T1,T2,T3,bool>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_4<T1,T2,T3,bool>::__set_m_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 System::Tuple_4<T1,T2,T3,bool>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_4<T1,T2,T3,bool>::__set_m_Item3(T3 value)  {
::cordl_internals::setInstanceField<T3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T3>(value));
}
constexpr T3 System::Tuple_4<T1,T2,T3,bool>::__get_m_Item3() const {
return ::cordl_internals::getInstanceField<T3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_4<T1,T2,T3,bool>::__set_m_Item4(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Tuple_4<T1,T2,T3,bool>::__get_m_Item4() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T1 System::Tuple_4<T1,T2,T3,bool>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(const_cast<void*>(instance), ___internal_method);
}
 T2 System::Tuple_4<T1,T2,T3,bool>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(const_cast<void*>(instance), ___internal_method);
}
 T3 System::Tuple_4<T1,T2,T3,bool>::get_Item3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "get_Item3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T3, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Tuple_4<T1,T2,T3,bool>::get_Item4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "get_Item4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Tuple_4<T1,T2,T3,bool> System::Tuple_4<T1,T2,T3,bool>::New_ctor(T1 item1, T2 item2, T3 item3, bool item4)  {
System::Tuple_4<T1,T2,T3,bool> o{THROW_UNLESS(::il2cpp_utils::New<System::Tuple_4<T1,T2,T3,bool>>(item1, item2, item3, item4))};
return o;
}
 void System::Tuple_4<T1,T2,T3,bool>::_ctor(T1 item1, T2 item2, T3 item3, bool item4)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item1, item2, item3, item4);
}
 bool System::Tuple_4<T1,T2,T3,bool>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Tuple_4<T1,T2,T3,bool>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_4<T1,T2,T3,bool>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Tuple_4<T1,T2,T3,bool>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_4<T1,T2,T3,bool>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Tuple_4<T1,T2,T3,bool>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 ::StringW System::Tuple_4<T1,T2,T3,bool>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Tuple_4<T1,T2,T3,bool>::System_ITupleInternal_ToString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 int32_t System::Tuple_4<T1,T2,T3,bool>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_4<T1,T2,T3,bool>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
