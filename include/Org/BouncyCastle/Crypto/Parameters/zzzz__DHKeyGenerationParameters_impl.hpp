#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::*)(Org::BouncyCastle::Security::SecureRandom, Org::BouncyCastle::Crypto::Parameters::DHParameters)>(&Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xea31dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters.get_Parameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::DHParameters (Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea324c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters.GetStrength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(Org::BouncyCastle::Crypto::Parameters::DHParameters)>(&Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::GetStrength)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xea3218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters>::get(),
                            "GetStrength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::__set_parameters(Org::BouncyCastle::Crypto::Parameters::DHParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::DHParameters, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::DHParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::DHParameters Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::__get_parameters() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::DHParameters, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::Parameters::DHParameters", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::DHKeyGenerationParameters(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::DHParameters parameters)  : Org::BouncyCastle::Crypto::KeyGenerationParameters(THROW_UNLESS(::il2cpp_utils::New<DHKeyGenerationParameters>(random, parameters))) {}
 void Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::_ctor(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::DHParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, random, parameters);
}
 Org::BouncyCastle::Crypto::Parameters::DHParameters Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::DHParameters, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::GetStrength(Org::BouncyCastle::Crypto::Parameters::DHParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters>::get(),
                            "GetStrength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, parameters);
}
