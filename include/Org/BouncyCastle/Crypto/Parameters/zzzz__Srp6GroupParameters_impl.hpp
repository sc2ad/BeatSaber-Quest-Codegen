#pragma once
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xead6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters.get_G
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::get_G)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xead724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>::get(),
                            "get_G",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters.get_N
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::get_N)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xead72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>::get(),
                            "get_N",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::__set_n(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::__get_n() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::__set_g(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::__get_g() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "N", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::Srp6GroupParameters(Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger g)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Srp6GroupParameters>(N, g))) {}
 void Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::_ctor(Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger g)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, N, g);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::get_G()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>::get(),
                            "get_G",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters::get_N()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>::get(),
                            "get_N",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
