#pragma once
#include "Org/BouncyCastle/Crypto/Generators/zzzz__BaseKdfBytesGenerator_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__Kdf1BytesGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator::*)(Org::BouncyCastle::Crypto::IDigest)>(&Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe711bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator::New_ctor(Org::BouncyCastle::Crypto::IDigest digest)  {
Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator>(digest))};
return o;
}
 void Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator::_ctor(Org::BouncyCastle::Crypto::IDigest digest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digest);
}
