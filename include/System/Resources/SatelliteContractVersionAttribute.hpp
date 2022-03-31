// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Resources
namespace System::Resources {
  // Forward declaring type: SatelliteContractVersionAttribute
  class SatelliteContractVersionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Resources::SatelliteContractVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::SatelliteContractVersionAttribute*, "System.Resources", "SatelliteContractVersionAttribute");
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.SatelliteContractVersionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 11A95B4
  // [AttributeUsageAttribute] Offset: 11A95B4
  class SatelliteContractVersionAttribute : public ::System::Attribute {
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
    // private System.String _version
    // Size: 0x8
    // Offset: 0x10
    ::StringW version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return version;
    }
    // Get instance field reference: private System.String _version
    ::StringW& dyn__version();
    // public System.Void .ctor(System.String version)
    // Offset: 0x1D47990
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SatelliteContractVersionAttribute* New_ctor(::StringW version) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Resources::SatelliteContractVersionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SatelliteContractVersionAttribute*, creationType>(version)));
    }
  }; // System.Resources.SatelliteContractVersionAttribute
  #pragma pack(pop)
  static check_size<sizeof(SatelliteContractVersionAttribute), 16 + sizeof(::StringW)> __System_Resources_SatelliteContractVersionAttributeSizeCheck;
  static_assert(sizeof(SatelliteContractVersionAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::SatelliteContractVersionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
