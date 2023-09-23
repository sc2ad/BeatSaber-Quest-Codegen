#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::IEntropySourceProvider.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IEntropySource (Org::BouncyCastle::Crypto::IEntropySourceProvider::*)(int32_t)>(&Org::BouncyCastle::Crypto::IEntropySourceProvider::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::IEntropySourceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IEntropySourceProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Crypto::IEntropySource Org::BouncyCastle::Crypto::IEntropySourceProvider::Get(int32_t bitsRequired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IEntropySourceProvider>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IEntropySource, false>(const_cast<void*>(instance), ___internal_method, bitsRequired);
}
