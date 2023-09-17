#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_impl.hpp"
namespace {
#include "System/Net/NetworkInformation/zzzz__LinuxNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.get_IfacePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(&::System::Net::NetworkInformation::LinuxNetworkInterface::get_IfacePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285c5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface>::get(),
                            "get_IfacePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::LinuxNetworkInterface::*)(::StringW)>(&::System::Net::NetworkInformation::LinuxNetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x285c4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.GetIPProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPInterfaceProperties (::System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(&::System::Net::NetworkInformation::LinuxNetworkInterface::GetIPProperties)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x285c5b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::NetworkInformation::LinuxNetworkInterface),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.get_OperationalStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::OperationalStatus (::System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(&::System::Net::NetworkInformation::LinuxNetworkInterface::get_OperationalStatus)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x285c624;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::NetworkInformation::LinuxNetworkInterface),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.ReadLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::NetworkInformation::LinuxNetworkInterface::ReadLine)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x285c8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface>::get(),
                            "ReadLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::NetworkInformation::LinuxNetworkInterface::__set_iface_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::NetworkInformation::LinuxNetworkInterface::__get_iface_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::NetworkInformation::LinuxNetworkInterface::__set_iface_operstate_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::NetworkInformation::LinuxNetworkInterface::__get_iface_operstate_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::NetworkInformation::LinuxNetworkInterface::__set_iface_flags_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::NetworkInformation::LinuxNetworkInterface::__get_iface_flags_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::System::Net::NetworkInformation::LinuxNetworkInterface::get_IfacePath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface>::get(),
                            "get_IfacePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Net::NetworkInformation::LinuxNetworkInterface::LinuxNetworkInterface(::StringW name)  : ::System::Net::NetworkInformation::UnixNetworkInterface(THROW_UNLESS(::il2cpp_utils::New<LinuxNetworkInterface>(name))) {}
 void ::System::Net::NetworkInformation::LinuxNetworkInterface::_ctor(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::System::Net::NetworkInformation::IPInterfaceProperties ::System::Net::NetworkInformation::LinuxNetworkInterface::GetIPProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface>::get(),
                            "GetIPProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPInterfaceProperties, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::NetworkInformation::OperationalStatus ::System::Net::NetworkInformation::LinuxNetworkInterface::get_OperationalStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface>::get(),
                            "get_OperationalStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::OperationalStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Net::NetworkInformation::LinuxNetworkInterface::ReadLine(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface>::get(),
                            "ReadLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
} // end anonymous namespace
