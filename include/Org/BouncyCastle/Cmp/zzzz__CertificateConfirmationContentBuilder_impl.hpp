#pragma once
#include "Org/BouncyCastle/Cmp/zzzz__CertificateConfirmationContentBuilder_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__CertificateConfirmationContent_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultDigestAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultSignatureAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::*)()>(&Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x114b388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::*)(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder)>(&Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x114b3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder.AddAcceptedCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder (Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::*)(Org::BouncyCastle::X509::X509Certificate, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::AddAcceptedCertificate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x114b470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder>::get(),
                            "AddAcceptedCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::CertificateConfirmationContent (Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::*)()>(&Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::Build)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x114b598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__set_sigAlgFinder(Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder, "sigAlgFinder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder>::get>(std::forward<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>(value));
}
 Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__get_sigAlgFinder()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder, "sigAlgFinder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder>::get>();
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__set_digestAlgFinder(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder>(value));
}
constexpr Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__get_digestAlgFinder() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__set_acceptedCerts(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__get_acceptedCerts() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__set_acceptedReqIds(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__get_acceptedReqIds() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::CertificateConfirmationContentBuilder()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CertificateConfirmationContentBuilder>())) {}
 void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "digestAlgFinder", ty: "Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::CertificateConfirmationContentBuilder(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder digestAlgFinder)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CertificateConfirmationContentBuilder>(digestAlgFinder))) {}
 void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::_ctor(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder digestAlgFinder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digestAlgFinder);
}
 Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::AddAcceptedCertificate(Org::BouncyCastle::X509::X509Certificate certHolder, Org::BouncyCastle::Math::BigInteger certReqId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder>::get(),
                            "AddAcceptedCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder, false>(const_cast<void*>(instance), ___internal_method, certHolder, certReqId);
}
 Org::BouncyCastle::Cmp::CertificateConfirmationContent Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::Build()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::CertificateConfirmationContent, false>(const_cast<void*>(instance), ___internal_method);
}
