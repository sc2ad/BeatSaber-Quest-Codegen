#pragma once
#include "Org/BouncyCastle/Cms/zzzz__EnvelopedDataHelper_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::EnvelopedDataHelper.CreateContentCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(bool, Org::BouncyCastle::Crypto::ICipherParameters, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&Org::BouncyCastle::Cms::EnvelopedDataHelper::CreateContentCipher)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1176598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::EnvelopedDataHelper>::get(),
                            "CreateContentCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::EnvelopedDataHelper.GenerateEncryptionAlgID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Cms::EnvelopedDataHelper::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Crypto::Parameters::KeyParameter, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Cms::EnvelopedDataHelper::GenerateEncryptionAlgID)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1176608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::EnvelopedDataHelper>::get(),
                            "GenerateEncryptionAlgID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::EnvelopedDataHelper.CreateKeyGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::CipherKeyGenerator (Org::BouncyCastle::Cms::EnvelopedDataHelper::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Cms::EnvelopedDataHelper::CreateKeyGenerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1176698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::EnvelopedDataHelper>::get(),
                            "CreateKeyGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::EnvelopedDataHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::EnvelopedDataHelper::*)()>(&Org::BouncyCastle::Cms::EnvelopedDataHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11766a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::EnvelopedDataHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Cms::EnvelopedDataHelper::__set_BaseCipherNames(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "BaseCipherNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::EnvelopedDataHelper>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Cms::EnvelopedDataHelper::__get_BaseCipherNames()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "BaseCipherNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::EnvelopedDataHelper>::get>();
}
 void Org::BouncyCastle::Cms::EnvelopedDataHelper::__set_MacAlgNames(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "MacAlgNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::EnvelopedDataHelper>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Cms::EnvelopedDataHelper::__get_MacAlgNames()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "MacAlgNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::EnvelopedDataHelper>::get>();
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Cms::EnvelopedDataHelper::CreateContentCipher(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters encKey, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier encryptionAlgID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::EnvelopedDataHelper>::get(),
                            "CreateContentCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, forEncryption, encKey, encryptionAlgID);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::EnvelopedDataHelper::GenerateEncryptionAlgID(Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID, Org::BouncyCastle::Crypto::Parameters::KeyParameter encKey, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::EnvelopedDataHelper>::get(),
                            "GenerateEncryptionAlgID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method, encryptionOID, encKey, random);
}
 Org::BouncyCastle::Crypto::CipherKeyGenerator Org::BouncyCastle::Cms::EnvelopedDataHelper::CreateKeyGenerator(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::EnvelopedDataHelper>::get(),
                            "CreateKeyGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::CipherKeyGenerator, false>(const_cast<void*>(instance), ___internal_method, algorithm, random);
}
// Ctor Parameters []
 Org::BouncyCastle::Cms::EnvelopedDataHelper::EnvelopedDataHelper()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnvelopedDataHelper>())) {}
 void Org::BouncyCastle::Cms::EnvelopedDataHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::EnvelopedDataHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
