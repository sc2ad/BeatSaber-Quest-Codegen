#pragma once
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1CipherBuilderWithKey_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipher_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, int32_t, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xe9b09c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.get_AlgorithmDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)()>(&Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe9b2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.GetMaxOutputSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)(int32_t)>(&Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::GetMaxOutputSize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe9b2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey>::get(),
                            "GetMaxOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.BuildCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipher (Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)(System::IO::Stream)>(&Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::BuildCipher)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xe9b304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey>::get(),
                            "BuildCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters (Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::*)()>(&Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe9b528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherBuilderWithKey
constexpr  Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::operator Org::BouncyCastle::Crypto::ICipherBuilderWithKey() const noexcept {
return Org::BouncyCastle::Crypto::ICipherBuilderWithKey(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherBuilder
constexpr  Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::operator Org::BouncyCastle::Crypto::ICipherBuilder() const noexcept {
return Org::BouncyCastle::Crypto::ICipherBuilder(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__set_encKey(Org::BouncyCastle::Crypto::Parameters::KeyParameter value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::KeyParameter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::KeyParameter>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::KeyParameter Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__get_encKey() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::KeyParameter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__set_algorithmIdentifier(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::__get_algorithmIdentifier() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID, int32_t keySize, Org::BouncyCastle::Security::SecureRandom random)  {
Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey>(encryptionOID, keySize, random))};
return o;
}
 void Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID, int32_t keySize, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encryptionOID, keySize, random);
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_AlgorithmDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::GetMaxOutputSize(int32_t inputLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey>::get(),
                            "GetMaxOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, inputLen);
}
 Org::BouncyCastle::Crypto::ICipher Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::BuildCipher(System::IO::Stream stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey>::get(),
                            "BuildCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipher, false>(const_cast<void*>(instance), ___internal_method, stream);
}
 Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherParameters, false>(const_cast<void*>(instance), ___internal_method);
}
