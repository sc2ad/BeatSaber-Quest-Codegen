#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__TrustPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVector_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPublicKeyParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.CalculateFingerprint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Bcpg::PublicKeyPacket)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::CalculateFingerprint)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x1026c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "CalculateFingerprint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.UpdateDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Crypto::IDigest, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::UpdateDigest)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1027178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "UpdateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::Init)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1027244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, System::DateTime)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x1021758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(Org::BouncyCastle::Bcpg::PublicKeyPacket)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1027564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(Org::BouncyCastle::Bcpg::PublicKeyPacket, Org::BouncyCastle::Bcpg::TrustPacket, System::Collections::IList)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x102769c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::TrustPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, Org::BouncyCastle::Bcpg::TrustPacket, System::Collections::IList)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1023254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::TrustPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x102384c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(Org::BouncyCastle::Bcpg::PublicKeyPacket, Org::BouncyCastle::Bcpg::TrustPacket, System::Collections::IList, System::Collections::IList, System::Collections::IList, System::Collections::IList)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1027750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::TrustPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(Org::BouncyCastle::Bcpg::PublicKeyPacket, System::Collections::IList, System::Collections::IList)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x10275e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_Version)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x102781c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_CreationTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_CreationTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1023d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_CreationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_ValidDays
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_ValidDays)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x102783c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_ValidDays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetTrustData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetTrustData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1027a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetTrustData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetValidSeconds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetValidSeconds)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1027910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetValidSeconds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetExpirationTimeFromSig
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(bool, int32_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetExpirationTimeFromSig)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x1027b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetExpirationTimeFromSig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_KeyId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_KeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10283c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_KeyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetFingerprint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetFingerprint)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10283d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetFingerprint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_IsEncryptionKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_IsEncryptionKey)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x101e084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_IsEncryptionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_IsMasterKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_IsMasterKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1027ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_IsMasterKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_Algorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_Algorithm)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x10203b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_Algorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_BitStrength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_BitStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1028448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_BitStrength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricKeyParameter (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetKey)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x10203d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetECKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::StringW)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetECKey)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1028450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetECKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetUserIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetUserIds)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x102859c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetUserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetUserAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetUserAttributes)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x1028988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetUserAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetSignaturesForId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::StringW)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesForId)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x1028d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetSignaturesForId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetSignaturesForUserAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesForUserAttribute)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x1029014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetSignaturesForUserAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetSignaturesOfType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(int32_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesOfType)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x1027f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetSignaturesOfType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetSignatures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignatures)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x1029250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetSignatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetKeySignatures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetKeySignatures)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x10295f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetKeySignatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_PublicKeyPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::PublicKeyPacket (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_PublicKeyPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x102969c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_PublicKeyPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetEncoded)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10296a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(System::IO::Stream)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::Encode)> {
  constexpr static std::size_t size = 0xd6c;
  constexpr static std::size_t addrs = 0x102971c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.IsRevoked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::IsRevoked)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x102a488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "IsRevoked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.AddCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ::StringW, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x102a750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "AddCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.AddCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x102ac30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "AddCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.AddCert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ::bs_hook::Il2CppWrapperType, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCert)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x102a7bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "AddCert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x102ac9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ::StringW)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x102afdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCert)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x102ad00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ::StringW, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x102b040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x102b3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, ::bs_hook::Il2CppWrapperType, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCert)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x102b0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.AddCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x102b420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "AddCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0xd94;
  constexpr static std::size_t addrs = 0x102b5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__set_MasterKeyCertificationTypes(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "MasterKeyCertificationTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__get_MasterKeyCertificationTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "MasterKeyCertificationTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get>();
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__set_keyId(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__get_keyId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__set_fingerprint(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__get_fingerprint() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__set_keyStrength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__get_keyStrength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__set_publicPk(Org::BouncyCastle::Bcpg::PublicKeyPacket value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Bcpg::PublicKeyPacket, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Bcpg::PublicKeyPacket>(value));
}
constexpr Org::BouncyCastle::Bcpg::PublicKeyPacket Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__get_publicPk() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Bcpg::PublicKeyPacket, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__set_trustPk(Org::BouncyCastle::Bcpg::TrustPacket value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Bcpg::TrustPacket, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Bcpg::TrustPacket>(value));
}
constexpr Org::BouncyCastle::Bcpg::TrustPacket Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__get_trustPk() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Bcpg::TrustPacket, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__set_keySigs(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__get_keySigs() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__set_ids(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__get_ids() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__set_idTrusts(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__get_idTrusts() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__set_idSigs(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__get_idSigs() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__set_subSigs(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__get_subSigs() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::CalculateFingerprint(Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "CalculateFingerprint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, publicPk);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::UpdateDigest(Org::BouncyCastle::Crypto::IDigest d, Org::BouncyCastle::Math::BigInteger b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "UpdateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d, b);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, System::DateTime time)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>(algorithm, pubKey, time))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, System::DateTime time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, algorithm, pubKey, time);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>(publicPk))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicPk);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk, Org::BouncyCastle::Bcpg::TrustPacket trustPk, System::Collections::IList sigs)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>(publicPk, trustPk, sigs))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk, Org::BouncyCastle::Bcpg::TrustPacket trustPk, System::Collections::IList sigs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::TrustPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicPk, trustPk, sigs);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, Org::BouncyCastle::Bcpg::TrustPacket trust, System::Collections::IList subSigs)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>(key, trust, subSigs))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, Org::BouncyCastle::Bcpg::TrustPacket trust, System::Collections::IList subSigs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::TrustPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, trust, subSigs);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>(pubKey))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pubKey);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk, Org::BouncyCastle::Bcpg::TrustPacket trustPk, System::Collections::IList keySigs, System::Collections::IList ids, System::Collections::IList idTrusts, System::Collections::IList idSigs)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>(publicPk, trustPk, keySigs, ids, idTrusts, idSigs))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk, Org::BouncyCastle::Bcpg::TrustPacket trustPk, System::Collections::IList keySigs, System::Collections::IList ids, System::Collections::IList idTrusts, System::Collections::IList idSigs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::TrustPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicPk, trustPk, keySigs, ids, idTrusts, idSigs);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk, System::Collections::IList ids, System::Collections::IList idSigs)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>(publicPk, ids, idSigs))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk, System::Collections::IList ids, System::Collections::IList idSigs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::PublicKeyPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicPk, ids, idSigs);
}
 int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_CreationTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_CreationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_ValidDays()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_ValidDays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetTrustData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetTrustData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetValidSeconds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetValidSeconds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetExpirationTimeFromSig(bool selfSigned, int32_t signatureType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetExpirationTimeFromSig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, selfSigned, signatureType);
}
 int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_KeyId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_KeyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetFingerprint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetFingerprint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_IsEncryptionKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_IsEncryptionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_IsMasterKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_IsMasterKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_Algorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_Algorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_BitStrength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_BitStrength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetECKey(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetECKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters, false>(const_cast<void*>(instance), ___internal_method, algorithm);
}
 System::Collections::IEnumerable Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetUserIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetUserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerable Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetUserAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetUserAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerable Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesForId(::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetSignaturesForId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method, id);
}
 System::Collections::IEnumerable Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesForUserAttribute(Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector userAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetSignaturesForUserAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method, userAttributes);
}
 System::Collections::IEnumerable Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesOfType(int32_t signatureType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetSignaturesOfType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method, signatureType);
}
 System::Collections::IEnumerable Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignatures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetSignatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerable Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetKeySignatures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetKeySignatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::PublicKeyPacket Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_PublicKeyPacket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "get_PublicKeyPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::PublicKeyPacket, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetEncoded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::Encode(System::IO::Stream outStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outStr);
}
 bool Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::IsRevoked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "IsRevoked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::StringW id, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "AddCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, key, id, certification);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector userAttributes, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "AddCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, key, userAttributes, certification);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCert(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::bs_hook::Il2CppWrapperType id, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "AddCert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, key, id, certification);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector userAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, key, userAttributes);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, key, id);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCert(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::bs_hook::Il2CppWrapperType id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, key, id);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::StringW id, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, key, id, certification);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector userAttributes, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, key, userAttributes, certification);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCert(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::bs_hook::Il2CppWrapperType id, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, key, id, certification);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "AddCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, key, certification);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(),
                            "RemoveCertification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(nullptr, ___internal_method, key, certification);
}
