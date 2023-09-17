#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ParametersWithIV_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::*)(::Org::BouncyCastle::Crypto::ICipherParameters, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xeaae44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::*)(::Org::BouncyCastle::Crypto::ICipherParameters, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xeaae60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV.GetIV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::*)()>(&::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::GetIV)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xeaaf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV>::get(),
                            "GetIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV.get_Parameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters (::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::*)()>(&::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeaafc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ICipherParameters
constexpr  ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::operator ::Org::BouncyCastle::Crypto::ICipherParameters() const noexcept {
return ::Org::BouncyCastle::Crypto::ICipherParameters(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::__set_parameters(::Org::BouncyCastle::Crypto::ICipherParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::ICipherParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::ICipherParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::__get_parameters() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::ICipherParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::__set_iv(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::__get_iv() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "parameters", ty: "::Org::BouncyCastle::Crypto::ICipherParameters", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::ParametersWithIV(::Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> iv)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ParametersWithIV>(parameters, iv))) {}
 void ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::_ctor(::Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters, iv);
}
// Ctor Parameters [CppParam { name: "parameters", ty: "::Org::BouncyCastle::Crypto::ICipherParameters", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "ivOff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ivLen", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::ParametersWithIV(::Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> iv, int32_t ivOff, int32_t ivLen)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ParametersWithIV>(parameters, iv, ivOff, ivLen))) {}
 void ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::_ctor(::Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> iv, int32_t ivOff, int32_t ivLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters, iv, ivOff, ivLen);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::GetIV()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV>::get(),
                            "GetIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::ICipherParameters ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
