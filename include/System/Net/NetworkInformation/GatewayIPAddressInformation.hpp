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
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: GatewayIPAddressInformation
  class GatewayIPAddressInformation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::GatewayIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::GatewayIPAddressInformation*, "System.Net.NetworkInformation", "GatewayIPAddressInformation");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.GatewayIPAddressInformation
  // [TokenAttribute] Offset: FFFFFFFF
  class GatewayIPAddressInformation : public ::Il2CppObject {
    public:
    // protected System.Void .ctor()
    // Offset: 0x17A9634
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GatewayIPAddressInformation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::GatewayIPAddressInformation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GatewayIPAddressInformation*, creationType>()));
    }
  }; // System.Net.NetworkInformation.GatewayIPAddressInformation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
