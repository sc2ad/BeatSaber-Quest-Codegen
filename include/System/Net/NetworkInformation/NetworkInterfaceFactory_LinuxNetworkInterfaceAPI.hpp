// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory
#include "System/Net/NetworkInformation/NetworkInterfaceFactory.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory/System.Net.NetworkInformation.UnixNetworkInterfaceAPI
#include "System/Net/NetworkInformation/NetworkInterfaceFactory_UnixNetworkInterfaceAPI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*, "System.Net.NetworkInformation", "NetworkInterfaceFactory/LinuxNetworkInterfaceAPI");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory/System.Net.NetworkInformation.LinuxNetworkInterfaceAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkInterfaceFactory::LinuxNetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI {
    public:
    // static private System.Void FreeInterfaceAddresses(System.IntPtr ifap)
    // Offset: 0x1BA1798
    static void FreeInterfaceAddresses(::System::IntPtr ifap);
    // static private System.Int32 GetInterfaceAddresses(out System.IntPtr ifap)
    // Offset: 0x1BA181C
    static int GetInterfaceAddresses(ByRef<::System::IntPtr> ifap);
    // public System.Void .ctor()
    // Offset: 0x1BA1780
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory/System.Net.NetworkInformation.UnixNetworkInterfaceAPI
    // Base method: System.Void UnixNetworkInterfaceAPI::.ctor()
    // Base method: System.Void NetworkInterfaceFactory::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkInterfaceFactory::LinuxNetworkInterfaceAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*, creationType>()));
    }
    // public override System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0x1BA18A0
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Net.NetworkInformation.NetworkInterface[] NetworkInterfaceFactory::GetAllNetworkInterfaces()
    ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> GetAllNetworkInterfaces();
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory/System.Net.NetworkInformation.LinuxNetworkInterfaceAPI
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::FreeInterfaceAddresses
// Il2CppName: FreeInterfaceAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::FreeInterfaceAddresses)> {
  static const MethodInfo* get() {
    static auto* ifap = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*), "FreeInterfaceAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ifap});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::GetInterfaceAddresses
// Il2CppName: GetInterfaceAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::System::IntPtr>)>(&System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::GetInterfaceAddresses)> {
  static const MethodInfo* get() {
    static auto* ifap = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*), "GetInterfaceAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ifap});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::GetAllNetworkInterfaces
// Il2CppName: GetAllNetworkInterfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> (System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::*)()>(&System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*), "GetAllNetworkInterfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
