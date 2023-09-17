#pragma once
namespace {
#include "Org/BouncyCastle/Pkix/zzzz__Rfc3280CertPathUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCrlUtilities_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixNameConstraintValidator_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixPolicyNode_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DistributionPoint_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__ReasonsMask_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlB2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint, ::bs_hook::Il2CppWrapperType, ::Org::BouncyCastle::X509::X509Crl)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB2)> {
  constexpr static std::size_t size = 0xe10;
  constexpr static std::size_t addrs = 0x1087494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlB2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertBC
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertBC)> {
  constexpr static std::size_t size = 0xa84;
  constexpr static std::size_t addrs = 0x106b2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCertBC",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertA)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x106ddec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertD
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, ::Org::BouncyCastle::Utilities::Collections::ISet, ::Org::BouncyCastle::Pkix::PkixPolicyNode, ::ArrayW<::System::Collections::IList>, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertD)> {
  constexpr static std::size_t size = 0x1dd8;
  constexpr static std::size_t addrs = 0x106bd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCertD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlB1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint, ::bs_hook::Il2CppWrapperType, ::Org::BouncyCastle::X509::X509Crl)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB1)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x10882a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlB1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlD
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkix::ReasonsMask (*)(::Org::BouncyCastle::X509::X509Crl, ::Org::BouncyCastle::Asn1::X509::DistributionPoint)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlD)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x1088640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlF
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet (*)(::Org::BouncyCastle::X509::X509Crl, ::bs_hook::Il2CppWrapperType, ::Org::BouncyCastle::X509::X509Certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::Org::BouncyCastle::Pkix::PkixParameters, ::System::Collections::IList)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlF)> {
  constexpr static std::size_t size = 0xe0c;
  constexpr static std::size_t addrs = 0x1088958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlG
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter (*)(::Org::BouncyCastle::X509::X509Crl, ::Org::BouncyCastle::Utilities::Collections::ISet)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlG)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x1089764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlG",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlH
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl (*)(::Org::BouncyCastle::Utilities::Collections::ISet, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlH)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x1089bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlH",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.CheckCrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint, ::Org::BouncyCastle::Pkix::PkixParameters, ::Org::BouncyCastle::X509::X509Certificate, ::System::DateTime, ::Org::BouncyCastle::X509::X509Certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::Org::BouncyCastle::Pkix::CertStatus, ::Org::BouncyCastle::Pkix::ReasonsMask, ::System::Collections::IList)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrl)> {
  constexpr static std::size_t size = 0xbb8;
  constexpr static std::size_t addrs = 0x108a03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "CheckCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::ReasonsMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.CheckCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixParameters, ::Org::BouncyCastle::X509::X509Certificate, ::System::DateTime, ::Org::BouncyCastle::X509::X509Certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::System::Collections::IList)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrls)> {
  constexpr static std::size_t size = 0xa08;
  constexpr static std::size_t addrs = 0x108b2cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "CheckCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareCertB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, ::ArrayW<::System::Collections::IList>, ::Org::BouncyCastle::Pkix::PkixPolicyNode, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareCertB)> {
  constexpr static std::size_t size = 0x1e94;
  constexpr static std::size_t addrs = 0x106e2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareCertB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlA1ii
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Utilities::Collections::ISet> (*)(::System::DateTime, ::Org::BouncyCastle::Pkix::PkixParameters, ::Org::BouncyCastle::X509::X509Certificate, ::Org::BouncyCastle::X509::X509Crl)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1ii)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x108bcd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlA1ii",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlA1i
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet (*)(::System::DateTime, ::Org::BouncyCastle::Pkix::PkixParameters, ::Org::BouncyCastle::X509::X509Certificate, ::Org::BouncyCastle::X509::X509Crl)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1i)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x108c1a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlA1i",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertF
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, ::Org::BouncyCastle::Pkix::PkixPolicyNode, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertF)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x106dd74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCertF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath, ::Org::BouncyCastle::Pkix::PkixParameters, int32_t, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::Org::BouncyCastle::Asn1::X509::X509Name, ::Org::BouncyCastle::X509::X509Certificate)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertA)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x106ac30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCertA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertI1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI1)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x1070a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertI1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertI2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI2)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x1070e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertI2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertG
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertG)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x107015c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertG",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertJ
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertJ)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x10712bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertJ",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertK)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x107152c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertL
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertL)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x10717fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertM
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertM)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x10719ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertN)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1071c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertO
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, ::Org::BouncyCastle::Utilities::Collections::ISet, ::System::Collections::IList)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertO)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x1071dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertH1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH1)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1070650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertH1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertH2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH2)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x10707b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertH2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertH3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH3)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1070910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertH3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.WrapupCertA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::Org::BouncyCastle::X509::X509Certificate)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertA)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1072694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "WrapupCertA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.WrapupCertB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertB)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x1072710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "WrapupCertB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.WrapupCertF
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, ::System::Collections::IList, ::Org::BouncyCastle::Utilities::Collections::ISet)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertF)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x1072b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "WrapupCertF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.WrapupCertG
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode (*)(::Org::BouncyCastle::Pkix::PkixCertPath, ::Org::BouncyCastle::Pkix::PkixParameters, ::Org::BouncyCastle::Utilities::Collections::ISet, int32_t, ::ArrayW<::System::Collections::IList>, ::Org::BouncyCastle::Pkix::PkixPolicyNode, ::Org::BouncyCastle::Utilities::Collections::ISet)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertG)> {
  constexpr static std::size_t size = 0x1520;
  constexpr static std::size_t addrs = 0x1072ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "WrapupCertG",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlC
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::X509::X509Crl, ::Org::BouncyCastle::X509::X509Crl, ::Org::BouncyCastle::Pkix::PkixParameters)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlC)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x108abf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlC",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::DateTime, ::Org::BouncyCastle::X509::X509Crl, ::bs_hook::Il2CppWrapperType, ::Org::BouncyCastle::Pkix::CertStatus, ::Org::BouncyCastle::Pkix::PkixParameters)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlI)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x108b17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlJ
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::DateTime, ::Org::BouncyCastle::X509::X509Crl, ::bs_hook::Il2CppWrapperType, ::Org::BouncyCastle::Pkix::CertStatus)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlJ)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x108b234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlJ",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertE
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode (*)(::Org::BouncyCastle::Pkix::PkixCertPath, int32_t, ::Org::BouncyCastle::Pkix::PkixPolicyNode)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertE)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x106db14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCertE",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::*)()>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::_ctor)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x108c9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::__set_CrlUtilities(::Org::BouncyCastle::Pkix::PkixCrlUtilities value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Pkix::PkixCrlUtilities, "CrlUtilities", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get>(std::forward<::Org::BouncyCastle::Pkix::PkixCrlUtilities>(value));
}
 ::Org::BouncyCastle::Pkix::PkixCrlUtilities ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::__get_CrlUtilities()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Pkix::PkixCrlUtilities, "CrlUtilities", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get>();
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::__set_ANY_POLICY(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ANY_POLICY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::__get_ANY_POLICY()  {
return ::cordl_internals::getStaticField<::StringW, "ANY_POLICY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get>();
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::__set_KEY_CERT_SIGN(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "KEY_CERT_SIGN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get>(std::forward<int32_t>(value));
}
 int32_t ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::__get_KEY_CERT_SIGN()  {
return ::cordl_internals::getStaticField<int32_t, "KEY_CERT_SIGN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get>();
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::__set_CRL_SIGN(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "CRL_SIGN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get>(std::forward<int32_t>(value));
}
 int32_t ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::__get_CRL_SIGN()  {
return ::cordl_internals::getStaticField<int32_t, "CRL_SIGN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get>();
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::__set_CrlReasons(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "CrlReasons", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::__get_CrlReasons()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "CrlReasons", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get>();
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB2(::Org::BouncyCastle::Asn1::X509::DistributionPoint dp, ::bs_hook::Il2CppWrapperType cert, ::Org::BouncyCastle::X509::X509Crl crl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlB2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dp, cert, crl);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertBC(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator nameConstraintValidator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCertBC",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index, nameConstraintValidator);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertA(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index);
}
 ::Org::BouncyCastle::Pkix::PkixPolicyNode ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertD(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::Org::BouncyCastle::Utilities::Collections::ISet acceptablePolicies, ::Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree, ::ArrayW<::System::Collections::IList> policyNodes, int32_t inhibitAnyPolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCertD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode, false>(nullptr, ___internal_method, certPath, index, acceptablePolicies, validPolicyTree, policyNodes, inhibitAnyPolicy);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB1(::Org::BouncyCastle::Asn1::X509::DistributionPoint dp, ::bs_hook::Il2CppWrapperType cert, ::Org::BouncyCastle::X509::X509Crl crl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlB1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dp, cert, crl);
}
 ::Org::BouncyCastle::Pkix::ReasonsMask ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlD(::Org::BouncyCastle::X509::X509Crl crl, ::Org::BouncyCastle::Asn1::X509::DistributionPoint dp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::ReasonsMask, false>(nullptr, ___internal_method, crl, dp);
}
 ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlF(::Org::BouncyCastle::X509::X509Crl crl, ::bs_hook::Il2CppWrapperType cert, ::Org::BouncyCastle::X509::X509Certificate defaultCRLSignCert, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter defaultCRLSignKey, ::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, ::System::Collections::IList certPathCerts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet, false>(nullptr, ___internal_method, crl, cert, defaultCRLSignCert, defaultCRLSignKey, paramsPKIX, certPathCerts);
}
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlG(::Org::BouncyCastle::X509::X509Crl crl, ::Org::BouncyCastle::Utilities::Collections::ISet keys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlG",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(nullptr, ___internal_method, crl, keys);
}
 ::Org::BouncyCastle::X509::X509Crl ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlH(::Org::BouncyCastle::Utilities::Collections::ISet deltaCrls, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlH",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl, false>(nullptr, ___internal_method, deltaCrls, key);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrl(::Org::BouncyCastle::Asn1::X509::DistributionPoint dp, ::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate cert, ::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Certificate defaultCRLSignCert, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter defaultCRLSignKey, ::Org::BouncyCastle::Pkix::CertStatus certStatus, ::Org::BouncyCastle::Pkix::ReasonsMask reasonMask, ::System::Collections::IList certPathCerts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "CheckCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::ReasonsMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dp, paramsPKIX, cert, validDate, defaultCRLSignCert, defaultCRLSignKey, certStatus, reasonMask, certPathCerts);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrls(::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate cert, ::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Certificate sign, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter workingPublicKey, ::System::Collections::IList certPathCerts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "CheckCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, paramsPKIX, cert, validDate, sign, workingPublicKey, certPathCerts);
}
 ::Org::BouncyCastle::Pkix::PkixPolicyNode ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareCertB(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::ArrayW<::System::Collections::IList> policyNodes, ::Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree, int32_t policyMapping)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareCertB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode, false>(nullptr, ___internal_method, certPath, index, policyNodes, validPolicyTree, policyMapping);
}
 ::ArrayW<::Org::BouncyCastle::Utilities::Collections::ISet> ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1ii(::System::DateTime currentDate, ::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate cert, ::Org::BouncyCastle::X509::X509Crl crl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlA1ii",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Utilities::Collections::ISet>, false>(nullptr, ___internal_method, currentDate, paramsPKIX, cert, crl);
}
 ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1i(::System::DateTime currentDate, ::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate cert, ::Org::BouncyCastle::X509::X509Crl crl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlA1i",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet, false>(nullptr, ___internal_method, currentDate, paramsPKIX, cert, crl);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertF(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree, int32_t explicitPolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCertF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index, validPolicyTree, explicitPolicy);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertA(::Org::BouncyCastle::Pkix::PkixCertPath certPath, ::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, int32_t index, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter workingPublicKey, ::Org::BouncyCastle::Asn1::X509::X509Name workingIssuerName, ::Org::BouncyCastle::X509::X509Certificate sign)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCertA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, paramsPKIX, index, workingPublicKey, workingIssuerName, sign);
}
 int32_t ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI1(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t explicitPolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertI1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, explicitPolicy);
}
 int32_t ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI2(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t policyMapping)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertI2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, policyMapping);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertG(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator nameConstraintValidator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertG",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index, nameConstraintValidator);
}
 int32_t ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertJ(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t inhibitAnyPolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertJ",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, inhibitAnyPolicy);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertK(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index);
}
 int32_t ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertL(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t maxPathLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, maxPathLength);
}
 int32_t ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertM(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t maxPathLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, maxPathLength);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertN(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertO(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::Org::BouncyCastle::Utilities::Collections::ISet criticalExtensions, ::System::Collections::IList pathCheckers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index, criticalExtensions, pathCheckers);
}
 int32_t ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH1(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t explicitPolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertH1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, explicitPolicy);
}
 int32_t ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH2(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t policyMapping)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertH2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, policyMapping);
}
 int32_t ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH3(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t inhibitAnyPolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "PrepareNextCertH3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, inhibitAnyPolicy);
}
 int32_t ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertA(int32_t explicitPolicy, ::Org::BouncyCastle::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "WrapupCertA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, explicitPolicy, cert);
}
 int32_t ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertB(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t explicitPolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "WrapupCertB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, explicitPolicy);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertF(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::System::Collections::IList pathCheckers, ::Org::BouncyCastle::Utilities::Collections::ISet criticalExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "WrapupCertF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index, pathCheckers, criticalExtensions);
}
 ::Org::BouncyCastle::Pkix::PkixPolicyNode ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertG(::Org::BouncyCastle::Pkix::PkixCertPath certPath, ::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, ::Org::BouncyCastle::Utilities::Collections::ISet userInitialPolicySet, int32_t index, ::ArrayW<::System::Collections::IList> policyNodes, ::Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree, ::Org::BouncyCastle::Utilities::Collections::ISet acceptablePolicies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "WrapupCertG",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode, false>(nullptr, ___internal_method, certPath, paramsPKIX, userInitialPolicySet, index, policyNodes, validPolicyTree, acceptablePolicies);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlC(::Org::BouncyCastle::X509::X509Crl deltaCRL, ::Org::BouncyCastle::X509::X509Crl completeCRL, ::Org::BouncyCastle::Pkix::PkixParameters pkixParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlC",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, deltaCRL, completeCRL, pkixParams);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlI(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl deltacrl, ::bs_hook::Il2CppWrapperType cert, ::Org::BouncyCastle::Pkix::CertStatus certStatus, ::Org::BouncyCastle::Pkix::PkixParameters pkixParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, validDate, deltacrl, cert, certStatus, pkixParams);
}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlJ(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl completecrl, ::bs_hook::Il2CppWrapperType cert, ::Org::BouncyCastle::Pkix::CertStatus certStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCrlJ",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, validDate, completecrl, cert, certStatus);
}
 ::Org::BouncyCastle::Pkix::PkixPolicyNode ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertE(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            "ProcessCertE",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode, false>(nullptr, ___internal_method, certPath, index, validPolicyTree);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::Rfc3280CertPathUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Rfc3280CertPathUtilities>())) {}
 void ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
