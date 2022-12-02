// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: UIVertex
  struct UIVertex;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIVertex, "UnityEngine", "UIVertex");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIVertex
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 109CBFC
  struct UIVertex/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 normal
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 normal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector4 tangent
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Vector4 tangent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Color32 color
    // Size: 0x4
    // Offset: 0x28
    ::UnityEngine::Color32 color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // public UnityEngine.Vector2 uv0
    // Size: 0x8
    // Offset: 0x2C
    ::UnityEngine::Vector2 uv0;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 uv1
    // Size: 0x8
    // Offset: 0x34
    ::UnityEngine::Vector2 uv1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 uv2
    // Size: 0x8
    // Offset: 0x3C
    ::UnityEngine::Vector2 uv2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 uv3
    // Size: 0x8
    // Offset: 0x44
    ::UnityEngine::Vector2 uv3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Creating value type constructor for type: UIVertex
    constexpr UIVertex(::UnityEngine::Vector3 position_ = {}, ::UnityEngine::Vector3 normal_ = {}, ::UnityEngine::Vector4 tangent_ = {}, ::UnityEngine::Color32 color_ = {}, ::UnityEngine::Vector2 uv0_ = {}, ::UnityEngine::Vector2 uv1_ = {}, ::UnityEngine::Vector2 uv2_ = {}, ::UnityEngine::Vector2 uv3_ = {}) noexcept : position{position_}, normal{normal_}, tangent{tangent_}, color{color_}, uv0{uv0_}, uv1{uv1_}, uv2{uv2_}, uv3{uv3_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly UnityEngine.Color32 s_DefaultColor
    static ::UnityEngine::Color32 _get_s_DefaultColor();
    // Set static field: static private readonly UnityEngine.Color32 s_DefaultColor
    static void _set_s_DefaultColor(::UnityEngine::Color32 value);
    // Get static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static ::UnityEngine::Vector4 _get_s_DefaultTangent();
    // Set static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static void _set_s_DefaultTangent(::UnityEngine::Vector4 value);
    // Get static field: static public UnityEngine.UIVertex simpleVert
    static ::UnityEngine::UIVertex _get_simpleVert();
    // Set static field: static public UnityEngine.UIVertex simpleVert
    static void _set_simpleVert(::UnityEngine::UIVertex value);
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Vector3 normal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_normal();
    // Get instance field reference: public UnityEngine.Vector4 tangent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_tangent();
    // Get instance field reference: public UnityEngine.Color32 color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_color();
    // Get instance field reference: public UnityEngine.Vector2 uv0
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_uv0();
    // Get instance field reference: public UnityEngine.Vector2 uv1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_uv1();
    // Get instance field reference: public UnityEngine.Vector2 uv2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_uv2();
    // Get instance field reference: public UnityEngine.Vector2 uv3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_uv3();
    // static private System.Void .cctor()
    // Offset: 0x2B7479C
    static void _cctor();
  }; // UnityEngine.UIVertex
  #pragma pack(pop)
  static check_size<sizeof(UIVertex), 68 + sizeof(::UnityEngine::Vector2)> __UnityEngine_UIVertexSizeCheck;
  static_assert(sizeof(UIVertex) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIVertex::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIVertex::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIVertex), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
