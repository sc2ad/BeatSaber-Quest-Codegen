// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_InputNode
#include "HoudiniEngineUnity/HEU_InputNode.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InternalObjectType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HEU_InputNode::InternalObjectType/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InternalObjectType
    constexpr InternalObjectType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InternalObjectType UNKNOWN
    static constexpr const int UNKNOWN = 0;
    // Get static field: static public HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InternalObjectType UNKNOWN
    static HoudiniEngineUnity::HEU_InputNode::InternalObjectType _get_UNKNOWN();
    // Set static field: static public HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InternalObjectType UNKNOWN
    static void _set_UNKNOWN(HoudiniEngineUnity::HEU_InputNode::InternalObjectType value);
    // static field const value: static public HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InternalObjectType HDA
    static constexpr const int HDA = 1;
    // Get static field: static public HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InternalObjectType HDA
    static HoudiniEngineUnity::HEU_InputNode::InternalObjectType _get_HDA();
    // Set static field: static public HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InternalObjectType HDA
    static void _set_HDA(HoudiniEngineUnity::HEU_InputNode::InternalObjectType value);
    // static field const value: static public HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InternalObjectType UNITY_MESH
    static constexpr const int UNITY_MESH = 2;
    // Get static field: static public HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InternalObjectType UNITY_MESH
    static HoudiniEngineUnity::HEU_InputNode::InternalObjectType _get_UNITY_MESH();
    // Set static field: static public HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InternalObjectType UNITY_MESH
    static void _set_UNITY_MESH(HoudiniEngineUnity::HEU_InputNode::InternalObjectType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InternalObjectType
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputNode::InternalObjectType), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_InputNode_InternalObjectTypeSizeCheck;
  static_assert(sizeof(HEU_InputNode::InternalObjectType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputNode::InternalObjectType, "HoudiniEngineUnity", "HEU_InputNode/InternalObjectType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
