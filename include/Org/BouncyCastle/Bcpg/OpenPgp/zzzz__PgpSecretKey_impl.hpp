#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSecretKey_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SecretKeyPacket_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(Org::BouncyCastle::Bcpg::SecretKeyPacket, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10315dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SecretKeyPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t>, bool, bool, Org::BouncyCastle::Security::SecureRandom, bool)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x1031608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(int32_t, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ::StringW, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t>, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10322dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(int32_t, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ::StringW, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t>, bool, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1032308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(int32_t, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ::StringW, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, bool, ::ArrayW<char16_t>, bool, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1032398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(int32_t, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ::StringW, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t>, bool, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x10324f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(int32_t, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ::StringW, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t>, bool, bool, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1032468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(int32_t, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ::StringW, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<char16_t>, bool, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x10327d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(int32_t, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ::StringW, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, Org::BouncyCastle::Bcpg::HashAlgorithmTag, bool, ::ArrayW<char16_t>, bool, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1032878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(int32_t, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ::StringW, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<uint8_t>, bool, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1032994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(int32_t, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ::StringW, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<uint8_t>, bool, bool, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x103290c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CertifiedPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(int32_t, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ::StringW, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CertifiedPublicKey)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x1032520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "CertifiedPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CertifiedPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(int32_t, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, ::StringW, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CertifiedPublicKey)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x10329c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "CertifiedPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(int32_t, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, System::DateTime, ::StringW, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t>, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1032ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(int32_t, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, System::DateTime, ::StringW, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t>, bool, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1032fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_IsSigningKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsSigningKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x103309c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_IsSigningKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_IsMasterKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsMasterKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10330e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_IsMasterKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_IsPrivateKeyEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsPrivateKeyEmpty)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x10330fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_IsPrivateKeyEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_KeyEncryptionAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_KeyEncryptionAlgorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1033130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_KeyEncryptionAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_KeyId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_KeyId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x103314c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_KeyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_S2kUsage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_S2kUsage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1033168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_S2kUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_S2k
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::S2k (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_S2k)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1033184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_S2k",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_PublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_PublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10331a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_PublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_UserIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_UserIds)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10331a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_UserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_UserAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_UserAttributes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10331c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_UserAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ExtractKeyData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<uint8_t>, bool)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractKeyData)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x10331e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ExtractKeyData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.RecoverKeyData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::StringW, Org::BouncyCastle::Crypto::Parameters::KeyParameter, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::RecoverKeyData)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x10343e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "RecoverKeyData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ExtractPrivateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<char16_t>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKey)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1034668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ExtractPrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ExtractPrivateKeyUtf8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<char16_t>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKeyUtf8)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1034e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ExtractPrivateKeyUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ExtractPrivateKeyRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKeyRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1034e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ExtractPrivateKeyRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.DoExtractPrivateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<uint8_t>, bool)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoExtractPrivateKey)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0x1034694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "DoExtractPrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.GetECKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::StringW, Org::BouncyCastle::Bcpg::BcpgInputStream)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetECKey)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1034e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "GetECKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.Checksum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(bool, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::Checksum)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x1031d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "Checksum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.GetEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetEncoded)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1034fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(System::IO::Stream)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::Encode)> {
  constexpr static std::size_t size = 0xd04;
  constexpr static std::size_t addrs = 0x103502c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CopyWithNewPassword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, ::ArrayW<char16_t>, ::ArrayW<char16_t>, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPassword)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1035d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "CopyWithNewPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CopyWithNewPasswordUtf8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, ::ArrayW<char16_t>, ::ArrayW<char16_t>, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPasswordUtf8)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1036250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "CopyWithNewPasswordUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CopyWithNewPasswordRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPasswordRaw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10362b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "CopyWithNewPasswordRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.DoCopyWithNewPassword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoCopyWithNewPassword)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x1035e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "DoCopyWithNewPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ReplacePublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ReplacePublicKey)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x10362c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ReplacePublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.EncryptKeyDataV3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t>, bool, Org::BouncyCastle::Security::SecureRandom, ByRef<Org::BouncyCastle::Bcpg::S2k>, ByRef<::ArrayW<uint8_t>>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptKeyDataV3)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x103202c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "EncryptKeyDataV3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Org::BouncyCastle::Bcpg::S2k>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.EncryptKeyDataV4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<uint8_t>, bool, Org::BouncyCastle::Security::SecureRandom, ByRef<Org::BouncyCastle::Bcpg::S2k>, ByRef<::ArrayW<uint8_t>>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptKeyDataV4)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1031f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "EncryptKeyDataV4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Org::BouncyCastle::Bcpg::S2k>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.EncryptData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, Org::BouncyCastle::Crypto::Parameters::KeyParameter, ::ArrayW<uint8_t>, int32_t, int32_t, Org::BouncyCastle::Security::SecureRandom, ByRef<::ArrayW<uint8_t>>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptData)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x103639c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "EncryptData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExpr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(System::IO::Stream, ::ArrayW<char16_t>, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExpr)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x10367f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ParseSecretKeyFromSExpr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExprUtf8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(System::IO::Stream, ::ArrayW<char16_t>, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprUtf8)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1036b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ParseSecretKeyFromSExprUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExprRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(System::IO::Stream, ::ArrayW<uint8_t>, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1036bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ParseSecretKeyFromSExprRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.DoParseSecretKeyFromSExpr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(System::IO::Stream, ::ArrayW<uint8_t>, bool, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoParseSecretKeyFromSExpr)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1036834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "DoParseSecretKeyFromSExpr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExpr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(System::IO::Stream, ::ArrayW<char16_t>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExpr)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1037044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ParseSecretKeyFromSExpr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExprUtf8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(System::IO::Stream, ::ArrayW<char16_t>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprUtf8)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1037544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ParseSecretKeyFromSExprUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExprRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(System::IO::Stream, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1037570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ParseSecretKeyFromSExprRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.DoParseSecretKeyFromSExpr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (*)(System::IO::Stream, ::ArrayW<uint8_t>, bool)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoParseSecretKeyFromSExpr)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x1037070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "DoParseSecretKeyFromSExpr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.GetDValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(System::IO::Stream, ::ArrayW<uint8_t>, bool, ::StringW)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetDValue)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1036e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "GetDValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__set_secret(Org::BouncyCastle::Bcpg::SecretKeyPacket value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Bcpg::SecretKeyPacket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Bcpg::SecretKeyPacket>(value));
}
constexpr Org::BouncyCastle::Bcpg::SecretKeyPacket Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__get_secret() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Bcpg::SecretKeyPacket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__set_pub(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>(value));
}
constexpr Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__get_pub() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(Org::BouncyCastle::Bcpg::SecretKeyPacket secret, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pub)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(secret, pub))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(Org::BouncyCastle::Bcpg::SecretKeyPacket secret, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pub)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SecretKeyPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, secret, pub);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey privKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1, Org::BouncyCastle::Security::SecureRandom rand, bool isMasterKey)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(privKey, pubKey, encAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, rand, isMasterKey))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey privKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1, Org::BouncyCastle::Security::SecureRandom rand, bool isMasterKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privKey, pubKey, encAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, rand, isMasterKey);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(certificationLevel, keyPair, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificationLevel, keyPair, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(certificationLevel, keyPair, id, encAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificationLevel, keyPair, id, encAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(certificationLevel, keyPair, id, encAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets, unhashedPackets, rand))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificationLevel, keyPair, id, encAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(certificationLevel, keyPair, id, encAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets, rand))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificationLevel, keyPair, id, encAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(certificationLevel, keyPair, id, encAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, hashedPackets, unhashedPackets, rand))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificationLevel, keyPair, id, encAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets, unhashedPackets, rand))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets, rand))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, hashedPackets, unhashedPackets, rand))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CertifiedPublicKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "CertifiedPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, certificationLevel, keyPair, id, hashedPackets, unhashedPackets);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CertifiedPublicKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "CertifiedPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, certificationLevel, keyPair, id, hashedPackets, unhashedPackets, hashAlgorithm);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey, System::DateTime time, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(certificationLevel, algorithm, pubKey, privKey, time, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey, System::DateTime time, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificationLevel, algorithm, pubKey, privKey, time, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey, System::DateTime time, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>(certificationLevel, algorithm, pubKey, privKey, time, id, encAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey, System::DateTime time, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificationLevel, algorithm, pubKey, privKey, time, id, encAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsSigningKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_IsSigningKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsMasterKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_IsMasterKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsPrivateKeyEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_IsPrivateKeyEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_KeyEncryptionAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_KeyEncryptionAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_KeyId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_KeyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_S2kUsage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_S2kUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::S2k Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_S2k()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_S2k",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::S2k, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_PublicKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_PublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerable Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_UserIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_UserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerable Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_UserAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "get_UserAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractKeyData(::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ExtractKeyData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, rawPassPhrase, clearPassPhrase);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::RecoverKeyData(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::StringW modeAndPadding, Org::BouncyCastle::Crypto::Parameters::KeyParameter key, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> keyData, int32_t keyOff, int32_t keyLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "RecoverKeyData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, encAlgorithm, modeAndPadding, key, iv, keyData, keyOff, keyLen);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKey(::ArrayW<char16_t> passPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ExtractPrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, false>(const_cast<void*>(instance), ___internal_method, passPhrase);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKeyUtf8(::ArrayW<char16_t> passPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ExtractPrivateKeyUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, false>(const_cast<void*>(instance), ___internal_method, passPhrase);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKeyRaw(::ArrayW<uint8_t> rawPassPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ExtractPrivateKeyRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, false>(const_cast<void*>(instance), ___internal_method, rawPassPhrase);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoExtractPrivateKey(::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "DoExtractPrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, false>(const_cast<void*>(instance), ___internal_method, rawPassPhrase, clearPassPhrase);
}
 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetECKey(::StringW algorithm, Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "GetECKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, false>(const_cast<void*>(instance), ___internal_method, algorithm, bcpgIn);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::Checksum(bool useSha1, ::ArrayW<uint8_t> bytes, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "Checksum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, useSha1, bytes, length);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetEncoded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::Encode(System::IO::Stream outStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outStr);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPassword(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey key, ::ArrayW<char16_t> oldPassPhrase, ::ArrayW<char16_t> newPassPhrase, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "CopyWithNewPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, key, oldPassPhrase, newPassPhrase, newEncAlgorithm, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPasswordUtf8(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey key, ::ArrayW<char16_t> oldPassPhrase, ::ArrayW<char16_t> newPassPhrase, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "CopyWithNewPasswordUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, key, oldPassPhrase, newPassPhrase, newEncAlgorithm, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPasswordRaw(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey key, ::ArrayW<uint8_t> rawOldPassPhrase, ::ArrayW<uint8_t> rawNewPassPhrase, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "CopyWithNewPasswordRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, key, rawOldPassPhrase, rawNewPassPhrase, newEncAlgorithm, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoCopyWithNewPassword(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey key, ::ArrayW<uint8_t> rawOldPassPhrase, ::ArrayW<uint8_t> rawNewPassPhrase, bool clearPassPhrase, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "DoCopyWithNewPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, key, rawOldPassPhrase, rawNewPassPhrase, clearPassPhrase, newEncAlgorithm, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ReplacePublicKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey secretKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ReplacePublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, secretKey, publicKey);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptKeyDataV3(::ArrayW<uint8_t> rawKeyData, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, Org::BouncyCastle::Security::SecureRandom random, ByRef<Org::BouncyCastle::Bcpg::S2k> s2k, ByRef<::ArrayW<uint8_t>> iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "EncryptKeyDataV3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Org::BouncyCastle::Bcpg::S2k>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, rawKeyData, encAlgorithm, rawPassPhrase, clearPassPhrase, random, s2k, iv);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptKeyDataV4(::ArrayW<uint8_t> rawKeyData, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, Org::BouncyCastle::Security::SecureRandom random, ByRef<Org::BouncyCastle::Bcpg::S2k> s2k, ByRef<::ArrayW<uint8_t>> iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "EncryptKeyDataV4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Org::BouncyCastle::Bcpg::S2k>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, rawKeyData, encAlgorithm, hashAlgorithm, rawPassPhrase, clearPassPhrase, random, s2k, iv);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptData(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Crypto::Parameters::KeyParameter key, ::ArrayW<uint8_t> data, int32_t dataOff, int32_t dataLen, Org::BouncyCastle::Security::SecureRandom random, ByRef<::ArrayW<uint8_t>> iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "EncryptData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, encAlgorithm, key, data, dataOff, dataLen, random, iv);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExpr(System::IO::Stream inputStream, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ParseSecretKeyFromSExpr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, inputStream, passPhrase, pubKey);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprUtf8(System::IO::Stream inputStream, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ParseSecretKeyFromSExprUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, inputStream, passPhrase, pubKey);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprRaw(System::IO::Stream inputStream, ::ArrayW<uint8_t> rawPassPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ParseSecretKeyFromSExprRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, inputStream, rawPassPhrase, pubKey);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoParseSecretKeyFromSExpr(System::IO::Stream inputStream, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "DoParseSecretKeyFromSExpr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, inputStream, rawPassPhrase, clearPassPhrase, pubKey);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExpr(System::IO::Stream inputStream, ::ArrayW<char16_t> passPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ParseSecretKeyFromSExpr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, inputStream, passPhrase);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprUtf8(System::IO::Stream inputStream, ::ArrayW<char16_t> passPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ParseSecretKeyFromSExprUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, inputStream, passPhrase);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprRaw(System::IO::Stream inputStream, ::ArrayW<uint8_t> rawPassPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "ParseSecretKeyFromSExprRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, inputStream, rawPassPhrase);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoParseSecretKeyFromSExpr(System::IO::Stream inputStream, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "DoParseSecretKeyFromSExpr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(nullptr, ___internal_method, inputStream, rawPassPhrase, clearPassPhrase);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetDValue(System::IO::Stream inputStream, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, ::StringW curveName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get(),
                            "GetDValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, inputStream, rawPassPhrase, clearPassPhrase, curveName);
}
