#pragma once
namespace {
#include "Org/BouncyCastle/Cmp/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultSignatureAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusInfo_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultDigestAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertStatus_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateStatus._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::CertificateStatus::*)(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder, ::Org::BouncyCastle::Asn1::Cmp::CertStatus)>(&::Org::BouncyCastle::Cmp::CertificateStatus::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x114b35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::CertStatus>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateStatus.get_PkiStatusInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo (::Org::BouncyCastle::Cmp::CertificateStatus::*)()>(&::Org::BouncyCastle::Cmp::CertificateStatus::get_PkiStatusInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x114bae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus>::get(),
                            "get_PkiStatusInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateStatus.get_CertRequestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Cmp::CertificateStatus::*)()>(&::Org::BouncyCastle::Cmp::CertificateStatus::get_CertRequestId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x114bb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus>::get(),
                            "get_CertRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateStatus.IsVerified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cmp::CertificateStatus::*)(::Org::BouncyCastle::X509::X509Certificate)>(&::Org::BouncyCastle::Cmp::CertificateStatus::IsVerified)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x114bb34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus>::get(),
                            "IsVerified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Cmp::CertificateStatus::__set_sigAlgFinder(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder, "sigAlgFinder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus>::get>(std::forward<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>(value));
}
 ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder ::Org::BouncyCastle::Cmp::CertificateStatus::__get_sigAlgFinder()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder, "sigAlgFinder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus>::get>();
}
constexpr void ::Org::BouncyCastle::Cmp::CertificateStatus::__set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder>(value));
}
constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder ::Org::BouncyCastle::Cmp::CertificateStatus::__get_digestAlgFinder() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cmp::CertificateStatus::__set_certStatus(::Org::BouncyCastle::Asn1::Cmp::CertStatus value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cmp::CertStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::Cmp::CertStatus>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertStatus ::Org::BouncyCastle::Cmp::CertificateStatus::__get_certStatus() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cmp::CertStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "digestAlgFinder", ty: "::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder", modifiers: "", def_value: None }, CppParam { name: "certStatus", ty: "::Org::BouncyCastle::Asn1::Cmp::CertStatus", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cmp::CertificateStatus::CertificateStatus(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder digestAlgFinder, ::Org::BouncyCastle::Asn1::Cmp::CertStatus certStatus)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CertificateStatus>(digestAlgFinder, certStatus))) {}
 void ::Org::BouncyCastle::Cmp::CertificateStatus::_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder digestAlgFinder, ::Org::BouncyCastle::Asn1::Cmp::CertStatus certStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::CertStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digestAlgFinder, certStatus);
}
 ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo ::Org::BouncyCastle::Cmp::CertificateStatus::get_PkiStatusInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus>::get(),
                            "get_PkiStatusInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Cmp::CertificateStatus::get_CertRequestId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus>::get(),
                            "get_CertRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Org::BouncyCastle::Cmp::CertificateStatus::IsVerified(::Org::BouncyCastle::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus>::get(),
                            "IsVerified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, cert);
}
} // end anonymous namespace
