#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SrpTlsServer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpIdentityManager_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSignerCredentials_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpLoginParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager)>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xf0a69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager)>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf0a71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetDsaSignerCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetDsaSignerCredentials)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xf0a748;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                                  69
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetRsaSignerCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetRsaSignerCredentials)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xf0a78c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                                  70
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetCipherSuites
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetCipherSuites)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xf0a7d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.ProcessClientExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)(::System::Collections::IDictionary)>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::ProcessClientExtensions)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xf0a840;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                                  56
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetSelectedCipherSuite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetSelectedCipherSuite)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xf0a874;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                                  58
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetCredentials)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xf0a9a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                                  62
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetKeyExchange)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xf0aa88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                                  64
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.CreateSrpKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::CreateSrpKeyExchange)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf0ab48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::SrpTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                                  71
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__set_mSrpIdentityManager(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__get_mSrpIdentityManager() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__set_mSrpIdentity(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__get_mSrpIdentity() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__set_mLoginParameters(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__get_mLoginParameters() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "srpIdentityManager", ty: "::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::SrpTlsServer(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager srpIdentityManager)  : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer(THROW_UNLESS(::il2cpp_utils::New<SrpTlsServer>(srpIdentityManager))) {}
 void ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager srpIdentityManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, srpIdentityManager);
}
// Ctor Parameters [CppParam { name: "cipherFactory", ty: "::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory", modifiers: "", def_value: None }, CppParam { name: "srpIdentityManager", ty: "::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::SrpTlsServer(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager srpIdentityManager)  : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer(THROW_UNLESS(::il2cpp_utils::New<SrpTlsServer>(cipherFactory, srpIdentityManager))) {}
 void ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager srpIdentityManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cipherFactory, srpIdentityManager);
}
 ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetDsaSignerCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                            "GetDsaSignerCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetRsaSignerCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                            "GetRsaSignerCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<int32_t> ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetCipherSuites()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                            "GetCipherSuites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::ProcessClientExtensions(::System::Collections::IDictionary clientExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                            "ProcessClientExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientExtensions);
}
 int32_t ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetSelectedCipherSuite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                            "GetSelectedCipherSuite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Tls::TlsCredentials ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                            "GetCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCredentials, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetKeyExchange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                            "GetKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::CreateSrpKeyExchange(int32_t keyExchange)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer>::get(),
                            "CreateSrpKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange, false>(const_cast<void*>(instance), ___internal_method, keyExchange);
}
} // end anonymous namespace
