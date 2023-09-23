#pragma once
#include "Org/BouncyCastle/Crypto/Generators/zzzz__ElGamalParametersGenerator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::*)(int32_t, int32_t, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe6e46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator.GenerateParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ElGamalParameters (Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::GenerateParameters)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xe6e478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator>::get(),
                            "GenerateParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe6e554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__set_size(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__get_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__set_certainty(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__get_certainty() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__set_random(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__get_random() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::Init(int32_t size, int32_t certainty, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, size, certainty, random);
}
 Org::BouncyCastle::Crypto::Parameters::ElGamalParameters Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::GenerateParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator>::get(),
                            "GenerateParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::ElGamalParameters, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::ElGamalParametersGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ElGamalParametersGenerator>())) {}
 void Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
