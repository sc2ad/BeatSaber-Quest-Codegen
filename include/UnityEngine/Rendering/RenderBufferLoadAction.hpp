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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RenderBufferLoadAction
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderBufferLoadAction/*, public System::Enum*/ {
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
    // Creating value type constructor for type: RenderBufferLoadAction
    constexpr RenderBufferLoadAction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.RenderBufferLoadAction Load
    static constexpr const int Load = 0;
    // Get static field: static public UnityEngine.Rendering.RenderBufferLoadAction Load
    static UnityEngine::Rendering::RenderBufferLoadAction _get_Load();
    // Set static field: static public UnityEngine.Rendering.RenderBufferLoadAction Load
    static void _set_Load(UnityEngine::Rendering::RenderBufferLoadAction value);
    // static field const value: static public UnityEngine.Rendering.RenderBufferLoadAction Clear
    static constexpr const int Clear = 1;
    // Get static field: static public UnityEngine.Rendering.RenderBufferLoadAction Clear
    static UnityEngine::Rendering::RenderBufferLoadAction _get_Clear();
    // Set static field: static public UnityEngine.Rendering.RenderBufferLoadAction Clear
    static void _set_Clear(UnityEngine::Rendering::RenderBufferLoadAction value);
    // static field const value: static public UnityEngine.Rendering.RenderBufferLoadAction DontCare
    static constexpr const int DontCare = 2;
    // Get static field: static public UnityEngine.Rendering.RenderBufferLoadAction DontCare
    static UnityEngine::Rendering::RenderBufferLoadAction _get_DontCare();
    // Set static field: static public UnityEngine.Rendering.RenderBufferLoadAction DontCare
    static void _set_DontCare(UnityEngine::Rendering::RenderBufferLoadAction value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Rendering.RenderBufferLoadAction
  #pragma pack(pop)
  static check_size<sizeof(RenderBufferLoadAction), 0 + sizeof(int)> __UnityEngine_Rendering_RenderBufferLoadActionSizeCheck;
  static_assert(sizeof(RenderBufferLoadAction) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderBufferLoadAction, "UnityEngine.Rendering", "RenderBufferLoadAction");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
