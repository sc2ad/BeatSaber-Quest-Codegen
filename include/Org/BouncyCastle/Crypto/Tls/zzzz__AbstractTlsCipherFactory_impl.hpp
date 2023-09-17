#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory.CreateCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher (::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::CreateCipher)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xecb1a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecb1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory
constexpr  ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::operator ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory() const noexcept {
return ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory(::bs_hook::Il2CppWrapperType::instance);
}
 ::Org::BouncyCastle::Crypto::Tls::TlsCipher ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::CreateCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t encryptionAlgorithm, int32_t macAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory>::get(),
                            "CreateCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCipher, false>(const_cast<void*>(instance), ___internal_method, context, encryptionAlgorithm, macAlgorithm);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::AbstractTlsCipherFactory()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AbstractTlsCipherFactory>())) {}
 void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
