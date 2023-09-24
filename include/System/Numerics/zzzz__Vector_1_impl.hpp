#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/Numerics/zzzz__Register_def.hpp"
// Ctor Parameters [CppParam { name: "_placeholder", ty: "System::Numerics::Vector_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_byte", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Numerics::System__Numerics__Vector_1__VectorSizeHelper::System__Numerics__Vector_1__VectorSizeHelper(System::Numerics::Vector_1<T> _placeholder, uint8_t _byte) noexcept : ::bs_hook::ValueTypeWrapper() {this->_placeholder = _placeholder;
this->_byte = _byte;
}
constexpr void System::Numerics::System__Numerics__Vector_1__VectorSizeHelper::__set__placeholder(System::Numerics::Vector_1<T> value)  {
::cordl_internals::setInstanceField<System::Numerics::Vector_1<T>, 0x0>(this->__instance, std::forward<System::Numerics::Vector_1<T>>(value));
}
constexpr System::Numerics::Vector_1<T> System::Numerics::System__Numerics__Vector_1__VectorSizeHelper::__get__placeholder() const {
return ::cordl_internals::getInstanceField<System::Numerics::Vector_1<T>, 0x0>(this->__instance);
}
constexpr void System::Numerics::System__Numerics__Vector_1__VectorSizeHelper::__set__byte(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x8>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Numerics::System__Numerics__Vector_1__VectorSizeHelper::__get__byte() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x8>(this->__instance);
}
/// @brief Convert operator to System::IEquatable_1<System::Numerics::Vector_1<T>>
constexpr  System::Numerics::Vector_1<T>::operator System::IEquatable_1<System::Numerics::Vector_1<T>>() const {
return System::IEquatable_1<System::Numerics::Vector_1<T>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IFormattable
constexpr  System::Numerics::Vector_1<T>::operator System::IFormattable() const {
return System::IFormattable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "register", ty: "System::Numerics::Register", modifiers: "", def_value: Some("{}") }]
constexpr System::Numerics::Vector_1<T>::Vector_1(System::Numerics::Register register) noexcept : ::bs_hook::ValueTypeWrapper() {this->register = register;
}
constexpr void System::Numerics::Vector_1<T>::__set_register(System::Numerics::Register value)  {
::cordl_internals::setInstanceField<System::Numerics::Register, 0x0>(this->__instance, std::forward<System::Numerics::Register>(value));
}
constexpr System::Numerics::Register System::Numerics::Vector_1<T>::__get_register() const {
return ::cordl_internals::getInstanceField<System::Numerics::Register, 0x0>(this->__instance);
}
 void System::Numerics::Vector_1<T>::__set_s_count(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>(std::forward<int32_t>(value));
}
 int32_t System::Numerics::Vector_1<T>::__get_s_count()  {
return ::cordl_internals::getStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>();
}
 void System::Numerics::Vector_1<T>::__set_s_zero(System::Numerics::Vector_1<T> value)  {
::cordl_internals::setStaticField<System::Numerics::Vector_1<T>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>(std::forward<System::Numerics::Vector_1<T>>(value));
}
 System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::__get_s_zero()  {
return ::cordl_internals::getStaticField<System::Numerics::Vector_1<T>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>();
}
 void System::Numerics::Vector_1<T>::__set_s_one(System::Numerics::Vector_1<T> value)  {
::cordl_internals::setStaticField<System::Numerics::Vector_1<T>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>(std::forward<System::Numerics::Vector_1<T>>(value));
}
 System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::__get_s_one()  {
return ::cordl_internals::getStaticField<System::Numerics::Vector_1<T>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>();
}
 void System::Numerics::Vector_1<T>::__set_s_allOnes(System::Numerics::Vector_1<T> value)  {
::cordl_internals::setStaticField<System::Numerics::Vector_1<T>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>(std::forward<System::Numerics::Vector_1<T>>(value));
}
 System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::__get_s_allOnes()  {
return ::cordl_internals::getStaticField<System::Numerics::Vector_1<T>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>();
}
 int32_t System::Numerics::Vector_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::get_Zero()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "get_Zero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<T>, false>(nullptr, ___internal_method);
}
 int32_t System::Numerics::Vector_1<T>::InitializeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "InitializeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void System::Numerics::Vector_1<T>::_ctor(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void System::Numerics::Vector_1<T>::_ctor(void* dataPointer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dataPointer);
}
 void System::Numerics::Vector_1<T>::_ctor(void* dataPointer, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dataPointer, offset);
}
 void System::Numerics::Vector_1<T>::_ctor(ByRef<System::Numerics::Register> existingRegister)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Numerics::Register>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, existingRegister);
}
 T System::Numerics::Vector_1<T>::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 bool System::Numerics::Vector_1<T>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::Numerics::Vector_1<T>::Equals(System::Numerics::Vector_1<T> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::Numerics::Vector_1<T>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Numerics::Vector_1<T>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Numerics::Vector_1<T>::ToString(::StringW format, System::IFormatProvider formatProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, format, formatProvider);
}
 bool System::Numerics::Vector_1<T>::op_Equality(System::Numerics::Vector_1<T> left, System::Numerics::Vector_1<T> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool System::Numerics::Vector_1<T>::op_Inequality(System::Numerics::Vector_1<T> left, System::Numerics::Vector_1<T> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<T>::op_Explicit_System__Numerics__Vector_1_uint64_t_(System::Numerics::Vector_1<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method, value);
}
 System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::Equals(System::Numerics::Vector_1<T> left, System::Numerics::Vector_1<T> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<T>, false>(nullptr, ___internal_method, left, right);
}
 bool System::Numerics::Vector_1<T>::ScalarEquals(T left, T right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "ScalarEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 T System::Numerics::Vector_1<T>::GetOneValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "GetOneValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
 T System::Numerics::Vector_1<T>::GetAllBitsSetValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "GetAllBitsSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
/// @brief Convert operator to System::IEquatable_1<System::Numerics::Vector_1<T>>
constexpr  System::Numerics::Vector_1<T>::operator System::IEquatable_1<System::Numerics::Vector_1<T>>() const {
return System::IEquatable_1<System::Numerics::Vector_1<T>>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IFormattable
constexpr  System::Numerics::Vector_1<T>::operator System::IFormattable() const {
return System::IFormattable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "register", ty: "System::Numerics::Register", modifiers: "", def_value: Some("{}") }]
constexpr System::Numerics::Vector_1<T>::Vector_1(System::Numerics::Register register) noexcept : ::bs_hook::ValueTypeWrapper() {this->register = register;
}
constexpr void System::Numerics::Vector_1<T>::__set_register(System::Numerics::Register value)  {
::cordl_internals::setInstanceField<System::Numerics::Register, 0x0>(this->__instance, std::forward<System::Numerics::Register>(value));
}
constexpr System::Numerics::Register System::Numerics::Vector_1<T>::__get_register() const {
return ::cordl_internals::getInstanceField<System::Numerics::Register, 0x0>(this->__instance);
}
 void System::Numerics::Vector_1<T>::__set_s_count(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>(std::forward<int32_t>(value));
}
 int32_t System::Numerics::Vector_1<T>::__get_s_count()  {
return ::cordl_internals::getStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>();
}
 void System::Numerics::Vector_1<T>::__set_s_zero(System::Numerics::Vector_1<T> value)  {
::cordl_internals::setStaticField<System::Numerics::Vector_1<T>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>(std::forward<System::Numerics::Vector_1<T>>(value));
}
 System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::__get_s_zero()  {
return ::cordl_internals::getStaticField<System::Numerics::Vector_1<T>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>();
}
 void System::Numerics::Vector_1<T>::__set_s_one(System::Numerics::Vector_1<T> value)  {
::cordl_internals::setStaticField<System::Numerics::Vector_1<T>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>(std::forward<System::Numerics::Vector_1<T>>(value));
}
 System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::__get_s_one()  {
return ::cordl_internals::getStaticField<System::Numerics::Vector_1<T>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>();
}
 void System::Numerics::Vector_1<T>::__set_s_allOnes(System::Numerics::Vector_1<T> value)  {
::cordl_internals::setStaticField<System::Numerics::Vector_1<T>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>(std::forward<System::Numerics::Vector_1<T>>(value));
}
 System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::__get_s_allOnes()  {
return ::cordl_internals::getStaticField<System::Numerics::Vector_1<T>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get>();
}
 int32_t System::Numerics::Vector_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::get_Zero()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "get_Zero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<T>, false>(nullptr, ___internal_method);
}
 int32_t System::Numerics::Vector_1<T>::InitializeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "InitializeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void System::Numerics::Vector_1<T>::_ctor(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void System::Numerics::Vector_1<T>::_ctor(void* dataPointer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dataPointer);
}
 void System::Numerics::Vector_1<T>::_ctor(void* dataPointer, int32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dataPointer, offset);
}
 void System::Numerics::Vector_1<T>::_ctor(ByRef<System::Numerics::Register> existingRegister)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Numerics::Register>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, existingRegister);
}
 T System::Numerics::Vector_1<T>::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 bool System::Numerics::Vector_1<T>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::Numerics::Vector_1<T>::Equals(System::Numerics::Vector_1<T> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::Numerics::Vector_1<T>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Numerics::Vector_1<T>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Numerics::Vector_1<T>::ToString(::StringW format, System::IFormatProvider formatProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, format, formatProvider);
}
 bool System::Numerics::Vector_1<T>::op_Equality(System::Numerics::Vector_1<T> left, System::Numerics::Vector_1<T> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool System::Numerics::Vector_1<T>::op_Inequality(System::Numerics::Vector_1<T> left, System::Numerics::Vector_1<T> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<T>::op_Explicit_System__Numerics__Vector_1_uint64_t_(System::Numerics::Vector_1<T> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method, value);
}
 System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::Equals(System::Numerics::Vector_1<T> left, System::Numerics::Vector_1<T> right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<T>, false>(nullptr, ___internal_method, left, right);
}
 bool System::Numerics::Vector_1<T>::ScalarEquals(T left, T right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "ScalarEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 T System::Numerics::Vector_1<T>::GetOneValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "GetOneValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
 T System::Numerics::Vector_1<T>::GetAllBitsSetValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector_1<T>>::get(),
                            "GetAllBitsSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
