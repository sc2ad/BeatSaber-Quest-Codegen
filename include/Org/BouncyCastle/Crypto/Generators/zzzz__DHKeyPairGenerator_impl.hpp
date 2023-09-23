#pragma once
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DHKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::*)(Org::BouncyCastle::Crypto::KeyGenerationParameters)>(&Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::Init)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe6b56c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator.GenerateKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair (Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::GenerateKeyPair)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xe6b610;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe6b74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr  Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::operator Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept {
return Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::__set_param(Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::__get_param() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::Init(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::GenerateKeyPair()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator>::get(),
                            "GenerateKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::DHKeyPairGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DHKeyPairGenerator>())) {}
 void Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
