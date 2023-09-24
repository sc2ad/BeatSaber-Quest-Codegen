#pragma once
#include "Org/BouncyCastle/Crypto/Prng/zzzz__SP800SecureRandomBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IDrbgProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__ISP80090Drbg_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__SP800SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__SP800SecureRandomBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySourceProvider_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::*)(Org::BouncyCastle::Crypto::IDigest, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xeb6530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg (Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::*)(Org::BouncyCastle::Crypto::IEntropySource)>(&Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::Get)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xeb68cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IEntropySource>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Prng::IDrbgProvider
constexpr  Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::operator Org::BouncyCastle::Crypto::Prng::IDrbgProvider() const noexcept {
return Org::BouncyCastle::Crypto::Prng::IDrbgProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::__set_mDigest(Org::BouncyCastle::Crypto::IDigest value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IDigest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IDigest>(value));
}
constexpr Org::BouncyCastle::Crypto::IDigest Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::__get_mDigest() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IDigest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::__set_mNonce(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::__get_mNonce() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::__set_mPersonalizationString(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::__get_mPersonalizationString() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::__set_mSecurityStrength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::__get_mSecurityStrength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::New_ctor(Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString, int32_t securityStrength)  {
Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider>(digest, nonce, personalizationString, securityStrength))};
return o;
}
 void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::_ctor(Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString, int32_t securityStrength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digest, nonce, personalizationString, securityStrength);
}
 Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider::Get(Org::BouncyCastle::Crypto::IEntropySource entropySource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IEntropySource>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg, false>(const_cast<void*>(instance), ___internal_method, entropySource);
}
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::*)(Org::BouncyCastle::Crypto::IMac, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xeb6888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg (Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::*)(Org::BouncyCastle::Crypto::IEntropySource)>(&Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::Get)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xeb695c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IEntropySource>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Prng::IDrbgProvider
constexpr  Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::operator Org::BouncyCastle::Crypto::Prng::IDrbgProvider() const noexcept {
return Org::BouncyCastle::Crypto::Prng::IDrbgProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::__set_mHMac(Org::BouncyCastle::Crypto::IMac value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IMac, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IMac>(value));
}
constexpr Org::BouncyCastle::Crypto::IMac Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::__get_mHMac() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IMac, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::__set_mNonce(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::__get_mNonce() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::__set_mPersonalizationString(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::__get_mPersonalizationString() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::__set_mSecurityStrength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::__get_mSecurityStrength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::New_ctor(Org::BouncyCastle::Crypto::IMac hMac, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString, int32_t securityStrength)  {
Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider>(hMac, nonce, personalizationString, securityStrength))};
return o;
}
 void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::_ctor(Org::BouncyCastle::Crypto::IMac hMac, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString, int32_t securityStrength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hMac, nonce, personalizationString, securityStrength);
}
 Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider::Get(Org::BouncyCastle::Crypto::IEntropySource entropySource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IEntropySource>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg, false>(const_cast<void*>(instance), ___internal_method, entropySource);
}
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::*)(Org::BouncyCastle::Crypto::IBlockCipher, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xeb66dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBlockCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg (Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::*)(Org::BouncyCastle::Crypto::IEntropySource)>(&Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::Get)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xeb69ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IEntropySource>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Prng::IDrbgProvider
constexpr  Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::operator Org::BouncyCastle::Crypto::Prng::IDrbgProvider() const noexcept {
return Org::BouncyCastle::Crypto::Prng::IDrbgProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::__set_mBlockCipher(Org::BouncyCastle::Crypto::IBlockCipher value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IBlockCipher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IBlockCipher>(value));
}
constexpr Org::BouncyCastle::Crypto::IBlockCipher Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::__get_mBlockCipher() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IBlockCipher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::__set_mKeySizeInBits(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::__get_mKeySizeInBits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::__set_mNonce(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::__get_mNonce() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::__set_mPersonalizationString(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::__get_mPersonalizationString() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::__set_mSecurityStrength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::__get_mSecurityStrength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::New_ctor(Org::BouncyCastle::Crypto::IBlockCipher blockCipher, int32_t keySizeInBits, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString, int32_t securityStrength)  {
Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider>(blockCipher, keySizeInBits, nonce, personalizationString, securityStrength))};
return o;
}
 void Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::_ctor(Org::BouncyCastle::Crypto::IBlockCipher blockCipher, int32_t keySizeInBits, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString, int32_t securityStrength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBlockCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, blockCipher, keySizeInBits, nonce, personalizationString, securityStrength);
}
 Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider::Get(Org::BouncyCastle::Crypto::IEntropySource entropySource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IEntropySource>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg, false>(const_cast<void*>(instance), ___internal_method, entropySource);
}
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)()>(&Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xeb6290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(Org::BouncyCastle::Security::SecureRandom, bool)>(&Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xeb62f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(Org::BouncyCastle::Crypto::IEntropySourceProvider)>(&Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xeb638c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IEntropySourceProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.SetPersonalizationString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder (Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetPersonalizationString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeb63c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            "SetPersonalizationString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.SetSecurityStrength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder (Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(int32_t)>(&Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetSecurityStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeb63c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            "SetSecurityStrength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.SetEntropyBitsRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder (Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(int32_t)>(&Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetEntropyBitsRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeb63d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            "SetEntropyBitsRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.BuildHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Prng::SP800SecureRandom (Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(Org::BouncyCastle::Crypto::IDigest, ::ArrayW<uint8_t>, bool)>(&Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildHash)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xeb63d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            "BuildHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.BuildCtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Prng::SP800SecureRandom (Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(Org::BouncyCastle::Crypto::IBlockCipher, int32_t, ::ArrayW<uint8_t>, bool)>(&Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildCtr)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xeb6574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            "BuildCtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBlockCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder.BuildHMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Prng::SP800SecureRandom (Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::*)(Org::BouncyCastle::Crypto::IMac, ::ArrayW<uint8_t>, bool)>(&Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildHMac)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xeb6730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            "BuildHMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__set_mRandom(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__get_mRandom() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__set_mEntropySourceProvider(Org::BouncyCastle::Crypto::IEntropySourceProvider value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IEntropySourceProvider, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IEntropySourceProvider>(value));
}
constexpr Org::BouncyCastle::Crypto::IEntropySourceProvider Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__get_mEntropySourceProvider() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IEntropySourceProvider, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__set_mPersonalizationString(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__get_mPersonalizationString() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__set_mSecurityStrength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__get_mSecurityStrength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__set_mEntropyBitsRequired(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::__get_mEntropyBitsRequired() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::New_ctor()  {
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>())};
return o;
}
 void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::New_ctor(Org::BouncyCastle::Security::SecureRandom entropySource, bool predictionResistant)  {
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>(entropySource, predictionResistant))};
return o;
}
 void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor(Org::BouncyCastle::Security::SecureRandom entropySource, bool predictionResistant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, entropySource, predictionResistant);
}
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::New_ctor(Org::BouncyCastle::Crypto::IEntropySourceProvider entropySourceProvider)  {
Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>(entropySourceProvider))};
return o;
}
 void Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::_ctor(Org::BouncyCastle::Crypto::IEntropySourceProvider entropySourceProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IEntropySourceProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, entropySourceProvider);
}
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetPersonalizationString(::ArrayW<uint8_t> personalizationString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            "SetPersonalizationString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, false>(const_cast<void*>(instance), ___internal_method, personalizationString);
}
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetSecurityStrength(int32_t securityStrength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            "SetSecurityStrength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, false>(const_cast<void*>(instance), ___internal_method, securityStrength);
}
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::SetEntropyBitsRequired(int32_t entropyBitsRequired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            "SetEntropyBitsRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, false>(const_cast<void*>(instance), ___internal_method, entropyBitsRequired);
}
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandom Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildHash(Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> nonce, bool predictionResistant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            "BuildHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Prng::SP800SecureRandom, false>(const_cast<void*>(instance), ___internal_method, digest, nonce, predictionResistant);
}
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandom Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildCtr(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t keySizeInBits, ::ArrayW<uint8_t> nonce, bool predictionResistant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            "BuildCtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBlockCipher>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Prng::SP800SecureRandom, false>(const_cast<void*>(instance), ___internal_method, cipher, keySizeInBits, nonce, predictionResistant);
}
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandom Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder::BuildHMac(Org::BouncyCastle::Crypto::IMac hMac, ::ArrayW<uint8_t> nonce, bool predictionResistant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder>::get(),
                            "BuildHMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Prng::SP800SecureRandom, false>(const_cast<void*>(instance), ___internal_method, hMac, nonce, predictionResistant);
}
