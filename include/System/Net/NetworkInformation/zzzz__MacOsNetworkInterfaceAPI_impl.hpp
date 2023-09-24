#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterfaceAPI_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::MacOsNetworkInterfaceAPI._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)()>(&System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x285ce9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsNetworkInterfaceAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::MacOsNetworkInterfaceAPI._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)(int32_t)>(&System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x285b2cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsNetworkInterfaceAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::MacOsNetworkInterfaceAPI.GetAllNetworkInterfaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Net::NetworkInformation::NetworkInterface> (System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)()>(&System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0xa6c;
  constexpr static std::size_t addrs = 0x285cebc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::MacOsNetworkInterfaceAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsNetworkInterfaceAPI>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::__set_AF_INET6(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::__get_AF_INET6() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::NetworkInformation::MacOsNetworkInterfaceAPI System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::New_ctor()  {
System::Net::NetworkInformation::MacOsNetworkInterfaceAPI o{THROW_UNLESS(::il2cpp_utils::New<System::Net::NetworkInformation::MacOsNetworkInterfaceAPI>())};
return o;
}
 void System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsNetworkInterfaceAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::NetworkInformation::MacOsNetworkInterfaceAPI System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::New_ctor(int32_t AF_INET6)  {
System::Net::NetworkInformation::MacOsNetworkInterfaceAPI o{THROW_UNLESS(::il2cpp_utils::New<System::Net::NetworkInformation::MacOsNetworkInterfaceAPI>(AF_INET6))};
return o;
}
 void System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor(int32_t AF_INET6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsNetworkInterfaceAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, AF_INET6);
}
 ::ArrayW<System::Net::NetworkInformation::NetworkInterface> System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::GetAllNetworkInterfaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::MacOsNetworkInterfaceAPI>::get(),
                            "GetAllNetworkInterfaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Net::NetworkInformation::NetworkInterface>, false>(const_cast<void*>(instance), ___internal_method);
}
