#pragma once
#include "Org/BouncyCastle/Crypto/Engines/zzzz__IesEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__IesParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KdfParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::IesEngine._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::IesEngine::*)(Org::BouncyCastle::Crypto::IBasicAgreement, Org::BouncyCastle::Crypto::IDerivationFunction, Org::BouncyCastle::Crypto::IMac)>(&Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xe481b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBasicAgreement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDerivationFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::IesEngine._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::IesEngine::*)(Org::BouncyCastle::Crypto::IBasicAgreement, Org::BouncyCastle::Crypto::IDerivationFunction, Org::BouncyCastle::Crypto::IMac, Org::BouncyCastle::Crypto::BufferedBlockCipher)>(&Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xe482ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBasicAgreement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDerivationFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::BufferedBlockCipher>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::IesEngine.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::IesEngine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters, Org::BouncyCastle::Crypto::ICipherParameters, Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Crypto::Engines::IesEngine::Init)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xe483ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Engines::IesEngine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::IesEngine.DecryptBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Engines::IesEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::IesEngine::DecryptBlock)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0xe48474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                            "DecryptBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::IesEngine.EncryptBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Engines::IesEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::IesEngine::EncryptBlock)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0xe48c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                            "EncryptBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::IesEngine.GenerateKdfBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Engines::IesEngine::*)(Org::BouncyCastle::Crypto::Parameters::KdfParameters, int32_t)>(&Org::BouncyCastle::Crypto::Engines::IesEngine::GenerateKdfBytes)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xe48b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                            "GenerateKdfBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KdfParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::IesEngine.ProcessBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Engines::IesEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Engines::IesEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xe49264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Engines::IesEngine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_agree(Org::BouncyCastle::Crypto::IBasicAgreement value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IBasicAgreement, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IBasicAgreement>(value));
}
constexpr Org::BouncyCastle::Crypto::IBasicAgreement Org::BouncyCastle::Crypto::Engines::IesEngine::__get_agree() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IBasicAgreement, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_kdf(Org::BouncyCastle::Crypto::IDerivationFunction value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IDerivationFunction, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IDerivationFunction>(value));
}
constexpr Org::BouncyCastle::Crypto::IDerivationFunction Org::BouncyCastle::Crypto::Engines::IesEngine::__get_kdf() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IDerivationFunction, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_mac(Org::BouncyCastle::Crypto::IMac value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IMac, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IMac>(value));
}
constexpr Org::BouncyCastle::Crypto::IMac Org::BouncyCastle::Crypto::Engines::IesEngine::__get_mac() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IMac, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_cipher(Org::BouncyCastle::Crypto::BufferedBlockCipher value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::BufferedBlockCipher, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::BufferedBlockCipher>(value));
}
constexpr Org::BouncyCastle::Crypto::BufferedBlockCipher Org::BouncyCastle::Crypto::Engines::IesEngine::__get_cipher() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::BufferedBlockCipher, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_macBuf(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::IesEngine::__get_macBuf() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_forEncryption(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Engines::IesEngine::__get_forEncryption() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_privParam(Org::BouncyCastle::Crypto::ICipherParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::ICipherParameters, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::ICipherParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Crypto::Engines::IesEngine::__get_privParam() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::ICipherParameters, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_pubParam(Org::BouncyCastle::Crypto::ICipherParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::ICipherParameters, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::ICipherParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Crypto::Engines::IesEngine::__get_pubParam() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::ICipherParameters, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_param(Org::BouncyCastle::Crypto::Parameters::IesParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::IesParameters, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::IesParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::IesParameters Org::BouncyCastle::Crypto::Engines::IesEngine::__get_param() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::IesParameters, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Engines::IesEngine Org::BouncyCastle::Crypto::Engines::IesEngine::New_ctor(Org::BouncyCastle::Crypto::IBasicAgreement agree, Org::BouncyCastle::Crypto::IDerivationFunction kdf, Org::BouncyCastle::Crypto::IMac mac)  {
Org::BouncyCastle::Crypto::Engines::IesEngine o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Engines::IesEngine>(agree, kdf, mac))};
return o;
}
 void Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor(Org::BouncyCastle::Crypto::IBasicAgreement agree, Org::BouncyCastle::Crypto::IDerivationFunction kdf, Org::BouncyCastle::Crypto::IMac mac)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBasicAgreement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDerivationFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, agree, kdf, mac);
}
 Org::BouncyCastle::Crypto::Engines::IesEngine Org::BouncyCastle::Crypto::Engines::IesEngine::New_ctor(Org::BouncyCastle::Crypto::IBasicAgreement agree, Org::BouncyCastle::Crypto::IDerivationFunction kdf, Org::BouncyCastle::Crypto::IMac mac, Org::BouncyCastle::Crypto::BufferedBlockCipher cipher)  {
Org::BouncyCastle::Crypto::Engines::IesEngine o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Engines::IesEngine>(agree, kdf, mac, cipher))};
return o;
}
 void Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor(Org::BouncyCastle::Crypto::IBasicAgreement agree, Org::BouncyCastle::Crypto::IDerivationFunction kdf, Org::BouncyCastle::Crypto::IMac mac, Org::BouncyCastle::Crypto::BufferedBlockCipher cipher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBasicAgreement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDerivationFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::BufferedBlockCipher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, agree, kdf, mac, cipher);
}
 void Org::BouncyCastle::Crypto::Engines::IesEngine::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters privParameters, Org::BouncyCastle::Crypto::ICipherParameters pubParameters, Org::BouncyCastle::Crypto::ICipherParameters iesParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forEncryption, privParameters, pubParameters, iesParameters);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::IesEngine::DecryptBlock(::ArrayW<uint8_t> in_enc, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> z)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                            "DecryptBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, in_enc, inOff, inLen, z);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::IesEngine::EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> z)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                            "EncryptBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, input, inOff, inLen, z);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::IesEngine::GenerateKdfBytes(Org::BouncyCastle::Crypto::Parameters::KdfParameters kParam, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                            "GenerateKdfBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KdfParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, kParam, length);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::IesEngine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::IesEngine>::get(),
                            "ProcessBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, input, inOff, inLen);
}
