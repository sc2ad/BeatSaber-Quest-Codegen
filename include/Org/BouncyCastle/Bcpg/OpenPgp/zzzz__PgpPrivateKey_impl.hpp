#pragma once
namespace {
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::*)(int64_t, ::Org::BouncyCastle::Bcpg::PublicKeyPacket, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1021c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey.get_KeyId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::get_KeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1026c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get(),
                            "get_KeyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey.get_PublicKeyPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyPacket (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::get_PublicKeyPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1026c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get(),
                            "get_PublicKeyPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1026c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__set_keyID(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__get_keyID() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__set_publicKeyPacket(::Org::BouncyCastle::Bcpg::PublicKeyPacket value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::PublicKeyPacket, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Bcpg::PublicKeyPacket>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__get_publicKeyPacket() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::PublicKeyPacket, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__set_privateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>(value));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::__get_privateKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keyID", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "publicKeyPacket", ty: "::Org::BouncyCastle::Bcpg::PublicKeyPacket", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::PgpPrivateKey(int64_t keyID, ::Org::BouncyCastle::Bcpg::PublicKeyPacket publicKeyPacket, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PgpPrivateKey>(keyID, publicKeyPacket, privateKey))) {}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::_ctor(int64_t keyID, ::Org::BouncyCastle::Bcpg::PublicKeyPacket publicKeyPacket, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyID, publicKeyPacket, privateKey);
}
 int64_t ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::get_KeyId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get(),
                            "get_KeyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Bcpg::PublicKeyPacket ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::get_PublicKeyPacket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get(),
                            "get_PublicKeyPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyPacket, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
