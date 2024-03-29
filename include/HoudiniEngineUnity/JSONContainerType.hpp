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
  // Forward declaring type: JSONContainerType
  struct JSONContainerType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONContainerType, "HoudiniEngineUnity", "JSONContainerType");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.JSONContainerType
  // [TokenAttribute] Offset: FFFFFFFF
  struct JSONContainerType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: JSONContainerType
    constexpr JSONContainerType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public HoudiniEngineUnity.JSONContainerType Array
    static constexpr const int Array = 0;
    // Get static field: static public HoudiniEngineUnity.JSONContainerType Array
    static ::HoudiniEngineUnity::JSONContainerType _get_Array();
    // Set static field: static public HoudiniEngineUnity.JSONContainerType Array
    static void _set_Array(::HoudiniEngineUnity::JSONContainerType value);
    // static field const value: static public HoudiniEngineUnity.JSONContainerType Object
    static constexpr const int Object = 1;
    // Get static field: static public HoudiniEngineUnity.JSONContainerType Object
    static ::HoudiniEngineUnity::JSONContainerType _get_Object();
    // Set static field: static public HoudiniEngineUnity.JSONContainerType Object
    static void _set_Object(::HoudiniEngineUnity::JSONContainerType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.JSONContainerType
  #pragma pack(pop)
  static check_size<sizeof(JSONContainerType), 0 + sizeof(int)> __HoudiniEngineUnity_JSONContainerTypeSizeCheck;
  static_assert(sizeof(JSONContainerType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
