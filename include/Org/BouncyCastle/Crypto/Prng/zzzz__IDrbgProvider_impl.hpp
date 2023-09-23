#pragma once
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IDrbgProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__ISP80090Drbg_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::IDrbgProvider.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg (Org::BouncyCastle::Crypto::Prng::IDrbgProvider::*)(Org::BouncyCastle::Crypto::IEntropySource)>(&Org::BouncyCastle::Crypto::Prng::IDrbgProvider::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Prng::IDrbgProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::IDrbgProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg Org::BouncyCastle::Crypto::Prng::IDrbgProvider::Get(Org::BouncyCastle::Crypto::IEntropySource entropySource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::IDrbgProvider>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IEntropySource>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg, false>(const_cast<void*>(instance), ___internal_method, entropySource);
}
