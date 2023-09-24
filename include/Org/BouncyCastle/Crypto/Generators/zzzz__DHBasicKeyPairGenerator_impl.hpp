#pragma once
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DHBasicKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::*)(Org::BouncyCastle::Crypto::KeyGenerationParameters)>(&Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::Init)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe6b128;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator.GenerateKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair (Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::GenerateKeyPair)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xe6b1cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe6b4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr  Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::operator Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept {
return Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::__set_param(Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::__get_param() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::Init(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::GenerateKeyPair()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator>::get(),
                            "GenerateKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::New_ctor()  {
Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator>())};
return o;
}
 void Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
