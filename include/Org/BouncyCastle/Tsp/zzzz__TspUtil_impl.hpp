#pragma once
namespace {
#include "Org/BouncyCastle/Tsp/zzzz__TspUtil_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetSignatureTimestamps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection (*)(::Org::BouncyCastle::Cms::SignerInformation)>(&::Org::BouncyCastle::Tsp::TspUtil::GetSignatureTimestamps)> {
  constexpr static std::size_t size = 0x9c8;
  constexpr static std::size_t addrs = 0x10c9cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "GetSignatureTimestamps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.ValidateCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::X509::X509Certificate)>(&::Org::BouncyCastle::Tsp::TspUtil::ValidateCertificate)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x10c7260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "ValidateCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetDigestAlgName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Tsp::TspUtil::GetDigestAlgName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x10ca67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "GetDigestAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetDigestLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::Org::BouncyCastle::Tsp::TspUtil::GetDigestLength)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x10c39f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "GetDigestLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.CreateDigestInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest (*)(::StringW)>(&::Org::BouncyCastle::Tsp::TspUtil::CreateDigestInstance)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x10ca784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "CreateDigestInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetCriticalExtensionOids
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions)>(&::Org::BouncyCastle::Tsp::TspUtil::GetCriticalExtensionOids)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x10ca810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "GetCriticalExtensionOids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetNonCriticalExtensionOids
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions)>(&::Org::BouncyCastle::Tsp::TspUtil::GetNonCriticalExtensionOids)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x10cabe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "GetNonCriticalExtensionOids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil.GetExtensionOids
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions)>(&::Org::BouncyCastle::Tsp::TspUtil::GetExtensionOids)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x10c3c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "GetExtensionOids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspUtil._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TspUtil::*)()>(&::Org::BouncyCastle::Tsp::TspUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10cac9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Tsp::TspUtil::__set_EmptySet(::Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet, "EmptySet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get>(std::forward<::Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
 ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Tsp::TspUtil::__get_EmptySet()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet, "EmptySet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get>();
}
 void ::Org::BouncyCastle::Tsp::TspUtil::__set_EmptyList(::System::Collections::IList value)  {
::cordl_internals::setStaticField<::System::Collections::IList, "EmptyList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get>(std::forward<::System::Collections::IList>(value));
}
 ::System::Collections::IList ::Org::BouncyCastle::Tsp::TspUtil::__get_EmptyList()  {
return ::cordl_internals::getStaticField<::System::Collections::IList, "EmptyList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get>();
}
 void ::Org::BouncyCastle::Tsp::TspUtil::__set_digestLengths(::System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary, "digestLengths", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get>(std::forward<::System::Collections::IDictionary>(value));
}
 ::System::Collections::IDictionary ::Org::BouncyCastle::Tsp::TspUtil::__get_digestLengths()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary, "digestLengths", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get>();
}
 void ::Org::BouncyCastle::Tsp::TspUtil::__set_digestNames(::System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary, "digestNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get>(std::forward<::System::Collections::IDictionary>(value));
}
 ::System::Collections::IDictionary ::Org::BouncyCastle::Tsp::TspUtil::__get_digestNames()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary, "digestNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get>();
}
 ::System::Collections::ICollection ::Org::BouncyCastle::Tsp::TspUtil::GetSignatureTimestamps(::Org::BouncyCastle::Cms::SignerInformation signerInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "GetSignatureTimestamps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection, false>(nullptr, ___internal_method, signerInfo);
}
 void ::Org::BouncyCastle::Tsp::TspUtil::ValidateCertificate(::Org::BouncyCastle::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "ValidateCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cert);
}
 ::StringW ::Org::BouncyCastle::Tsp::TspUtil::GetDigestAlgName(::StringW digestAlgOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "GetDigestAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, digestAlgOID);
}
 int32_t ::Org::BouncyCastle::Tsp::TspUtil::GetDigestLength(::StringW digestAlgOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "GetDigestLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, digestAlgOID);
}
 ::Org::BouncyCastle::Crypto::IDigest ::Org::BouncyCastle::Tsp::TspUtil::CreateDigestInstance(::StringW digestAlgOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "CreateDigestInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest, false>(nullptr, ___internal_method, digestAlgOID);
}
 ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Tsp::TspUtil::GetCriticalExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "GetCriticalExtensionOids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet, false>(nullptr, ___internal_method, extensions);
}
 ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Tsp::TspUtil::GetNonCriticalExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "GetNonCriticalExtensionOids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet, false>(nullptr, ___internal_method, extensions);
}
 ::System::Collections::IList ::Org::BouncyCastle::Tsp::TspUtil::GetExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            "GetExtensionOids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IList, false>(nullptr, ___internal_method, extensions);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Tsp::TspUtil::TspUtil()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TspUtil>())) {}
 void ::Org::BouncyCastle::Tsp::TspUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TspUtil>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
