// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.TimeSpanParse
#include "System/Globalization/TimeSpanParse.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse::TimeSpanThrowStyle, "System.Globalization", "TimeSpanParse/TimeSpanThrowStyle");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.TimeSpanParse/System.Globalization.TimeSpanThrowStyle
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeSpanParse::TimeSpanThrowStyle/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TimeSpanThrowStyle
    constexpr TimeSpanThrowStyle(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Globalization.TimeSpanParse/System.Globalization.TimeSpanThrowStyle None
    static constexpr const int None = 0;
    // Get static field: static public System.Globalization.TimeSpanParse/System.Globalization.TimeSpanThrowStyle None
    static ::System::Globalization::TimeSpanParse::TimeSpanThrowStyle _get_None();
    // Set static field: static public System.Globalization.TimeSpanParse/System.Globalization.TimeSpanThrowStyle None
    static void _set_None(::System::Globalization::TimeSpanParse::TimeSpanThrowStyle value);
    // static field const value: static public System.Globalization.TimeSpanParse/System.Globalization.TimeSpanThrowStyle All
    static constexpr const int All = 1;
    // Get static field: static public System.Globalization.TimeSpanParse/System.Globalization.TimeSpanThrowStyle All
    static ::System::Globalization::TimeSpanParse::TimeSpanThrowStyle _get_All();
    // Set static field: static public System.Globalization.TimeSpanParse/System.Globalization.TimeSpanThrowStyle All
    static void _set_All(::System::Globalization::TimeSpanParse::TimeSpanThrowStyle value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Globalization.TimeSpanParse/System.Globalization.TimeSpanThrowStyle
  #pragma pack(pop)
  static check_size<sizeof(TimeSpanParse::TimeSpanThrowStyle), 0 + sizeof(int)> __System_Globalization_TimeSpanParse_TimeSpanThrowStyleSizeCheck;
  static_assert(sizeof(TimeSpanParse::TimeSpanThrowStyle) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
