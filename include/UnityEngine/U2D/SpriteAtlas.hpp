// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Forward declaring type: SpriteAtlas
  class SpriteAtlas;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::U2D::SpriteAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteAtlas*, "UnityEngine.U2D", "SpriteAtlas");
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.U2D.SpriteAtlas
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1085B50
  // [NativeTypeAttribute] Offset: 1085B50
  class SpriteAtlas : public ::UnityEngine::Object {
    public:
    // public System.Boolean CanBindTo(UnityEngine.Sprite sprite)
    // Offset: 0x28D8E18
    bool CanBindTo(::UnityEngine::Sprite* sprite);
    // public UnityEngine.Sprite GetSprite(System.String name)
    // Offset: 0x28D8E68
    ::UnityEngine::Sprite* GetSprite(::StringW name);
  }; // UnityEngine.U2D.SpriteAtlas
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlas::CanBindTo
// Il2CppName: CanBindTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::U2D::SpriteAtlas::*)(::UnityEngine::Sprite*)>(&UnityEngine::U2D::SpriteAtlas::CanBindTo)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlas*), "CanBindTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlas::GetSprite
// Il2CppName: GetSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (UnityEngine::U2D::SpriteAtlas::*)(::StringW)>(&UnityEngine::U2D::SpriteAtlas::GetSprite)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlas*), "GetSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
