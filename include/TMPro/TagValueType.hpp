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
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TagValueType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TagValueType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: TagValueType
    constexpr TagValueType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.TagValueType None
    static constexpr const int None = 0;
    // Get static field: static public TMPro.TagValueType None
    static TMPro::TagValueType _get_None();
    // Set static field: static public TMPro.TagValueType None
    static void _set_None(TMPro::TagValueType value);
    // static field const value: static public TMPro.TagValueType NumericalValue
    static constexpr const int NumericalValue = 1;
    // Get static field: static public TMPro.TagValueType NumericalValue
    static TMPro::TagValueType _get_NumericalValue();
    // Set static field: static public TMPro.TagValueType NumericalValue
    static void _set_NumericalValue(TMPro::TagValueType value);
    // static field const value: static public TMPro.TagValueType StringValue
    static constexpr const int StringValue = 2;
    // Get static field: static public TMPro.TagValueType StringValue
    static TMPro::TagValueType _get_StringValue();
    // Set static field: static public TMPro.TagValueType StringValue
    static void _set_StringValue(TMPro::TagValueType value);
    // static field const value: static public TMPro.TagValueType ColorValue
    static constexpr const int ColorValue = 4;
    // Get static field: static public TMPro.TagValueType ColorValue
    static TMPro::TagValueType _get_ColorValue();
    // Set static field: static public TMPro.TagValueType ColorValue
    static void _set_ColorValue(TMPro::TagValueType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // TMPro.TagValueType
  #pragma pack(pop)
  static check_size<sizeof(TagValueType), 0 + sizeof(int)> __TMPro_TagValueTypeSizeCheck;
  static_assert(sizeof(TagValueType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TagValueType, "TMPro", "TagValueType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
