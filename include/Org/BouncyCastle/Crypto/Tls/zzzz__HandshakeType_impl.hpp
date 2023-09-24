#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HandshakeType_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::HandshakeType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::HandshakeType::*)()>(&Org::BouncyCastle::Crypto::Tls::HandshakeType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf042f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::HandshakeType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Crypto::Tls::HandshakeType Org::BouncyCastle::Crypto::Tls::HandshakeType::New_ctor()  {
Org::BouncyCastle::Crypto::Tls::HandshakeType o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::HandshakeType>())};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::HandshakeType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::HandshakeType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
