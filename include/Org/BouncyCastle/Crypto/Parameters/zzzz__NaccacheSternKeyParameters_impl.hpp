#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternKeyParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::*)(bool, ::Org::BouncyCastle::Math::BigInteger, ::Org::BouncyCastle::Math::BigInteger, int32_t)>(&::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xeaac08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters.get_G
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_G)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeaac48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters>::get(),
                            "get_G",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters.get_LowerSigmaBound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_LowerSigmaBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeaac50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters>::get(),
                            "get_LowerSigmaBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters.get_Modulus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_Modulus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeaac58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters>::get(),
                            "get_Modulus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__set_g(::Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__get_g() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__set_n(::Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::BigInteger, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__get_n() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::BigInteger, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__set_lowerSigmaBound(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__get_lowerSigmaBound() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "privateKey", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "g", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "n", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "lowerSigmaBound", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::NaccacheSternKeyParameters(bool privateKey, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger n, int32_t lowerSigmaBound)  : ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter(THROW_UNLESS(::il2cpp_utils::New<NaccacheSternKeyParameters>(privateKey, g, n, lowerSigmaBound))) {}
 void ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::_ctor(bool privateKey, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger n, int32_t lowerSigmaBound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, g, n, lowerSigmaBound);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_G()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters>::get(),
                            "get_G",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_LowerSigmaBound()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters>::get(),
                            "get_LowerSigmaBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_Modulus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters>::get(),
                            "get_Modulus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
