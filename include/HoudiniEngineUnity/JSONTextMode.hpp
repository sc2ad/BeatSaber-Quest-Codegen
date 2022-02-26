// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONTextMode, "HoudiniEngineUnity", "JSONTextMode");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.JSONTextMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct JSONTextMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: JSONTextMode
    constexpr JSONTextMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.JSONTextMode Compact
    static constexpr const int Compact = 0;
    // Get static field: static public HoudiniEngineUnity.JSONTextMode Compact
    static ::HoudiniEngineUnity::JSONTextMode _get_Compact();
    // Set static field: static public HoudiniEngineUnity.JSONTextMode Compact
    static void _set_Compact(::HoudiniEngineUnity::JSONTextMode value);
    // static field const value: static public HoudiniEngineUnity.JSONTextMode Indent
    static constexpr const int Indent = 1;
    // Get static field: static public HoudiniEngineUnity.JSONTextMode Indent
    static ::HoudiniEngineUnity::JSONTextMode _get_Indent();
    // Set static field: static public HoudiniEngineUnity.JSONTextMode Indent
    static void _set_Indent(::HoudiniEngineUnity::JSONTextMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.JSONTextMode
  #pragma pack(pop)
  static check_size<sizeof(JSONTextMode), 0 + sizeof(int)> __HoudiniEngineUnity_JSONTextModeSizeCheck;
  static_assert(sizeof(JSONTextMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
