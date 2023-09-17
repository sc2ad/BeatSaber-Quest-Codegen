#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKeyEncryptedData_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyEncSessionPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket, ::Org::BouncyCastle::Bcpg::InputStreamPacket)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x102c410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::InputStreamPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.GetKeyCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBufferedCipher (*)(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetKeyCipher)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x102c43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "GetKeyCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.ConfirmCheckSum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::ConfirmCheckSum)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x102c684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "ConfirmCheckSum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.get_KeyId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::get_KeyId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x102c71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "get_KeyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.GetSymmetricAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetSymmetricAlgorithm)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x102c738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "GetSymmetricAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.GetDataStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetDataStream)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x102cf28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "GetDataStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.RecoverSessionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::RecoverSessionData)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x102c760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "RecoverSessionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.ProcessEncodedMpi
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Crypto::IBufferedCipher, int32_t, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::ProcessEncodedMpi)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x102dbb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "ProcessEncodedMpi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBufferedCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::__set_keyData(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::__get_keyData() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keyData", ty: "::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket", modifiers: "", def_value: None }, CppParam { name: "encData", ty: "::Org::BouncyCastle::Bcpg::InputStreamPacket", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::PgpPublicKeyEncryptedData(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket encData)  : ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData(THROW_UNLESS(::il2cpp_utils::New<PgpPublicKeyEncryptedData>(keyData, encData))) {}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket encData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::InputStreamPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyData, encData);
}
 ::Org::BouncyCastle::Crypto::IBufferedCipher ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetKeyCipher(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "GetKeyCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBufferedCipher, false>(nullptr, ___internal_method, algorithm);
}
 bool ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::ConfirmCheckSum(::ArrayW<uint8_t> sessionInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "ConfirmCheckSum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sessionInfo);
}
 int64_t ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::get_KeyId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "get_KeyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetSymmetricAlgorithm(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey privKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "GetSymmetricAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, false>(const_cast<void*>(instance), ___internal_method, privKey);
}
 ::System::IO::Stream ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetDataStream(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey privKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "GetDataStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, privKey);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::RecoverSessionData(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey privKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "RecoverSessionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, privKey);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::ProcessEncodedMpi(::Org::BouncyCastle::Crypto::IBufferedCipher cipher, int32_t size, ::ArrayW<uint8_t> mpiEnc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData>::get(),
                            "ProcessEncodedMpi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBufferedCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cipher, size, mpiEnc);
}
} // end anonymous namespace
