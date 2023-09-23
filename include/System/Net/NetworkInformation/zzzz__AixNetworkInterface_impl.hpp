#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__AixNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::AixNetworkInterface._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::AixNetworkInterface::*)(::StringW, uint32_t, int32_t)>(&System::Net::NetworkInformation::AixNetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x285b098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterface>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::AixNetworkInterface.GetIPProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::IPInterfaceProperties (System::Net::NetworkInformation::AixNetworkInterface::*)()>(&System::Net::NetworkInformation::AixNetworkInterface::GetIPProperties)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x285b214;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::AixNetworkInterface),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterface>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::AixNetworkInterface.get_OperationalStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::OperationalStatus (System::Net::NetworkInformation::AixNetworkInterface::*)()>(&System::Net::NetworkInformation::AixNetworkInterface::get_OperationalStatus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x285b298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::AixNetworkInterface),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterface>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::NetworkInformation::AixNetworkInterface::__set__ifa_flags(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::Net::NetworkInformation::AixNetworkInterface::__get__ifa_flags() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::NetworkInformation::AixNetworkInterface::__set__ifru_mtu(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::NetworkInformation::AixNetworkInterface::__get__ifru_mtu() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ifa_flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ifru_mtu", ty: "int32_t", modifiers: "", def_value: None }]
 System::Net::NetworkInformation::AixNetworkInterface::AixNetworkInterface(::StringW name, uint32_t ifa_flags, int32_t ifru_mtu)  : System::Net::NetworkInformation::UnixNetworkInterface(THROW_UNLESS(::il2cpp_utils::New<AixNetworkInterface>(name, ifa_flags, ifru_mtu))) {}
 void System::Net::NetworkInformation::AixNetworkInterface::_ctor(::StringW name, uint32_t ifa_flags, int32_t ifru_mtu)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterface>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, ifa_flags, ifru_mtu);
}
 System::Net::NetworkInformation::IPInterfaceProperties System::Net::NetworkInformation::AixNetworkInterface::GetIPProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterface>::get(),
                            "GetIPProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkInformation::IPInterfaceProperties, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::AixNetworkInterface::get_OperationalStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterface>::get(),
                            "get_OperationalStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkInformation::OperationalStatus, false>(const_cast<void*>(instance), ___internal_method);
}
