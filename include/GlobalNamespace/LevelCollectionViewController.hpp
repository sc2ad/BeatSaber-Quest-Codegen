// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCollectionTableView
  class LevelCollectionTableView;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: PerceivedLoudnessPerLevelModel
  class PerceivedLoudnessPerLevelModel;
  // Forward declaring type: AudioClipAsyncLoader
  class AudioClipAsyncLoader;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LevelCollectionViewController
  class LevelCollectionViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelCollectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionViewController*, "", "LevelCollectionViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: LevelCollectionViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelCollectionViewController : public ::HMUI::ViewController {
    public:
    // Nested type: ::GlobalNamespace::LevelCollectionViewController::$$c__DisplayClass24_0
    class $$c__DisplayClass24_0;
    // Nested type: ::GlobalNamespace::LevelCollectionViewController::$SongPlayerCrossfadeToLevelAsync$d__24
    struct $SongPlayerCrossfadeToLevelAsync$d__24;
    public:
    // private LevelCollectionTableView _levelCollectionTableView
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::LevelCollectionTableView* levelCollectionTableView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelCollectionTableView*) == 0x8);
    // private UnityEngine.RectTransform _noDataInfoContainer
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::RectTransform* noDataInfoContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0x111F83C
    // [InjectAttribute] Offset: 0x111F83C
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0x111F874
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x88
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // [InjectAttribute] Offset: 0x111F884
    // private readonly AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x90
    ::GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [InjectAttribute] Offset: 0x111F894
    // private readonly SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0x111F8A4
    // private readonly PerceivedLoudnessPerLevelModel _perceivedLoudnessPerLevelModel
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::PerceivedLoudnessPerLevelModel* perceivedLoudnessPerLevelModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PerceivedLoudnessPerLevelModel*) == 0x8);
    // [InjectAttribute] Offset: 0x111F8B4
    // private readonly AudioClipAsyncLoader _audioClipAsyncLoader
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioClipAsyncLoader*) == 0x8);
    // private System.Action`2<LevelCollectionViewController,IPreviewBeatmapLevel> didSelectLevelEvent
    // Size: 0x8
    // Offset: 0xB0
    ::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>* didSelectLevelEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // private System.Action`1<LevelCollectionViewController> didSelectHeaderEvent
    // Size: 0x8
    // Offset: 0xB8
    ::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>* didSelectHeaderEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>*) == 0x8);
    // private System.Boolean _showHeader
    // Size: 0x1
    // Offset: 0xC0
    bool showHeader;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showHeader and: songPlayerCrossFadingToLevelId
    char __padding10[0x7] = {};
    // private System.String _songPlayerCrossFadingToLevelId
    // Size: 0x8
    // Offset: 0xC8
    ::StringW songPlayerCrossFadingToLevelId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.GameObject _noDataInfoGO
    // Size: 0x8
    // Offset: 0xD0
    ::UnityEngine::GameObject* noDataInfoGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private IPreviewBeatmapLevel _previewBeatmapLevelToBeSelected
    // Size: 0x8
    // Offset: 0xD8
    ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevelToBeSelected;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    public:
    // Get instance field reference: private LevelCollectionTableView _levelCollectionTableView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelCollectionTableView*& dyn__levelCollectionTableView();
    // Get instance field reference: private UnityEngine.RectTransform _noDataInfoContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__noDataInfoContainer();
    // Get instance field reference: private readonly PlayerDataModel _playerDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private readonly AdditionalContentModel _additionalContentModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AdditionalContentModel*& dyn__additionalContentModel();
    // Get instance field reference: private readonly SongPreviewPlayer _songPreviewPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SongPreviewPlayer*& dyn__songPreviewPlayer();
    // Get instance field reference: private readonly PerceivedLoudnessPerLevelModel _perceivedLoudnessPerLevelModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& dyn__perceivedLoudnessPerLevelModel();
    // Get instance field reference: private readonly AudioClipAsyncLoader _audioClipAsyncLoader
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioClipAsyncLoader*& dyn__audioClipAsyncLoader();
    // Get instance field reference: private System.Action`2<LevelCollectionViewController,IPreviewBeatmapLevel> didSelectLevelEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>*& dyn_didSelectLevelEvent();
    // Get instance field reference: private System.Action`1<LevelCollectionViewController> didSelectHeaderEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>*& dyn_didSelectHeaderEvent();
    // Get instance field reference: private System.Boolean _showHeader
    [[deprecated("Use field access instead!")]] bool& dyn__showHeader();
    // Get instance field reference: private System.String _songPlayerCrossFadingToLevelId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__songPlayerCrossFadingToLevelId();
    // Get instance field reference: private UnityEngine.GameObject _noDataInfoGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__noDataInfoGO();
    // Get instance field reference: private IPreviewBeatmapLevel _previewBeatmapLevelToBeSelected
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPreviewBeatmapLevel*& dyn__previewBeatmapLevelToBeSelected();
    // public System.Void add_didSelectLevelEvent(System.Action`2<LevelCollectionViewController,IPreviewBeatmapLevel> value)
    // Offset: 0x13FC0A8
    void add_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void remove_didSelectLevelEvent(System.Action`2<LevelCollectionViewController,IPreviewBeatmapLevel> value)
    // Offset: 0x13FC4B4
    void remove_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void add_didSelectHeaderEvent(System.Action`1<LevelCollectionViewController> value)
    // Offset: 0x13FC14C
    void add_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>* value);
    // public System.Void remove_didSelectHeaderEvent(System.Action`1<LevelCollectionViewController> value)
    // Offset: 0x13FC558
    void remove_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>* value);
    // public System.Void .ctor()
    // Offset: 0x13FF210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelCollectionViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelCollectionViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelCollectionViewController*, creationType>()));
    }
    // public System.Void SetData(IBeatmapLevelCollection beatmapLevelCollection, System.String headerText, UnityEngine.Sprite headerSprite, System.Boolean sortLevels, UnityEngine.GameObject noDataInfoPrefab)
    // Offset: 0x13FC5FC
    void SetData(::GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection, ::StringW headerText, ::UnityEngine::Sprite* headerSprite, bool sortLevels, ::UnityEngine::GameObject* noDataInfoPrefab);
    // public System.Void SelectLevel(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0x13FBA04
    void SelectLevel(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
    // public System.Void RefreshFavorites()
    // Offset: 0x13FD190
    void RefreshFavorites();
    // private System.Void HandleLevelCollectionTableViewDidSelectLevel(LevelCollectionTableView tableView, IPreviewBeatmapLevel level)
    // Offset: 0x13FF034
    void HandleLevelCollectionTableViewDidSelectLevel(::GlobalNamespace::LevelCollectionTableView* tableView, ::GlobalNamespace::IPreviewBeatmapLevel* level);
    // private System.Void SongPlayerCrossfadeToLevelAsync(IPreviewBeatmapLevel level)
    // Offset: 0x13FF0BC
    void SongPlayerCrossfadeToLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* level);
    // private System.Void HandleLevelCollectionTableViewDidSelectPack(LevelCollectionTableView tableView)
    // Offset: 0x13FF180
    void HandleLevelCollectionTableViewDidSelectPack(::GlobalNamespace::LevelCollectionTableView* tableView);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x13FF1F8
    void HandleAdditionalContentModelDidInvalidateData();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13FED8C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x13FEEF4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // LevelCollectionViewController
  #pragma pack(pop)
  static check_size<sizeof(LevelCollectionViewController), 216 + sizeof(::GlobalNamespace::IPreviewBeatmapLevel*)> __GlobalNamespace_LevelCollectionViewControllerSizeCheck;
  static_assert(sizeof(LevelCollectionViewController) == 0xE0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::add_didSelectLevelEvent
// Il2CppName: add_didSelectLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>*)>(&GlobalNamespace::LevelCollectionViewController::add_didSelectLevelEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelCollectionViewController"), ::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "add_didSelectLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::remove_didSelectLevelEvent
// Il2CppName: remove_didSelectLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*>*)>(&GlobalNamespace::LevelCollectionViewController::remove_didSelectLevelEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelCollectionViewController"), ::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "remove_didSelectLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::add_didSelectHeaderEvent
// Il2CppName: add_didSelectHeaderEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>*)>(&GlobalNamespace::LevelCollectionViewController::add_didSelectHeaderEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelCollectionViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "add_didSelectHeaderEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::remove_didSelectHeaderEvent
// Il2CppName: remove_didSelectHeaderEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(::System::Action_1<::GlobalNamespace::LevelCollectionViewController*>*)>(&GlobalNamespace::LevelCollectionViewController::remove_didSelectHeaderEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelCollectionViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "remove_didSelectHeaderEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(::GlobalNamespace::IBeatmapLevelCollection*, ::StringW, ::UnityEngine::Sprite*, bool, ::UnityEngine::GameObject*)>(&GlobalNamespace::LevelCollectionViewController::SetData)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelCollection = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelCollection")->byval_arg;
    static auto* headerText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* headerSprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    static auto* sortLevels = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* noDataInfoPrefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelCollection, headerText, headerSprite, sortLevels, noDataInfoPrefab});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::SelectLevel
