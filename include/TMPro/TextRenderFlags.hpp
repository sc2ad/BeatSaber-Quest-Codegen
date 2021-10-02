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
  // Autogenerated type: TMPro.TextRenderFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextRenderFlags/*, public System::Enum*/ {
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
    // Creating value type constructor for type: TextRenderFlags
    constexpr TextRenderFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.TextRenderFlags DontRender
    static constexpr const int DontRender = 0;
    // Get static field: static public TMPro.TextRenderFlags DontRender
    static TMPro::TextRenderFlags _get_DontRender();
    // Set static field: static public TMPro.TextRenderFlags DontRender
    static void _set_DontRender(TMPro::TextRenderFlags value);
    // static field const value: static public TMPro.TextRenderFlags Render
    static constexpr const int Render = 255;
    // Get static field: static public TMPro.TextRenderFlags Render
    static TMPro::TextRenderFlags _get_Render();
    // Set static field: static public TMPro.TextRenderFlags Render
    static void _set_Render(TMPro::TextRenderFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // TMPro.TextRenderFlags
  #pragma pack(pop)
  static check_size<sizeof(TextRenderFlags), 0 + sizeof(int)> __TMPro_TextRenderFlagsSizeCheck;
  static_assert(sizeof(TextRenderFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextRenderFlags, "TMPro", "TextRenderFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
