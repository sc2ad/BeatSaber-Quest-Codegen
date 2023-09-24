#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SecurityParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IRandomGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ProtocolVersion_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.NextCounterValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::NextCounterValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xecbce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "NextCounterValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)(Org::BouncyCastle::Security::SecureRandom, Org::BouncyCastle::Crypto::Tls::SecurityParameters)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0xecbd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::SecurityParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.get_NonceRandomGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Prng::IRandomGenerator (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_NonceRandomGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecc05c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.get_SecureRandom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Security::SecureRandom (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_SecureRandom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecc064;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.get_SecurityParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::SecurityParameters (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_SecurityParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecc06c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.get_IsServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_IsServer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.get_ClientVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::ProtocolVersion (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_ClientVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecc074;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.SetClientVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)(Org::BouncyCastle::Crypto::Tls::ProtocolVersion)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::SetClientVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecc07c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.get_ServerVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::ProtocolVersion (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_ServerVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecc084;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.SetServerVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)(Org::BouncyCastle::Crypto::Tls::ProtocolVersion)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::SetServerVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecc08c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.get_ResumableSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsSession (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_ResumableSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecc094;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.SetResumableSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)(Org::BouncyCastle::Crypto::Tls::TlsSession)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::SetResumableSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecc09c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.get_UserObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_UserObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecc0a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.set_UserObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::set_UserObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecc0ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsContext.ExportKeyingMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::ExportKeyingMaterial)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xecc0b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsContext
constexpr  Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::operator Org::BouncyCastle::Crypto::Tls::TlsContext() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsContext(::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__set_counter(int64_t value)  {
::cordl_internals::setStaticField<int64_t, "counter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get>(std::forward<int64_t>(value));
}
 int64_t Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__get_counter()  {
return ::cordl_internals::getStaticField<int64_t, "counter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get>();
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__set_mNonceRandom(Org::BouncyCastle::Crypto::Prng::IRandomGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Prng::IRandomGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Prng::IRandomGenerator>(value));
}
constexpr Org::BouncyCastle::Crypto::Prng::IRandomGenerator Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__get_mNonceRandom() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Prng::IRandomGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__set_mSecureRandom(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__get_mSecureRandom() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__set_mSecurityParameters(Org::BouncyCastle::Crypto::Tls::SecurityParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::SecurityParameters, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::SecurityParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::SecurityParameters Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__get_mSecurityParameters() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::SecurityParameters, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__set_mClientVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::ProtocolVersion>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::ProtocolVersion Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__get_mClientVersion() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__set_mServerVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::ProtocolVersion>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::ProtocolVersion Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__get_mServerVersion() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__set_mSession(Org::BouncyCastle::Crypto::Tls::TlsSession value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsSession, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsSession>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsSession Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__get_mSession() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsSession, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__set_mUserObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::__get_mUserObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int64_t Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::NextCounterValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "NextCounterValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::AbstractTlsContext Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::New_ctor(Org::BouncyCastle::Security::SecureRandom secureRandom, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters)  {
Org::BouncyCastle::Crypto::Tls::AbstractTlsContext o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>(secureRandom, securityParameters))};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::_ctor(Org::BouncyCastle::Security::SecureRandom secureRandom, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::SecurityParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, secureRandom, securityParameters);
}
 Org::BouncyCastle::Crypto::Prng::IRandomGenerator Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_NonceRandomGenerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "get_NonceRandomGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Prng::IRandomGenerator, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_SecureRandom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "get_SecureRandom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Security::SecureRandom, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::SecurityParameters Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_SecurityParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "get_SecurityParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::SecurityParameters, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_IsServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "get_IsServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_ClientVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "get_ClientVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::SetClientVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion clientVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "SetClientVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::ProtocolVersion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientVersion);
}
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_ServerVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "get_ServerVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::SetServerVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion serverVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "SetServerVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::ProtocolVersion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverVersion);
}
 Org::BouncyCastle::Crypto::Tls::TlsSession Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_ResumableSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "get_ResumableSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsSession, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::SetResumableSession(Org::BouncyCastle::Crypto::Tls::TlsSession session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "SetResumableSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsSession>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::get_UserObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "get_UserObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::set_UserObject(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "set_UserObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsContext::ExportKeyingMaterial(::StringW asciiLabel, ::ArrayW<uint8_t> context_value, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext>::get(),
                            "ExportKeyingMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, asciiLabel, context_value, length);
}
