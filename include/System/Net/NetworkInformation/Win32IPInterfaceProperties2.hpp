// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.IPInterfaceProperties
#include "System/Net/NetworkInformation/IPInterfaceProperties.hpp"
// Including type: System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
#include "System/Net/NetworkInformation/Win32_IP_ADAPTER_ADDRESSES.hpp"
// Including type: System.Net.NetworkInformation.Win32_MIB_IFROW
#include "System/Net/NetworkInformation/Win32_MIB_IFROW.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: UnicastIPAddressInformationCollection
  class UnicastIPAddressInformationCollection;
  // Forward declaring type: GatewayIPAddressInformationCollection
  class GatewayIPAddressInformationCollection;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: Win32IPInterfaceProperties2
  class Win32IPInterfaceProperties2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::Win32IPInterfaceProperties2);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::Win32IPInterfaceProperties2*, "System.Net.NetworkInformation", "Win32IPInterfaceProperties2");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x1F8
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.Win32IPInterfaceProperties2
  // [TokenAttribute] Offset: FFFFFFFF
  class Win32IPInterfaceProperties2 : public ::System::Net::NetworkInformation::IPInterfaceProperties {
    public:
    public:
    // private readonly System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES addr
    // Size: 0x108
    // Offset: 0x10
    ::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr;
    // Field size check
    static_assert(sizeof(::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES) == 0x108);
    // private readonly System.Net.NetworkInformation.Win32_MIB_IFROW mib4
    // Size: 0x70
    // Offset: 0x118
    ::System::Net::NetworkInformation::Win32_MIB_IFROW mib4;
    // Field size check
    static_assert(sizeof(::System::Net::NetworkInformation::Win32_MIB_IFROW) == 0x70);
    // private readonly System.Net.NetworkInformation.Win32_MIB_IFROW mib6
    // Size: 0x70
    // Offset: 0x188
    ::System::Net::NetworkInformation::Win32_MIB_IFROW mib6;
    // Field size check
    static_assert(sizeof(::System::Net::NetworkInformation::Win32_MIB_IFROW) == 0x70);
    public:
    // Get instance field reference: private readonly System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES addr
    [[deprecated("Use field access instead!")]] ::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES& dyn_addr();
    // Get instance field reference: private readonly System.Net.NetworkInformation.Win32_MIB_IFROW mib4
    [[deprecated("Use field access instead!")]] ::System::Net::NetworkInformation::Win32_MIB_IFROW& dyn_mib4();
    // Get instance field reference: private readonly System.Net.NetworkInformation.Win32_MIB_IFROW mib6
    [[deprecated("Use field access instead!")]] ::System::Net::NetworkInformation::Win32_MIB_IFROW& dyn_mib6();
    // public System.Void .ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES addr, System.Net.NetworkInformation.Win32_MIB_IFROW mib4, System.Net.NetworkInformation.Win32_MIB_IFROW mib6)
    // Offset: 0x1BA3D1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32IPInterfaceProperties2* New_ctor(::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr, ::System::Net::NetworkInformation::Win32_MIB_IFROW mib4, ::System::Net::NetworkInformation::Win32_MIB_IFROW mib6) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::Win32IPInterfaceProperties2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32IPInterfaceProperties2*, creationType>(addr, mib4, mib6)));
    }
    // static private System.Net.NetworkInformation.UnicastIPAddressInformationCollection Win32FromUnicast(System.IntPtr ptr)
    // Offset: 0x1BA41EC
    static ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* Win32FromUnicast(::System::IntPtr ptr);
    // public override System.Net.NetworkInformation.GatewayIPAddressInformationCollection get_GatewayAddresses()
    // Offset: 0x1BA3D84
    // Implemented from: System.Net.NetworkInformation.IPInterfaceProperties
    // Base method: System.Net.NetworkInformation.GatewayIPAddressInformationCollection IPInterfaceProperties::get_GatewayAddresses()
    ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();
    // public override System.Net.NetworkInformation.UnicastIPAddressInformationCollection get_UnicastAddresses()
    // Offset: 0x1BA4114
    // Implemented from: System.Net.NetworkInformation.IPInterfaceProperties
    // Base method: System.Net.NetworkInformation.UnicastIPAddressInformationCollection IPInterfaceProperties::get_UnicastAddresses()
    ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses();
  }; // System.Net.NetworkInformation.Win32IPInterfaceProperties2
  #pragma pack(pop)
  static check_size<sizeof(Win32IPInterfaceProperties2), 392 + sizeof(::System::Net::NetworkInformation::Win32_MIB_IFROW)> __System_Net_NetworkInformation_Win32IPInterfaceProperties2SizeCheck;
  static_assert(sizeof(Win32IPInterfaceProperties2) == 0x1F8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32IPInterfaceProperties2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32IPInterfaceProperties2::Win32FromUnicast
// Il2CppName: Win32FromUnicast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* (*)(::System::IntPtr)>(&System::Net::NetworkInformation::Win32IPInterfaceProperties2::Win32FromUnicast)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::Win32IPInterfaceProperties2*), "Win32FromUnicast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32IPInterfaceProperties2::get_GatewayAddresses
// Il2CppName: get_GatewayAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (System::Net::NetworkInformation::Win32IPInterfaceProperties2::*)()>(&System::Net::NetworkInformation::Win32IPInterfaceProperties2::get_GatewayAddresses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::Win32IPInterfaceProperties2*), "get_GatewayAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32IPInterfaceProperties2::get_UnicastAddresses
// Il2CppName: get_UnicastAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* (System::Net::NetworkInformation::Win32IPInterfaceProperties2::*)()>(&System::Net::NetworkInformation::Win32IPInterfaceProperties2::get_UnicastAddresses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::Win32IPInterfaceProperties2*), "get_UnicastAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
