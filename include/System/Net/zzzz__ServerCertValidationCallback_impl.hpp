#pragma once
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
//  Writing Method size for method: System::Net::System__Net__ServerCertValidationCallback__CallbackContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__ServerCertValidationCallback__CallbackContext::*)(::bs_hook::Il2CppWrapperType, System::Security::Cryptography::X509Certificates::X509Certificate, System::Security::Cryptography::X509Certificates::X509Chain, System::Net::Security::SslPolicyErrors)>(&System::Net::System__Net__ServerCertValidationCallback__CallbackContext::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x282840c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ServerCertValidationCallback__CallbackContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Chain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslPolicyErrors>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::System__Net__ServerCertValidationCallback__CallbackContext::__set_request(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Net::System__Net__ServerCertValidationCallback__CallbackContext::__get_request() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__ServerCertValidationCallback__CallbackContext::__set_certificate(System::Security::Cryptography::X509Certificates::X509Certificate value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Certificate>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Certificate System::Net::System__Net__ServerCertValidationCallback__CallbackContext::__get_certificate() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__ServerCertValidationCallback__CallbackContext::__set_chain(System::Security::Cryptography::X509Certificates::X509Chain value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Chain, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Chain>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Chain System::Net::System__Net__ServerCertValidationCallback__CallbackContext::__get_chain() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Chain, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__ServerCertValidationCallback__CallbackContext::__set_sslPolicyErrors(System::Net::Security::SslPolicyErrors value)  {
::cordl_internals::setInstanceField<System::Net::Security::SslPolicyErrors, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Security::SslPolicyErrors>(value));
}
constexpr System::Net::Security::SslPolicyErrors System::Net::System__Net__ServerCertValidationCallback__CallbackContext::__get_sslPolicyErrors() const {
return ::cordl_internals::getInstanceField<System::Net::Security::SslPolicyErrors, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__ServerCertValidationCallback__CallbackContext::__set_result(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::System__Net__ServerCertValidationCallback__CallbackContext::__get_result() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::System__Net__ServerCertValidationCallback__CallbackContext System::Net::System__Net__ServerCertValidationCallback__CallbackContext::New_ctor(::bs_hook::Il2CppWrapperType request, System::Security::Cryptography::X509Certificates::X509Certificate certificate, System::Security::Cryptography::X509Certificates::X509Chain chain, System::Net::Security::SslPolicyErrors sslPolicyErrors)  {
System::Net::System__Net__ServerCertValidationCallback__CallbackContext o{THROW_UNLESS(::il2cpp_utils::New<System::Net::System__Net__ServerCertValidationCallback__CallbackContext>(request, certificate, chain, sslPolicyErrors))};
return o;
}
 void System::Net::System__Net__ServerCertValidationCallback__CallbackContext::_ctor(::bs_hook::Il2CppWrapperType request, System::Security::Cryptography::X509Certificates::X509Certificate certificate, System::Security::Cryptography::X509Certificates::X509Chain chain, System::Net::Security::SslPolicyErrors sslPolicyErrors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__ServerCertValidationCallback__CallbackContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Chain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslPolicyErrors>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request, certificate, chain, sslPolicyErrors);
}
//  Writing Method size for method: System::Net::ServerCertValidationCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServerCertValidationCallback::*)(System::Net::Security::RemoteCertificateValidationCallback)>(&System::Net::ServerCertValidationCallback::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2828178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServerCertValidationCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::RemoteCertificateValidationCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ServerCertValidationCallback.get_ValidationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Security::RemoteCertificateValidationCallback (System::Net::ServerCertValidationCallback::*)()>(&System::Net::ServerCertValidationCallback::get_ValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28281f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServerCertValidationCallback>::get(),
                            "get_ValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ServerCertValidationCallback.Callback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServerCertValidationCallback::*)(::bs_hook::Il2CppWrapperType)>(&System::Net::ServerCertValidationCallback::Callback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x28281f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServerCertValidationCallback>::get(),
                            "Callback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::ServerCertValidationCallback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServerCertValidationCallback::*)(::bs_hook::Il2CppWrapperType, System::Security::Cryptography::X509Certificates::X509Certificate, System::Security::Cryptography::X509Certificates::X509Chain, System::Net::Security::SslPolicyErrors)>(&System::Net::ServerCertValidationCallback::Invoke)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x28282a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServerCertValidationCallback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Chain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslPolicyErrors>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::ServerCertValidationCallback::__set_m_ValidationCallback(System::Net::Security::RemoteCertificateValidationCallback value)  {
::cordl_internals::setInstanceField<System::Net::Security::RemoteCertificateValidationCallback, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Security::RemoteCertificateValidationCallback>(value));
}
constexpr System::Net::Security::RemoteCertificateValidationCallback System::Net::ServerCertValidationCallback::__get_m_ValidationCallback() const {
return ::cordl_internals::getInstanceField<System::Net::Security::RemoteCertificateValidationCallback, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ServerCertValidationCallback::__set_m_Context(System::Threading::ExecutionContext value)  {
::cordl_internals::setInstanceField<System::Threading::ExecutionContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ExecutionContext>(value));
}
constexpr System::Threading::ExecutionContext System::Net::ServerCertValidationCallback::__get_m_Context() const {
return ::cordl_internals::getInstanceField<System::Threading::ExecutionContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::ServerCertValidationCallback System::Net::ServerCertValidationCallback::New_ctor(System::Net::Security::RemoteCertificateValidationCallback validationCallback)  {
System::Net::ServerCertValidationCallback o{THROW_UNLESS(::il2cpp_utils::New<System::Net::ServerCertValidationCallback>(validationCallback))};
return o;
}
 void System::Net::ServerCertValidationCallback::_ctor(System::Net::Security::RemoteCertificateValidationCallback validationCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServerCertValidationCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::RemoteCertificateValidationCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, validationCallback);
}
 System::Net::Security::RemoteCertificateValidationCallback System::Net::ServerCertValidationCallback::get_ValidationCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServerCertValidationCallback>::get(),
                            "get_ValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Security::RemoteCertificateValidationCallback, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::ServerCertValidationCallback::Callback(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServerCertValidationCallback>::get(),
                            "Callback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 bool System::Net::ServerCertValidationCallback::Invoke(::bs_hook::Il2CppWrapperType request, System::Security::Cryptography::X509Certificates::X509Certificate certificate, System::Security::Cryptography::X509Certificates::X509Chain chain, System::Net::Security::SslPolicyErrors sslPolicyErrors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ServerCertValidationCallback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Chain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslPolicyErrors>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, request, certificate, chain, sslPolicyErrors);
}
