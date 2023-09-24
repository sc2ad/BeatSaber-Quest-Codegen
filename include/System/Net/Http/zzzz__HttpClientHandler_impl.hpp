#pragma once
#include "System/Net/Http/zzzz__HttpMessageHandler_impl.hpp"
#include "System/Net/Http/zzzz__HttpClientHandler_def.hpp"
#include "System/Net/Http/zzzz__IMonoHttpClientHandler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/Http/zzzz__HttpClientHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Http/zzzz__ClientCertificateOption_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Net/Security/zzzz__LocalCertificateSelectionCallback_def.hpp"
//  Writing Method size for method: System::Net::Http::System__Net__Http__HttpClientHandler____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::System__Net__Http__HttpClientHandler____c::*)()>(&System::Net::Http::System__Net__Http__HttpClientHandler____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x269b770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::System__Net__Http__HttpClientHandler____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::System__Net__Http__HttpClientHandler____c._set_ClientCertificateOptions_b__23_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate (System::Net::Http::System__Net__Http__HttpClientHandler____c::*)(::bs_hook::Il2CppWrapperType, ::StringW, System::Security::Cryptography::X509Certificates::X509CertificateCollection, System::Security::Cryptography::X509Certificates::X509Certificate, ::ArrayW<::StringW>)>(&System::Net::Http::System__Net__Http__HttpClientHandler____c::_set_ClientCertificateOptions_b__23_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x269b778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::System__Net__Http__HttpClientHandler____c>::get(),
                            "<set_ClientCertificateOptions>b__23_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Net::Http::System__Net__Http__HttpClientHandler____c::__set___9(System::Net::Http::System__Net__Http__HttpClientHandler____c value)  {
