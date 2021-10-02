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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextAlignment
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextAlignment/*, public System::Enum*/ {
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
    // Creating value type constructor for type: TextAlignment
    constexpr TextAlignment(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextAlignment Left
    static constexpr const int Left = 0;
    // Get static field: static public UnityEngine.TextAlignment Left
    static UnityEngine::TextAlignment _get_Left();
    // Set static field: static public UnityEngine.TextAlignment Left
    static void _set_Left(UnityEngine::TextAlignment value);
    // static field const value: static public UnityEngine.TextAlignment Center
    static constexpr const int Center = 1;
    // Get static field: static public UnityEngine.TextAlignment Center
    static UnityEngine::TextAlignment _get_Center();
    // Set static field: static public UnityEngine.TextAlignment Center
    static void _set_Center(UnityEngine::TextAlignment value);
    // static field const value: static public UnityEngine.TextAlignment Right
    static constexpr const int Right = 2;
    // Get static field: static public UnityEngine.TextAlignment Right
    static UnityEngine::TextAlignment _get_Right();
    // Set static field: static public UnityEngine.TextAlignment Right
    static void _set_Right(UnityEngine::TextAlignment value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.TextAlignment
  #pragma pack(pop)
  static check_size<sizeof(TextAlignment), 0 + sizeof(int)> __UnityEngine_TextAlignmentSizeCheck;
  static_assert(sizeof(TextAlignment) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextAlignment, "UnityEngine", "TextAlignment");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
