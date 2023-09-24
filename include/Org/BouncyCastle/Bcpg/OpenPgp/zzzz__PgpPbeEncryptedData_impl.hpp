#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPbeEncryptedData_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyEncSessionPacket_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket, Org::BouncyCastle::Bcpg::InputStreamPacket)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1021214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::InputStreamPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.GetInputStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetInputStream)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10261f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.GetDataStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::ArrayW<char16_t>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStream)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1026210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            "GetDataStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.GetDataStreamUtf8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::ArrayW<char16_t>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStreamUtf8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1026b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            "GetDataStreamUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.GetDataStreamRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStreamRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1026b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            "GetDataStreamRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.DoGetDataStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::ArrayW<uint8_t>, bool)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::DoGetDataStream)> {
  constexpr static std::size_t size = 0x8d0;
  constexpr static std::size_t addrs = 0x102623c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            "DoGetDataStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.CreateStreamCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IBufferedCipher (Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::CreateStreamCipher)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1026b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            "CreateStreamCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::__set_keyData(Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket>(value));
}
constexpr Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::__get_keyData() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::New_ctor(Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket keyData, Org::BouncyCastle::Bcpg::InputStreamPacket encData)  {
Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>(keyData, encData))};
return o;
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::_ctor(Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket keyData, Org::BouncyCastle::Bcpg::InputStreamPacket encData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::InputStreamPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyData, encData);
}
 System::IO::Stream Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetInputStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            "GetInputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::Stream Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStream(::ArrayW<char16_t> passPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            "GetDataStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, passPhrase);
}
 System::IO::Stream Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStreamUtf8(::ArrayW<char16_t> passPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            "GetDataStreamUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, passPhrase);
}
 System::IO::Stream Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStreamRaw(::ArrayW<uint8_t> rawPassPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            "GetDataStreamRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, rawPassPhrase);
}
 System::IO::Stream Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::DoGetDataStream(::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            "DoGetDataStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, rawPassPhrase, clearPassPhrase);
}
 Org::BouncyCastle::Crypto::IBufferedCipher Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::CreateStreamCipher(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag keyAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData>::get(),
                            "CreateStreamCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IBufferedCipher, false>(const_cast<void*>(instance), ___internal_method, keyAlgorithm);
}
