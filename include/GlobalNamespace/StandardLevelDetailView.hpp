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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: LevelParamsPanel
  class LevelParamsPanel;
  // Forward declaring type: BeatmapDifficultySegmentedControlController
  class BeatmapDifficultySegmentedControlController;
  // Forward declaring type: BeatmapCharacteristicSegmentedControlController
  class BeatmapCharacteristicSegmentedControlController;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: PlayerData
  class PlayerData;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelDetailView
  class StandardLevelDetailView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelDetailView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailView*, "", "StandardLevelDetailView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelDetailView
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelDetailView : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::StandardLevelDetailView::$SetContentForBeatmapDataAsync$d__34
    struct $SetContentForBeatmapDataAsync$d__34;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.Button _actionButton
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Button* actionButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private TMPro.TextMeshProUGUI _actionButtonText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* actionButtonText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _practiceButton
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Button* practiceButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelBar*) == 0x8);
    // private LevelParamsPanel _levelParamsPanel
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::LevelParamsPanel* levelParamsPanel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelParamsPanel*) == 0x8);
    // private BeatmapDifficultySegmentedControlController _beatmapDifficultySegmentedControlController
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BeatmapDifficultySegmentedControlController* beatmapDifficultySegmentedControlController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficultySegmentedControlController*) == 0x8);
    // private BeatmapCharacteristicSegmentedControlController _beatmapCharacteristicSegmentedControlController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* beatmapCharacteristicSegmentedControlController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*) == 0x8);
    // private UnityEngine.UI.Toggle _favoriteToggle
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::UI::Toggle* favoriteToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> didChangeDifficultyBeatmapEvent
    // Size: 0x8
    // Offset: 0x58
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // private System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> didFavoriteToggleChangeEvent
    // Size: 0x8
    // Offset: 0x60
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>* didFavoriteToggleChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*) == 0x8);
    // private IBeatmapLevel _level
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::IBeatmapLevel* level;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapLevel*) == 0x8);
    // private PlayerData _playerData
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::PlayerData* playerData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerData*) == 0x8);
    // private IDifficultyBeatmap _selectedDifficultyBeatmap
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x80
    ::HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ToggleBinder*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Button _actionButton
    ::UnityEngine::UI::Button*& dyn__actionButton();
    // Get instance field reference: private TMPro.TextMeshProUGUI _actionButtonText
    ::TMPro::TextMeshProUGUI*& dyn__actionButtonText();
    // Get instance field reference: private UnityEngine.UI.Button _practiceButton
    ::UnityEngine::UI::Button*& dyn__practiceButton();
    // Get instance field reference: private LevelBar _levelBar
    ::GlobalNamespace::LevelBar*& dyn__levelBar();
    // Get instance field reference: private LevelParamsPanel _levelParamsPanel
    ::GlobalNamespace::LevelParamsPanel*& dyn__levelParamsPanel();
    // Get instance field reference: private BeatmapDifficultySegmentedControlController _beatmapDifficultySegmentedControlController
    ::GlobalNamespace::BeatmapDifficultySegmentedControlController*& dyn__beatmapDifficultySegmentedControlController();
    // Get instance field reference: private BeatmapCharacteristicSegmentedControlController _beatmapCharacteristicSegmentedControlController
    ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*& dyn__beatmapCharacteristicSegmentedControlController();
    // Get instance field reference: private UnityEngine.UI.Toggle _favoriteToggle
    ::UnityEngine::UI::Toggle*& dyn__favoriteToggle();
    // Get instance field reference: private System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> didChangeDifficultyBeatmapEvent
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*& dyn_didChangeDifficultyBeatmapEvent();
    // Get instance field reference: private System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> didFavoriteToggleChangeEvent
    ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*& dyn_didFavoriteToggleChangeEvent();
    // Get instance field reference: private IBeatmapLevel _level
    ::GlobalNamespace::IBeatmapLevel*& dyn__level();
    // Get instance field reference: private PlayerData _playerData
    ::GlobalNamespace::PlayerData*& dyn__playerData();
    // Get instance field reference: private IDifficultyBeatmap _selectedDifficultyBeatmap
    ::GlobalNamespace::IDifficultyBeatmap*& dyn__selectedDifficultyBeatmap();
    // Get instance field reference: private HMUI.ToggleBinder _toggleBinder
    ::HMUI::ToggleBinder*& dyn__toggleBinder();
    // public IDifficultyBeatmap get_selectedDifficultyBeatmap()
    // Offset: 0x2AACAF8
    ::GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap();
    // public UnityEngine.UI.Button get_actionButton()
    // Offset: 0x2AACB00
    ::UnityEngine::UI::Button* get_actionButton();
    // public System.Void set_actionButtonText(System.String value)
    // Offset: 0x2AACB08
    void set_actionButtonText(::StringW value);
    // public UnityEngine.UI.Button get_practiceButton()
    // Offset: 0x2AACB24
    ::UnityEngine::UI::Button* get_practiceButton();
    // public System.Void set_hidePracticeButton(System.Boolean value)
    // Offset: 0x2AACB2C
    void set_hidePracticeButton(bool value);
    // public System.Void add_didChangeDifficultyBeatmapEvent(System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> value)
    // Offset: 0x2AAC868
    void add_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didChangeDifficultyBeatmapEvent(System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> value)
    // Offset: 0x2AAC90C
    void remove_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didFavoriteToggleChangeEvent(System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> value)
    // Offset: 0x2AAC9B0
    void add_didFavoriteToggleChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>* value);
    // public System.Void remove_didFavoriteToggleChangeEvent(System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> value)
    // Offset: 0x2AACA54
    void remove_didFavoriteToggleChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>* value);
    // public System.Void SetContent(IBeatmapLevel level, BeatmapDifficulty defaultDifficulty, BeatmapCharacteristicSO defaultBeatmapCharacteristic, PlayerData playerData)
    // Offset: 0x2AACB6C
    void SetContent(::GlobalNamespace::IBeatmapLevel* level, ::GlobalNamespace::BeatmapDifficulty defaultDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* defaultBeatmapCharacteristic, ::GlobalNamespace::PlayerData* playerData);
    // protected System.Void Awake()
    // Offset: 0x2AAD030
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x2AAD180
    void OnDestroy();
    // private System.Void HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(BeatmapDifficultySegmentedControlController controller, BeatmapDifficulty difficulty)
    // Offset: 0x2AAD2E8
    void HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(::GlobalNamespace::BeatmapDifficultySegmentedControlController* controller, ::GlobalNamespace::BeatmapDifficulty difficulty);
    // private System.Void HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(BeatmapCharacteristicSegmentedControlController controller, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x2AAD358
    void HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* controller, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.Void RefreshContent()
    // Offset: 0x2AACE88
    void RefreshContent();
    // public System.Void SetContentForBeatmapDataAsync(IDifficultyBeatmap selectedDifficultyBeatmap)
    // Offset: 0x2AAD4F4
    void SetContentForBeatmapDataAsync(::GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap);
    // public System.Void ClearContent()
    // Offset: 0x2AAD5B8
    void ClearContent();
    // private System.Void <Awake>b__29_0(System.Boolean on)
    // Offset: 0x2AAD5C8
    void $Awake$b__29_0(bool on);
    // public System.Void .ctor()
    // Offset: 0x2AAD5C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelDetailView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelDetailView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelDetailView*, creationType>()));
    }
  }; // StandardLevelDetailView
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelDetailView), 128 + sizeof(::HMUI::ToggleBinder*)> __GlobalNamespace_StandardLevelDetailViewSizeCheck;
  static_assert(sizeof(StandardLevelDetailView) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::get_selectedDifficultyBeatmap
// Il2CppName: get_selectedDifficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmap* (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::get_selectedDifficultyBeatmap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "get_selectedDifficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::get_actionButton
// Il2CppName: get_actionButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::get_actionButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "get_actionButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::set_actionButtonText
// Il2CppName: set_actionButtonText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(::StringW)>(&GlobalNamespace::StandardLevelDetailView::set_actionButtonText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "set_actionButtonText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::get_practiceButton
// Il2CppName: get_practiceButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::get_practiceButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "get_practiceButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::set_hidePracticeButton
// Il2CppName: set_hidePracticeButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(bool)>(&GlobalNamespace::StandardLevelDetailView::set_hidePracticeButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "set_hidePracticeButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::add_didChangeDifficultyBeatmapEvent
// Il2CppName: add_didChangeDifficultyBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::StandardLevelDetailView::add_didChangeDifficultyBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "StandardLevelDetailView"), ::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "add_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::remove_didChangeDifficultyBeatmapEvent
// Il2CppName: remove_didChangeDifficultyBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::StandardLevelDetailView::remove_didChangeDifficultyBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "StandardLevelDetailView"), ::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "remove_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::add_didFavoriteToggleChangeEvent
// Il2CppName: add_didFavoriteToggleChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*)>(&GlobalNamespace::StandardLevelDetailView::add_didFavoriteToggleChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "StandardLevelDetailView"), ::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "add_didFavoriteToggleChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::remove_didFavoriteToggleChangeEvent
// Il2CppName: remove_didFavoriteToggleChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*)>(&GlobalNamespace::StandardLevelDetailView::remove_didFavoriteToggleChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "StandardLevelDetailView"), ::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "remove_didFavoriteToggleChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::SetContent
// Il2CppName: SetContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::IBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::PlayerData*)>(&GlobalNamespace::StandardLevelDetailView::SetContent)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevel")->byval_arg;
    static auto* defaultDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    static auto* defaultBeatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("", "PlayerData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "SetContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, defaultDifficulty, defaultBeatmapCharacteristic, playerData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty
// Il2CppName: HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::BeatmapDifficultySegmentedControlController*, ::GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::StandardLevelDetailView::HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficultySegmentedControlController")->byval_arg;
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller, difficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic
// Il2CppName: HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, ::GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::StandardLevelDetailView::HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSegmentedControlController")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller, beatmapCharacteristic});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::RefreshContent
// Il2CppName: RefreshContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::RefreshContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "RefreshContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::SetContentForBeatmapDataAsync
// Il2CppName: SetContentForBeatmapDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::StandardLevelDetailView::SetContentForBeatmapDataAsync)> {
  static const MethodInfo* get() {
    static auto* selectedDifficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "SetContentForBeatmapDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectedDifficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::ClearContent
// Il2CppName: ClearContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::ClearContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "ClearContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::$Awake$b__29_0
// Il2CppName: <Awake>b__29_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(bool)>(&GlobalNamespace::StandardLevelDetailView::$Awake$b__29_0)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailView*), "<Awake>b__29_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
