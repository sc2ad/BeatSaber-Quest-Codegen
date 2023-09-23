#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDsaSigner_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDssSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsDssSigner.IsValidPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Tls::TlsDssSigner::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::Crypto::Tls::TlsDssSigner::IsValidPublicKey)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xf19d8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsDssSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDssSigner>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsDssSigner.CreateDsaImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IDsa (Org::BouncyCastle::Crypto::Tls::TlsDssSigner::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Tls::TlsDssSigner::CreateDsaImpl)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xf19e04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsDssSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDssSigner>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsDssSigner.get_SignatureAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Org::BouncyCastle::Crypto::Tls::TlsDssSigner::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsDssSigner::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf19ed0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsDssSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDssSigner>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsDssSigner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsDssSigner::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsDssSigner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf16b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDssSigner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool Org::BouncyCastle::Crypto::Tls::TlsDssSigner::IsValidPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDssSigner>::get(),
                            "IsValidPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, publicKey);
}
 Org::BouncyCastle::Crypto::IDsa Org::BouncyCastle::Crypto::Tls::TlsDssSigner::CreateDsaImpl(uint8_t hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDssSigner>::get(),
                            "CreateDsaImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IDsa, false>(const_cast<void*>(instance), ___internal_method, hashAlgorithm);
}
 uint8_t Org::BouncyCastle::Crypto::Tls::TlsDssSigner::get_SignatureAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDssSigner>::get(),
                            "get_SignatureAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Tls::TlsDssSigner::TlsDssSigner()  : Org::BouncyCastle::Crypto::Tls::TlsDsaSigner(THROW_UNLESS(::il2cpp_utils::New<TlsDssSigner>())) {}
 void Org::BouncyCastle::Crypto::Tls::TlsDssSigner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDssSigner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
