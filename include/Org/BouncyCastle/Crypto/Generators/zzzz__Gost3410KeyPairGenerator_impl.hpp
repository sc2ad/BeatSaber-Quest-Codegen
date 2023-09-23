#pragma once
#include "Org/BouncyCastle/Crypto/Generators/zzzz__Gost3410KeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::*)(Org::BouncyCastle::Crypto::KeyGenerationParameters)>(&Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xe6e55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator.GenerateKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair (Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::GenerateKeyPair)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xe6e67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator>::get(),
                            "GenerateKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe6e8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr  Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::operator Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept {
return Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::__set_param(Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::__get_param() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::Init(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::GenerateKeyPair()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator>::get(),
                            "GenerateKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::Gost3410KeyPairGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Gost3410KeyPairGenerator>())) {}
 void Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
