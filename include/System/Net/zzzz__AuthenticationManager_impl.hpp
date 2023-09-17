#pragma once
namespace {
#include "System/Net/zzzz__AuthenticationManager_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Net/zzzz__ICredentialPolicy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
//  Writing Method size for method: ::System::Net::AuthenticationManager.EnsureModules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::AuthenticationManager::EnsureModules)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2828450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get(),
                            "EnsureModules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.Authenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization (*)(::StringW, ::System::Net::WebRequest, ::System::Net::ICredentials)>(&::System::Net::AuthenticationManager::Authenticate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2828700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.DoAuthenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization (*)(::StringW, ::System::Net::WebRequest, ::System::Net::ICredentials)>(&::System::Net::AuthenticationManager::DoAuthenticate)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x282880c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get(),
                            "DoAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.PreAuthenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization (*)(::System::Net::WebRequest, ::System::Net::ICredentials)>(&::System::Net::AuthenticationManager::PreAuthenticate)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x2828cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get(),
                            "PreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::AuthenticationManager::__set_modules(::System::Collections::ArrayList value)  {
::cordl_internals::setStaticField<::System::Collections::ArrayList, "modules", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get>(std::forward<::System::Collections::ArrayList>(value));
}
 ::System::Collections::ArrayList ::System::Net::AuthenticationManager::__get_modules()  {
return ::cordl_internals::getStaticField<::System::Collections::ArrayList, "modules", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get>();
}
 void ::System::Net::AuthenticationManager::__set_locker(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "locker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType ::System::Net::AuthenticationManager::__get_locker()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "locker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get>();
}
 void ::System::Net::AuthenticationManager::__set_credential_policy(::System::Net::ICredentialPolicy value)  {
::cordl_internals::setStaticField<::System::Net::ICredentialPolicy, "credential_policy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get>(std::forward<::System::Net::ICredentialPolicy>(value));
}
 ::System::Net::ICredentialPolicy ::System::Net::AuthenticationManager::__get_credential_policy()  {
return ::cordl_internals::getStaticField<::System::Net::ICredentialPolicy, "credential_policy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get>();
}
 void ::System::Net::AuthenticationManager::EnsureModules()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get(),
                            "EnsureModules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 ::System::Net::Authorization ::System::Net::AuthenticationManager::Authenticate(::StringW challenge, ::System::Net::WebRequest request, ::System::Net::ICredentials credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization, false>(nullptr, ___internal_method, challenge, request, credentials);
}
 ::System::Net::Authorization ::System::Net::AuthenticationManager::DoAuthenticate(::StringW challenge, ::System::Net::WebRequest request, ::System::Net::ICredentials credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get(),
                            "DoAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization, false>(nullptr, ___internal_method, challenge, request, credentials);
}
 ::System::Net::Authorization ::System::Net::AuthenticationManager::PreAuthenticate(::System::Net::WebRequest request, ::System::Net::ICredentials credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager>::get(),
                            "PreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization, false>(nullptr, ___internal_method, request, credentials);
}
} // end anonymous namespace
