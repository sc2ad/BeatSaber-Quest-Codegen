#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Chacha20Poly1305_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__ChaCha7539Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(Org::BouncyCastle::Crypto::Tls::TlsContext)>(&Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0xed1d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.GetPlaintextLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(int32_t)>(&Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::GetPlaintextLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xed203c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.EncodePlaintext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::EncodePlaintext)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xed2044;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.DecodeCiphertext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::DecodeCiphertext)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xed2180;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.InitRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::KeyParameter (Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(Org::BouncyCastle::Crypto::IStreamCipher, bool, int64_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::InitRecord)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xed2370;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.CalculateNonce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(int64_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::CalculateNonce)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xed24a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.GenerateRecordMacKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::KeyParameter (Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(Org::BouncyCastle::Crypto::IStreamCipher)>(&Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::GenerateRecordMacKey)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xed258c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.CalculateRecordMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(Org::BouncyCastle::Crypto::Parameters::KeyParameter, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::CalculateRecordMac)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xed26e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.UpdateRecordMacLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(Org::BouncyCastle::Crypto::IMac, int32_t)>(&Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::UpdateRecordMacLength)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xed2890;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.UpdateRecordMacText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(Org::BouncyCastle::Crypto::IMac, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::UpdateRecordMacText)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xed2958;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.GetAdditionalData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(int64_t, uint8_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::GetAdditionalData)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xed2ae0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCipher
constexpr  Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::operator Org::BouncyCastle::Crypto::Tls::TlsCipher() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsCipher(::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__set_Zeroes(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Zeroes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__get_Zeroes()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Zeroes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get>();
}
constexpr void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__set_context(Org::BouncyCastle::Crypto::Tls::TlsContext value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsContext>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsContext Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__get_context() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__set_encryptCipher(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine>(value));
}
constexpr Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__get_encryptCipher() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__set_decryptCipher(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine>(value));
}
constexpr Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__get_decryptCipher() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__set_encryptIV(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__get_encryptIV() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__set_decryptIV(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__get_decryptIV() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "context", ty: "Org::BouncyCastle::Crypto::Tls::TlsContext", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::Chacha20Poly1305(Org::BouncyCastle::Crypto::Tls::TlsContext context)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Chacha20Poly1305>(context))) {}
 void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::_ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 int32_t Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::GetPlaintextLimit(int32_t ciphertextLimit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                            "GetPlaintextLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, ciphertextLimit);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t offset, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                            "EncodePlaintext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, seqNo, type, plaintext, offset, len);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> ciphertext, int32_t offset, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                            "DecodeCiphertext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, seqNo, type, ciphertext, offset, len);
}
 Org::BouncyCastle::Crypto::Parameters::KeyParameter Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::InitRecord(Org::BouncyCastle::Crypto::IStreamCipher cipher, bool forEncryption, int64_t seqNo, ::ArrayW<uint8_t> iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                            "InitRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IStreamCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(const_cast<void*>(instance), ___internal_method, cipher, forEncryption, seqNo, iv);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::CalculateNonce(int64_t seqNo, ::ArrayW<uint8_t> iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                            "CalculateNonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, seqNo, iv);
}
 Org::BouncyCastle::Crypto::Parameters::KeyParameter Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::GenerateRecordMacKey(Org::BouncyCastle::Crypto::IStreamCipher cipher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                            "GenerateRecordMacKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IStreamCipher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(const_cast<void*>(instance), ___internal_method, cipher);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::CalculateRecordMac(Org::BouncyCastle::Crypto::Parameters::KeyParameter macKey, ::ArrayW<uint8_t> additionalData, ::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                            "CalculateRecordMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, macKey, additionalData, buf, off, len);
}
 void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::UpdateRecordMacLength(Org::BouncyCastle::Crypto::IMac mac, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                            "UpdateRecordMacLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mac, len);
}
 void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::UpdateRecordMacText(Org::BouncyCastle::Crypto::IMac mac, ::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                            "UpdateRecordMacText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mac, buf, off, len);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::GetAdditionalData(int64_t seqNo, uint8_t type, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305>::get(),
                            "GetAdditionalData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, seqNo, type, len);
}
