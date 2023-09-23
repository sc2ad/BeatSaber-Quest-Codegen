#pragma once
#include "System/Net/zzzz__BasicClient_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__IAuthenticationModule_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
//  Writing Method size for method: System::Net::BasicClient.Authenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization (System::Net::BasicClient::*)(::StringW, System::Net::WebRequest, System::Net::ICredentials)>(&System::Net::BasicClient::Authenticate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x28292a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::BasicClient>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::BasicClient.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&System::Net::BasicClient::GetBytes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28296fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::BasicClient>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::BasicClient.InternalAuthenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization (*)(System::Net::WebRequest, System::Net::ICredentials)>(&System::Net::BasicClient::InternalAuthenticate)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x2829350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::BasicClient>::get(),
                            "InternalAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::BasicClient.PreAuthenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization (System::Net::BasicClient::*)(System::Net::WebRequest, System::Net::ICredentials)>(&System::Net::BasicClient::PreAuthenticate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28297a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::BasicClient>::get(),
                            "PreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::BasicClient.get_AuthenticationType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::BasicClient::*)()>(&System::Net::BasicClient::get_AuthenticationType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28297b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::BasicClient>::get(),
                            "get_AuthenticationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::BasicClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::BasicClient::*)()>(&System::Net::BasicClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28286f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::BasicClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Net::IAuthenticationModule
constexpr  System::Net::BasicClient::operator System::Net::IAuthenticationModule() const noexcept {
return System::Net::IAuthenticationModule(::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::Authorization System::Net::BasicClient::Authenticate(::StringW challenge, System::Net::WebRequest webRequest, System::Net::ICredentials credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::BasicClient>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Authorization, false>(const_cast<void*>(instance), ___internal_method, challenge, webRequest, credentials);
}
 ::ArrayW<uint8_t> System::Net::BasicClient::GetBytes(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::BasicClient>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, str);
}
 System::Net::Authorization System::Net::BasicClient::InternalAuthenticate(System::Net::WebRequest webRequest, System::Net::ICredentials credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::BasicClient>::get(),
                            "InternalAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Authorization, false>(nullptr, ___internal_method, webRequest, credentials);
}
 System::Net::Authorization System::Net::BasicClient::PreAuthenticate(System::Net::WebRequest webRequest, System::Net::ICredentials credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::BasicClient>::get(),
                            "PreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Authorization, false>(const_cast<void*>(instance), ___internal_method, webRequest, credentials);
}
 ::StringW System::Net::BasicClient::get_AuthenticationType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::BasicClient>::get(),
                            "get_AuthenticationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Net::BasicClient::BasicClient()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BasicClient>())) {}
 void System::Net::BasicClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::BasicClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
