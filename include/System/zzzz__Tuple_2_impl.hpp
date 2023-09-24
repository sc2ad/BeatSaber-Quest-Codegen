#pragma once
#include "System/zzzz__Tuple_2_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__ITupleInternal_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__ByteEnum_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
#include "System/zzzz__UInt16Enum_def.hpp"
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::Tuple_2<System::UInt16Enum,T2>::operator System::Collections::IStructuralEquatable() const noexcept {
return System::Collections::IStructuralEquatable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::Tuple_2<System::UInt16Enum,T2>::operator System::Collections::IStructuralComparable() const noexcept {
return System::Collections::IStructuralComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  System::Tuple_2<System::UInt16Enum,T2>::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ITupleInternal
constexpr  System::Tuple_2<System::UInt16Enum,T2>::operator System::ITupleInternal() const noexcept {
return System::ITupleInternal(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::Tuple_2<System::UInt16Enum,T2>::operator System::Runtime::CompilerServices::ITuple() const noexcept {
return System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<System::UInt16Enum,T2>::__set_m_Item1(System::UInt16Enum value)  {
::cordl_internals::setInstanceField<System::UInt16Enum, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::UInt16Enum>(value));
}
constexpr System::UInt16Enum System::Tuple_2<System::UInt16Enum,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<System::UInt16Enum, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<System::UInt16Enum,T2>::__set_m_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 System::Tuple_2<System::UInt16Enum,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::UInt16Enum System::Tuple_2<System::UInt16Enum,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::UInt16Enum,T2>>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::UInt16Enum, false>(const_cast<void*>(instance), ___internal_method);
}
 T2 System::Tuple_2<System::UInt16Enum,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::UInt16Enum,T2>>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Tuple_2<System::UInt16Enum,T2> System::Tuple_2<System::UInt16Enum,T2>::New_ctor(System::UInt16Enum item1, T2 item2)  {
System::Tuple_2<System::UInt16Enum,T2> o{THROW_UNLESS(::il2cpp_utils::New<System::Tuple_2<System::UInt16Enum,T2>>(item1, item2))};
return o;
}
 void System::Tuple_2<System::UInt16Enum,T2>::_ctor(System::UInt16Enum item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::UInt16Enum,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UInt16Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item1, item2);
}
 bool System::Tuple_2<System::UInt16Enum,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::UInt16Enum,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Tuple_2<System::UInt16Enum,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::UInt16Enum,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<System::UInt16Enum,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::UInt16Enum,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Tuple_2<System::UInt16Enum,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::UInt16Enum,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<System::UInt16Enum,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::UInt16Enum,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Tuple_2<System::UInt16Enum,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::UInt16Enum,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 ::StringW System::Tuple_2<System::UInt16Enum,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::UInt16Enum,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Tuple_2<System::UInt16Enum,T2>::System_ITupleInternal_ToString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::UInt16Enum,T2>>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 int32_t System::Tuple_2<System::UInt16Enum,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::UInt16Enum,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::Tuple_2<System::ByteEnum,T2>::operator System::Collections::IStructuralEquatable() const noexcept {
return System::Collections::IStructuralEquatable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::Tuple_2<System::ByteEnum,T2>::operator System::Collections::IStructuralComparable() const noexcept {
return System::Collections::IStructuralComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  System::Tuple_2<System::ByteEnum,T2>::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ITupleInternal
constexpr  System::Tuple_2<System::ByteEnum,T2>::operator System::ITupleInternal() const noexcept {
return System::ITupleInternal(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::Tuple_2<System::ByteEnum,T2>::operator System::Runtime::CompilerServices::ITuple() const noexcept {
return System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<System::ByteEnum,T2>::__set_m_Item1(System::ByteEnum value)  {
::cordl_internals::setInstanceField<System::ByteEnum, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ByteEnum>(value));
}
constexpr System::ByteEnum System::Tuple_2<System::ByteEnum,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<System::ByteEnum, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<System::ByteEnum,T2>::__set_m_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 System::Tuple_2<System::ByteEnum,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::ByteEnum System::Tuple_2<System::ByteEnum,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::ByteEnum,T2>>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ByteEnum, false>(const_cast<void*>(instance), ___internal_method);
}
 T2 System::Tuple_2<System::ByteEnum,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::ByteEnum,T2>>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Tuple_2<System::ByteEnum,T2> System::Tuple_2<System::ByteEnum,T2>::New_ctor(System::ByteEnum item1, T2 item2)  {
System::Tuple_2<System::ByteEnum,T2> o{THROW_UNLESS(::il2cpp_utils::New<System::Tuple_2<System::ByteEnum,T2>>(item1, item2))};
return o;
}
 void System::Tuple_2<System::ByteEnum,T2>::_ctor(System::ByteEnum item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::ByteEnum,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ByteEnum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item1, item2);
}
 bool System::Tuple_2<System::ByteEnum,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::ByteEnum,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Tuple_2<System::ByteEnum,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::ByteEnum,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<System::ByteEnum,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::ByteEnum,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Tuple_2<System::ByteEnum,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::ByteEnum,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<System::ByteEnum,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::ByteEnum,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Tuple_2<System::ByteEnum,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::ByteEnum,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 ::StringW System::Tuple_2<System::ByteEnum,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::ByteEnum,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Tuple_2<System::ByteEnum,T2>::System_ITupleInternal_ToString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::ByteEnum,T2>>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 int32_t System::Tuple_2<System::ByteEnum,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::ByteEnum,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::Tuple_2<float_t,T2>::operator System::Collections::IStructuralEquatable() const noexcept {
return System::Collections::IStructuralEquatable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::Tuple_2<float_t,T2>::operator System::Collections::IStructuralComparable() const noexcept {
return System::Collections::IStructuralComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  System::Tuple_2<float_t,T2>::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ITupleInternal
constexpr  System::Tuple_2<float_t,T2>::operator System::ITupleInternal() const noexcept {
return System::ITupleInternal(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::Tuple_2<float_t,T2>::operator System::Runtime::CompilerServices::ITuple() const noexcept {
return System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<float_t,T2>::__set_m_Item1(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t System::Tuple_2<float_t,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<float_t,T2>::__set_m_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 System::Tuple_2<float_t,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t System::Tuple_2<float_t,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<float_t,T2>>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 T2 System::Tuple_2<float_t,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<float_t,T2>>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Tuple_2<float_t,T2> System::Tuple_2<float_t,T2>::New_ctor(float_t item1, T2 item2)  {
System::Tuple_2<float_t,T2> o{THROW_UNLESS(::il2cpp_utils::New<System::Tuple_2<float_t,T2>>(item1, item2))};
return o;
}
 void System::Tuple_2<float_t,T2>::_ctor(float_t item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<float_t,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item1, item2);
}
 bool System::Tuple_2<float_t,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<float_t,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Tuple_2<float_t,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<float_t,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<float_t,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<float_t,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Tuple_2<float_t,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<float_t,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<float_t,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<float_t,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Tuple_2<float_t,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<float_t,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 ::StringW System::Tuple_2<float_t,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<float_t,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Tuple_2<float_t,T2>::System_ITupleInternal_ToString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<float_t,T2>>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 int32_t System::Tuple_2<float_t,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<float_t,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::Tuple_2<T1,float_t>::operator System::Collections::IStructuralEquatable() const noexcept {
return System::Collections::IStructuralEquatable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::Tuple_2<T1,float_t>::operator System::Collections::IStructuralComparable() const noexcept {
return System::Collections::IStructuralComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  System::Tuple_2<T1,float_t>::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ITupleInternal
constexpr  System::Tuple_2<T1,float_t>::operator System::ITupleInternal() const noexcept {
return System::ITupleInternal(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::Tuple_2<T1,float_t>::operator System::Runtime::CompilerServices::ITuple() const noexcept {
return System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<T1,float_t>::__set_m_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T1>(value));
}
constexpr T1 System::Tuple_2<T1,float_t>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<T1,float_t>::__set_m_Item2(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t System::Tuple_2<T1,float_t>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T1 System::Tuple_2<T1,float_t>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,float_t>>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t System::Tuple_2<T1,float_t>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,float_t>>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Tuple_2<T1,float_t> System::Tuple_2<T1,float_t>::New_ctor(T1 item1, float_t item2)  {
System::Tuple_2<T1,float_t> o{THROW_UNLESS(::il2cpp_utils::New<System::Tuple_2<T1,float_t>>(item1, item2))};
return o;
}
 void System::Tuple_2<T1,float_t>::_ctor(T1 item1, float_t item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item1, item2);
}
 bool System::Tuple_2<T1,float_t>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,float_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Tuple_2<T1,float_t>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,float_t>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<T1,float_t>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,float_t>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Tuple_2<T1,float_t>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,float_t>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<T1,float_t>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,float_t>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Tuple_2<T1,float_t>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,float_t>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 ::StringW System::Tuple_2<T1,float_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,float_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Tuple_2<T1,float_t>::System_ITupleInternal_ToString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,float_t>>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 int32_t System::Tuple_2<T1,float_t>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,float_t>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::Tuple_2<System::Int32Enum,T2>::operator System::Collections::IStructuralEquatable() const noexcept {
return System::Collections::IStructuralEquatable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::Tuple_2<System::Int32Enum,T2>::operator System::Collections::IStructuralComparable() const noexcept {
return System::Collections::IStructuralComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  System::Tuple_2<System::Int32Enum,T2>::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ITupleInternal
constexpr  System::Tuple_2<System::Int32Enum,T2>::operator System::ITupleInternal() const noexcept {
return System::ITupleInternal(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::Tuple_2<System::Int32Enum,T2>::operator System::Runtime::CompilerServices::ITuple() const noexcept {
return System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<System::Int32Enum,T2>::__set_m_Item1(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::Tuple_2<System::Int32Enum,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<System::Int32Enum,T2>::__set_m_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 System::Tuple_2<System::Int32Enum,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Int32Enum System::Tuple_2<System::Int32Enum,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,T2>>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(instance), ___internal_method);
}
 T2 System::Tuple_2<System::Int32Enum,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,T2>>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Tuple_2<System::Int32Enum,T2> System::Tuple_2<System::Int32Enum,T2>::New_ctor(System::Int32Enum item1, T2 item2)  {
System::Tuple_2<System::Int32Enum,T2> o{THROW_UNLESS(::il2cpp_utils::New<System::Tuple_2<System::Int32Enum,T2>>(item1, item2))};
return o;
}
 void System::Tuple_2<System::Int32Enum,T2>::_ctor(System::Int32Enum item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item1, item2);
}
 bool System::Tuple_2<System::Int32Enum,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Tuple_2<System::Int32Enum,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<System::Int32Enum,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Tuple_2<System::Int32Enum,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<System::Int32Enum,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Tuple_2<System::Int32Enum,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 ::StringW System::Tuple_2<System::Int32Enum,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Tuple_2<System::Int32Enum,T2>::System_ITupleInternal_ToString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,T2>>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 int32_t System::Tuple_2<System::Int32Enum,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Tuple_2<System::Int32Enum,System::Int32Enum>.get_Item1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Int32Enum (System::Tuple_2<System::Int32Enum,System::Int32Enum>::*)()>(&System::Tuple_2<System::Int32Enum,System::Int32Enum>::get_Item1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Tuple_2<System::Int32Enum,System::Int32Enum>.get_Item2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Int32Enum (System::Tuple_2<System::Int32Enum,System::Int32Enum>::*)()>(&System::Tuple_2<System::Int32Enum,System::Int32Enum>::get_Item2)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Tuple_2<System::Int32Enum,System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Tuple_2<System::Int32Enum,System::Int32Enum>::*)(System::Int32Enum, System::Int32Enum)>(&System::Tuple_2<System::Int32Enum,System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Tuple_2<System::Int32Enum,System::Int32Enum>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Tuple_2<System::Int32Enum,System::Int32Enum>::*)(::bs_hook::Il2CppWrapperType)>(&System::Tuple_2<System::Int32Enum,System::Int32Enum>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Tuple_2<System::Int32Enum,System::Int32Enum>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Tuple_2<System::Int32Enum,System::Int32Enum>.System_Collections_IStructuralEquatable_Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Tuple_2<System::Int32Enum,System::Int32Enum>::*)(::bs_hook::Il2CppWrapperType, System::Collections::IEqualityComparer)>(&System::Tuple_2<System::Int32Enum,System::Int32Enum>::System_Collections_IStructuralEquatable_Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Tuple_2<System::Int32Enum,System::Int32Enum>.System_IComparable_CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Tuple_2<System::Int32Enum,System::Int32Enum>::*)(::bs_hook::Il2CppWrapperType)>(&System::Tuple_2<System::Int32Enum,System::Int32Enum>::System_IComparable_CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Tuple_2<System::Int32Enum,System::Int32Enum>.System_Collections_IStructuralComparable_CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Tuple_2<System::Int32Enum,System::Int32Enum>::*)(::bs_hook::Il2CppWrapperType, System::Collections::IComparer)>(&System::Tuple_2<System::Int32Enum,System::Int32Enum>::System_Collections_IStructuralComparable_CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Tuple_2<System::Int32Enum,System::Int32Enum>.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Tuple_2<System::Int32Enum,System::Int32Enum>::*)()>(&System::Tuple_2<System::Int32Enum,System::Int32Enum>::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Tuple_2<System::Int32Enum,System::Int32Enum>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Tuple_2<System::Int32Enum,System::Int32Enum>.System_Collections_IStructuralEquatable_GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Tuple_2<System::Int32Enum,System::Int32Enum>::*)(System::Collections::IEqualityComparer)>(&System::Tuple_2<System::Int32Enum,System::Int32Enum>::System_Collections_IStructuralEquatable_GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Tuple_2<System::Int32Enum,System::Int32Enum>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Tuple_2<System::Int32Enum,System::Int32Enum>::*)()>(&System::Tuple_2<System::Int32Enum,System::Int32Enum>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Tuple_2<System::Int32Enum,System::Int32Enum>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Tuple_2<System::Int32Enum,System::Int32Enum>.System_ITupleInternal_ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Tuple_2<System::Int32Enum,System::Int32Enum>::*)(System::Text::StringBuilder)>(&System::Tuple_2<System::Int32Enum,System::Int32Enum>::System_ITupleInternal_ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Tuple_2<System::Int32Enum,System::Int32Enum>.System_Runtime_CompilerServices_ITuple_get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Tuple_2<System::Int32Enum,System::Int32Enum>::*)()>(&System::Tuple_2<System::Int32Enum,System::Int32Enum>::System_Runtime_CompilerServices_ITuple_get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::Tuple_2<System::Int32Enum,System::Int32Enum>::operator System::Collections::IStructuralEquatable() const noexcept {
return System::Collections::IStructuralEquatable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::Tuple_2<System::Int32Enum,System::Int32Enum>::operator System::Collections::IStructuralComparable() const noexcept {
return System::Collections::IStructuralComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  System::Tuple_2<System::Int32Enum,System::Int32Enum>::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ITupleInternal
constexpr  System::Tuple_2<System::Int32Enum,System::Int32Enum>::operator System::ITupleInternal() const noexcept {
return System::ITupleInternal(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::Tuple_2<System::Int32Enum,System::Int32Enum>::operator System::Runtime::CompilerServices::ITuple() const noexcept {
return System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<System::Int32Enum,System::Int32Enum>::__set_m_Item1(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::Tuple_2<System::Int32Enum,System::Int32Enum>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<System::Int32Enum,System::Int32Enum>::__set_m_Item2(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum System::Tuple_2<System::Int32Enum,System::Int32Enum>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Int32Enum System::Tuple_2<System::Int32Enum,System::Int32Enum>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Int32Enum System::Tuple_2<System::Int32Enum,System::Int32Enum>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Tuple_2<System::Int32Enum,System::Int32Enum> System::Tuple_2<System::Int32Enum,System::Int32Enum>::New_ctor(System::Int32Enum item1, System::Int32Enum item2)  {
System::Tuple_2<System::Int32Enum,System::Int32Enum> o{THROW_UNLESS(::il2cpp_utils::New<System::Tuple_2<System::Int32Enum,System::Int32Enum>>(item1, item2))};
return o;
}
 void System::Tuple_2<System::Int32Enum,System::Int32Enum>::_ctor(System::Int32Enum item1, System::Int32Enum item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item1, item2);
}
 bool System::Tuple_2<System::Int32Enum,System::Int32Enum>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Tuple_2<System::Int32Enum,System::Int32Enum>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<System::Int32Enum,System::Int32Enum>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Tuple_2<System::Int32Enum,System::Int32Enum>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<System::Int32Enum,System::Int32Enum>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Tuple_2<System::Int32Enum,System::Int32Enum>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 ::StringW System::Tuple_2<System::Int32Enum,System::Int32Enum>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Tuple_2<System::Int32Enum,System::Int32Enum>::System_ITupleInternal_ToString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 int32_t System::Tuple_2<System::Int32Enum,System::Int32Enum>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Int32Enum,System::Int32Enum>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::Tuple_2<System::Guid,T2>::operator System::Collections::IStructuralEquatable() const noexcept {
return System::Collections::IStructuralEquatable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::Tuple_2<System::Guid,T2>::operator System::Collections::IStructuralComparable() const noexcept {
return System::Collections::IStructuralComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  System::Tuple_2<System::Guid,T2>::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ITupleInternal
constexpr  System::Tuple_2<System::Guid,T2>::operator System::ITupleInternal() const noexcept {
return System::ITupleInternal(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::Tuple_2<System::Guid,T2>::operator System::Runtime::CompilerServices::ITuple() const noexcept {
return System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<System::Guid,T2>::__set_m_Item1(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Guid>(value));
}
constexpr System::Guid System::Tuple_2<System::Guid,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<System::Guid,T2>::__set_m_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 System::Tuple_2<System::Guid,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Guid System::Tuple_2<System::Guid,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Guid,T2>>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Guid, false>(const_cast<void*>(instance), ___internal_method);
}
 T2 System::Tuple_2<System::Guid,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Guid,T2>>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Tuple_2<System::Guid,T2> System::Tuple_2<System::Guid,T2>::New_ctor(System::Guid item1, T2 item2)  {
System::Tuple_2<System::Guid,T2> o{THROW_UNLESS(::il2cpp_utils::New<System::Tuple_2<System::Guid,T2>>(item1, item2))};
return o;
}
 void System::Tuple_2<System::Guid,T2>::_ctor(System::Guid item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Guid,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item1, item2);
}
 bool System::Tuple_2<System::Guid,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Guid,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Tuple_2<System::Guid,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Guid,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<System::Guid,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Guid,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Tuple_2<System::Guid,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Guid,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<System::Guid,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Guid,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Tuple_2<System::Guid,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Guid,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 ::StringW System::Tuple_2<System::Guid,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Guid,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Tuple_2<System::Guid,T2>::System_ITupleInternal_ToString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Guid,T2>>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 int32_t System::Tuple_2<System::Guid,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<System::Guid,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::Tuple_2<T1,T2>::operator System::Collections::IStructuralEquatable() const noexcept {
return System::Collections::IStructuralEquatable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::Tuple_2<T1,T2>::operator System::Collections::IStructuralComparable() const noexcept {
return System::Collections::IStructuralComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  System::Tuple_2<T1,T2>::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ITupleInternal
constexpr  System::Tuple_2<T1,T2>::operator System::ITupleInternal() const noexcept {
return System::ITupleInternal(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::Tuple_2<T1,T2>::operator System::Runtime::CompilerServices::ITuple() const noexcept {
return System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<T1,T2>::__set_m_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T1>(value));
}
constexpr T1 System::Tuple_2<T1,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<T1,T2>::__set_m_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 System::Tuple_2<T1,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T1 System::Tuple_2<T1,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(const_cast<void*>(instance), ___internal_method);
}
 T2 System::Tuple_2<T1,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Tuple_2<T1,T2> System::Tuple_2<T1,T2>::New_ctor(T1 item1, T2 item2)  {
System::Tuple_2<T1,T2> o{THROW_UNLESS(::il2cpp_utils::New<System::Tuple_2<T1,T2>>(item1, item2))};
return o;
}
 void System::Tuple_2<T1,T2>::_ctor(T1 item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item1, item2);
}
 bool System::Tuple_2<T1,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<T1,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 ::StringW System::Tuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Tuple_2<T1,T2>::System_ITupleInternal_ToString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 int32_t System::Tuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::IStructuralEquatable
constexpr  System::Tuple_2<T1,T2>::operator System::Collections::IStructuralEquatable() const noexcept {
return System::Collections::IStructuralEquatable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IStructuralComparable
constexpr  System::Tuple_2<T1,T2>::operator System::Collections::IStructuralComparable() const noexcept {
return System::Collections::IStructuralComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  System::Tuple_2<T1,T2>::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ITupleInternal
constexpr  System::Tuple_2<T1,T2>::operator System::ITupleInternal() const noexcept {
return System::ITupleInternal(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::Tuple_2<T1,T2>::operator System::Runtime::CompilerServices::ITuple() const noexcept {
return System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<T1,T2>::__set_m_Item1(T1 value)  {
::cordl_internals::setInstanceField<T1, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T1>(value));
}
constexpr T1 System::Tuple_2<T1,T2>::__get_m_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Tuple_2<T1,T2>::__set_m_Item2(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 System::Tuple_2<T1,T2>::__get_m_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T1 System::Tuple_2<T1,T2>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "get_Item1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(const_cast<void*>(instance), ___internal_method);
}
 T2 System::Tuple_2<T1,T2>::get_Item2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "get_Item2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T2, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Tuple_2<T1,T2> System::Tuple_2<T1,T2>::New_ctor(T1 item1, T2 item2)  {
System::Tuple_2<T1,T2> o{THROW_UNLESS(::il2cpp_utils::New<System::Tuple_2<T1,T2>>(item1, item2))};
return o;
}
 void System::Tuple_2<T1,T2>::_ctor(T1 item1, T2 item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item1, item2);
}
 bool System::Tuple_2<T1,T2>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<T1,T2>::System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "System.IComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralComparable_CompareTo(::bs_hook::Il2CppWrapperType other, System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralComparable.CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
 int32_t System::Tuple_2<T1,T2>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Tuple_2<T1,T2>::System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "System.Collections.IStructuralEquatable.GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 ::StringW System::Tuple_2<T1,T2>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Tuple_2<T1,T2>::System_ITupleInternal_ToString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "System.ITupleInternal.ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 int32_t System::Tuple_2<T1,T2>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Tuple_2<T1,T2>>::get(),
                            "System.Runtime.CompilerServices.ITuple.get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
