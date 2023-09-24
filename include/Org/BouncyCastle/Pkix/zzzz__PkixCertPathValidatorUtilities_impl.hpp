#pragma once
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CrlDistPoint_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixPolicyNode_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DistributionPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__TrustAnchor_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509AttrCertStoreSelector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixBuilderParameters_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509Extension_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCrlUtilities_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CrlStoreSelector_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.FindTrustAnchor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Pkix::TrustAnchor (*)(Org::BouncyCastle::X509::X509Certificate, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindTrustAnchor)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x106a2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "FindTrustAnchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.IsIssuerTrustAnchor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::X509::X509Certificate, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsIssuerTrustAnchor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x105f100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "IsIssuerTrustAnchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.AddAdditionalStoresFromAltNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::X509::X509Certificate, Org::BouncyCastle::Pkix::PkixParameters)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoresFromAltNames)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x105f314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "AddAdditionalStoresFromAltNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetValidDate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(Org::BouncyCastle::Pkix::PkixParameters)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetValidDate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1074920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetValidDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetIssuerPrincipal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Name (*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetIssuerPrincipal)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1074574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetIssuerPrincipal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.IsSelfIssued
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::X509::X509Certificate)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsSelfIssued)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x105f9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "IsSelfIssued",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetAlgorithmIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetAlgorithmIdentifier)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x106ab48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetAlgorithmIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.IsAnyPolicy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsAnyPolicy)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x10749a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "IsAnyPolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.AddAdditionalStoreFromLocation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, Org::BouncyCastle::Pkix::PkixParameters)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoreFromLocation)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x10746d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "AddAdditionalStoreFromLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetSerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetSerialNumber)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1074afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetSerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetQualifierSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (*)(Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetQualifierSet)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x1074bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetQualifierSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.RemovePolicyNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Pkix::PkixPolicyNode (*)(Org::BouncyCastle::Pkix::PkixPolicyNode, ::ArrayW<System::Collections::IList>, Org::BouncyCastle::Pkix::PkixPolicyNode)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::RemovePolicyNode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x107504c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "RemovePolicyNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixPolicyNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixPolicyNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.RemovePolicyNodeRecurse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<System::Collections::IList>, Org::BouncyCastle::Pkix::PkixPolicyNode)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::RemovePolicyNodeRecurse)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1075188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "RemovePolicyNodeRecurse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixPolicyNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.PrepareNextCertB1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ArrayW<System::Collections::IList>, ::StringW, System::Collections::IDictionary, Org::BouncyCastle::X509::X509Certificate)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::PrepareNextCertB1)> {
  constexpr static std::size_t size = 0xb40;
  constexpr static std::size_t addrs = 0x10755b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "PrepareNextCertB1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.PrepareNextCertB2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Pkix::PkixPolicyNode (*)(int32_t, ::ArrayW<System::Collections::IList>, ::StringW, Org::BouncyCastle::Pkix::PkixPolicyNode)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::PrepareNextCertB2)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x10761b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "PrepareNextCertB2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixPolicyNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetCertStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::DateTime, Org::BouncyCastle::X509::X509Crl, ::bs_hook::Il2CppWrapperType, Org::BouncyCastle::Pkix::CertStatus)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCertStatus)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x1076888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetCertStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::CertStatus>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetNextWorkingKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricKeyParameter (*)(System::Collections::IList, int32_t)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetNextWorkingKey)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x10722a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetNextWorkingKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetValidCertDateFromValidityModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(Org::BouncyCastle::Pkix::PkixParameters, Org::BouncyCastle::Pkix::PkixCertPath, int32_t)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetValidCertDateFromValidityModel)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x105fe24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetValidCertDateFromValidityModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.FindCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (*)(Org::BouncyCastle::X509::Store::X509CertStoreSelector, System::Collections::IList)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindCertificates)> {
  constexpr static std::size_t size = 0x808;
  constexpr static std::size_t addrs = 0x105dcb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "FindCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::X509CertStoreSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetCrlIssuersFromDistributionPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Asn1::X509::DistributionPoint, System::Collections::ICollection, Org::BouncyCastle::X509::Store::X509CrlStoreSelector, Org::BouncyCastle::Pkix::PkixParameters)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCrlIssuersFromDistributionPoint)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x1076ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetCrlIssuersFromDistributionPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::DistributionPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::X509CrlStoreSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetCompleteCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (*)(Org::BouncyCastle::Asn1::X509::DistributionPoint, ::bs_hook::Il2CppWrapperType, System::DateTime, Org::BouncyCastle::Pkix::PkixParameters)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCompleteCrls)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x10771ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetCompleteCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::DistributionPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetDeltaCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (*)(System::DateTime, Org::BouncyCastle::Pkix::PkixParameters, Org::BouncyCastle::X509::X509Crl)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetDeltaCrls)> {
  constexpr static std::size_t size = 0x898;
  constexpr static std::size_t addrs = 0x107774c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetDeltaCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Crl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.isDeltaCrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::X509::X509Crl)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::isDeltaCrl)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1077fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "isDeltaCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Crl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.FindCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (*)(Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector, System::Collections::IList)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindCertificates)> {
  constexpr static std::size_t size = 0x808;
  constexpr static std::size_t addrs = 0x105d4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "FindCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.AddAdditionalStoresFromCrlDistributionPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Asn1::X509::CrlDistPoint, Org::BouncyCastle::Pkix::PkixParameters)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoresFromCrlDistributionPoint)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x10780dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "AddAdditionalStoresFromCrlDistributionPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::CrlDistPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.ProcessCertD1i
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, ::ArrayW<System::Collections::IList>, Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::ProcessCertD1i)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x10782f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "ProcessCertD1i",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.ProcessCertD1ii
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ArrayW<System::Collections::IList>, Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::ProcessCertD1ii)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x10786f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "ProcessCertD1ii",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.FindIssuerCerts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (*)(Org::BouncyCastle::X509::X509Certificate, Org::BouncyCastle::Pkix::PkixBuilderParameters)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindIssuerCerts)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x105f68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "FindIssuerCerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixBuilderParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetExtensionValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (*)(Org::BouncyCastle::X509::IX509Extension, Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetExtensionValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x10760f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetExtensionValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::IX509Extension>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::*)()>(&Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1078ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::__set_CrlUtilities(Org::BouncyCastle::Pkix::PkixCrlUtilities value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Pkix::PkixCrlUtilities, "CrlUtilities", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get>(std::forward<Org::BouncyCastle::Pkix::PkixCrlUtilities>(value));
}
 Org::BouncyCastle::Pkix::PkixCrlUtilities Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::__get_CrlUtilities()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Pkix::PkixCrlUtilities, "CrlUtilities", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get>();
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::__set_ANY_POLICY(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ANY_POLICY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::__get_ANY_POLICY()  {
return ::cordl_internals::getStaticField<::StringW, "ANY_POLICY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get>();
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::__set_CRL_NUMBER(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "CRL_NUMBER", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::__get_CRL_NUMBER()  {
return ::cordl_internals::getStaticField<::StringW, "CRL_NUMBER", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get>();
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::__set_KEY_CERT_SIGN(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "KEY_CERT_SIGN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::__get_KEY_CERT_SIGN()  {
return ::cordl_internals::getStaticField<int32_t, "KEY_CERT_SIGN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get>();
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::__set_CRL_SIGN(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "CRL_SIGN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::__get_CRL_SIGN()  {
return ::cordl_internals::getStaticField<int32_t, "CRL_SIGN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get>();
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::__set_crlReasons(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "crlReasons", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::__get_crlReasons()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "crlReasons", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get>();
}
 Org::BouncyCastle::Pkix::TrustAnchor Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindTrustAnchor(Org::BouncyCastle::X509::X509Certificate cert, Org::BouncyCastle::Utilities::Collections::ISet trustAnchors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "FindTrustAnchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Pkix::TrustAnchor, false>(nullptr, ___internal_method, cert, trustAnchors);
}
 bool Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsIssuerTrustAnchor(Org::BouncyCastle::X509::X509Certificate cert, Org::BouncyCastle::Utilities::Collections::ISet trustAnchors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "IsIssuerTrustAnchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cert, trustAnchors);
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoresFromAltNames(Org::BouncyCastle::X509::X509Certificate cert, Org::BouncyCastle::Pkix::PkixParameters pkixParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "AddAdditionalStoresFromAltNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cert, pkixParams);
}
 System::DateTime Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetValidDate(Org::BouncyCastle::Pkix::PkixParameters paramsPKIX)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetValidDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, paramsPKIX);
}
 Org::BouncyCastle::Asn1::X509::X509Name Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetIssuerPrincipal(::bs_hook::Il2CppWrapperType cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetIssuerPrincipal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::X509Name, false>(nullptr, ___internal_method, cert);
}
 bool Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsSelfIssued(Org::BouncyCastle::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "IsSelfIssued",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cert);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetAlgorithmIdentifier(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetAlgorithmIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(nullptr, ___internal_method, key);
}
 bool Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsAnyPolicy(Org::BouncyCastle::Utilities::Collections::ISet policySet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "IsAnyPolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, policySet);
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoreFromLocation(::StringW location, Org::BouncyCastle::Pkix::PkixParameters pkixParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "AddAdditionalStoreFromLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, location, pkixParams);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetSerialNumber(::bs_hook::Il2CppWrapperType cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetSerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(nullptr, ___internal_method, cert);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetQualifierSet(Org::BouncyCastle::Asn1::Asn1Sequence qualifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetQualifierSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(nullptr, ___internal_method, qualifiers);
}
 Org::BouncyCastle::Pkix::PkixPolicyNode Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::RemovePolicyNode(Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree, ::ArrayW<System::Collections::IList> policyNodes, Org::BouncyCastle::Pkix::PkixPolicyNode _node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "RemovePolicyNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixPolicyNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixPolicyNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Pkix::PkixPolicyNode, false>(nullptr, ___internal_method, validPolicyTree, policyNodes, _node);
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::RemovePolicyNodeRecurse(::ArrayW<System::Collections::IList> policyNodes, Org::BouncyCastle::Pkix::PkixPolicyNode _node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "RemovePolicyNodeRecurse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixPolicyNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, policyNodes, _node);
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::PrepareNextCertB1(int32_t i, ::ArrayW<System::Collections::IList> policyNodes, ::StringW id_p, System::Collections::IDictionary m_idp, Org::BouncyCastle::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "PrepareNextCertB1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, i, policyNodes, id_p, m_idp, cert);
}
 Org::BouncyCastle::Pkix::PkixPolicyNode Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::PrepareNextCertB2(int32_t i, ::ArrayW<System::Collections::IList> policyNodes, ::StringW id_p, Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "PrepareNextCertB2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixPolicyNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Pkix::PkixPolicyNode, false>(nullptr, ___internal_method, i, policyNodes, id_p, validPolicyTree);
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCertStatus(System::DateTime validDate, Org::BouncyCastle::X509::X509Crl crl, ::bs_hook::Il2CppWrapperType cert, Org::BouncyCastle::Pkix::CertStatus certStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetCertStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Crl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::CertStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, validDate, crl, cert, certStatus);
}
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetNextWorkingKey(System::Collections::IList certs, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetNextWorkingKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(nullptr, ___internal_method, certs, index);
}
 System::DateTime Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetValidCertDateFromValidityModel(Org::BouncyCastle::Pkix::PkixParameters paramsPkix, Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetValidCertDateFromValidityModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, paramsPkix, certPath, index);
}
 System::Collections::ICollection Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindCertificates(Org::BouncyCastle::X509::Store::X509CertStoreSelector certSelect, System::Collections::IList certStores)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "FindCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::X509CertStoreSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(nullptr, ___internal_method, certSelect, certStores);
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCrlIssuersFromDistributionPoint(Org::BouncyCastle::Asn1::X509::DistributionPoint dp, System::Collections::ICollection issuerPrincipals, Org::BouncyCastle::X509::Store::X509CrlStoreSelector selector, Org::BouncyCastle::Pkix::PkixParameters pkixParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetCrlIssuersFromDistributionPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::DistributionPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::X509CrlStoreSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dp, issuerPrincipals, selector, pkixParams);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCompleteCrls(Org::BouncyCastle::Asn1::X509::DistributionPoint dp, ::bs_hook::Il2CppWrapperType cert, System::DateTime currentDate, Org::BouncyCastle::Pkix::PkixParameters paramsPKIX)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetCompleteCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::DistributionPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(nullptr, ___internal_method, dp, cert, currentDate, paramsPKIX);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetDeltaCrls(System::DateTime currentDate, Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, Org::BouncyCastle::X509::X509Crl completeCRL)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetDeltaCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Crl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(nullptr, ___internal_method, currentDate, paramsPKIX, completeCRL);
}
 bool Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::isDeltaCrl(Org::BouncyCastle::X509::X509Crl crl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "isDeltaCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Crl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, crl);
}
 System::Collections::ICollection Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindCertificates(Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector certSelect, System::Collections::IList certStores)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "FindCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(nullptr, ___internal_method, certSelect, certStores);
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoresFromCrlDistributionPoint(Org::BouncyCastle::Asn1::X509::CrlDistPoint crldp, Org::BouncyCastle::Pkix::PkixParameters pkixParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "AddAdditionalStoresFromCrlDistributionPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::CrlDistPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, crldp, pkixParams);
}
 bool Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::ProcessCertD1i(int32_t index, ::ArrayW<System::Collections::IList> policyNodes, Org::BouncyCastle::Asn1::DerObjectIdentifier pOid, Org::BouncyCastle::Utilities::Collections::ISet pq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "ProcessCertD1i",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, index, policyNodes, pOid, pq);
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::ProcessCertD1ii(int32_t index, ::ArrayW<System::Collections::IList> policyNodes, Org::BouncyCastle::Asn1::DerObjectIdentifier _poid, Org::BouncyCastle::Utilities::Collections::ISet _pq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "ProcessCertD1ii",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, index, policyNodes, _poid, _pq);
}
 System::Collections::ICollection Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindIssuerCerts(Org::BouncyCastle::X509::X509Certificate cert, Org::BouncyCastle::Pkix::PkixBuilderParameters pkixParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "FindIssuerCerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixBuilderParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(nullptr, ___internal_method, cert, pkixParams);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetExtensionValue(Org::BouncyCastle::X509::IX509Extension ext, Org::BouncyCastle::Asn1::DerObjectIdentifier oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            "GetExtensionValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::IX509Extension>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(nullptr, ___internal_method, ext, oid);
}
 Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::New_ctor()  {
Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>())};
return o;
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
