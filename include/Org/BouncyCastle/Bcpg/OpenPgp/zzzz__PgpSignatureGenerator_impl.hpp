#pragma once
namespace {
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpOnePassSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1032c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.InitSign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::InitSign)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1032d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "InitSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.InitSign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, ::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::InitSign)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x103d7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "InitSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x103da08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.doCanonicalUpdateByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::doCanonicalUpdateByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x103da1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "doCanonicalUpdateByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.doUpdateCRLF
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::doUpdateCRLF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x103dba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "doUpdateCRLF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.doUpdateByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::doUpdateByte)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x103da80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "doUpdateByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x103dbc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Update)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x103dbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.SetHashedSubpackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::SetHashedSubpackets)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1032d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "SetHashedSubpackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.SetUnhashedSubpackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::SetUnhashedSubpackets)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1032e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "SetUnhashedSubpackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.GenerateOnePassVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateOnePassVersion)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x103dd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "GenerateOnePassVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Generate)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x103de48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.GenerateCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::StringW, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1032e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "GenerateCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.GenerateCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x103ec48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "GenerateCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.GenerateCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x103ee24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "GenerateCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.GenerateCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x103ee54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "GenerateCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.GetEncodedPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GetEncodedPublicKey)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x103ee6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "GetEncodedPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.packetPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>, ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::packetPresent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x103e65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "packetPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.insertSubpacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>, ::Org::BouncyCastle::Bcpg::SignatureSubpacket)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::insertSubpacket)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x103e6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "insertSubpacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignatureSubpacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.UpdateWithIdData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(int32_t, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::UpdateWithIdData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x103eb78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "UpdateWithIdData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.UpdateWithPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::UpdateWithPublicKey)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x103eab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "UpdateWithPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__set_EmptySignatureSubpackets(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> value)  {
::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>, "EmptySignatureSubpackets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get>(std::forward<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>>(value));
}
 ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__get_EmptySignatureSubpackets()  {
return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>, "EmptySignatureSubpackets", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get>();
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__get_keyAlgorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::HashAlgorithmTag, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__get_hashAlgorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::HashAlgorithmTag, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__set_privKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__get_privKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__set_sig(::Org::BouncyCastle::Crypto::ISigner value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::ISigner, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::ISigner>(value));
}
constexpr ::Org::BouncyCastle::Crypto::ISigner ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__get_sig() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::ISigner, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__set_dig(::Org::BouncyCastle::Crypto::IDigest value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IDigest, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::IDigest>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IDigest ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__get_dig() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IDigest, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__set_signatureType(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__get_signatureType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__set_lastb(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__get_lastb() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__set_unhashed(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> value)  {
::cordl_internals::setInstanceField<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>>(value));
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__get_unhashed() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__set_hashed(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> value)  {
::cordl_internals::setInstanceField<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>>(value));
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__get_hashed() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keyAlgorithm", ty: "::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "::Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::PgpSignatureGenerator(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PgpSignatureGenerator>(keyAlgorithm, hashAlgorithm))) {}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyAlgorithm, hashAlgorithm);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "InitSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sigType, key);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey key, ::Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "InitSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sigType, key, random);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Update(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::doCanonicalUpdateByte(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "doCanonicalUpdateByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::doUpdateCRLF()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "doUpdateCRLF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::doUpdateByte(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "doUpdateByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Update(::ArrayW<uint8_t> b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Update(::ArrayW<uint8_t> b, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b, off, len);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::SetHashedSubpackets(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "SetHashedSubpackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hashedPackets);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::SetUnhashedSubpackets(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "SetUnhashedSubpackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unhashedPackets);
}
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateOnePassVersion(bool isNested)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "GenerateOnePassVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature, false>(const_cast<void*>(instance), ___internal_method, isNested);
}
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Generate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification(::StringW id, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "GenerateCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature, false>(const_cast<void*>(instance), ___internal_method, id, pubKey);
}
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector userAttributes, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "GenerateCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature, false>(const_cast<void*>(instance), ___internal_method, userAttributes, pubKey);
}
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey masterKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "GenerateCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature, false>(const_cast<void*>(instance), ___internal_method, masterKey, pubKey);
}
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "GenerateCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature, false>(const_cast<void*>(instance), ___internal_method, pubKey);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GetEncodedPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "GetEncodedPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, pubKey);
}
 bool ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::packetPresent(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> packets, ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "packetPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packets, type);
}
 ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::insertSubpacket(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> packets, ::Org::BouncyCastle::Bcpg::SignatureSubpacket subpacket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "insertSubpacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignatureSubpacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket>, false>(const_cast<void*>(instance), ___internal_method, packets, subpacket);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::UpdateWithIdData(int32_t header, ::ArrayW<uint8_t> idBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "UpdateWithIdData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, header, idBytes);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::UpdateWithPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator>::get(),
                            "UpdateWithPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
} // end anonymous namespace
