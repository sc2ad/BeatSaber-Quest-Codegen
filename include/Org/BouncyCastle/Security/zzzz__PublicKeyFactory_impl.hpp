#pragma once
namespace {
#include "Org/BouncyCastle/Security/zzzz__PublicKeyFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::PublicKeyFactory::*)()>(&::Org::BouncyCastle::Security::PublicKeyFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10b3430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory.CreateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Security::PublicKeyFactory::CreateKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10b3438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            "CreateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory.CreateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter (*)(::System::IO::Stream)>(&::Org::BouncyCastle::Security::PublicKeyFactory::CreateKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10b49d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            "CreateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory.CreateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter (*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo)>(&::Org::BouncyCastle::Security::PublicKeyFactory::CreateKey)> {
  constexpr static std::size_t size = 0x1584;
  constexpr static std::size_t addrs = 0x10b3454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            "CreateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory.GetRawKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo, int32_t)>(&::Org::BouncyCastle::Security::PublicKeyFactory::GetRawKey)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x10b4c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            "GetRawKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory.IsPkcsDHParam
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Org::BouncyCastle::Asn1::Asn1Sequence)>(&::Org::BouncyCastle::Security::PublicKeyFactory::IsPkcsDHParam)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x10b49f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            "IsPkcsDHParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PublicKeyFactory.ReadPkcsDHParam
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier, ::Org::BouncyCastle::Math::BigInteger, ::Org::BouncyCastle::Asn1::Asn1Sequence)>(&::Org::BouncyCastle::Security::PublicKeyFactory::ReadPkcsDHParam)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x10b4b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            "ReadPkcsDHParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Org::BouncyCastle::Security::PublicKeyFactory::PublicKeyFactory()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PublicKeyFactory>())) {}
 void ::Org::BouncyCastle::Security::PublicKeyFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::Security::PublicKeyFactory::CreateKey(::ArrayW<uint8_t> keyInfoData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            "CreateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(nullptr, ___internal_method, keyInfoData);
}
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::Security::PublicKeyFactory::CreateKey(::System::IO::Stream inStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            "CreateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(nullptr, ___internal_method, inStr);
}
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::Security::PublicKeyFactory::CreateKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo keyInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            "CreateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(nullptr, ___internal_method, keyInfo);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Security::PublicKeyFactory::GetRawKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo keyInfo, int32_t expectedSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            "GetRawKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, keyInfo, expectedSize);
}
 bool ::Org::BouncyCastle::Security::PublicKeyFactory::IsPkcsDHParam(::Org::BouncyCastle::Asn1::Asn1Sequence seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            "IsPkcsDHParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, seq);
}
 ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters ::Org::BouncyCastle::Security::PublicKeyFactory::ReadPkcsDHParam(::Org::BouncyCastle::Asn1::DerObjectIdentifier algOid, ::Org::BouncyCastle::Math::BigInteger y, ::Org::BouncyCastle::Asn1::Asn1Sequence seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PublicKeyFactory>::get(),
                            "ReadPkcsDHParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters, false>(nullptr, ___internal_method, algOid, y, seq);
}
} // end anonymous namespace
