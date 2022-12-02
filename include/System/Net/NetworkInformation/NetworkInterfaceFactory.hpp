// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterfaceFactory
  class NetworkInterfaceFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::NetworkInterfaceFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterfaceFactory*, "System.Net.NetworkInformation", "NetworkInterfaceFactory");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkInterfaceFactory : public ::Il2CppObject {
    public:
    // Nested type: ::System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI
    class UnixNetworkInterfaceAPI;
    // Nested type: ::System::Net::NetworkInformation::NetworkInterfaceFactory::MacOsNetworkInterfaceAPI
    class MacOsNetworkInterfaceAPI;
    // Nested type: ::System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI
    class LinuxNetworkInterfaceAPI;
    // Nested type: ::System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI
    class Win32NetworkInterfaceAPI;
    // protected System.Void .ctor()
    // Offset: 0x1BB5678
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkInterfaceFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::NetworkInterfaceFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkInterfaceFactory*, creationType>()));
    }
    // public System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> GetAllNetworkInterfaces();
    // static public System.Net.NetworkInformation.NetworkInterfaceFactory Create()
    // Offset: 0x1BB5548
    static ::System::Net::NetworkInformation::NetworkInterfaceFactory* Create();
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::GetAllNetworkInterfaces
// Il2CppName: GetAllNetworkInterfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> (System::Net::NetworkInformation::NetworkInterfaceFactory::*)()>(&System::Net::NetworkInformation::NetworkInterfaceFactory::GetAllNetworkInterfaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory*), "GetAllNetworkInterfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::NetworkInterfaceFactory* (*)()>(&System::Net::NetworkInformation::NetworkInterfaceFactory::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
