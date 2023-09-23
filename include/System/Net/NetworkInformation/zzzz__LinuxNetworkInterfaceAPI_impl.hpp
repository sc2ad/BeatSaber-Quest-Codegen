#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__LinuxNetworkInterfaceAPI_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::LinuxNetworkInterfaceAPI.FreeInterfaceAddresses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::FreeInterfaceAddresses)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x285b8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::LinuxNetworkInterfaceAPI>::get(),
                            "FreeInterfaceAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::LinuxNetworkInterfaceAPI.GetInterfaceAddresses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::cordl_internals::intptr_t>)>(&System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::GetInterfaceAddresses)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x285b954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::LinuxNetworkInterfaceAPI>::get(),
                            "GetInterfaceAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::LinuxNetworkInterfaceAPI.GetAllNetworkInterfaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Net::NetworkInformation::NetworkInterface> (System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::*)()>(&System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0xaf4;
  constexpr static std::size_t addrs = 0x285b9d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::LinuxNetworkInterfaceAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::LinuxNetworkInterfaceAPI>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::LinuxNetworkInterfaceAPI._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::*)()>(&System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285c5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::LinuxNetworkInterfaceAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::FreeInterfaceAddresses(::cordl_internals::intptr_t ifap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::LinuxNetworkInterfaceAPI>::get(),
                            "FreeInterfaceAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ifap);
}
 int32_t System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::GetInterfaceAddresses(ByRef<::cordl_internals::intptr_t> ifap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::LinuxNetworkInterfaceAPI>::get(),
                            "GetInterfaceAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ifap);
}
 ::ArrayW<System::Net::NetworkInformation::NetworkInterface> System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::GetAllNetworkInterfaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::LinuxNetworkInterfaceAPI>::get(),
                            "GetAllNetworkInterfaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Net::NetworkInformation::NetworkInterface>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::LinuxNetworkInterfaceAPI()  : System::Net::NetworkInformation::UnixNetworkInterfaceAPI(THROW_UNLESS(::il2cpp_utils::New<LinuxNetworkInterfaceAPI>())) {}
 void System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::LinuxNetworkInterfaceAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
