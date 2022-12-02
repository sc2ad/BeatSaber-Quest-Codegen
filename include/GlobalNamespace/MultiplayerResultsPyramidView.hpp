// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerResultsPyramidViewAvatar
#include "GlobalNamespace/MultiplayerResultsPyramidViewAvatar.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerOffsetPositionByLocalPlayerPosition
  class MultiplayerOffsetPositionByLocalPlayerPosition;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerResultsPyramidView
  class MultiplayerResultsPyramidView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsPyramidView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsPyramidView*, "", "MultiplayerResultsPyramidView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsPyramidView
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerResultsPyramidView : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MultiplayerOffsetPositionByLocalPlayerPosition _multiplayerOffsetByLocalPlayerPosition
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* multiplayerOffsetByLocalPlayerPosition;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*) == 0x8);
    // private UnityEngine.Transform[] _spawnPoints
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Transform*> spawnPoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // private UnityEngine.Transform _spawnPointsParent
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* spawnPointsParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single _evenCountOffset
    // Size: 0x4
    // Offset: 0x30
    float evenCountOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: evenCountOffset and: avatarsFactory
    char __padding3[0x4] = {};
    // [InjectAttribute] Offset: 0x1119114
    // private readonly MultiplayerResultsPyramidViewAvatar/Factory _avatarsFactory
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Factory* avatarsFactory;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Factory*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerResultsPyramidViewAvatar> _avatarsDictionary
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>* avatarsDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>*) == 0x8);
    // private UnityEngine.GameObject[] _resultAvatarDirectors
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::GameObject*> resultAvatarDirectors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private UnityEngine.GameObject[] _badgeTimelines
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::GameObject*> badgeTimelines;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private MultiplayerResultsPyramidViewAvatar _anyResultsAvatar
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* anyResultsAvatar;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MultiplayerOffsetPositionByLocalPlayerPosition _multiplayerOffsetByLocalPlayerPosition
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*& dyn__multiplayerOffsetByLocalPlayerPosition();
    // Get instance field reference: private UnityEngine.Transform[] _spawnPoints
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn__spawnPoints();
    // Get instance field reference: private UnityEngine.Transform _spawnPointsParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__spawnPointsParent();
    // Get instance field reference: private System.Single _evenCountOffset
    [[deprecated("Use field access instead!")]] float& dyn__evenCountOffset();
    // Get instance field reference: private readonly MultiplayerResultsPyramidViewAvatar/Factory _avatarsFactory
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Factory*& dyn__avatarsFactory();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerResultsPyramidViewAvatar> _avatarsDictionary
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>*& dyn__avatarsDictionary();
    // Get instance field reference: private UnityEngine.GameObject[] _resultAvatarDirectors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn__resultAvatarDirectors();
    // Get instance field reference: private UnityEngine.GameObject[] _badgeTimelines
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn__badgeTimelines();
    // Get instance field reference: private MultiplayerResultsPyramidViewAvatar _anyResultsAvatar
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*& dyn__anyResultsAvatar();
    // public UnityEngine.GameObject[] get_resultAvatarDirectors()
    // Offset: 0x13D6AC0
    ::ArrayW<::UnityEngine::GameObject*> get_resultAvatarDirectors();
    // public UnityEngine.GameObject[] get_badgeTimelines()
    // Offset: 0x13D6AC8
    ::ArrayW<::UnityEngine::GameObject*> get_badgeTimelines();
    // public System.Void .ctor()
    // Offset: 0x13D6FAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsPyramidView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerResultsPyramidView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsPyramidView*, creationType>()));
    }
    // public System.Void PrespawnAvatars(System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> activePlayers)
    // Offset: 0x13D392C
    void PrespawnAvatars(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* activePlayers);
    // public System.Void SetupResults(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> resultsData, UnityEngine.Transform badgeStartTransform, UnityEngine.Transform badgeMidTransform)
    // Offset: 0x13D2B28
    void SetupResults(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData, ::UnityEngine::Transform* badgeStartTransform, ::UnityEngine::Transform* badgeMidTransform);
  }; // MultiplayerResultsPyramidView
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerResultsPyramidView), 88 + sizeof(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*)> __GlobalNamespace_MultiplayerResultsPyramidViewSizeCheck;
  static_assert(sizeof(MultiplayerResultsPyramidView) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidView::get_resultAvatarDirectors
// Il2CppName: get_resultAvatarDirectors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*> (GlobalNamespace::MultiplayerResultsPyramidView::*)()>(&GlobalNamespace::MultiplayerResultsPyramidView::get_resultAvatarDirectors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidView*), "get_resultAvatarDirectors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidView::get_badgeTimelines
// Il2CppName: get_badgeTimelines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*> (GlobalNamespace::MultiplayerResultsPyramidView::*)()>(&GlobalNamespace::MultiplayerResultsPyramidView::get_badgeTimelines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidView*), "get_badgeTimelines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidView::PrespawnAvatars
// Il2CppName: PrespawnAvatars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsPyramidView::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*)>(&GlobalNamespace::MultiplayerResultsPyramidView::PrespawnAvatars)> {
  static const MethodInfo* get() {
    static auto* activePlayers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidView*), "PrespawnAvatars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activePlayers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidView::SetupResults
// Il2CppName: SetupResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsPyramidView::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&GlobalNamespace::MultiplayerResultsPyramidView::SetupResults)> {
  static const MethodInfo* get() {
    static auto* resultsData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")})->byval_arg;
    static auto* badgeStartTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* badgeMidTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidView*), "SetupResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsData, badgeStartTransform, badgeMidTransform});
  }
};
