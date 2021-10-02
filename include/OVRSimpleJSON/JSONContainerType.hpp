// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONContainerType
  // [TokenAttribute] Offset: FFFFFFFF
  struct JSONContainerType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: JSONContainerType
    constexpr JSONContainerType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRSimpleJSON.JSONContainerType Array
    static constexpr const int Array = 0;
    // Get static field: static public OVRSimpleJSON.JSONContainerType Array
    static OVRSimpleJSON::JSONContainerType _get_Array();
    // Set static field: static public OVRSimpleJSON.JSONContainerType Array
    static void _set_Array(OVRSimpleJSON::JSONContainerType value);
    // static field const value: static public OVRSimpleJSON.JSONContainerType Object
    static constexpr const int Object = 1;
    // Get static field: static public OVRSimpleJSON.JSONContainerType Object
    static OVRSimpleJSON::JSONContainerType _get_Object();
    // Set static field: static public OVRSimpleJSON.JSONContainerType Object
    static void _set_Object(OVRSimpleJSON::JSONContainerType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRSimpleJSON.JSONContainerType
  #pragma pack(pop)
  static check_size<sizeof(JSONContainerType), 0 + sizeof(int)> __OVRSimpleJSON_JSONContainerTypeSizeCheck;
  static_assert(sizeof(JSONContainerType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONContainerType, "OVRSimpleJSON", "JSONContainerType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
