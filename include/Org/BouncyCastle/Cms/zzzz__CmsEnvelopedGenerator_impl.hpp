#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KekIdentifier_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsPbeKey_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)()>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x114e50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x114e570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator.get_UnprotectedAttributeGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsAttributeTableGenerator (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)()>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::get_UnprotectedAttributeGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x114e5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "get_UnprotectedAttributeGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator.set_UnprotectedAttributeGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(Org::BouncyCastle::Cms::CmsAttributeTableGenerator)>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::set_UnprotectedAttributeGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x114e5f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "set_UnprotectedAttributeGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKeyTransRecipient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(Org::BouncyCastle::X509::X509Certificate)>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyTransRecipient)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x114e5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddKeyTransRecipient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKeyTransRecipient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyTransRecipient)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x114e6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddKeyTransRecipient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKekRecipient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::StringW, Org::BouncyCastle::Crypto::Parameters::KeyParameter, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKekRecipient)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x114e814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddKekRecipient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKekRecipient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::StringW, Org::BouncyCastle::Crypto::Parameters::KeyParameter, Org::BouncyCastle::Asn1::Cms::KekIdentifier)>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKekRecipient)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x114e8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddKekRecipient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::KekIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddPasswordRecipient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(Org::BouncyCastle::Cms::CmsPbeKey, ::StringW)>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddPasswordRecipient)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x114e9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddPasswordRecipient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsPbeKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKeyAgreementRecipient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::StringW, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW)>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyAgreementRecipient)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x114eb6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddKeyAgreementRecipient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKeyAgreementRecipients
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::StringW, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, System::Collections::ICollection, ::StringW)>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyAgreementRecipients)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x114ec8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddKeyAgreementRecipients",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddRecipientInfoGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(Org::BouncyCastle::Cms::RecipientInfoGenerator)>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddRecipientInfoGenerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x114eed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddRecipientInfoGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::RecipientInfoGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator.GetAlgorithmIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::StringW, Org::BouncyCastle::Crypto::Parameters::KeyParameter, Org::BouncyCastle::Asn1::Asn1Encodable, ByRef<Org::BouncyCastle::Crypto::ICipherParameters>)>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::GetAlgorithmIdentifier)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x114ef80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::CmsEnvelopedGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedGenerator.GenerateAsn1Parameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Encodable (Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::StringW, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cms::CmsEnvelopedGenerator::GenerateAsn1Parameters)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x114f0c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::CmsEnvelopedGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_rc2Table(::ArrayW<int16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int16_t>, "rc2Table", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::ArrayW<int16_t>>(value));
}
 ::ArrayW<int16_t> Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_rc2Table()  {
return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "rc2Table", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_DesEde3Cbc(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DesEde3Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_DesEde3Cbc()  {
return ::cordl_internals::getStaticField<::StringW, "DesEde3Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_RC2Cbc(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "RC2Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_RC2Cbc()  {
return ::cordl_internals::getStaticField<::StringW, "RC2Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_Aes128Cbc(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Aes128Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_Aes128Cbc()  {
return ::cordl_internals::getStaticField<::StringW, "Aes128Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_Aes192Cbc(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Aes192Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_Aes192Cbc()  {
return ::cordl_internals::getStaticField<::StringW, "Aes192Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_Aes256Cbc(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Aes256Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_Aes256Cbc()  {
return ::cordl_internals::getStaticField<::StringW, "Aes256Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_Camellia128Cbc(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Camellia128Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_Camellia128Cbc()  {
return ::cordl_internals::getStaticField<::StringW, "Camellia128Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_Camellia192Cbc(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Camellia192Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_Camellia192Cbc()  {
return ::cordl_internals::getStaticField<::StringW, "Camellia192Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_Camellia256Cbc(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Camellia256Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_Camellia256Cbc()  {
return ::cordl_internals::getStaticField<::StringW, "Camellia256Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_SeedCbc(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "SeedCbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_SeedCbc()  {
return ::cordl_internals::getStaticField<::StringW, "SeedCbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_DesEde3Wrap(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "DesEde3Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_DesEde3Wrap()  {
return ::cordl_internals::getStaticField<::StringW, "DesEde3Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_Aes128Wrap(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Aes128Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_Aes128Wrap()  {
return ::cordl_internals::getStaticField<::StringW, "Aes128Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_Aes192Wrap(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Aes192Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_Aes192Wrap()  {
return ::cordl_internals::getStaticField<::StringW, "Aes192Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_Aes256Wrap(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Aes256Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_Aes256Wrap()  {
return ::cordl_internals::getStaticField<::StringW, "Aes256Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_Camellia128Wrap(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Camellia128Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_Camellia128Wrap()  {
return ::cordl_internals::getStaticField<::StringW, "Camellia128Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_Camellia192Wrap(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Camellia192Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_Camellia192Wrap()  {
return ::cordl_internals::getStaticField<::StringW, "Camellia192Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_Camellia256Wrap(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "Camellia256Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_Camellia256Wrap()  {
return ::cordl_internals::getStaticField<::StringW, "Camellia256Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_SeedWrap(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "SeedWrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_SeedWrap()  {
return ::cordl_internals::getStaticField<::StringW, "SeedWrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_ECDHSha1Kdf(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ECDHSha1Kdf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_ECDHSha1Kdf()  {
return ::cordl_internals::getStaticField<::StringW, "ECDHSha1Kdf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_ECMqvSha1Kdf(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ECMqvSha1Kdf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_ECMqvSha1Kdf()  {
return ::cordl_internals::getStaticField<::StringW, "ECMqvSha1Kdf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get>();
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_recipientInfoGenerators(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_recipientInfoGenerators() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_rand(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_rand() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__set_unprotectedAttributeGenerator(Org::BouncyCastle::Cms::CmsAttributeTableGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>(value));
}
constexpr Org::BouncyCastle::Cms::CmsAttributeTableGenerator Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__get_unprotectedAttributeGenerator() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Cms::CmsEnvelopedGenerator Org::BouncyCastle::Cms::CmsEnvelopedGenerator::New_ctor()  {
Org::BouncyCastle::Cms::CmsEnvelopedGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>())};
return o;
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Cms::CmsEnvelopedGenerator Org::BouncyCastle::Cms::CmsEnvelopedGenerator::New_ctor(Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Cms::CmsEnvelopedGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>(rand))};
return o;
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::_ctor(Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rand);
}
 Org::BouncyCastle::Cms::CmsAttributeTableGenerator Org::BouncyCastle::Cms::CmsEnvelopedGenerator::get_UnprotectedAttributeGenerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "get_UnprotectedAttributeGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::set_UnprotectedAttributeGenerator(Org::BouncyCastle::Cms::CmsAttributeTableGenerator value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "set_UnprotectedAttributeGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyTransRecipient(Org::BouncyCastle::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddKeyTransRecipient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cert);
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyTransRecipient(Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, ::ArrayW<uint8_t> subKeyId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddKeyTransRecipient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pubKey, subKeyId);
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKekRecipient(::StringW keyAlgorithm, Org::BouncyCastle::Crypto::Parameters::KeyParameter key, ::ArrayW<uint8_t> keyIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddKekRecipient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyAlgorithm, key, keyIdentifier);
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKekRecipient(::StringW keyAlgorithm, Org::BouncyCastle::Crypto::Parameters::KeyParameter key, Org::BouncyCastle::Asn1::Cms::KekIdentifier kekIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddKekRecipient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::KekIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyAlgorithm, key, kekIdentifier);
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddPasswordRecipient(Org::BouncyCastle::Cms::CmsPbeKey pbeKey, ::StringW kekAlgorithmOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddPasswordRecipient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsPbeKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pbeKey, kekAlgorithmOid);
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyAgreementRecipient(::StringW agreementAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter senderPrivateKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter senderPublicKey, Org::BouncyCastle::X509::X509Certificate recipientCert, ::StringW cekWrapAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddKeyAgreementRecipient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, agreementAlgorithm, senderPrivateKey, senderPublicKey, recipientCert, cekWrapAlgorithm);
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyAgreementRecipients(::StringW agreementAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter senderPrivateKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter senderPublicKey, System::Collections::ICollection recipientCerts, ::StringW cekWrapAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddKeyAgreementRecipients",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, agreementAlgorithm, senderPrivateKey, senderPublicKey, recipientCerts, cekWrapAlgorithm);
}
 void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddRecipientInfoGenerator(Org::BouncyCastle::Cms::RecipientInfoGenerator recipientInfoGenerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "AddRecipientInfoGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::RecipientInfoGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, recipientInfoGenerator);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::CmsEnvelopedGenerator::GetAlgorithmIdentifier(::StringW encryptionOid, Org::BouncyCastle::Crypto::Parameters::KeyParameter encKey, Org::BouncyCastle::Asn1::Asn1Encodable asn1Params, ByRef<Org::BouncyCastle::Crypto::ICipherParameters> cipherParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "GetAlgorithmIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Org::BouncyCastle::Crypto::ICipherParameters>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method, encryptionOid, encKey, asn1Params, cipherParameters);
}
 Org::BouncyCastle::Asn1::Asn1Encodable Org::BouncyCastle::Cms::CmsEnvelopedGenerator::GenerateAsn1Parameters(::StringW encryptionOid, ::ArrayW<uint8_t> encKeyBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(),
                            "GenerateAsn1Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Encodable, false>(const_cast<void*>(instance), ___internal_method, encryptionOid, encKeyBytes);
}
