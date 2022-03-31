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
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputInterfaceTilemapSettings
  class HEU_InputInterfaceTilemapSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*, "HoudiniEngineUnity", "HEU_InputInterfaceTilemapSettings");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputInterfaceTilemapSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputInterfaceTilemapSettings : public ::Il2CppObject {
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
    // public System.Boolean _createGroupsForTiles
    // Size: 0x1
    // Offset: 0x10
    bool createGroupsForTiles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _exportUnusedTiles
    // Size: 0x1
    // Offset: 0x11
    bool exportUnusedTiles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _applyTileColor
    // Size: 0x1
    // Offset: 0x12
    bool applyTileColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _applyTilemapOrientation
    // Size: 0x1
    // Offset: 0x13
    bool applyTilemapOrientation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Boolean _createGroupsForTiles
    bool& dyn__createGroupsForTiles();
    // Get instance field reference: public System.Boolean _exportUnusedTiles
    bool& dyn__exportUnusedTiles();
    // Get instance field reference: public System.Boolean _applyTileColor
    bool& dyn__applyTileColor();
    // Get instance field reference: public System.Boolean _applyTilemapOrientation
    bool& dyn__applyTilemapOrientation();
    // public System.Void .ctor()
    // Offset: 0x1852C08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputInterfaceTilemapSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputInterfaceTilemapSettings*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_InputInterfaceTilemapSettings
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputInterfaceTilemapSettings), 19 + sizeof(bool)> __HoudiniEngineUnity_HEU_InputInterfaceTilemapSettingsSizeCheck;
  static_assert(sizeof(HEU_InputInterfaceTilemapSettings) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
