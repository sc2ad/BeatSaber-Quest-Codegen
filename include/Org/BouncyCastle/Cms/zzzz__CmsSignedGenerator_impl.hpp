#pragma once
namespace {
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformationStore_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerIdentifier_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x115d660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x115d6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetBaseParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::GetBaseParameters)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x115d764;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Cms::CmsSignedGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetAttributeSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Asn1::Cms::AttributeTable)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::GetAttributeSet)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x115d9a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Cms::CmsSignedGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::AddCertificates)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x115da1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "AddCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::AddCrls)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x115da40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "AddCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddAttributeCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::AddAttributeCertificates)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x115da64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "AddAttributeCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddSigners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Cms::SignerInformationStore)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::AddSigners)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x115e030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "AddSigners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformationStore>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetGeneratedDigests
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::GetGeneratedDigests)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x115e414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "GetGeneratedDigests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.get_UseDerForCerts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::get_UseDerForCerts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x115e470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "get_UseDerForCerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.set_UseDerForCerts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(bool)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::set_UseDerForCerts)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x115e478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "set_UseDerForCerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.get_UseDerForCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::get_UseDerForCrls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x115e484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "get_UseDerForCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.set_UseDerForCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(bool)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::set_UseDerForCrls)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x115e48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "set_UseDerForCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddSignerCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Cms::SignerInformation)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::AddSignerCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x115e498;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Cms::CmsSignedGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetSignerIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier (*)(::Org::BouncyCastle::X509::X509Certificate)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::GetSignerIdentifier)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x115e49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "GetSignerIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetSignerIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::GetSignerIdentifier)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x115e5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "GetSignerIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_Data(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Data", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_Data()  {
return ::cordl_internals::getStaticField<::StringW, "Data", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_DigestSha1(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DigestSha1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_DigestSha1()  {
return ::cordl_internals::getStaticField<::StringW, "DigestSha1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_DigestSha224(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DigestSha224", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_DigestSha224()  {
return ::cordl_internals::getStaticField<::StringW, "DigestSha224", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_DigestSha256(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DigestSha256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_DigestSha256()  {
return ::cordl_internals::getStaticField<::StringW, "DigestSha256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_DigestSha384(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DigestSha384", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_DigestSha384()  {
return ::cordl_internals::getStaticField<::StringW, "DigestSha384", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_DigestSha512(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DigestSha512", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_DigestSha512()  {
return ::cordl_internals::getStaticField<::StringW, "DigestSha512", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_DigestMD5(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DigestMD5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_DigestMD5()  {
return ::cordl_internals::getStaticField<::StringW, "DigestMD5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_DigestGost3411(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DigestGost3411", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_DigestGost3411()  {
return ::cordl_internals::getStaticField<::StringW, "DigestGost3411", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_DigestRipeMD128(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DigestRipeMD128", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_DigestRipeMD128()  {
return ::cordl_internals::getStaticField<::StringW, "DigestRipeMD128", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_DigestRipeMD160(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DigestRipeMD160", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_DigestRipeMD160()  {
return ::cordl_internals::getStaticField<::StringW, "DigestRipeMD160", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_DigestRipeMD256(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DigestRipeMD256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_DigestRipeMD256()  {
return ::cordl_internals::getStaticField<::StringW, "DigestRipeMD256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_EncryptionRsa(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "EncryptionRsa", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_EncryptionRsa()  {
return ::cordl_internals::getStaticField<::StringW, "EncryptionRsa", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_EncryptionDsa(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "EncryptionDsa", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_EncryptionDsa()  {
return ::cordl_internals::getStaticField<::StringW, "EncryptionDsa", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_EncryptionECDsa(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "EncryptionECDsa", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_EncryptionECDsa()  {
return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsa", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_EncryptionRsaPss(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "EncryptionRsaPss", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_EncryptionRsaPss()  {
return ::cordl_internals::getStaticField<::StringW, "EncryptionRsaPss", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_EncryptionGost3410(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "EncryptionGost3410", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_EncryptionGost3410()  {
return ::cordl_internals::getStaticField<::StringW, "EncryptionGost3410", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_EncryptionECGost3410(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "EncryptionECGost3410", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_EncryptionECGost3410()  {
return ::cordl_internals::getStaticField<::StringW, "EncryptionECGost3410", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get>();
}
constexpr void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set__certs(::System::Collections::IList value)  {
::cordl_internals::setInstanceField<::System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IList>(value));
}
constexpr ::System::Collections::IList ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get__certs() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set__crls(::System::Collections::IList value)  {
::cordl_internals::setInstanceField<::System::Collections::IList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IList>(value));
}
constexpr ::System::Collections::IList ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get__crls() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set__signers(::System::Collections::IList value)  {
::cordl_internals::setInstanceField<::System::Collections::IList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IList>(value));
}
constexpr ::System::Collections::IList ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get__signers() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set__digests(::System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<::System::Collections::IDictionary, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IDictionary>(value));
}
constexpr ::System::Collections::IDictionary ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get__digests() const {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set__useDerForCerts(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get__useDerForCerts() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set__useDerForCrls(bool value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get__useDerForCrls() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::CmsSignedGenerator::__set_rand(::Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Security::SecureRandom, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom ::Org::BouncyCastle::Cms::CmsSignedGenerator::__get_rand() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Security::SecureRandom, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Cms::CmsSignedGenerator::CmsSignedGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CmsSignedGenerator>())) {}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "rand", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cms::CmsSignedGenerator::CmsSignedGenerator(::Org::BouncyCastle::Security::SecureRandom rand)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CmsSignedGenerator>(rand))) {}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rand);
}
 ::System::Collections::IDictionary ::Org::BouncyCastle::Cms::CmsSignedGenerator::GetBaseParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digAlgId, ::ArrayW<uint8_t> hash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "GetBaseParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary, false>(const_cast<void*>(instance), ___internal_method, contentType, digAlgId, hash);
}
 ::Org::BouncyCastle::Asn1::Asn1Set ::Org::BouncyCastle::Cms::CmsSignedGenerator::GetAttributeSet(::Org::BouncyCastle::Asn1::Cms::AttributeTable attr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "GetAttributeSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set, false>(const_cast<void*>(instance), ___internal_method, attr);
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::AddCertificates(::Org::BouncyCastle::X509::Store::IX509Store certStore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "AddCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certStore);
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::AddCrls(::Org::BouncyCastle::X509::Store::IX509Store crlStore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "AddCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, crlStore);
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::AddAttributeCertificates(::Org::BouncyCastle::X509::Store::IX509Store store)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "AddAttributeCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, store);
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::AddSigners(::Org::BouncyCastle::Cms::SignerInformationStore signerStore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "AddSigners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformationStore>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signerStore);
}
 ::System::Collections::IDictionary ::Org::BouncyCastle::Cms::CmsSignedGenerator::GetGeneratedDigests()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "GetGeneratedDigests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Org::BouncyCastle::Cms::CmsSignedGenerator::get_UseDerForCerts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "get_UseDerForCerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::set_UseDerForCerts(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "set_UseDerForCerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::Org::BouncyCastle::Cms::CmsSignedGenerator::get_UseDerForCrls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "get_UseDerForCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::set_UseDerForCrls(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "set_UseDerForCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::Org::BouncyCastle::Cms::CmsSignedGenerator::AddSignerCallback(::Org::BouncyCastle::Cms::SignerInformation si)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "AddSignerCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, si);
}
 ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier ::Org::BouncyCastle::Cms::CmsSignedGenerator::GetSignerIdentifier(::Org::BouncyCastle::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "GetSignerIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier, false>(nullptr, ___internal_method, cert);
}
 ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier ::Org::BouncyCastle::Cms::CmsSignedGenerator::GetSignerIdentifier(::ArrayW<uint8_t> subjectKeyIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator>::get(),
                            "GetSignerIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier, false>(nullptr, ___internal_method, subjectKeyIdentifier);
}
} // end anonymous namespace
