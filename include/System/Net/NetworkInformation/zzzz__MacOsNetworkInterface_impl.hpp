#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_impl.hpp"
namespace {
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterface._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::MacOsNetworkInterface::*)(::StringW, uint32_t)>(&::System::Net::NetworkInformation::MacOsNetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x285dab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterface.GetIPProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPInterfaceProperties (::System::Net::NetworkInformation::MacOsNetworkInterface::*)()>(&::System::Net::NetworkInformation::MacOsNetworkInterface::GetIPProperties)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x285dadc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::NetworkInformation::MacOsNetworkInterface),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterface.get_OperationalStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::OperationalStatus (::System::Net::NetworkInformation::MacOsNetworkInterface::*)()>(&::System::Net::NetworkInformation::MacOsNetworkInterface::get_OperationalStatus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x285db50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::NetworkInformation::MacOsNetworkInterface),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Net::NetworkInformation::MacOsNetworkInterface::__set__ifa_flags(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Net::NetworkInformation::MacOsNetworkInterface::__get__ifa_flags() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ifa_flags", ty: "uint32_t", modifiers: "", def_value: None }]
 ::System::Net::NetworkInformation::MacOsNetworkInterface::MacOsNetworkInterface(::StringW name, uint32_t ifa_flags)  : ::System::Net::NetworkInformation::UnixNetworkInterface(THROW_UNLESS(::il2cpp_utils::New<MacOsNetworkInterface>(name, ifa_flags))) {}
 void ::System::Net::NetworkInformation::MacOsNetworkInterface::_ctor(::StringW name, uint32_t ifa_flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, ifa_flags);
}
 ::System::Net::NetworkInformation::IPInterfaceProperties ::System::Net::NetworkInformation::MacOsNetworkInterface::GetIPProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface>::get(),
                            "GetIPProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPInterfaceProperties, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::NetworkInformation::OperationalStatus ::System::Net::NetworkInformation::MacOsNetworkInterface::get_OperationalStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface>::get(),
                            "get_OperationalStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::OperationalStatus, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
