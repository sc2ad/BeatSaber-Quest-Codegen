#pragma once
#include "Org/BouncyCastle/Math/Field/zzzz__PrimeField_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::Field::PrimeField._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::Field::PrimeField::*)(Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::Field::PrimeField::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xfce2d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::Field::PrimeField>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::Field::PrimeField.get_Characteristic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Math::Field::PrimeField::*)()>(&Org::BouncyCastle::Math::Field::PrimeField::get_Characteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfce95c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::Field::PrimeField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::Field::PrimeField>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::Field::PrimeField.get_Dimension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Math::Field::PrimeField::*)()>(&Org::BouncyCastle::Math::Field::PrimeField::get_Dimension)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfce964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::Field::PrimeField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::Field::PrimeField>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::Field::PrimeField.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::Field::PrimeField::*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Math::Field::PrimeField::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xfce96c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::Field::PrimeField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::Field::PrimeField>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::Field::PrimeField.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Math::Field::PrimeField::*)()>(&Org::BouncyCastle::Math::Field::PrimeField::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xfcea20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::Field::PrimeField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::Field::PrimeField>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Math::Field::IFiniteField
constexpr  Org::BouncyCastle::Math::Field::PrimeField::operator Org::BouncyCastle::Math::Field::IFiniteField() const noexcept {
return Org::BouncyCastle::Math::Field::IFiniteField(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::Field::PrimeField::__set_characteristic(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Math::Field::PrimeField::__get_characteristic() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "characteristic", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
 Org::BouncyCastle::Math::Field::PrimeField::PrimeField(Org::BouncyCastle::Math::BigInteger characteristic)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PrimeField>(characteristic))) {}
 void Org::BouncyCastle::Math::Field::PrimeField::_ctor(Org::BouncyCastle::Math::BigInteger characteristic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::Field::PrimeField>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, characteristic);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Math::Field::PrimeField::get_Characteristic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::Field::PrimeField>::get(),
                            "get_Characteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Math::Field::PrimeField::get_Dimension()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::Field::PrimeField>::get(),
                            "get_Dimension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Math::Field::PrimeField::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::Field::PrimeField>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t Org::BouncyCastle::Math::Field::PrimeField::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::Field::PrimeField>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
