#pragma once
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ParametersWithRandom_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::*)(Org::BouncyCastle::Crypto::ICipherParameters, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xeaafc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::*)(Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xeab06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom.GetRandom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Security::SecureRandom (Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::GetRandom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeab154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom>::get(),
                            "GetRandom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom.get_Random
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Security::SecureRandom (Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::get_Random)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeab15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom>::get(),
                            "get_Random",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom.get_Parameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters (Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeab164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr  Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::operator Org::BouncyCastle::Crypto::ICipherParameters() const noexcept {
return Org::BouncyCastle::Crypto::ICipherParameters(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::__set_parameters(Org::BouncyCastle::Crypto::ICipherParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::ICipherParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::ICipherParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::__get_parameters() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::ICipherParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::__set_random(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::__get_random() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::ICipherParameters", modifiers: "", def_value: None }, CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::ParametersWithRandom(Org::BouncyCastle::Crypto::ICipherParameters parameters, Org::BouncyCastle::Security::SecureRandom random)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ParametersWithRandom>(parameters, random))) {}
 void Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::_ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters, random);
}
// Ctor Parameters [CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::ICipherParameters", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::ParametersWithRandom(Org::BouncyCastle::Crypto::ICipherParameters parameters)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ParametersWithRandom>(parameters))) {}
 void Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::_ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::GetRandom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom>::get(),
                            "GetRandom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Security::SecureRandom, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::get_Random()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom>::get(),
                            "get_Random",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Security::SecureRandom, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherParameters, false>(const_cast<void*>(instance), ___internal_method);
}
