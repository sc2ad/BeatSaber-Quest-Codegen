#pragma once
#include "System/Net/zzzz__CredentialCache_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
//  Writing Method size for method: System::Net::CredentialCache.get_DefaultCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ICredentials (*)()>(&System::Net::CredentialCache::get_DefaultCredentials)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2809ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::CredentialCache>::get(),
                            "get_DefaultCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::CredentialCache.get_DefaultNetworkCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkCredential (*)()>(&System::Net::CredentialCache::get_DefaultNetworkCredentials)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2809ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::CredentialCache>::get(),
                            "get_DefaultNetworkCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Net::ICredentials System::Net::CredentialCache::get_DefaultCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::CredentialCache>::get(),
                            "get_DefaultCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::ICredentials, false>(nullptr, ___internal_method);
}
 System::Net::NetworkCredential System::Net::CredentialCache::get_DefaultNetworkCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::CredentialCache>::get(),
                            "get_DefaultNetworkCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkCredential, false>(nullptr, ___internal_method);
}
