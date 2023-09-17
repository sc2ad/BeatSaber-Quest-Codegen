#pragma once
namespace {
#include "Org/BouncyCastle/Crmf/zzzz__IPKMacPrimitivesProvider_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider.CreateDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest (::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider::CreateDigest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider.CreateMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IMac (::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider::CreateMac)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::Org::BouncyCastle::Crypto::IDigest ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider::CreateDigest(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider>::get(),
                            "CreateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest, false>(const_cast<void*>(instance), ___internal_method, digestAlg);
}
 ::Org::BouncyCastle::Crypto::IMac ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider::CreateMac(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier macAlg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider>::get(),
                            "CreateMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac, false>(const_cast<void*>(instance), ___internal_method, macAlg);
}
} // end anonymous namespace
