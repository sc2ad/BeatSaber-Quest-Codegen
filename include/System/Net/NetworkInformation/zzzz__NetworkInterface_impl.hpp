#pragma once
namespace {
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceType_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.GetAllNetworkInterfaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface> (*)()>(&::System::Net::NetworkInformation::NetworkInterface::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28590a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterface>::get(),
                            "GetAllNetworkInterfaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkInformation::NetworkInterface::*)()>(&::System::Net::NetworkInformation::NetworkInterface::get_Name)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28591f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::NetworkInformation::NetworkInterface),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterface>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.GetIPProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPInterfaceProperties (::System::Net::NetworkInformation::NetworkInterface::*)()>(&::System::Net::NetworkInformation::NetworkInterface::GetIPProperties)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2859230;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::NetworkInformation::NetworkInterface),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterface>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.get_OperationalStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::OperationalStatus (::System::Net::NetworkInformation::NetworkInterface::*)()>(&::System::Net::NetworkInformation::NetworkInterface::get_OperationalStatus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2859270;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::NetworkInformation::NetworkInterface),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterface>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.get_NetworkInterfaceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::NetworkInterfaceType (::System::Net::NetworkInformation::NetworkInterface::*)()>(&::System::Net::NetworkInformation::NetworkInterface::get_NetworkInterfaceType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28592b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::NetworkInformation::NetworkInterface),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterface>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::NetworkInterface::*)()>(&::System::Net::NetworkInformation::NetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28592f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterface>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<::System::Net::NetworkInformation::NetworkInterface> ::System::Net::NetworkInformation::NetworkInterface::GetAllNetworkInterfaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterface>::get(),
                            "GetAllNetworkInterfaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface>, false>(nullptr, ___internal_method);
}
 ::StringW ::System::Net::NetworkInformation::NetworkInterface::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterface>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::NetworkInformation::IPInterfaceProperties ::System::Net::NetworkInformation::NetworkInterface::GetIPProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterface>::get(),
                            "GetIPProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPInterfaceProperties, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::NetworkInformation::OperationalStatus ::System::Net::NetworkInformation::NetworkInterface::get_OperationalStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterface>::get(),
                            "get_OperationalStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::OperationalStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::NetworkInformation::NetworkInterfaceType ::System::Net::NetworkInformation::NetworkInterface::get_NetworkInterfaceType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterface>::get(),
                            "get_NetworkInterfaceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::NetworkInterfaceType, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::System::Net::NetworkInformation::NetworkInterface::NetworkInterface()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NetworkInterface>())) {}
 void ::System::Net::NetworkInformation::NetworkInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterface>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
