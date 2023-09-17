#pragma once
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_impl.hpp"
namespace {
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceType_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::UnixNetworkInterface::*)(::StringW)>(&::System::Net::NetworkInformation::UnixNetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x285b184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface.AddAddress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::UnixNetworkInterface::*)(::System::Net::IPAddress)>(&::System::Net::NetworkInformation::UnixNetworkInterface::AddAddress)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x285b0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface>::get(),
                            "AddAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface.SetLinkLayerInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::UnixNetworkInterface::*)(int32_t, ::ArrayW<uint8_t>, ::System::Net::NetworkInformation::NetworkInterfaceType)>(&::System::Net::NetworkInformation::UnixNetworkInterface::SetLinkLayerInfo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285b168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface>::get(),
                            "SetLinkLayerInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::NetworkInterfaceType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkInformation::UnixNetworkInterface::*)()>(&::System::Net::NetworkInformation::UnixNetworkInterface::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e4ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::NetworkInformation::UnixNetworkInterface),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface.get_NetworkInterfaceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::NetworkInterfaceType (::System::Net::NetworkInformation::UnixNetworkInterface::*)()>(&::System::Net::NetworkInformation::UnixNetworkInterface::get_NetworkInterfaceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e4f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::NetworkInformation::UnixNetworkInterface),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Net::NetworkInformation::UnixNetworkInterface::__set_ipproperties(::System::Net::NetworkInformation::IPInterfaceProperties value)  {
::cordl_internals::setInstanceField<::System::Net::NetworkInformation::IPInterfaceProperties, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::NetworkInformation::IPInterfaceProperties>(value));
}
constexpr ::System::Net::NetworkInformation::IPInterfaceProperties ::System::Net::NetworkInformation::UnixNetworkInterface::__get_ipproperties() const {
return ::cordl_internals::getInstanceField<::System::Net::NetworkInformation::IPInterfaceProperties, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::NetworkInformation::UnixNetworkInterface::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::NetworkInformation::UnixNetworkInterface::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::NetworkInformation::UnixNetworkInterface::__set_addresses(::System::Collections::Generic::List_1<::System::Net::IPAddress> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Net::IPAddress>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::System::Net::IPAddress>>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress> ::System::Net::NetworkInformation::UnixNetworkInterface::__get_addresses() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Net::IPAddress>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::NetworkInformation::UnixNetworkInterface::__set_macAddress(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::NetworkInformation::UnixNetworkInterface::__get_macAddress() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::NetworkInformation::UnixNetworkInterface::__set_type(::System::Net::NetworkInformation::NetworkInterfaceType value)  {
::cordl_internals::setInstanceField<::System::Net::NetworkInformation::NetworkInterfaceType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::NetworkInformation::NetworkInterfaceType>(value));
}
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType ::System::Net::NetworkInformation::UnixNetworkInterface::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Net::NetworkInformation::NetworkInterfaceType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Net::NetworkInformation::UnixNetworkInterface::UnixNetworkInterface(::StringW name)  : ::System::Net::NetworkInformation::NetworkInterface(THROW_UNLESS(::il2cpp_utils::New<UnixNetworkInterface>(name))) {}
 void ::System::Net::NetworkInformation::UnixNetworkInterface::_ctor(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void ::System::Net::NetworkInformation::UnixNetworkInterface::AddAddress(::System::Net::IPAddress address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface>::get(),
                            "AddAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, address);
}
 void ::System::Net::NetworkInformation::UnixNetworkInterface::SetLinkLayerInfo(int32_t index, ::ArrayW<uint8_t> macAddress, ::System::Net::NetworkInformation::NetworkInterfaceType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface>::get(),
                            "SetLinkLayerInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::NetworkInterfaceType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, macAddress, type);
}
 ::StringW ::System::Net::NetworkInformation::UnixNetworkInterface::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::NetworkInformation::NetworkInterfaceType ::System::Net::NetworkInformation::UnixNetworkInterface::get_NetworkInterfaceType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterface>::get(),
                            "get_NetworkInterfaceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::NetworkInterfaceType, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
