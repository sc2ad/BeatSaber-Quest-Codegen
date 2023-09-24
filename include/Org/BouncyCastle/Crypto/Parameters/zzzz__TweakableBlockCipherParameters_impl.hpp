#pragma once
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__TweakableBlockCipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::*)(Org::BouncyCastle::Crypto::Parameters::KeyParameter, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xead734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::KeyParameter (Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xead7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters.get_Tweak
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Tweak)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xead7bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters>::get(),
                            "get_Tweak",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr  Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::operator Org::BouncyCastle::Crypto::ICipherParameters() const noexcept {
return Org::BouncyCastle::Crypto::ICipherParameters(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::__set_tweak(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::__get_tweak() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::__set_key(Org::BouncyCastle::Crypto::Parameters::KeyParameter value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::KeyParameter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::KeyParameter>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::KeyParameter Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::__get_key() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::KeyParameter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::New_ctor(Org::BouncyCastle::Crypto::Parameters::KeyParameter key, ::ArrayW<uint8_t> tweak)  {
Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters>(key, tweak))};
return o;
}
 void Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::_ctor(Org::BouncyCastle::Crypto::Parameters::KeyParameter key, ::ArrayW<uint8_t> tweak)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, tweak);
}
 Org::BouncyCastle::Crypto::Parameters::KeyParameter Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Tweak()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters>::get(),
                            "get_Tweak",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
