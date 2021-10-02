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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SelectMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct SelectMode/*, public System::Enum*/ {
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
    // Creating value type constructor for type: SelectMode
    constexpr SelectMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.SelectMode None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.ProBuilder.SelectMode None
    static UnityEngine::ProBuilder::SelectMode _get_None();
    // Set static field: static public UnityEngine.ProBuilder.SelectMode None
    static void _set_None(UnityEngine::ProBuilder::SelectMode value);
    // static field const value: static public UnityEngine.ProBuilder.SelectMode Object
    static constexpr const int Object = 1;
    // Get static field: static public UnityEngine.ProBuilder.SelectMode Object
    static UnityEngine::ProBuilder::SelectMode _get_Object();
    // Set static field: static public UnityEngine.ProBuilder.SelectMode Object
    static void _set_Object(UnityEngine::ProBuilder::SelectMode value);
    // static field const value: static public UnityEngine.ProBuilder.SelectMode Vertex
    static constexpr const int Vertex = 2;
    // Get static field: static public UnityEngine.ProBuilder.SelectMode Vertex
    static UnityEngine::ProBuilder::SelectMode _get_Vertex();
    // Set static field: static public UnityEngine.ProBuilder.SelectMode Vertex
    static void _set_Vertex(UnityEngine::ProBuilder::SelectMode value);
    // static field const value: static public UnityEngine.ProBuilder.SelectMode Edge
    static constexpr const int Edge = 4;
    // Get static field: static public UnityEngine.ProBuilder.SelectMode Edge
    static UnityEngine::ProBuilder::SelectMode _get_Edge();
    // Set static field: static public UnityEngine.ProBuilder.SelectMode Edge
    static void _set_Edge(UnityEngine::ProBuilder::SelectMode value);
    // static field const value: static public UnityEngine.ProBuilder.SelectMode Face
    static constexpr const int Face = 8;
    // Get static field: static public UnityEngine.ProBuilder.SelectMode Face
    static UnityEngine::ProBuilder::SelectMode _get_Face();
    // Set static field: static public UnityEngine.ProBuilder.SelectMode Face
    static void _set_Face(UnityEngine::ProBuilder::SelectMode value);
    // static field const value: static public UnityEngine.ProBuilder.SelectMode TextureFace
    static constexpr const int TextureFace = 16;
    // Get static field: static public UnityEngine.ProBuilder.SelectMode TextureFace
    static UnityEngine::ProBuilder::SelectMode _get_TextureFace();
    // Set static field: static public UnityEngine.ProBuilder.SelectMode TextureFace
    static void _set_TextureFace(UnityEngine::ProBuilder::SelectMode value);
    // static field const value: static public UnityEngine.ProBuilder.SelectMode TextureEdge
    static constexpr const int TextureEdge = 32;
    // Get static field: static public UnityEngine.ProBuilder.SelectMode TextureEdge
    static UnityEngine::ProBuilder::SelectMode _get_TextureEdge();
    // Set static field: static public UnityEngine.ProBuilder.SelectMode TextureEdge
    static void _set_TextureEdge(UnityEngine::ProBuilder::SelectMode value);
    // static field const value: static public UnityEngine.ProBuilder.SelectMode TextureVertex
    static constexpr const int TextureVertex = 64;
    // Get static field: static public UnityEngine.ProBuilder.SelectMode TextureVertex
    static UnityEngine::ProBuilder::SelectMode _get_TextureVertex();
    // Set static field: static public UnityEngine.ProBuilder.SelectMode TextureVertex
    static void _set_TextureVertex(UnityEngine::ProBuilder::SelectMode value);
    // static field const value: static public UnityEngine.ProBuilder.SelectMode InputTool
    static constexpr const int InputTool = 128;
    // Get static field: static public UnityEngine.ProBuilder.SelectMode InputTool
    static UnityEngine::ProBuilder::SelectMode _get_InputTool();
    // Set static field: static public UnityEngine.ProBuilder.SelectMode InputTool
    static void _set_InputTool(UnityEngine::ProBuilder::SelectMode value);
    // static field const value: static public UnityEngine.ProBuilder.SelectMode Any
    static constexpr const int Any = 65535;
    // Get static field: static public UnityEngine.ProBuilder.SelectMode Any
    static UnityEngine::ProBuilder::SelectMode _get_Any();
    // Set static field: static public UnityEngine.ProBuilder.SelectMode Any
    static void _set_Any(UnityEngine::ProBuilder::SelectMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.SelectMode
  #pragma pack(pop)
  static check_size<sizeof(SelectMode), 0 + sizeof(int)> __UnityEngine_ProBuilder_SelectModeSizeCheck;
  static_assert(sizeof(SelectMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectMode, "UnityEngine.ProBuilder", "SelectMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
