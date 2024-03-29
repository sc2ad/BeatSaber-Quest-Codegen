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
  // Forward declaring type: HAPI_AttributeTypeInfo
  struct HAPI_AttributeTypeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_AttributeTypeInfo, "HoudiniEngineUnity", "HAPI_AttributeTypeInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_AttributeTypeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_AttributeTypeInfo/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_AttributeTypeInfo
    constexpr HAPI_AttributeTypeInfo(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_INVALID
    static constexpr const int HAPI_ATTRIBUTE_TYPE_INVALID = -1;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_INVALID
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_INVALID();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_INVALID
    static void _set_HAPI_ATTRIBUTE_TYPE_INVALID(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_NONE
    static constexpr const int HAPI_ATTRIBUTE_TYPE_NONE = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_NONE
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_NONE();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_NONE
    static void _set_HAPI_ATTRIBUTE_TYPE_NONE(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_POINT
    static constexpr const int HAPI_ATTRIBUTE_TYPE_POINT = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_POINT
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_POINT();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_POINT
    static void _set_HAPI_ATTRIBUTE_TYPE_POINT(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_HPOINT
    static constexpr const int HAPI_ATTRIBUTE_TYPE_HPOINT = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_HPOINT
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_HPOINT();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_HPOINT
    static void _set_HAPI_ATTRIBUTE_TYPE_HPOINT(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_VECTOR
    static constexpr const int HAPI_ATTRIBUTE_TYPE_VECTOR = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_VECTOR
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_VECTOR();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_VECTOR
    static void _set_HAPI_ATTRIBUTE_TYPE_VECTOR(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_NORMAL
    static constexpr const int HAPI_ATTRIBUTE_TYPE_NORMAL = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_NORMAL
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_NORMAL();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_NORMAL
    static void _set_HAPI_ATTRIBUTE_TYPE_NORMAL(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_COLOR
    static constexpr const int HAPI_ATTRIBUTE_TYPE_COLOR = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_COLOR
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_COLOR();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_COLOR
    static void _set_HAPI_ATTRIBUTE_TYPE_COLOR(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_QUATERNION
    static constexpr const int HAPI_ATTRIBUTE_TYPE_QUATERNION = 6;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_QUATERNION
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_QUATERNION();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_QUATERNION
    static void _set_HAPI_ATTRIBUTE_TYPE_QUATERNION(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_MATRIX3
    static constexpr const int HAPI_ATTRIBUTE_TYPE_MATRIX3 = 7;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_MATRIX3
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_MATRIX3();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_MATRIX3
    static void _set_HAPI_ATTRIBUTE_TYPE_MATRIX3(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_MATRIX
    static constexpr const int HAPI_ATTRIBUTE_TYPE_MATRIX = 8;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_MATRIX
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_MATRIX();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_MATRIX
    static void _set_HAPI_ATTRIBUTE_TYPE_MATRIX(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_ST
    static constexpr const int HAPI_ATTRIBUTE_TYPE_ST = 9;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_ST
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_ST();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_ST
    static void _set_HAPI_ATTRIBUTE_TYPE_ST(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_HIDDEN
    static constexpr const int HAPI_ATTRIBUTE_TYPE_HIDDEN = 10;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_HIDDEN
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_HIDDEN();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_HIDDEN
    static void _set_HAPI_ATTRIBUTE_TYPE_HIDDEN(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_BOX2
    static constexpr const int HAPI_ATTRIBUTE_TYPE_BOX2 = 11;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_BOX2
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_BOX2();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_BOX2
    static void _set_HAPI_ATTRIBUTE_TYPE_BOX2(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_BOX
    static constexpr const int HAPI_ATTRIBUTE_TYPE_BOX = 12;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_BOX
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_BOX();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_BOX
    static void _set_HAPI_ATTRIBUTE_TYPE_BOX(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_TEXTURE
    static constexpr const int HAPI_ATTRIBUTE_TYPE_TEXTURE = 13;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_TEXTURE
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_TEXTURE();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_TEXTURE
    static void _set_HAPI_ATTRIBUTE_TYPE_TEXTURE(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // static field const value: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_MAX
    static constexpr const int HAPI_ATTRIBUTE_TYPE_MAX = 14;
    // Get static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_MAX
    static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo _get_HAPI_ATTRIBUTE_TYPE_MAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_AttributeTypeInfo HAPI_ATTRIBUTE_TYPE_MAX
    static void _set_HAPI_ATTRIBUTE_TYPE_MAX(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_AttributeTypeInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_AttributeTypeInfo), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_AttributeTypeInfoSizeCheck;
  static_assert(sizeof(HAPI_AttributeTypeInfo) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
