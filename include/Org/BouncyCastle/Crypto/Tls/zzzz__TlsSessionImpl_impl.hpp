#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSessionImpl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::Tls::SessionParameters)>(&::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xf29be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::SessionParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl.ExportSessionParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::SessionParameters (::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::ExportSessionParameters)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xf29d24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl.get_SessionID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::get_SessionID)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xf29dd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl.Invalidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::Invalidate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf29e0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl.get_IsResumable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::get_IsResumable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xf29e30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsSession
constexpr  ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::operator ::Org::BouncyCastle::Crypto::Tls::TlsSession() const noexcept {
return ::Org::BouncyCastle::Crypto::Tls::TlsSession(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__set_mSessionID(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__get_mSessionID() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__set_mSessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::SessionParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::SessionParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__get_mSessionParameters() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::SessionParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__set_mResumable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__get_mResumable() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "sessionID", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "sessionParameters", ty: "::Org::BouncyCastle::Crypto::Tls::SessionParameters", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::TlsSessionImpl(::ArrayW<uint8_t> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters sessionParameters)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TlsSessionImpl>(sessionID, sessionParameters))) {}
 void ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::_ctor(::ArrayW<uint8_t> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters sessionParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::SessionParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sessionID, sessionParameters);
}
 ::Org::BouncyCastle::Crypto::Tls::SessionParameters ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::ExportSessionParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl>::get(),
                            "ExportSessionParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SessionParameters, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::get_SessionID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl>::get(),
                            "get_SessionID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::Invalidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl>::get(),
                            "Invalidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::get_IsResumable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl>::get(),
                            "get_IsResumable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
