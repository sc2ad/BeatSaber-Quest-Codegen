#pragma once
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::UnixNetworkInterfaceAPI.getifaddrs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::cordl_internals::intptr_t>)>(&System::Net::NetworkInformation::UnixNetworkInterfaceAPI::getifaddrs)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x285b958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixNetworkInterfaceAPI>::get(),
                            "getifaddrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::UnixNetworkInterfaceAPI.freeifaddrs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&System::Net::NetworkInformation::UnixNetworkInterfaceAPI::freeifaddrs)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x285b8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixNetworkInterfaceAPI>::get(),
                            "freeifaddrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::UnixNetworkInterfaceAPI._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::UnixNetworkInterfaceAPI::*)()>(&System::Net::NetworkInformation::UnixNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285b17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixNetworkInterfaceAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 int32_t System::Net::NetworkInformation::UnixNetworkInterfaceAPI::getifaddrs(ByRef<::cordl_internals::intptr_t> ifap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixNetworkInterfaceAPI>::get(),
                            "getifaddrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ifap);
}
 void System::Net::NetworkInformation::UnixNetworkInterfaceAPI::freeifaddrs(::cordl_internals::intptr_t ifap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixNetworkInterfaceAPI>::get(),
                            "freeifaddrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ifap);
}
 System::Net::NetworkInformation::UnixNetworkInterfaceAPI System::Net::NetworkInformation::UnixNetworkInterfaceAPI::New_ctor()  {
System::Net::NetworkInformation::UnixNetworkInterfaceAPI o{THROW_UNLESS(::il2cpp_utils::New<System::Net::NetworkInformation::UnixNetworkInterfaceAPI>())};
return o;
}
 void System::Net::NetworkInformation::UnixNetworkInterfaceAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixNetworkInterfaceAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
