#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SimulatedTlsSrpIdentityManager_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpIdentityManager_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Srp/zzzz__Srp6VerifierGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpLoginParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager.GetRfc5054Default
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager (*)(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::GetRfc5054Default)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xf09aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager>::get(),
                            "GetRfc5054Default",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::*)(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters, ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator, ::Org::BouncyCastle::Crypto::IMac)>(&::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xf09c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager.GetLoginParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters (::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::GetLoginParameters)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0xf09c58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager
constexpr  ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::operator ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager() const noexcept {
return ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager(::bs_hook::Il2CppWrapperType::instance);
}
 void ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__set_PREFIX_PASSWORD(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "PREFIX_PASSWORD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__get_PREFIX_PASSWORD()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "PREFIX_PASSWORD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager>::get>();
}
 void ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__set_PREFIX_SALT(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "PREFIX_SALT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__get_PREFIX_SALT()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "PREFIX_SALT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager>::get>();
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__set_mGroup(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__get_mGroup() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__set_mVerifierGenerator(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__get_mVerifierGenerator() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__set_mMac(::Org::BouncyCastle::Crypto::IMac value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IMac, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::IMac>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IMac ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__get_mMac() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IMac, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::GetRfc5054Default(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group, ::ArrayW<uint8_t> seedKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager>::get(),
                            "GetRfc5054Default",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager, false>(nullptr, ___internal_method, group, seedKey);
}
// Ctor Parameters [CppParam { name: "group", ty: "::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters", modifiers: "", def_value: None }, CppParam { name: "verifierGenerator", ty: "::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator", modifiers: "", def_value: None }, CppParam { name: "mac", ty: "::Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::SimulatedTlsSrpIdentityManager(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group, ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator verifierGenerator, ::Org::BouncyCastle::Crypto::IMac mac)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SimulatedTlsSrpIdentityManager>(group, verifierGenerator, mac))) {}
 void ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::_ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group, ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator verifierGenerator, ::Org::BouncyCastle::Crypto::IMac mac)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, group, verifierGenerator, mac);
}
 ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::GetLoginParameters(::ArrayW<uint8_t> identity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager>::get(),
                            "GetLoginParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters, false>(const_cast<void*>(instance), ___internal_method, identity);
}
} // end anonymous namespace
