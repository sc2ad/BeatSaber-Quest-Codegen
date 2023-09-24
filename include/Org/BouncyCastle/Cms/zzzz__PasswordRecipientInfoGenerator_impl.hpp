#pragma once
#include "Org/BouncyCastle/Cms/zzzz__PasswordRecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientInfo_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedHelper_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::*)()>(&Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x117c3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator.set_KeyDerivationAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::set_KeyDerivationAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x117c3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>::get(),
                            "set_KeyDerivationAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator.set_KeyEncryptionKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::*)(Org::BouncyCastle::Crypto::Parameters::KeyParameter)>(&Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::set_KeyEncryptionKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x117c3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>::get(),
                            "set_KeyEncryptionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator.set_KeyEncryptionKeyOID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::*)(::StringW)>(&Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::set_KeyEncryptionKeyOID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x117c3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>::get(),
                            "set_KeyEncryptionKeyOID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cms::RecipientInfo (Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::*)(Org::BouncyCastle::Crypto::Parameters::KeyParameter, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x117c3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Cms::RecipientInfoGenerator
constexpr  Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::operator Org::BouncyCastle::Cms::RecipientInfoGenerator() const noexcept {
return Org::BouncyCastle::Cms::RecipientInfoGenerator(::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__set_Helper(Org::BouncyCastle::Cms::CmsEnvelopedHelper value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Cms::CmsEnvelopedHelper, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>::get>(std::forward<Org::BouncyCastle::Cms::CmsEnvelopedHelper>(value));
}
 Org::BouncyCastle::Cms::CmsEnvelopedHelper Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__get_Helper()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Cms::CmsEnvelopedHelper, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>::get>();
}
constexpr void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__set_keyDerivationAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__get_keyDerivationAlgorithm() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__set_keyEncryptionKey(Org::BouncyCastle::Crypto::Parameters::KeyParameter value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::KeyParameter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::KeyParameter>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::KeyParameter Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__get_keyEncryptionKey() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::KeyParameter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__set_keyEncryptionKeyOID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::__get_keyEncryptionKeyOID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::New_ctor()  {
Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>())};
return o;
}
 void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::set_KeyDerivationAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>::get(),
                            "set_KeyDerivationAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::set_KeyEncryptionKey(Org::BouncyCastle::Crypto::Parameters::KeyParameter value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>::get(),
                            "set_KeyEncryptionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::set_KeyEncryptionKeyOID(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>::get(),
                            "set_KeyEncryptionKeyOID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Org::BouncyCastle::Asn1::Cms::RecipientInfo Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator::Generate(Org::BouncyCastle::Crypto::Parameters::KeyParameter contentEncryptionKey, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cms::RecipientInfo, false>(const_cast<void*>(instance), ___internal_method, contentEncryptionKey, random);
}
