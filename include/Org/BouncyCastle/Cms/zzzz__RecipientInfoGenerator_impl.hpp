#pragma once
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientInfo_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::RecipientInfoGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cms::RecipientInfo (Org::BouncyCastle::Cms::RecipientInfoGenerator::*)(Org::BouncyCastle::Crypto::Parameters::KeyParameter, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Cms::RecipientInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::RecipientInfoGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInfoGenerator>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Asn1::Cms::RecipientInfo Org::BouncyCastle::Cms::RecipientInfoGenerator::Generate(Org::BouncyCastle::Crypto::Parameters::KeyParameter contentEncryptionKey, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInfoGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cms::RecipientInfo, false>(const_cast<void*>(instance), ___internal_method, contentEncryptionKey, random);
}
