#pragma once
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ParametersWithSBox_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::*)(Org::BouncyCastle::Crypto::ICipherParameters, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xeab22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox.GetSBox
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::GetSBox)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeab258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox>::get(),
                            "GetSBox",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox.get_Parameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters (Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeab260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr  Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::operator Org::BouncyCastle::Crypto::ICipherParameters() const noexcept {
return Org::BouncyCastle::Crypto::ICipherParameters(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::__set_parameters(Org::BouncyCastle::Crypto::ICipherParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::ICipherParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::ICipherParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::__get_parameters() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::ICipherParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::__set_sBox(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::__get_sBox() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::ICipherParameters", modifiers: "", def_value: None }, CppParam { name: "sBox", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::ParametersWithSBox(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> sBox)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ParametersWithSBox>(parameters, sBox))) {}
 void Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::_ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> sBox)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters, sBox);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::GetSBox()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox>::get(),
                            "GetSBox",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherParameters, false>(const_cast<void*>(instance), ___internal_method);
}
