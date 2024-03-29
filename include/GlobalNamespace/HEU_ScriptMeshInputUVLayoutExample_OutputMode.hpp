// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HEU_ScriptMeshInputUVLayoutExample
#include "GlobalNamespace/HEU_ScriptMeshInputUVLayoutExample.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::OutputMode, "", "HEU_ScriptMeshInputUVLayoutExample/OutputMode");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HEU_ScriptMeshInputUVLayoutExample/OutputMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct HEU_ScriptMeshInputUVLayoutExample::OutputMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OutputMode
    constexpr OutputMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HEU_ScriptMeshInputUVLayoutExample/OutputMode COPY
    static constexpr const int COPY = 0;
    // Get static field: static public HEU_ScriptMeshInputUVLayoutExample/OutputMode COPY
    static ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::OutputMode _get_COPY();
    // Set static field: static public HEU_ScriptMeshInputUVLayoutExample/OutputMode COPY
    static void _set_COPY(::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::OutputMode value);
    // static field const value: static public HEU_ScriptMeshInputUVLayoutExample/OutputMode REPLACE
    static constexpr const int REPLACE = 1;
    // Get static field: static public HEU_ScriptMeshInputUVLayoutExample/OutputMode REPLACE
    static ::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::OutputMode _get_REPLACE();
    // Set static field: static public HEU_ScriptMeshInputUVLayoutExample/OutputMode REPLACE
    static void _set_REPLACE(::GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::OutputMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HEU_ScriptMeshInputUVLayoutExample/OutputMode
  #pragma pack(pop)
  static check_size<sizeof(HEU_ScriptMeshInputUVLayoutExample::OutputMode), 0 + sizeof(int)> __GlobalNamespace_HEU_ScriptMeshInputUVLayoutExample_OutputModeSizeCheck;
  static_assert(sizeof(HEU_ScriptMeshInputUVLayoutExample::OutputMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
