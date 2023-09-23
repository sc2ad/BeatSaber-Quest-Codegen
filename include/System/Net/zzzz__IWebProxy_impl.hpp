#pragma once
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: System::Net::IWebProxy.GetProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (System::Net::IWebProxy::*)(System::Uri)>(&System::Net::IWebProxy::GetProxy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::IWebProxy),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IWebProxy>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::IWebProxy.IsBypassed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IWebProxy::*)(System::Uri)>(&System::Net::IWebProxy::IsBypassed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::IWebProxy),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IWebProxy>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::IWebProxy.get_Credentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ICredentials (System::Net::IWebProxy::*)()>(&System::Net::IWebProxy::get_Credentials)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::IWebProxy),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IWebProxy>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 System::Uri System::Net::IWebProxy::GetProxy(System::Uri destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IWebProxy>::get(),
                            "GetProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(const_cast<void*>(instance), ___internal_method, destination);
}
 bool System::Net::IWebProxy::IsBypassed(System::Uri host)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IWebProxy>::get(),
                            "IsBypassed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, host);
}
 System::Net::ICredentials System::Net::IWebProxy::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IWebProxy>::get(),
                            "get_Credentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::ICredentials, false>(const_cast<void*>(instance), ___internal_method);
}
