// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterDataModel
  class BTSCharacterDataModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BTSCharacterDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterDataModel*, "", "BTSCharacterDataModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterDataModel
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSCharacterDataModel : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BTSCharacterDataModel::PrefabWithId
    class PrefabWithId;
    // Nested type: ::GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId
    class AnimationClipWithId;
    public:
    // private BTSCharacterDataModel/PrefabWithId[] _prefabsWithIds
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::BTSCharacterDataModel::PrefabWithId*> prefabsWithIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BTSCharacterDataModel::PrefabWithId*>) == 0x8);
    // private BTSCharacterDataModel/AnimationClipWithId[] _animationClipsWithIds
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*> animationClipsWithIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BTSCharacterDataModel/PrefabWithId[] _prefabsWithIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BTSCharacterDataModel::PrefabWithId*>& dyn__prefabsWithIds();
    // Get instance field reference: private BTSCharacterDataModel/AnimationClipWithId[] _animationClipsWithIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*>& dyn__animationClipsWithIds();
    // public BTSCharacterDataModel/PrefabWithId[] get_prefabsWithIds()
    // Offset: 0x15466BC
    ::ArrayW<::GlobalNamespace::BTSCharacterDataModel::PrefabWithId*> get_prefabsWithIds();
    // public BTSCharacterDataModel/AnimationClipWithId[] get_animationClipsWithIds()
    // Offset: 0x15466C4
    ::ArrayW<::GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*> get_animationClipsWithIds();
    // public System.Void .ctor()
    // Offset: 0x15466CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterDataModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BTSCharacterDataModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterDataModel*, creationType>()));
    }
  }; // BTSCharacterDataModel
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterDataModel), 32 + sizeof(::ArrayW<::GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*>)> __GlobalNamespace_BTSCharacterDataModelSizeCheck;
  static_assert(sizeof(BTSCharacterDataModel) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterDataModel::get_prefabsWithIds
// Il2CppName: get_prefabsWithIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BTSCharacterDataModel::PrefabWithId*> (GlobalNamespace::BTSCharacterDataModel::*)()>(&GlobalNamespace::BTSCharacterDataModel::get_prefabsWithIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterDataModel*), "get_prefabsWithIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterDataModel::get_animationClipsWithIds
// Il2CppName: get_animationClipsWithIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BTSCharacterDataModel::AnimationClipWithId*> (GlobalNamespace::BTSCharacterDataModel::*)()>(&GlobalNamespace::BTSCharacterDataModel::get_animationClipsWithIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterDataModel*), "get_animationClipsWithIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterDataModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
