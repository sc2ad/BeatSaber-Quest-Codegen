// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.UnixIPInterfaceProperties
#include "System/Net/NetworkInformation/UnixIPInterfaceProperties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: MacOsNetworkInterface
  class MacOsNetworkInterface;
  // Forward declaring type: GatewayIPAddressInformationCollection
  class GatewayIPAddressInformationCollection;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: MacOsIPInterfaceProperties
  class MacOsIPInterfaceProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::MacOsIPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsIPInterfaceProperties*, "System.Net.NetworkInformation", "MacOsIPInterfaceProperties");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.MacOsIPInterfaceProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class MacOsIPInterfaceProperties : public ::System::Net::NetworkInformation::UnixIPInterfaceProperties {
    public:
    // public System.Void .ctor(System.Net.NetworkInformation.MacOsNetworkInterface iface, System.Collections.Generic.List`1<System.Net.IPAddress> addresses)
    // Offset: 0x1A7D310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MacOsIPInterfaceProperties* New_ctor(::System::Net::NetworkInformation::MacOsNetworkInterface* iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::MacOsIPInterfaceProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MacOsIPInterfaceProperties*, creationType>(iface, addresses)));
    }
    // static private System.Boolean ParseRouteInfo_internal(System.String iface, out System.String[] gw_addr_list)
    // Offset: 0x1A7D390
    static bool ParseRouteInfo_internal(::StringW iface, ByRef<::ArrayW<::StringW>> gw_addr_list);
    // public override System.Net.NetworkInformation.GatewayIPAddressInformationCollection get_GatewayAddresses()
    // Offset: 0x1A7D394
    // Implemented from: System.Net.NetworkInformation.IPInterfaceProperties
    // Base method: System.Net.NetworkInformation.GatewayIPAddressInformationCollection IPInterfaceProperties::get_GatewayAddresses()
    ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();
  }; // System.Net.NetworkInformation.MacOsIPInterfaceProperties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::MacOsIPInterfaceProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::MacOsIPInterfaceProperties::ParseRouteInfo_internal
// Il2CppName: ParseRouteInfo_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::ArrayW<::StringW>>)>(&System::Net::NetworkInformation::MacOsIPInterfaceProperties::ParseRouteInfo_internal)> {
  static const MethodInfo* get() {
    static auto* iface = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* gw_addr_list = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::MacOsIPInterfaceProperties*), "ParseRouteInfo_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{iface, gw_addr_list});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::MacOsIPInterfaceProperties::get_GatewayAddresses
// Il2CppName: get_GatewayAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (System::Net::NetworkInformation::MacOsIPInterfaceProperties::*)()>(&System::Net::NetworkInformation::MacOsIPInterfaceProperties::get_GatewayAddresses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::MacOsIPInterfaceProperties*), "get_GatewayAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