::cordl_internals::setStaticField<System::Net::Http::System__Net__Http__HttpClientHandler____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::System__Net__Http__HttpClientHandler____c>::get>(std::forward<System::Net::Http::System__Net__Http__HttpClientHandler____c>(value));
}
 System::Net::Http::System__Net__Http__HttpClientHandler____c System::Net::Http::System__Net__Http__HttpClientHandler____c::__get___9()  {
return ::cordl_internals::getStaticField<System::Net::Http::System__Net__Http__HttpClientHandler____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::System__Net__Http__HttpClientHandler____c>::get>();
}
 void System::Net::Http::System__Net__Http__HttpClientHandler____c::__set___9__23_1(System::Net::Security::LocalCertificateSelectionCallback value)  {
::cordl_internals::setStaticField<System::Net::Security::LocalCertificateSelectionCallback, "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::System__Net__Http__HttpClientHandler____c>::get>(std::forward<System::Net::Security::LocalCertificateSelectionCallback>(value));
}
 System::Net::Security::LocalCertificateSelectionCallback System::Net::Http::System__Net__Http__HttpClientHandler____c::__get___9__23_1()  {
return ::cordl_internals::getStaticField<System::Net::Security::LocalCertificateSelectionCallback, "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::System__Net__Http__HttpClientHandler____c>::get>();
}
 System::Net::Http::System__Net__Http__HttpClientHandler____c System::Net::Http::System__Net__Http__HttpClientHandler____c::New_ctor()  {
System::Net::Http::System__Net__Http__HttpClientHandler____c o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Http::System__Net__Http__HttpClientHandler____c>())};
return o;
}
 void System::Net::Http::System__Net__Http__HttpClientHandler____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::System__Net__Http__HttpClientHandler____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Certificate System::Net::Http::System__Net__Http__HttpClientHandler____c::_set_ClientCertificateOptions_b__23_1(::bs_hook::Il2CppWrapperType sender, ::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::System__Net__Http__HttpClientHandler____c>::get(),
                            "<set_ClientCertificateOptions>b__23_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, sender, targetHost, localCertificates, remoteCertificate, acceptableIssuers);
}
//  Writing Method size for method: System::Net::Http::HttpClientHandler.CreateDefaultHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::IMonoHttpClientHandler (*)()>(&System::Net::Http::HttpClientHandler::CreateDefaultHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x269acf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "CreateDefaultHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpClientHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpClientHandler::*)()>(&System::Net::Http::HttpClientHandler::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x269af00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpClientHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpClientHandler::*)(System::Net::Http::IMonoHttpClientHandler)>(&System::Net::Http::HttpClientHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x269af38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::IMonoHttpClientHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpClientHandler.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpClientHandler::*)(bool)>(&System::Net::Http::HttpClientHandler::Dispose)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x269b1f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Http::HttpClientHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpClientHandler.ThrowForModifiedManagedSslOptionsIfStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpClientHandler::*)()>(&System::Net::Http::HttpClientHandler::ThrowForModifiedManagedSslOptionsIfStarted)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x269b2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "ThrowForModifiedManagedSslOptionsIfStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpClientHandler.get_ClientCertificateOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::ClientCertificateOption (System::Net::Http::HttpClientHandler::*)()>(&System::Net::Http::HttpClientHandler::get_ClientCertificateOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x269b3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "get_ClientCertificateOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpClientHandler.set_ClientCertificateOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpClientHandler::*)(System::Net::Http::ClientCertificateOption)>(&System::Net::Http::HttpClientHandler::set_ClientCertificateOptions)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x269af70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "set_ClientCertificateOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::ClientCertificateOption>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpClientHandler.get_ClientCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateCollection (System::Net::Http::HttpClientHandler::*)()>(&System::Net::Http::HttpClientHandler::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x269b3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "get_ClientCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpClientHandler.SetWebRequestTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpClientHandler::*)(System::TimeSpan)>(&System::Net::Http::HttpClientHandler::SetWebRequestTimeout)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x269b590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "SetWebRequestTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpClientHandler.SendAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> (System::Net::Http::HttpClientHandler::*)(System::Net::Http::HttpRequestMessage, System::Threading::CancellationToken)>(&System::Net::Http::HttpClientHandler::SendAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x269b63c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Http::HttpClientHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpClientHandler._set_ClientCertificateOptions_b__23_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate (System::Net::Http::HttpClientHandler::*)(::bs_hook::Il2CppWrapperType, ::StringW, System::Security::Cryptography::X509Certificates::X509CertificateCollection, System::Security::Cryptography::X509Certificates::X509Certificate, ::ArrayW<::StringW>)>(&System::Net::Http::HttpClientHandler::_set_ClientCertificateOptions_b__23_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x269b6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "<set_ClientCertificateOptions>b__23_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Http::HttpClientHandler::__set__delegatingHandler(System::Net::Http::IMonoHttpClientHandler value)  {
::cordl_internals::setInstanceField<System::Net::Http::IMonoHttpClientHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Http::IMonoHttpClientHandler>(value));
}
constexpr System::Net::Http::IMonoHttpClientHandler System::Net::Http::HttpClientHandler::__get__delegatingHandler() const {
return ::cordl_internals::getInstanceField<System::Net::Http::IMonoHttpClientHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::HttpClientHandler::__set__clientCertificateOptions(System::Net::Http::ClientCertificateOption value)  {
::cordl_internals::setInstanceField<System::Net::Http::ClientCertificateOption, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Http::ClientCertificateOption>(value));
}
constexpr System::Net::Http::ClientCertificateOption System::Net::Http::HttpClientHandler::__get__clientCertificateOptions() const {
return ::cordl_internals::getInstanceField<System::Net::Http::ClientCertificateOption, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::Http::IMonoHttpClientHandler System::Net::Http::HttpClientHandler::CreateDefaultHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "CreateDefaultHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Http::IMonoHttpClientHandler, false>(nullptr, ___internal_method);
}
 System::Net::Http::HttpClientHandler System::Net::Http::HttpClientHandler::New_ctor()  {
System::Net::Http::HttpClientHandler o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Http::HttpClientHandler>())};
return o;
}
 void System::Net::Http::HttpClientHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::Http::HttpClientHandler System::Net::Http::HttpClientHandler::New_ctor(System::Net::Http::IMonoHttpClientHandler handler)  {
System::Net::Http::HttpClientHandler o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Http::HttpClientHandler>(handler))};
return o;
}
 void System::Net::Http::HttpClientHandler::_ctor(System::Net::Http::IMonoHttpClientHandler handler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::IMonoHttpClientHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handler);
}
 void System::Net::Http::HttpClientHandler::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::Net::Http::HttpClientHandler::ThrowForModifiedManagedSslOptionsIfStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "ThrowForModifiedManagedSslOptionsIfStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::Http::ClientCertificateOption System::Net::Http::HttpClientHandler::get_ClientCertificateOptions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "get_ClientCertificateOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Http::ClientCertificateOption, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Http::HttpClientHandler::set_ClientCertificateOptions(System::Net::Http::ClientCertificateOption value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "set_ClientCertificateOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::ClientCertificateOption>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Security::Cryptography::X509Certificates::X509CertificateCollection System::Net::Http::HttpClientHandler::get_ClientCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "get_ClientCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Http::HttpClientHandler::SetWebRequestTimeout(System::TimeSpan timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "SetWebRequestTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeout);
}
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> System::Net::Http::HttpClientHandler::SendAsync(System::Net::Http::HttpRequestMessage request, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "SendAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::HttpRequestMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage>, false>(const_cast<void*>(instance), ___internal_method, request, cancellationToken);
}
 System::Security::Cryptography::X509Certificates::X509Certificate System::Net::Http::HttpClientHandler::_set_ClientCertificateOptions_b__23_0(::bs_hook::Il2CppWrapperType sender, ::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpClientHandler>::get(),
                            "<set_ClientCertificateOptions>b__23_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, sender, targetHost, localCertificates, remoteCertificate, acceptableIssuers);
}
