// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.GatewayIPAddressInformation
#include "System/Net/NetworkInformation/GatewayIPAddressInformation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: GatewayIPAddressInformationCollection
  class GatewayIPAddressInformationCollection;
  // Forward declaring type: IPAddressCollection
  class IPAddressCollection;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: SystemGatewayIPAddressInformation
  class SystemGatewayIPAddressInformation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::SystemGatewayIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*, "System.Net.NetworkInformation", "SystemGatewayIPAddressInformation");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.SystemGatewayIPAddressInformation
  // [TokenAttribute] Offset: FFFFFFFF
  class SystemGatewayIPAddressInformation : public ::System::Net::NetworkInformation::GatewayIPAddressInformation {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Net.IPAddress address
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::IPAddress* address;
    // Field size check
    static_assert(sizeof(::System::Net::IPAddress*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Net::IPAddress*
    constexpr operator ::System::Net::IPAddress*() const noexcept {
      return address;
    }
    // Get instance field reference: private System.Net.IPAddress address
    ::System::Net::IPAddress*& dyn_address();
    // System.Void .ctor(System.Net.IPAddress address)
    // Offset: 0x1B2C628
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SystemGatewayIPAddressInformation* New_ctor(::System::Net::IPAddress* address) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::SystemGatewayIPAddressInformation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SystemGatewayIPAddressInformation*, creationType>(address)));
    }
    // static System.Net.NetworkInformation.GatewayIPAddressInformationCollection ToGatewayIpAddressInformationCollection(System.Net.NetworkInformation.IPAddressCollection addresses)
    // Offset: 0x1B2C654
    static ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* ToGatewayIpAddressInformationCollection(::System::Net::NetworkInformation::IPAddressCollection* addresses);
  }; // System.Net.NetworkInformation.SystemGatewayIPAddressInformation
  #pragma pack(pop)
  static check_size<sizeof(SystemGatewayIPAddressInformation), 16 + sizeof(::System::Net::IPAddress*)> __System_Net_NetworkInformation_SystemGatewayIPAddressInformationSizeCheck;
  static_assert(sizeof(SystemGatewayIPAddressInformation) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::SystemGatewayIPAddressInformation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::SystemGatewayIPAddressInformation::ToGatewayIpAddressInformationCollection
// Il2CppName: ToGatewayIpAddressInformationCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (*)(::System::Net::NetworkInformation::IPAddressCollection*)>(&System::Net::NetworkInformation::SystemGatewayIPAddressInformation::ToGatewayIpAddressInformationCollection)> {
  static const MethodInfo* get() {
    static auto* addresses = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "IPAddressCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::SystemGatewayIPAddressInformation*), "ToGatewayIpAddressInformationCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addresses});
  }
};
