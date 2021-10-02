// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.UVEditing
#include "UnityEngine/ProBuilder/MeshOperations/UVEditing.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.UVEditing/UnityEngine.ProBuilder.MeshOperations.UVTransform
  // [TokenAttribute] Offset: FFFFFFFF
  struct UVEditing::UVTransform/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public UnityEngine.Vector2 translation
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Vector2 translation;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public System.Single rotation
    // Size: 0x4
    // Offset: 0x8
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector2 scale
    // Size: 0x8
    // Offset: 0xC
    UnityEngine::Vector2 scale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    public:
    // Creating value type constructor for type: UVTransform
    constexpr UVTransform(UnityEngine::Vector2 translation_ = {}, float rotation_ = {}, UnityEngine::Vector2 scale_ = {}) noexcept : translation{translation_}, rotation{rotation_}, scale{scale_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector2 translation
    UnityEngine::Vector2& dyn_translation();
    // Get instance field reference: public System.Single rotation
    float& dyn_rotation();
    // Get instance field reference: public UnityEngine.Vector2 scale
    UnityEngine::Vector2& dyn_scale();
    // public override System.String ToString()
    // Offset: 0x1904168
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.MeshOperations.UVEditing/UnityEngine.ProBuilder.MeshOperations.UVTransform
  #pragma pack(pop)
  static check_size<sizeof(UVEditing::UVTransform), 12 + sizeof(UnityEngine::Vector2)> __UnityEngine_ProBuilder_MeshOperations_UVEditing_UVTransformSizeCheck;
  static_assert(sizeof(UVEditing::UVTransform) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UVEditing::UVTransform, "UnityEngine.ProBuilder.MeshOperations", "UVEditing/UVTransform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::UVEditing::UVTransform::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::MeshOperations::UVEditing::UVTransform::*)()>(&UnityEngine::ProBuilder::MeshOperations::UVEditing::UVTransform::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::UVEditing::UVTransform), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
