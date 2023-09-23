#pragma once
#include "Org/BouncyCastle/Crypto/Engines/zzzz__DesEdeWrapEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ParametersWithIV_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__CbcBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::Init)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0xe3f94c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.get_AlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe3fce8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.Wrap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::Wrap)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xe3fd28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.Unwrap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::Unwrap)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0xe40288;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.CalculateCmsKeyChecksum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::CalculateCmsKeyChecksum)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xe40060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                            "CalculateCmsKeyChecksum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.CheckCmsKeyChecksum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::CheckCmsKeyChecksum)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe406b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                            "CheckCmsKeyChecksum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.reverse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::reverse)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe401e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                            "reverse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe407cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IWrapper
constexpr  Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::operator Org::BouncyCastle::Crypto::IWrapper() const noexcept {
return Org::BouncyCastle::Crypto::IWrapper(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__set_engine(Org::BouncyCastle::Crypto::Modes::CbcBlockCipher value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Modes::CbcBlockCipher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Modes::CbcBlockCipher>(value));
}
constexpr Org::BouncyCastle::Crypto::Modes::CbcBlockCipher Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__get_engine() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Modes::CbcBlockCipher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__set_param(Org::BouncyCastle::Crypto::Parameters::KeyParameter value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::KeyParameter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::KeyParameter>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::KeyParameter Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__get_param() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::KeyParameter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__set_paramPlusIV(Org::BouncyCastle::Crypto::Parameters::ParametersWithIV value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::ParametersWithIV, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::ParametersWithIV>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::ParametersWithIV Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__get_paramPlusIV() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::ParametersWithIV, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__set_iv(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__get_iv() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__set_forWrapping(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__get_forWrapping() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__set_IV2(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "IV2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__get_IV2()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "IV2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get>();
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__set_sha1(Org::BouncyCastle::Crypto::IDigest value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IDigest, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IDigest>(value));
}
constexpr Org::BouncyCastle::Crypto::IDigest Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__get_sha1() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IDigest, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__set_digest(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__get_digest() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::Init(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forWrapping, parameters);
}
 ::StringW Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::get_AlgorithmName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                            "get_AlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::Wrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                            "Wrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, input, inOff, length);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::Unwrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                            "Unwrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, input, inOff, length);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::CalculateCmsKeyChecksum(::ArrayW<uint8_t> key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                            "CalculateCmsKeyChecksum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::CheckCmsKeyChecksum(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> checksum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                            "CheckCmsKeyChecksum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, checksum);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::reverse(::ArrayW<uint8_t> bs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                            "reverse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, bs);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::DesEdeWrapEngine()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DesEdeWrapEngine>())) {}
 void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
