#pragma once
namespace {
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs8EncryptedPrivateKeyInfoBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs8EncryptedPrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x105ac24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::*)(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo)>(&::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x105ac5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::*)(::Org::BouncyCastle::Crypto::ICipherBuilder)>(&::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::Build)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x105ac84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::__set_privateKeyInfo(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::__get_privateKeyInfo() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "privateKeyInfo", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::Pkcs8EncryptedPrivateKeyInfoBuilder(::ArrayW<uint8_t> privateKeyInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Pkcs8EncryptedPrivateKeyInfoBuilder>(privateKeyInfo))) {}
 void ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::_ctor(::ArrayW<uint8_t> privateKeyInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKeyInfo);
}
// Ctor Parameters [CppParam { name: "privateKeyInfo", ty: "::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::Pkcs8EncryptedPrivateKeyInfoBuilder(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privateKeyInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Pkcs8EncryptedPrivateKeyInfoBuilder>(privateKeyInfo))) {}
 void ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privateKeyInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKeyInfo);
}
 ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::Build(::Org::BouncyCastle::Crypto::ICipherBuilder encryptor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo, false>(const_cast<void*>(instance), ___internal_method, encryptor);
}
} // end anonymous namespace
