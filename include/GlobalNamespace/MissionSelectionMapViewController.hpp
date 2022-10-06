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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodeSelectionManager
  class MissionNodeSelectionManager;
  // Forward declaring type: MissionMapAnimationController
  class MissionMapAnimationController;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: PerceivedLoudnessPerLevelModel
  class PerceivedLoudnessPerLevelModel;
  // Forward declaring type: AudioClipAsyncLoader
  class AudioClipAsyncLoader;
  // Forward declaring type: MissionNode
  class MissionNode;
  // Forward declaring type: MissionNodeVisualController
  class MissionNodeVisualController;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScrollView
  class ScrollView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionSelectionMapViewController
  class MissionSelectionMapViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionSelectionMapViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionSelectionMapViewController*, "", "MissionSelectionMapViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: MissionSelectionMapViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionSelectionMapViewController : public ::HMUI::ViewController {
    public:
    // Nested type: ::GlobalNamespace::MissionSelectionMapViewController::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // Nested type: ::GlobalNamespace::MissionSelectionMapViewController::$SongPlayerCrossfadeToLevelAsync$d__15
    struct $SongPlayerCrossfadeToLevelAsync$d__15;
    public:
    // private HMUI.ScrollView _mapScrollView
    // Size: 0x8
    // Offset: 0x70
    ::HMUI::ScrollView* mapScrollView;
    // Field size check
    static_assert(sizeof(::HMUI::ScrollView*) == 0x8);
    // private MissionNodeSelectionManager _missionNodeSelectionManager
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::MissionNodeSelectionManager* missionNodeSelectionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionNodeSelectionManager*) == 0x8);
    // private MissionMapAnimationController _missionMapAnimationController
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::MissionMapAnimationController* missionMapAnimationController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionMapAnimationController*) == 0x8);
    // [InjectAttribute] Offset: 0x110ACD8
    // private readonly SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0x110ACE8
    // private readonly PerceivedLoudnessPerLevelModel _perceivedLoudnessPerLevelModel
    // Size: 0x8
    // Offset: 0x90
    ::GlobalNamespace::PerceivedLoudnessPerLevelModel* perceivedLoudnessPerLevelModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PerceivedLoudnessPerLevelModel*) == 0x8);
    // [InjectAttribute] Offset: 0x110ACF8
    // private readonly AudioClipAsyncLoader _audioClipAsyncLoader
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioClipAsyncLoader*) == 0x8);
    // private System.Action`2<MissionSelectionMapViewController,MissionNode> didSelectMissionLevelEvent
    // Size: 0x8
    // Offset: 0xA0
    ::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>* didSelectMissionLevelEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*) == 0x8);
    // private MissionNode _selectedMissionNode
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::MissionNode* selectedMissionNode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionNode*) == 0x8);
    public:
    // Get instance field reference: private HMUI.ScrollView _mapScrollView
    [[deprecated("Use field access instead!")]] ::HMUI::ScrollView*& dyn__mapScrollView();
    // Get instance field reference: private MissionNodeSelectionManager _missionNodeSelectionManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionNodeSelectionManager*& dyn__missionNodeSelectionManager();
    // Get instance field reference: private MissionMapAnimationController _missionMapAnimationController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionMapAnimationController*& dyn__missionMapAnimationController();
    // Get instance field reference: private readonly SongPreviewPlayer _songPreviewPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SongPreviewPlayer*& dyn__songPreviewPlayer();
    // Get instance field reference: private readonly PerceivedLoudnessPerLevelModel _perceivedLoudnessPerLevelModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& dyn__perceivedLoudnessPerLevelModel();
    // Get instance field reference: private readonly AudioClipAsyncLoader _audioClipAsyncLoader
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioClipAsyncLoader*& dyn__audioClipAsyncLoader();
    // Get instance field reference: private System.Action`2<MissionSelectionMapViewController,MissionNode> didSelectMissionLevelEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*& dyn_didSelectMissionLevelEvent();
    // Get instance field reference: private MissionNode _selectedMissionNode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionNode*& dyn__selectedMissionNode();
    // public System.Boolean get_animatedUpdateIsRequired()
    // Offset: 0x13FD38C
    bool get_animatedUpdateIsRequired();
    // public System.Void add_didSelectMissionLevelEvent(System.Action`2<MissionSelectionMapViewController,MissionNode> value)
    // Offset: 0x13FD244
    void add_didSelectMissionLevelEvent(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>* value);
    // public System.Void remove_didSelectMissionLevelEvent(System.Action`2<MissionSelectionMapViewController,MissionNode> value)
    // Offset: 0x13FD2E8
    void remove_didSelectMissionLevelEvent(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>* value);
    // public System.Void .ctor()
    // Offset: 0x13FD7C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionSelectionMapViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionSelectionMapViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionSelectionMapViewController*, creationType>()));
    }
    // private System.Void HandleMissionNodeSelectionManagerDidSelectMissionNode(MissionNodeVisualController missionNodeVisualController)
    // Offset: 0x13FD61C
    void HandleMissionNodeSelectionManagerDidSelectMissionNode(::GlobalNamespace::MissionNodeVisualController* missionNodeVisualController);
    // private System.Void SongPlayerCrossfadeToLevelAsync(IPreviewBeatmapLevel level)
    // Offset: 0x13FD6BC
    void SongPlayerCrossfadeToLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* level);
    // public System.Void ShowMissionClearedAnimation(System.Action finishCallback)
    // Offset: 0x13FD784
    void ShowMissionClearedAnimation(::System::Action* finishCallback);
    // public System.Void DeselectSelectedNode()
    // Offset: 0x13FD7A8
    void DeselectSelectedNode();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13FD3A8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x13FD4E8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // MissionSelectionMapViewController
  #pragma pack(pop)
  static check_size<sizeof(MissionSelectionMapViewController), 168 + sizeof(::GlobalNamespace::MissionNode*)> __GlobalNamespace_MissionSelectionMapViewControllerSizeCheck;
  static_assert(sizeof(MissionSelectionMapViewController) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionMapViewController::get_animatedUpdateIsRequired
// Il2CppName: get_animatedUpdateIsRequired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionSelectionMapViewController::*)()>(&GlobalNamespace::MissionSelectionMapViewController::get_animatedUpdateIsRequired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionMapViewController*), "get_animatedUpdateIsRequired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionMapViewController::add_didSelectMissionLevelEvent
// Il2CppName: add_didSelectMissionLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*)>(&GlobalNamespace::MissionSelectionMapViewController::add_didSelectMissionLevelEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionSelectionMapViewController"), ::il2cpp_utils::GetClassFromName("", "MissionNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionMapViewController*), "add_didSelectMissionLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionMapViewController::remove_didSelectMissionLevelEvent
// Il2CppName: remove_didSelectMissionLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*)>(&GlobalNamespace::MissionSelectionMapViewController::remove_didSelectMissionLevelEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionSelectionMapViewController"), ::il2cpp_utils::GetClassFromName("", "MissionNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionMapViewController*), "remove_didSelectMissionLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionMapViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionMapViewController::HandleMissionNodeSelectionManagerDidSelectMissionNode
// Il2CppName: HandleMissionNodeSelectionManagerDidSelectMissionNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(::GlobalNamespace::MissionNodeVisualController*)>(&GlobalNamespace::MissionSelectionMapViewController::HandleMissionNodeSelectionManagerDidSelectMissionNode)> {
  static const MethodInfo* get() {
    static auto* missionNodeVisualController = &::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionMapViewController*), "HandleMissionNodeSelectionManagerDidSelectMissionNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionNodeVisualController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionMapViewController::SongPlayerCrossfadeToLevelAsync
// Il2CppName: SongPlayerCrossfadeToLevelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::MissionSelectionMapViewController::SongPlayerCrossfadeToLevelAsync)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionMapViewController*), "SongPlayerCrossfadeToLevelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionMapViewController::ShowMissionClearedAnimation
// Il2CppName: ShowMissionClearedAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(::System::Action*)>(&GlobalNamespace::MissionSelectionMapViewController::ShowMissionClearedAnimation)> {
  static const MethodInfo* get() {
    static auto* finishCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionMapViewController*), "ShowMissionClearedAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finishCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionMapViewController::DeselectSelectedNode
// Il2CppName: DeselectSelectedNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)()>(&GlobalNamespace::MissionSelectionMapViewController::DeselectSelectedNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionMapViewController*), "DeselectSelectedNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionMapViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(bool, bool, bool)>(&GlobalNamespace::MissionSelectionMapViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionMapViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionMapViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(bool, bool)>(&GlobalNamespace::MissionSelectionMapViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionMapViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
