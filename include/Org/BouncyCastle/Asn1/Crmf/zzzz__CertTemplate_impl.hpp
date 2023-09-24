#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertTemplate_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__OptionalValidity_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)(Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::_ctor)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0xdf6b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Crmf::CertTemplate (*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::GetInstance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xdf66f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Version)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdf72b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Crmf::CertTemplate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_SerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerInteger (Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf7348;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Crmf::CertTemplate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_SigningAlg
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_SigningAlg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf7350;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Crmf::CertTemplate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_Issuer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Name (Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf7358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Crmf::CertTemplate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_Validity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Crmf::OptionalValidity (Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Validity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf7360;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Crmf::CertTemplate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_Subject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Name (Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf7368;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Crmf::CertTemplate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_PublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo (Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_PublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf7370;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Crmf::CertTemplate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_IssuerUID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerBitString (Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_IssuerUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf7378;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Crmf::CertTemplate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_SubjectUID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerBitString (Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_SubjectUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf7380;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Crmf::CertTemplate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Extensions (Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf7388;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Crmf::CertTemplate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Crmf::CertTemplate.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(&Org::BouncyCastle::Asn1::Crmf::CertTemplate::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdf7390;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Crmf::CertTemplate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_seq(Org::BouncyCastle::Asn1::Asn1Sequence value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1Sequence, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1Sequence>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1Sequence Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_seq() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1Sequence, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_version(Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerInteger>(value));
}
constexpr Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_version() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_serialNumber(Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerInteger, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerInteger>(value));
}
constexpr Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_serialNumber() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerInteger, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_signingAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_signingAlg() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_issuer(Org::BouncyCastle::Asn1::X509::X509Name value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::X509Name, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::X509Name>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::X509Name Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_issuer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::X509Name, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_validity(Org::BouncyCastle::Asn1::Crmf::OptionalValidity value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Crmf::OptionalValidity, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Crmf::OptionalValidity>(value));
}
constexpr Org::BouncyCastle::Asn1::Crmf::OptionalValidity Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_validity() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Crmf::OptionalValidity, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_subject(Org::BouncyCastle::Asn1::X509::X509Name value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::X509Name, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::X509Name>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::X509Name Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_subject() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::X509Name, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_publicKey(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_publicKey() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_issuerUID(Org::BouncyCastle::Asn1::DerBitString value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerBitString, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerBitString>(value));
}
constexpr Org::BouncyCastle::Asn1::DerBitString Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_issuerUID() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerBitString, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_subjectUID(Org::BouncyCastle::Asn1::DerBitString value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerBitString, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerBitString>(value));
}
constexpr Org::BouncyCastle::Asn1::DerBitString Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_subjectUID() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerBitString, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_extensions(Org::BouncyCastle::Asn1::X509::X509Extensions value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::X509Extensions, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::X509Extensions>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::X509Extensions Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_extensions() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::X509Extensions, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Asn1::Crmf::CertTemplate Org::BouncyCastle::Asn1::Crmf::CertTemplate::New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq)  {
Org::BouncyCastle::Asn1::Crmf::CertTemplate o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Asn1::Crmf::CertTemplate>(seq))};
return o;
}
 void Org::BouncyCastle::Asn1::Crmf::CertTemplate::_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seq);
}
 Org::BouncyCastle::Asn1::Crmf::CertTemplate Org::BouncyCastle::Asn1::Crmf::CertTemplate::GetInstance(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Crmf::CertTemplate, false>(nullptr, ___internal_method, obj);
}
 int32_t Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_SerialNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "get_SerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_SigningAlg()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "get_SigningAlg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::X509Name Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Issuer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "get_Issuer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::X509Name, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Crmf::OptionalValidity Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Validity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "get_Validity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Crmf::OptionalValidity, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::X509Name Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Subject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "get_Subject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::X509Name, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_PublicKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "get_PublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::DerBitString Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_IssuerUID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "get_IssuerUID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerBitString, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::DerBitString Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_SubjectUID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "get_SubjectUID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerBitString, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::X509Extensions Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::X509Extensions, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Asn1::Crmf::CertTemplate::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Crmf::CertTemplate>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
