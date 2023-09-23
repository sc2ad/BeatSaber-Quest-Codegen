#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContextImpl_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SecurityParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::*)(Org::BouncyCastle::Security::SecureRandom, Org::BouncyCastle::Crypto::Tls::SecurityParameters)>(&Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xf2562c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::SecurityParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl.get_IsServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::get_IsServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf2569c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsServerContext
constexpr  Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::operator Org::BouncyCastle::Crypto::Tls::TlsServerContext() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsServerContext(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsContext
constexpr  Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::operator Org::BouncyCastle::Crypto::Tls::TlsContext() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsContext(::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "securityParameters", ty: "Org::BouncyCastle::Crypto::Tls::SecurityParameters", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::TlsServerContextImpl(Org::BouncyCastle::Security::SecureRandom secureRandom, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters)  : Org::BouncyCastle::Crypto::Tls::AbstractTlsContext(THROW_UNLESS(::il2cpp_utils::New<TlsServerContextImpl>(secureRandom, securityParameters))) {}
 void Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::_ctor(Org::BouncyCastle::Security::SecureRandom secureRandom, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::SecurityParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, secureRandom, securityParameters);
}
 bool Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::get_IsServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl>::get(),
                            "get_IsServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
