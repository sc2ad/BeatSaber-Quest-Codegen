// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AssetReferenceT`1
#include "UnityEngine/AddressableAssets/AssetReferenceT_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: AssetReferenceSprite
  class AssetReferenceSprite;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReferenceSprite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReferenceSprite*, "UnityEngine.AddressableAssets", "AssetReferenceSprite");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.AssetReferenceSprite
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetReferenceSprite : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Sprite*> {
    public:
    // public System.Void .ctor(System.String guid)
    // Offset: 0x18DA68C
    // Implemented from: UnityEngine.AddressableAssets.AssetReferenceT`1
    // Base method: System.Void AssetReferenceT_1::.ctor(System.String guid)
    // Base method: System.Void AssetReference::.ctor(System.String guid)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReferenceSprite* New_ctor(::StringW guid) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AssetReferenceSprite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReferenceSprite*, creationType>(guid)));
    }
    // public override System.Boolean ValidateAsset(System.String path)
    // Offset: 0x18DA6EC
    // Implemented from: UnityEngine.AddressableAssets.AssetReferenceT`1
    // Base method: System.Boolean AssetReferenceT_1::ValidateAsset(System.String path)
    bool ValidateAsset(::StringW path);
  }; // UnityEngine.AddressableAssets.AssetReferenceSprite
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReferenceSprite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReferenceSprite::ValidateAsset
// Il2CppName: ValidateAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AssetReferenceSprite::*)(::StringW)>(&UnityEngine::AddressableAssets::AssetReferenceSprite::ValidateAsset)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetReferenceSprite*), "ValidateAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
