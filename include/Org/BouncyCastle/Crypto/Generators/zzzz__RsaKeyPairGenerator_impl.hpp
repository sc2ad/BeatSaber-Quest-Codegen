#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Generators/zzzz__RsaKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::*)(::Org::BouncyCastle::Crypto::KeyGenerationParameters)>(&::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::Init)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xe79a00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator.GenerateKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair (::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::GenerateKeyPair)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xe79b14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator.ChooseRandomPrime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::*)(int32_t, ::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::ChooseRandomPrime)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xe79e80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe7a1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr  ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept {
return ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator(::bs_hook::Il2CppWrapperType::instance);
}
 void ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__set_SPECIAL_E_VALUES(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "SPECIAL_E_VALUES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__get_SPECIAL_E_VALUES()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "SPECIAL_E_VALUES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get>();
}
 void ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__set_SPECIAL_E_HIGHEST(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "SPECIAL_E_HIGHEST", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get>(std::forward<int32_t>(value));
}
 int32_t ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__get_SPECIAL_E_HIGHEST()  {
return ::cordl_internals::getStaticField<int32_t, "SPECIAL_E_HIGHEST", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get>();
}
 void ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__set_SPECIAL_E_BITS(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "SPECIAL_E_BITS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get>(std::forward<int32_t>(value));
}
 int32_t ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__get_SPECIAL_E_BITS()  {
return ::cordl_internals::getStaticField<int32_t, "SPECIAL_E_BITS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get>();
}
 void ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__set_One(::Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger, "One", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get>(std::forward<::Org::BouncyCastle::Math::BigInteger>(value));
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__get_One()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger, "One", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get>();
}
 void ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__set_DefaultPublicExponent(::Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger, "DefaultPublicExponent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get>(std::forward<::Org::BouncyCastle::Math::BigInteger>(value));
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__get_DefaultPublicExponent()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger, "DefaultPublicExponent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get>();
}
constexpr void ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__set_parameters(::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::__get_parameters() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::KeyGenerationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::GenerateKeyPair()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get(),
                            "GenerateKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::ChooseRandomPrime(int32_t bitlength, ::Org::BouncyCastle::Math::BigInteger e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get(),
                            "ChooseRandomPrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, bitlength, e);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::RsaKeyPairGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RsaKeyPairGenerator>())) {}
 void ::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
