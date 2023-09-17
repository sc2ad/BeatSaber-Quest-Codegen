#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__X25519KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::*)(::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xead7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "random", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::X25519KeyGenerationParameters(::Org::BouncyCastle::Security::SecureRandom random)  : ::Org::BouncyCastle::Crypto::KeyGenerationParameters(THROW_UNLESS(::il2cpp_utils::New<X25519KeyGenerationParameters>(random))) {}
 void ::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::_ctor(::Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, random);
}
} // end anonymous namespace