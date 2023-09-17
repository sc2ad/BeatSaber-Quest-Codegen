#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Generators/zzzz__X448KeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::*)(::Org::BouncyCastle::Crypto::KeyGenerationParameters)>(&::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::Init)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe7aef8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator.GenerateKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair (::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::GenerateKeyPair)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe7af14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe7afc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr  ::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept {
return ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::__set_random(::Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Security::SecureRandom, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom ::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::__get_random() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Security::SecureRandom, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::KeyGenerationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair ::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::GenerateKeyPair()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator>::get(),
                            "GenerateKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::X448KeyPairGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<X448KeyPairGenerator>())) {}
 void ::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::X448KeyPairGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
