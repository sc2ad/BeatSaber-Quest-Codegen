#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsStreamCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCipher_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsStreamCipher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(Org::BouncyCastle::Crypto::Tls::TlsContext, Org::BouncyCastle::Crypto::IStreamCipher, Org::BouncyCastle::Crypto::IStreamCipher, Org::BouncyCastle::Crypto::IDigest, Org::BouncyCastle::Crypto::IDigest, int32_t, bool)>(&Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::_ctor)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0xf2c60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IStreamCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IStreamCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.GetPlaintextLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::GetPlaintextLimit)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf2ccac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsStreamCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.EncodePlaintext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::EncodePlaintext)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xf2ccd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsStreamCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.DecodeCiphertext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::DecodeCiphertext)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xf2ced0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsStreamCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.CheckMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::CheckMac)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xf2d0d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsStreamCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.UpdateIV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(Org::BouncyCastle::Crypto::IStreamCipher, bool, int64_t)>(&Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::UpdateIV)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xf2d1fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsStreamCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCipher
constexpr  Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::operator Org::BouncyCastle::Crypto::Tls::TlsCipher() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsCipher(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__set_context(Org::BouncyCastle::Crypto::Tls::TlsContext value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsContext>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsContext Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_context() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__set_encryptCipher(Org::BouncyCastle::Crypto::IStreamCipher value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IStreamCipher, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IStreamCipher>(value));
}
constexpr Org::BouncyCastle::Crypto::IStreamCipher Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_encryptCipher() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IStreamCipher, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__set_decryptCipher(Org::BouncyCastle::Crypto::IStreamCipher value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IStreamCipher, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IStreamCipher>(value));
}
constexpr Org::BouncyCastle::Crypto::IStreamCipher Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_decryptCipher() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IStreamCipher, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__set_writeMac(Org::BouncyCastle::Crypto::Tls::TlsMac value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsMac, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsMac>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsMac Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_writeMac() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsMac, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__set_readMac(Org::BouncyCastle::Crypto::Tls::TlsMac value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsMac, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsMac>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsMac Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_readMac() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsMac, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__set_usesNonce(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__get_usesNonce() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Tls::TlsStreamCipher Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::New_ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::IStreamCipher clientWriteCipher, Org::BouncyCastle::Crypto::IStreamCipher serverWriteCipher, Org::BouncyCastle::Crypto::IDigest clientWriteDigest, Org::BouncyCastle::Crypto::IDigest serverWriteDigest, int32_t cipherKeySize, bool usesNonce)  {
Org::BouncyCastle::Crypto::Tls::TlsStreamCipher o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>(context, clientWriteCipher, serverWriteCipher, clientWriteDigest, serverWriteDigest, cipherKeySize, usesNonce))};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::_ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::IStreamCipher clientWriteCipher, Org::BouncyCastle::Crypto::IStreamCipher serverWriteCipher, Org::BouncyCastle::Crypto::IDigest clientWriteDigest, Org::BouncyCastle::Crypto::IDigest serverWriteDigest, int32_t cipherKeySize, bool usesNonce)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IStreamCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IStreamCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, clientWriteCipher, serverWriteCipher, clientWriteDigest, serverWriteDigest, cipherKeySize, usesNonce);
}
 int32_t Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::GetPlaintextLimit(int32_t ciphertextLimit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>::get(),
                            "GetPlaintextLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, ciphertextLimit);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t offset, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>::get(),
                            "EncodePlaintext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, seqNo, type, plaintext, offset, len);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> ciphertext, int32_t offset, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>::get(),
                            "DecodeCiphertext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, seqNo, type, ciphertext, offset, len);
}
 void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::CheckMac(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> recBuf, int32_t recStart, int32_t recEnd, ::ArrayW<uint8_t> calcBuf, int32_t calcOff, int32_t calcLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>::get(),
                            "CheckMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seqNo, type, recBuf, recStart, recEnd, calcBuf, calcOff, calcLen);
}
 void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::UpdateIV(Org::BouncyCastle::Crypto::IStreamCipher cipher, bool forEncryption, int64_t seqNo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsStreamCipher>::get(),
                            "UpdateIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IStreamCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cipher, forEncryption, seqNo);
}
