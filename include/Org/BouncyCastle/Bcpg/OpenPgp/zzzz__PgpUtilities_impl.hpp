#pragma once
namespace {
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUtilities_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__MPInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1041a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.DsaSigToMpi
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::DsaSigToMpi)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x103e75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "DsaSigToMpi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.RsaSigToMpi
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::RsaSigToMpi)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x103e9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "RsaSigToMpi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GetDigestName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetDigestName)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x102d858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GetDigestName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GetSignatureName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetSignatureName)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x103c164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GetSignatureName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GetSymmetricCipherName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetSymmetricCipherName)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x102d6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GetSymmetricCipherName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GetKeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetKeySize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1041a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GetKeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.MakeKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKey)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1041aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "MakeKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.MakeRandomKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeRandomKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1041b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "MakeRandomKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.EncodePassPhrase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<char16_t>, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::EncodePassPhrase)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1032418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "EncodePassPhrase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.MakeKeyFromPassPhrase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k, ::ArrayW<char16_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKeyFromPassPhrase)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1041c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "MakeKeyFromPassPhrase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.MakeKeyFromPassPhraseUtf8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k, ::ArrayW<char16_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKeyFromPassPhraseUtf8)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1041c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "MakeKeyFromPassPhraseUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.MakeKeyFromPassPhraseRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKeyFromPassPhraseRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1041c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "MakeKeyFromPassPhraseRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.DoMakeKeyFromPassPhrase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k, ::ArrayW<uint8_t>, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::DoMakeKeyFromPassPhrase)> {
  constexpr static std::size_t size = 0x970;
  constexpr static std::size_t addrs = 0x1033a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "DoMakeKeyFromPassPhrase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.WriteFileToLiteralData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream, char16_t, ::System::IO::FileInfo)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::WriteFileToLiteralData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1041c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "WriteFileToLiteralData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.WriteFileToLiteralData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream, char16_t, ::System::IO::FileInfo, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::WriteFileToLiteralData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1041f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "WriteFileToLiteralData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.PipeFileContents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::FileInfo, ::System::IO::Stream, int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::PipeFileContents)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1041d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "PipeFileContents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.IsPossiblyBase64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::IsPossiblyBase64)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1041ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "IsPossiblyBase64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GetDecoderStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (*)(::System::IO::Stream)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetDecoderStream)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1042044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GetDecoderStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.CreateWrapper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IWrapper (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::CreateWrapper)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x102da8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "CreateWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GenerateIV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int32_t, ::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GenerateIV)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x103677c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GenerateIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GenerateS2k
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::S2k (*)(::Org::BouncyCastle::Bcpg::HashAlgorithmTag, int32_t, ::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GenerateS2k)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10366ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GenerateS2k",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::PgpUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PgpUtilities>())) {}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger> ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::DsaSigToMpi(::ArrayW<uint8_t> encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "DsaSigToMpi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger>, false>(nullptr, ___internal_method, encoding);
}
 ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger> ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::RsaSigToMpi(::ArrayW<uint8_t> encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "RsaSigToMpi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger>, false>(nullptr, ___internal_method, encoding);
}
 ::StringW ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetDigestName(::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GetDigestName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, hashAlgorithm);
}
 ::StringW ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetSignatureName(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GetSignatureName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, keyAlgorithm, hashAlgorithm);
}
 ::StringW ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetSymmetricCipherName(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GetSymmetricCipherName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, algorithm);
}
 int32_t ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetKeySize(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GetKeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, algorithm);
}
 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKey(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::ArrayW<uint8_t> keyBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "MakeKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(nullptr, ___internal_method, algorithm, keyBytes);
}
 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeRandomKey(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "MakeRandomKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(nullptr, ___internal_method, algorithm, random);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::EncodePassPhrase(::ArrayW<char16_t> passPhrase, bool utf8)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "EncodePassPhrase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, passPhrase, utf8);
}
 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKeyFromPassPhrase(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<char16_t> passPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "MakeKeyFromPassPhrase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(nullptr, ___internal_method, algorithm, s2k, passPhrase);
}
 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKeyFromPassPhraseUtf8(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<char16_t> passPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "MakeKeyFromPassPhraseUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(nullptr, ___internal_method, algorithm, s2k, passPhrase);
}
 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKeyFromPassPhraseRaw(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> rawPassPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "MakeKeyFromPassPhraseRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(nullptr, ___internal_method, algorithm, s2k, rawPassPhrase);
}
 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::DoMakeKeyFromPassPhrase(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "DoMakeKeyFromPassPhrase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(nullptr, ___internal_method, algorithm, s2k, rawPassPhrase, clearPassPhrase);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::WriteFileToLiteralData(::System::IO::Stream output, char16_t fileType, ::System::IO::FileInfo file)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "WriteFileToLiteralData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, output, fileType, file);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::WriteFileToLiteralData(::System::IO::Stream output, char16_t fileType, ::System::IO::FileInfo file, ::ArrayW<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "WriteFileToLiteralData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, output, fileType, file, buffer);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::PipeFileContents(::System::IO::FileInfo file, ::System::IO::Stream pOut, int32_t bufSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "PipeFileContents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, file, pOut, bufSize);
}
 bool ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::IsPossiblyBase64(int32_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "IsPossiblyBase64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
 ::System::IO::Stream ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetDecoderStream(::System::IO::Stream inputStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GetDecoderStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(nullptr, ___internal_method, inputStream);
}
 ::Org::BouncyCastle::Crypto::IWrapper ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::CreateWrapper(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "CreateWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IWrapper, false>(nullptr, ___internal_method, encAlgorithm);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GenerateIV(int32_t length, ::Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GenerateIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, length, random);
}
 ::Org::BouncyCastle::Bcpg::S2k ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GenerateS2k(::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, int32_t s2kCount, ::Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities>::get(),
                            "GenerateS2k",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::S2k, false>(nullptr, ___internal_method, hashAlgorithm, s2kCount, random);
}
} // end anonymous namespace
