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
  // Autogenerated type: TMPro.FontStyles
  // [TokenAttribute] Offset: FFFFFFFF
  struct FontStyles/*, public System::Enum*/ {
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
    // Creating value type constructor for type: FontStyles
    constexpr FontStyles(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.FontStyles Normal
    static constexpr const int Normal = 0;
    // Get static field: static public TMPro.FontStyles Normal
    static TMPro::FontStyles _get_Normal();
    // Set static field: static public TMPro.FontStyles Normal
    static void _set_Normal(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Bold
    static constexpr const int Bold = 1;
    // Get static field: static public TMPro.FontStyles Bold
    static TMPro::FontStyles _get_Bold();
    // Set static field: static public TMPro.FontStyles Bold
    static void _set_Bold(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Italic
    static constexpr const int Italic = 2;
    // Get static field: static public TMPro.FontStyles Italic
    static TMPro::FontStyles _get_Italic();
    // Set static field: static public TMPro.FontStyles Italic
    static void _set_Italic(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Underline
    static constexpr const int Underline = 4;
    // Get static field: static public TMPro.FontStyles Underline
    static TMPro::FontStyles _get_Underline();
    // Set static field: static public TMPro.FontStyles Underline
    static void _set_Underline(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles LowerCase
    static constexpr const int LowerCase = 8;
    // Get static field: static public TMPro.FontStyles LowerCase
    static TMPro::FontStyles _get_LowerCase();
    // Set static field: static public TMPro.FontStyles LowerCase
    static void _set_LowerCase(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles UpperCase
    static constexpr const int UpperCase = 16;
    // Get static field: static public TMPro.FontStyles UpperCase
    static TMPro::FontStyles _get_UpperCase();
    // Set static field: static public TMPro.FontStyles UpperCase
    static void _set_UpperCase(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles SmallCaps
    static constexpr const int SmallCaps = 32;
    // Get static field: static public TMPro.FontStyles SmallCaps
    static TMPro::FontStyles _get_SmallCaps();
    // Set static field: static public TMPro.FontStyles SmallCaps
    static void _set_SmallCaps(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Strikethrough
    static constexpr const int Strikethrough = 64;
    // Get static field: static public TMPro.FontStyles Strikethrough
    static TMPro::FontStyles _get_Strikethrough();
    // Set static field: static public TMPro.FontStyles Strikethrough
    static void _set_Strikethrough(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Superscript
    static constexpr const int Superscript = 128;
    // Get static field: static public TMPro.FontStyles Superscript
    static TMPro::FontStyles _get_Superscript();
    // Set static field: static public TMPro.FontStyles Superscript
    static void _set_Superscript(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Subscript
    static constexpr const int Subscript = 256;
    // Get static field: static public TMPro.FontStyles Subscript
    static TMPro::FontStyles _get_Subscript();
    // Set static field: static public TMPro.FontStyles Subscript
    static void _set_Subscript(TMPro::FontStyles value);
    // static field const value: static public TMPro.FontStyles Highlight
    static constexpr const int Highlight = 512;
    // Get static field: static public TMPro.FontStyles Highlight
    static TMPro::FontStyles _get_Highlight();
    // Set static field: static public TMPro.FontStyles Highlight
    static void _set_Highlight(TMPro::FontStyles value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // TMPro.FontStyles
  #pragma pack(pop)
  static check_size<sizeof(FontStyles), 0 + sizeof(int)> __TMPro_FontStylesSizeCheck;
  static_assert(sizeof(FontStyles) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::FontStyles, "TMPro", "FontStyles");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
