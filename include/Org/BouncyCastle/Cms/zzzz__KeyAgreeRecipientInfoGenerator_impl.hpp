#pragma once
#include "Org/BouncyCastle/Cms/zzzz__KeyAgreeRecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorPublicKey_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientInfo_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedHelper_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)()>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11778c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.set_KeyAgreementOID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_KeyAgreementOID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11778c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            "set_KeyAgreementOID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.set_KeyEncryptionOID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_KeyEncryptionOID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11778d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            "set_KeyEncryptionOID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.set_RecipientCerts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(System::Collections::ICollection)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_RecipientCerts)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x11778d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            "set_RecipientCerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.set_SenderKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_SenderKeyPair)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1177944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            "set_SenderKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cms::RecipientInfo (Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(Org::BouncyCastle::Crypto::Parameters::KeyParameter, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0x11f8;
  constexpr static std::size_t addrs = 0x117794c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.CreateOriginatorPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey (*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::CreateOriginatorPublicKey)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1178b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            "CreateOriginatorPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Cms::RecipientInfoGenerator
constexpr  Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::operator Org::BouncyCastle::Cms::RecipientInfoGenerator() const noexcept {
return Org::BouncyCastle::Cms::RecipientInfoGenerator(::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__set_Helper(Org::BouncyCastle::Cms::CmsEnvelopedHelper value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Cms::CmsEnvelopedHelper, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get>(std::forward<Org::BouncyCastle::Cms::CmsEnvelopedHelper>(value));
}
 Org::BouncyCastle::Cms::CmsEnvelopedHelper Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_Helper()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Cms::CmsEnvelopedHelper, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get>();
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__set_keyAgreementOID(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_keyAgreementOID() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__set_keyEncryptionOID(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_keyEncryptionOID() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__set_recipientCerts(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_recipientCerts() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__set_senderKeyPair(Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair>(value));
}
constexpr Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_senderKeyPair() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::New_ctor()  {
Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>())};
return o;
}
 void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_KeyAgreementOID(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            "set_KeyAgreementOID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_KeyEncryptionOID(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            "set_KeyEncryptionOID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_RecipientCerts(System::Collections::ICollection value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            "set_RecipientCerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_SenderKeyPair(Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            "set_SenderKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Org::BouncyCastle::Asn1::Cms::RecipientInfo Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::Generate(Org::BouncyCastle::Crypto::Parameters::KeyParameter contentEncryptionKey, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cms::RecipientInfo, false>(const_cast<void*>(instance), ___internal_method, contentEncryptionKey, random);
}
 Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::CreateOriginatorPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator>::get(),
                            "CreateOriginatorPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey, false>(nullptr, ___internal_method, publicKey);
}
