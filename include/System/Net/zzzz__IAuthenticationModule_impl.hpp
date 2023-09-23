#pragma once
#include "System/Net/zzzz__IAuthenticationModule_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
//  Writing Method size for method: System::Net::IAuthenticationModule.Authenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization (System::Net::IAuthenticationModule::*)(::StringW, System::Net::WebRequest, System::Net::ICredentials)>(&System::Net::IAuthenticationModule::Authenticate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::IAuthenticationModule),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IAuthenticationModule>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::IAuthenticationModule.PreAuthenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization (System::Net::IAuthenticationModule::*)(System::Net::WebRequest, System::Net::ICredentials)>(&System::Net::IAuthenticationModule::PreAuthenticate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::IAuthenticationModule),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IAuthenticationModule>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::IAuthenticationModule.get_AuthenticationType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::IAuthenticationModule::*)()>(&System::Net::IAuthenticationModule::get_AuthenticationType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::IAuthenticationModule),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IAuthenticationModule>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 System::Net::Authorization System::Net::IAuthenticationModule::Authenticate(::StringW challenge, System::Net::WebRequest request, System::Net::ICredentials credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IAuthenticationModule>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Authorization, false>(const_cast<void*>(instance), ___internal_method, challenge, request, credentials);
}
 System::Net::Authorization System::Net::IAuthenticationModule::PreAuthenticate(System::Net::WebRequest request, System::Net::ICredentials credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IAuthenticationModule>::get(),
                            "PreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Authorization, false>(const_cast<void*>(instance), ___internal_method, request, credentials);
}
 ::StringW System::Net::IAuthenticationModule::get_AuthenticationType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IAuthenticationModule>::get(),
                            "get_AuthenticationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