// Il2CppName: SelectLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::LevelCollectionViewController::SelectLevel)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "SelectLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::RefreshFavorites
// Il2CppName: RefreshFavorites
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)()>(&GlobalNamespace::LevelCollectionViewController::RefreshFavorites)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "RefreshFavorites", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::HandleLevelCollectionTableViewDidSelectLevel
// Il2CppName: HandleLevelCollectionTableViewDidSelectLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::LevelCollectionViewController::HandleLevelCollectionTableViewDidSelectLevel)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("", "LevelCollectionTableView")->byval_arg;
    static auto* level = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "HandleLevelCollectionTableViewDidSelectLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, level});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::SongPlayerCrossfadeToLevelAsync
// Il2CppName: SongPlayerCrossfadeToLevelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::LevelCollectionViewController::SongPlayerCrossfadeToLevelAsync)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "SongPlayerCrossfadeToLevelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::HandleLevelCollectionTableViewDidSelectPack
// Il2CppName: HandleLevelCollectionTableViewDidSelectPack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(::GlobalNamespace::LevelCollectionTableView*)>(&GlobalNamespace::LevelCollectionViewController::HandleLevelCollectionTableViewDidSelectPack)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("", "LevelCollectionTableView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "HandleLevelCollectionTableViewDidSelectPack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::HandleAdditionalContentModelDidInvalidateData
// Il2CppName: HandleAdditionalContentModelDidInvalidateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)()>(&GlobalNamespace::LevelCollectionViewController::HandleAdditionalContentModelDidInvalidateData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(bool, bool, bool)>(&GlobalNamespace::LevelCollectionViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(bool, bool)>(&GlobalNamespace::LevelCollectionViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
