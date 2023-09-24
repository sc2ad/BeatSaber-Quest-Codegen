#pragma once
#include "Org/BouncyCastle/Crmf/zzzz__DefaultPKMacPrimitivesProvider_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IPKMacPrimitivesProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider.CreateDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IDigest (Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::CreateDigest)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x11855a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider>::get(),
                            "CreateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider.CreateMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IMac (Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::CreateMac)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1185620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider>::get(),
                            "CreateMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::*)()>(&Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1185698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider
constexpr  Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::operator Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider() const noexcept {
return Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider(::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::IDigest Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::CreateDigest(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider>::get(),
                            "CreateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IDigest, false>(const_cast<void*>(instance), ___internal_method, digestAlg);
}
 Org::BouncyCastle::Crypto::IMac Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::CreateMac(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier macAlg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider>::get(),
                            "CreateMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IMac, false>(const_cast<void*>(instance), ___internal_method, macAlg);
}
 Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::New_ctor()  {
Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider>())};
return o;
}
 void Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
