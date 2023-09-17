#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/Sockets/zzzz__IPPacketInformation_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::IPPacketInformation.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::IPPacketInformation::*)(::bs_hook::Il2CppWrapperType)>(&::System::Net::Sockets::IPPacketInformation::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2769be4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Sockets::IPPacketInformation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::IPPacketInformation.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::IPPacketInformation::*)()>(&::System::Net::Sockets::IPPacketInformation::GetHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2769c80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Sockets::IPPacketInformation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "address", ty: "::System::Net::IPAddress", modifiers: "", def_value: Some("csnull") }, CppParam { name: "networkInterface", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::IPPacketInformation::IPPacketInformation(::System::Net::IPAddress address, int32_t networkInterface) noexcept : ::bs_hook::ValueTypeWrapper() {this->address = address;
this->networkInterface = networkInterface;
}
constexpr void ::System::Net::Sockets::IPPacketInformation::__set_address(::System::Net::IPAddress value)  {
::cordl_internals::setInstanceField<::System::Net::IPAddress, 0x0>(this->__instance, std::forward<::System::Net::IPAddress>(value));
}
constexpr ::System::Net::IPAddress ::System::Net::Sockets::IPPacketInformation::__get_address() const {
return ::cordl_internals::getInstanceField<::System::Net::IPAddress, 0x0>(this->__instance);
}
constexpr void ::System::Net::Sockets::IPPacketInformation::__set_networkInterface(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Sockets::IPPacketInformation::__get_networkInterface() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 bool ::System::Net::Sockets::IPPacketInformation::Equals(::bs_hook::Il2CppWrapperType comparand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, comparand);
}
 int32_t ::System::Net::Sockets::IPPacketInformation::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
