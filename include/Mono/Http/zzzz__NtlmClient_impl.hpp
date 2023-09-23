#pragma once
#include "Mono/Http/zzzz__NtlmClient_def.hpp"
#include "Mono/Http/zzzz__NtlmSession_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__IAuthenticationModule_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
//  Writing Method size for method: Mono::Http::Mono__Http__NtlmClient____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Http::Mono__Http__NtlmClient____c::*)()>(&Mono::Http::Mono__Http__NtlmClient____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2694ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::Mono__Http__NtlmClient____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Http::Mono__Http__NtlmClient____c._Authenticate_b__1_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Http::NtlmSession (Mono::Http::Mono__Http__NtlmClient____c::*)(System::Net::HttpWebRequest)>(&Mono::Http::Mono__Http__NtlmClient____c::_Authenticate_b__1_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2694edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::Mono__Http__NtlmClient____c>::get(),
                            "<Authenticate>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpWebRequest>::get()}
                        )));
    return ___internal_method;
  }
};
 void Mono::Http::Mono__Http__NtlmClient____c::__set___9(Mono::Http::Mono__Http__NtlmClient____c value)  {
::cordl_internals::setStaticField<Mono::Http::Mono__Http__NtlmClient____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::Mono__Http__NtlmClient____c>::get>(std::forward<Mono::Http::Mono__Http__NtlmClient____c>(value));
}
 Mono::Http::Mono__Http__NtlmClient____c Mono::Http::Mono__Http__NtlmClient____c::__get___9()  {
return ::cordl_internals::getStaticField<Mono::Http::Mono__Http__NtlmClient____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::Mono__Http__NtlmClient____c>::get>();
}
 void Mono::Http::Mono__Http__NtlmClient____c::__set___9__1_0(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<System::Net::HttpWebRequest,Mono::Http::NtlmSession> value)  {
::cordl_internals::setStaticField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<System::Net::HttpWebRequest,Mono::Http::NtlmSession>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::Mono__Http__NtlmClient____c>::get>(std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<System::Net::HttpWebRequest,Mono::Http::NtlmSession>>(value));
}
 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<System::Net::HttpWebRequest,Mono::Http::NtlmSession> Mono::Http::Mono__Http__NtlmClient____c::__get___9__1_0()  {
return ::cordl_internals::getStaticField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<System::Net::HttpWebRequest,Mono::Http::NtlmSession>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::Mono__Http__NtlmClient____c>::get>();
}
// Ctor Parameters []
 Mono::Http::Mono__Http__NtlmClient____c::Mono__Http__NtlmClient____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Mono__Http__NtlmClient____c>())) {}
 void Mono::Http::Mono__Http__NtlmClient____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::Mono__Http__NtlmClient____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Mono::Http::NtlmSession Mono::Http::Mono__Http__NtlmClient____c::_Authenticate_b__1_0(System::Net::HttpWebRequest x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::Mono__Http__NtlmClient____c>::get(),
                            "<Authenticate>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpWebRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Http::NtlmSession, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: Mono::Http::NtlmClient.Authenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization (Mono::Http::NtlmClient::*)(::StringW, System::Net::WebRequest, System::Net::ICredentials)>(&Mono::Http::NtlmClient::Authenticate)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2694a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::NtlmClient>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Http::NtlmClient.PreAuthenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization (Mono::Http::NtlmClient::*)(System::Net::WebRequest, System::Net::ICredentials)>(&Mono::Http::NtlmClient::PreAuthenticate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2694d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::NtlmClient>::get(),
                            "PreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Http::NtlmClient.get_AuthenticationType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Http::NtlmClient::*)()>(&Mono::Http::NtlmClient::get_AuthenticationType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2694d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::NtlmClient>::get(),
                            "get_AuthenticationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Http::NtlmClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Http::NtlmClient::*)()>(&Mono::Http::NtlmClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2694ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::NtlmClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Net::IAuthenticationModule
constexpr  Mono::Http::NtlmClient::operator System::Net::IAuthenticationModule() const noexcept {
return System::Net::IAuthenticationModule(::bs_hook::Il2CppWrapperType::instance);
}
 void Mono::Http::NtlmClient::__set_cache(System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest,Mono::Http::NtlmSession> value)  {
::cordl_internals::setStaticField<System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest,Mono::Http::NtlmSession>, "cache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::NtlmClient>::get>(std::forward<System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest,Mono::Http::NtlmSession>>(value));
}
 System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest,Mono::Http::NtlmSession> Mono::Http::NtlmClient::__get_cache()  {
return ::cordl_internals::getStaticField<System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest,Mono::Http::NtlmSession>, "cache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::NtlmClient>::get>();
}
 System::Net::Authorization Mono::Http::NtlmClient::Authenticate(::StringW challenge, System::Net::WebRequest webRequest, System::Net::ICredentials credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::NtlmClient>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Authorization, false>(const_cast<void*>(instance), ___internal_method, challenge, webRequest, credentials);
}
 System::Net::Authorization Mono::Http::NtlmClient::PreAuthenticate(System::Net::WebRequest webRequest, System::Net::ICredentials credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::NtlmClient>::get(),
                            "PreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Authorization, false>(const_cast<void*>(instance), ___internal_method, webRequest, credentials);
}
 ::StringW Mono::Http::NtlmClient::get_AuthenticationType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::NtlmClient>::get(),
                            "get_AuthenticationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Mono::Http::NtlmClient::NtlmClient()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NtlmClient>())) {}
 void Mono::Http::NtlmClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Http::NtlmClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
