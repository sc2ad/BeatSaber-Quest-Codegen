#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedHelper_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.AddEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, ::StringW, ::StringW)>(&Org::BouncyCastle::Cms::CmsSignedHelper::AddEntries)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1172348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "AddEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.GetDigestAlgName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(&Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestAlgName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1161f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetDigestAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.GetEncAlgorithmIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Cms::CmsSignedHelper::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Asn1::Asn1Encodable)>(&Org::BouncyCastle::Cms::CmsSignedHelper::GetEncAlgorithmIdentifier)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x11625d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetEncAlgorithmIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.GetDigestAliases
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(&Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestAliases)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1174264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetDigestAliases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.GetEncryptionAlgName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(&Org::BouncyCastle::Cms::CmsSignedHelper::GetEncryptionAlgName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1162064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetEncryptionAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.GetDigestInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IDigest (Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(&Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestInstance)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x11623e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetDigestInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.GetSignatureInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ISigner (Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW)>(&Org::BouncyCastle::Cms::CmsSignedHelper::GetSignatureInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1167768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetSignatureInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.CreateAttributeStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::Store::IX509Store (Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW, Org::BouncyCastle::Asn1::Asn1Set)>(&Org::BouncyCastle::Cms::CmsSignedHelper::CreateAttributeStore)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x115b0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "CreateAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.CreateCertificateStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::Store::IX509Store (Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW, Org::BouncyCastle::Asn1::Asn1Set)>(&Org::BouncyCastle::Cms::CmsSignedHelper::CreateCertificateStore)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x115b7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "CreateCertificateStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.CreateCrlStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::Store::IX509Store (Org::BouncyCastle::Cms::CmsSignedHelper::*)(::StringW, Org::BouncyCastle::Asn1::Asn1Set)>(&Org::BouncyCastle::Cms::CmsSignedHelper::CreateCrlStore)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x115ba0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "CreateCrlStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.AddCertsFromSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedHelper::*)(System::Collections::IList, Org::BouncyCastle::Asn1::Asn1Set)>(&Org::BouncyCastle::Cms::CmsSignedHelper::AddCertsFromSet)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x11743b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "AddCertsFromSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.AddCrlsFromSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedHelper::*)(System::Collections::IList, Org::BouncyCastle::Asn1::Asn1Set)>(&Org::BouncyCastle::Cms::CmsSignedHelper::AddCrlsFromSet)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x1174878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "AddCrlsFromSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.FixAlgID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Cms::CmsSignedHelper::*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&Org::BouncyCastle::Cms::CmsSignedHelper::FixAlgID)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x115c31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "FixAlgID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper.GetEncOid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Cms::CmsSignedHelper::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::StringW)>(&Org::BouncyCastle::Cms::CmsSignedHelper::GetEncOid)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x115eacc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetEncOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedHelper::*)()>(&Org::BouncyCastle::Cms::CmsSignedHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x117425c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Cms::CmsSignedHelper::__set_Instance(Org::BouncyCastle::Cms::CmsSignedHelper value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Cms::CmsSignedHelper, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>(std::forward<Org::BouncyCastle::Cms::CmsSignedHelper>(value));
}
 Org::BouncyCastle::Cms::CmsSignedHelper Org::BouncyCastle::Cms::CmsSignedHelper::__get_Instance()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Cms::CmsSignedHelper, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>();
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::__set_EncryptionECDsaWithSha1(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::__get_EncryptionECDsaWithSha1()  {
return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>();
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::__set_EncryptionECDsaWithSha224(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha224", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::__get_EncryptionECDsaWithSha224()  {
return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha224", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>();
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::__set_EncryptionECDsaWithSha256(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::__get_EncryptionECDsaWithSha256()  {
return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>();
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::__set_EncryptionECDsaWithSha384(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha384", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::__get_EncryptionECDsaWithSha384()  {
return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha384", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>();
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::__set_EncryptionECDsaWithSha512(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "EncryptionECDsaWithSha512", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::__get_EncryptionECDsaWithSha512()  {
return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsaWithSha512", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>();
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::__set_encryptionAlgs(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "encryptionAlgs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Cms::CmsSignedHelper::__get_encryptionAlgs()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "encryptionAlgs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>();
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::__set_digestAlgs(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "digestAlgs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Cms::CmsSignedHelper::__get_digestAlgs()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "digestAlgs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>();
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::__set_digestAliases(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "digestAliases", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Cms::CmsSignedHelper::__get_digestAliases()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "digestAliases", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>();
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::__set_noParams(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Utilities::Collections::ISet, "noParams", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>(std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Cms::CmsSignedHelper::__get_noParams()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Utilities::Collections::ISet, "noParams", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>();
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::__set_ecAlgorithms(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "ecAlgorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Cms::CmsSignedHelper::__get_ecAlgorithms()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "ecAlgorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get>();
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::AddEntries(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::StringW digest, ::StringW encryption)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "AddEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, oid, digest, encryption);
}
 ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestAlgName(::StringW digestAlgOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetDigestAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, digestAlgOid);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::CmsSignedHelper::GetEncAlgorithmIdentifier(Org::BouncyCastle::Asn1::DerObjectIdentifier encOid, Org::BouncyCastle::Asn1::Asn1Encodable sigX509Parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetEncAlgorithmIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method, encOid, sigX509Parameters);
}
 ::ArrayW<::StringW> Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestAliases(::StringW algName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetDigestAliases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, algName);
}
 ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::GetEncryptionAlgName(::StringW encryptionAlgOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetEncryptionAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, encryptionAlgOid);
}
 Org::BouncyCastle::Crypto::IDigest Org::BouncyCastle::Cms::CmsSignedHelper::GetDigestInstance(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetDigestInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IDigest, false>(const_cast<void*>(instance), ___internal_method, algorithm);
}
 Org::BouncyCastle::Crypto::ISigner Org::BouncyCastle::Cms::CmsSignedHelper::GetSignatureInstance(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetSignatureInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ISigner, false>(const_cast<void*>(instance), ___internal_method, algorithm);
}
 Org::BouncyCastle::X509::Store::IX509Store Org::BouncyCastle::Cms::CmsSignedHelper::CreateAttributeStore(::StringW type, Org::BouncyCastle::Asn1::Asn1Set certSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "CreateAttributeStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::Store::IX509Store, false>(const_cast<void*>(instance), ___internal_method, type, certSet);
}
 Org::BouncyCastle::X509::Store::IX509Store Org::BouncyCastle::Cms::CmsSignedHelper::CreateCertificateStore(::StringW type, Org::BouncyCastle::Asn1::Asn1Set certSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "CreateCertificateStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::Store::IX509Store, false>(const_cast<void*>(instance), ___internal_method, type, certSet);
}
 Org::BouncyCastle::X509::Store::IX509Store Org::BouncyCastle::Cms::CmsSignedHelper::CreateCrlStore(::StringW type, Org::BouncyCastle::Asn1::Asn1Set crlSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "CreateCrlStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::Store::IX509Store, false>(const_cast<void*>(instance), ___internal_method, type, crlSet);
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::AddCertsFromSet(System::Collections::IList certs, Org::BouncyCastle::Asn1::Asn1Set certSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "AddCertsFromSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certs, certSet);
}
 void Org::BouncyCastle::Cms::CmsSignedHelper::AddCrlsFromSet(System::Collections::IList crls, Org::BouncyCastle::Asn1::Asn1Set crlSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "AddCrlsFromSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Set>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, crls, crlSet);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::CmsSignedHelper::FixAlgID(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "FixAlgID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method, algId);
}
 ::StringW Org::BouncyCastle::Cms::CmsSignedHelper::GetEncOid(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, ::StringW digestOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            "GetEncOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, key, digestOID);
}
// Ctor Parameters []
 Org::BouncyCastle::Cms::CmsSignedHelper::CmsSignedHelper()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CmsSignedHelper>())) {}
 void Org::BouncyCastle::Cms::CmsSignedHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
