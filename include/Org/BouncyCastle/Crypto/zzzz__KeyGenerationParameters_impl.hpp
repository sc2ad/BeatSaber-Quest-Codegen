#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::KeyGenerationParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::KeyGenerationParameters::*)(Org::BouncyCastle::Security::SecureRandom, int32_t)>(&Org::BouncyCastle::Crypto::KeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xea30f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::KeyGenerationParameters.get_Random
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Security::SecureRandom (Org::BouncyCastle::Crypto::KeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::KeyGenerationParameters::get_Random)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea31cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get(),
                            "get_Random",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::KeyGenerationParameters.get_Strength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::KeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::KeyGenerationParameters::get_Strength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea31d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get(),
                            "get_Strength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::KeyGenerationParameters::__set_random(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::KeyGenerationParameters::__get_random() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::KeyGenerationParameters::__set_strength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::KeyGenerationParameters::__get_strength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "strength", ty: "int32_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::KeyGenerationParameters::KeyGenerationParameters(Org::BouncyCastle::Security::SecureRandom random, int32_t strength)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<KeyGenerationParameters>(random, strength))) {}
 void Org::BouncyCastle::Crypto::KeyGenerationParameters::_ctor(Org::BouncyCastle::Security::SecureRandom random, int32_t strength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, random, strength);
}
 Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::KeyGenerationParameters::get_Random()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get(),
                            "get_Random",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Security::SecureRandom, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::KeyGenerationParameters::get_Strength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get(),
                            "get_Strength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
