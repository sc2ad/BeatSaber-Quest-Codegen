#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xf359c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair.get_Public
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter (::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::*)()>(&::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::get_Public)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf35aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair>::get(),
                            "get_Public",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair.get_Private
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter (::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::*)()>(&::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::get_Private)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf35aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair>::get(),
                            "get_Private",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::__set_publicParameter(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>(value));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::__get_publicParameter() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::__set_privateParameter(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>(value));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::__get_privateParameter() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "publicParameter", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "privateParameter", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::AsymmetricCipherKeyPair(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicParameter, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateParameter)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AsymmetricCipherKeyPair>(publicParameter, privateParameter))) {}
 void ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicParameter, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateParameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicParameter, privateParameter);
}
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::get_Public()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair>::get(),
                            "get_Public",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::get_Private()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair>::get(),
                            "get_Private",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
