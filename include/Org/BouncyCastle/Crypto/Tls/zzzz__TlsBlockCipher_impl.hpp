#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsMac_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.get_WriteMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsMac (Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::get_WriteMac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf0cbbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.get_ReadMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsMac (Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::get_ReadMac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf0cbc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsBlockCipher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(Org::BouncyCastle::Crypto::Tls::TlsContext, Org::BouncyCastle::Crypto::IBlockCipher, Org::BouncyCastle::Crypto::IBlockCipher, Org::BouncyCastle::Crypto::IDigest, Org::BouncyCastle::Crypto::IDigest, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0xb9c;
  constexpr static std::size_t addrs = 0xf0cbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBlockCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBlockCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.GetPlaintextLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::GetPlaintextLimit)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xf0d768;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.EncodePlaintext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::EncodePlaintext)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0xf0d868;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.DecodeCiphertext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::DecodeCiphertext)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0xf0debc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.CheckPaddingConstantTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::CheckPaddingConstantTime)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xf0e36c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.ChooseExtraPadBlocks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(Org::BouncyCastle::Security::SecureRandom, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::ChooseExtraPadBlocks)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xf0e4d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.LowestBitSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::LowestBitSet)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf0e580;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCipher
constexpr  Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::operator Org::BouncyCastle::Crypto::Tls::TlsCipher() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsCipher(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__set_context(Org::BouncyCastle::Crypto::Tls::TlsContext value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsContext>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsContext Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__get_context() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__set_randomData(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__get_randomData() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__set_useExplicitIV(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__get_useExplicitIV() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__set_encryptThenMac(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__get_encryptThenMac() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__set_encryptCipher(Org::BouncyCastle::Crypto::IBlockCipher value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IBlockCipher, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IBlockCipher>(value));
}
constexpr Org::BouncyCastle::Crypto::IBlockCipher Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__get_encryptCipher() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IBlockCipher, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__set_decryptCipher(Org::BouncyCastle::Crypto::IBlockCipher value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IBlockCipher, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IBlockCipher>(value));
}
constexpr Org::BouncyCastle::Crypto::IBlockCipher Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__get_decryptCipher() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IBlockCipher, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__set_mWriteMac(Org::BouncyCastle::Crypto::Tls::TlsMac value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsMac, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsMac>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsMac Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__get_mWriteMac() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsMac, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__set_mReadMac(Org::BouncyCastle::Crypto::Tls::TlsMac value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsMac, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsMac>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsMac Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__get_mReadMac() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsMac, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Tls::TlsMac Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::get_WriteMac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                            "get_WriteMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsMac, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::TlsMac Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::get_ReadMac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                            "get_ReadMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsMac, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::TlsBlockCipher Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::New_ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::IBlockCipher clientWriteCipher, Org::BouncyCastle::Crypto::IBlockCipher serverWriteCipher, Org::BouncyCastle::Crypto::IDigest clientWriteDigest, Org::BouncyCastle::Crypto::IDigest serverWriteDigest, int32_t cipherKeySize)  {
Org::BouncyCastle::Crypto::Tls::TlsBlockCipher o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>(context, clientWriteCipher, serverWriteCipher, clientWriteDigest, serverWriteDigest, cipherKeySize))};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::_ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::IBlockCipher clientWriteCipher, Org::BouncyCastle::Crypto::IBlockCipher serverWriteCipher, Org::BouncyCastle::Crypto::IDigest clientWriteDigest, Org::BouncyCastle::Crypto::IDigest serverWriteDigest, int32_t cipherKeySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBlockCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBlockCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, clientWriteCipher, serverWriteCipher, clientWriteDigest, serverWriteDigest, cipherKeySize);
}
 int32_t Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::GetPlaintextLimit(int32_t ciphertextLimit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                            "GetPlaintextLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, ciphertextLimit);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t offset, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                            "EncodePlaintext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, seqNo, type, plaintext, offset, len);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> ciphertext, int32_t offset, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                            "DecodeCiphertext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, seqNo, type, ciphertext, offset, len);
}
 int32_t Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::CheckPaddingConstantTime(::ArrayW<uint8_t> buf, int32_t off, int32_t len, int32_t blockSize, int32_t macSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                            "CheckPaddingConstantTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buf, off, len, blockSize, macSize);
}
 int32_t Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::ChooseExtraPadBlocks(Org::BouncyCastle::Security::SecureRandom r, int32_t max)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                            "ChooseExtraPadBlocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, r, max);
}
 int32_t Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::LowestBitSet(int32_t x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsBlockCipher>::get(),
                            "LowestBitSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
