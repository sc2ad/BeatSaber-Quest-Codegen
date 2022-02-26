// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSelectionView
#include "GlobalNamespace/BeatmapSelectionView.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EditableBeatmapSelectionView
  class EditableBeatmapSelectionView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EditableBeatmapSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditableBeatmapSelectionView*, "", "EditableBeatmapSelectionView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x42
  #pragma pack(push, 1)
  // Autogenerated type: EditableBeatmapSelectionView
  // [TokenAttribute] Offset: FFFFFFFF
  class EditableBeatmapSelectionView : public ::GlobalNamespace::BeatmapSelectionView {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [SpaceAttribute] Offset: 0x124E4A4
    // private UnityEngine.UI.Button _editButton
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Button* editButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _clearButton
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Button* clearButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.CanvasGroup _levelBarCanvasGroup
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::CanvasGroup* levelBarCanvasGroup;
    // Field size check
    static_assert(sizeof(::UnityEngine::CanvasGroup*) == 0x8);
    // private System.Boolean _interactable
    // Size: 0x1
    // Offset: 0x40
    bool interactable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <showClearButton>k__BackingField
    // Size: 0x1
    // Offset: 0x41
    bool showClearButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _editButton
    ::UnityEngine::UI::Button*& dyn__editButton();
    // Get instance field reference: private UnityEngine.UI.Button _clearButton
    ::UnityEngine::UI::Button*& dyn__clearButton();
    // Get instance field reference: private UnityEngine.CanvasGroup _levelBarCanvasGroup
    ::UnityEngine::CanvasGroup*& dyn__levelBarCanvasGroup();
    // Get instance field reference: private System.Boolean _interactable
    bool& dyn__interactable();
    // Get instance field reference: private System.Boolean <showClearButton>k__BackingField
    bool& dyn_$showClearButton$k__BackingField();
    // public UnityEngine.UI.Button get_editButton()
    // Offset: 0x13F8638
    ::UnityEngine::UI::Button* get_editButton();
    // public UnityEngine.UI.Button get_clearButton()
    // Offset: 0x13F8640
    ::UnityEngine::UI::Button* get_clearButton();
    // public System.Boolean get_interactable()
    // Offset: 0x13F8648
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x13F8650
    void set_interactable(bool value);
    // public System.Boolean get_showClearButton()
    // Offset: 0x13F86BC
    bool get_showClearButton();
    // public System.Void set_showClearButton(System.Boolean value)
    // Offset: 0x13F86C4
    void set_showClearButton(bool value);
    // public System.Void SetVisibility(System.Boolean visible)
    // Offset: 0x13F86D0
    void SetVisibility(bool visible);
    // public System.Void Setup(System.Boolean showClearButton)
    // Offset: 0x13F8704
    void Setup(bool showClearButton);
    // public System.Void .ctor()
    // Offset: 0x13F876C
    // Implemented from: BeatmapSelectionView
    // Base method: System.Void BeatmapSelectionView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditableBeatmapSelectionView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EditableBeatmapSelectionView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditableBeatmapSelectionView*, creationType>()));
    }
    // public override System.Void SetBeatmap(IPreviewBeatmapLevel beatmapLevel, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0x13F8710
    // Implemented from: BeatmapSelectionView
    // Base method: System.Void BeatmapSelectionView::SetBeatmap(IPreviewBeatmapLevel beatmapLevel, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    void SetBeatmap(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
  }; // EditableBeatmapSelectionView
  #pragma pack(pop)
  static check_size<sizeof(EditableBeatmapSelectionView), 65 + sizeof(bool)> __GlobalNamespace_EditableBeatmapSelectionViewSizeCheck;
  static_assert(sizeof(EditableBeatmapSelectionView) == 0x42);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EditableBeatmapSelectionView::get_editButton
// Il2CppName: get_editButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (GlobalNamespace::EditableBeatmapSelectionView::*)()>(&GlobalNamespace::EditableBeatmapSelectionView::get_editButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableBeatmapSelectionView*), "get_editButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableBeatmapSelectionView::get_clearButton
// Il2CppName: get_clearButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (GlobalNamespace::EditableBeatmapSelectionView::*)()>(&GlobalNamespace::EditableBeatmapSelectionView::get_clearButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableBeatmapSelectionView*), "get_clearButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableBeatmapSelectionView::get_interactable
// Il2CppName: get_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EditableBeatmapSelectionView::*)()>(&GlobalNamespace::EditableBeatmapSelectionView::get_interactable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableBeatmapSelectionView*), "get_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableBeatmapSelectionView::set_interactable
// Il2CppName: set_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditableBeatmapSelectionView::*)(bool)>(&GlobalNamespace::EditableBeatmapSelectionView::set_interactable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableBeatmapSelectionView*), "set_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableBeatmapSelectionView::get_showClearButton
// Il2CppName: get_showClearButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EditableBeatmapSelectionView::*)()>(&GlobalNamespace::EditableBeatmapSelectionView::get_showClearButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableBeatmapSelectionView*), "get_showClearButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableBeatmapSelectionView::set_showClearButton
// Il2CppName: set_showClearButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditableBeatmapSelectionView::*)(bool)>(&GlobalNamespace::EditableBeatmapSelectionView::set_showClearButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableBeatmapSelectionView*), "set_showClearButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableBeatmapSelectionView::SetVisibility
// Il2CppName: SetVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditableBeatmapSelectionView::*)(bool)>(&GlobalNamespace::EditableBeatmapSelectionView::SetVisibility)> {
  static const MethodInfo* get() {
    static auto* visible = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableBeatmapSelectionView*), "SetVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visible});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableBeatmapSelectionView::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditableBeatmapSelectionView::*)(bool)>(&GlobalNamespace::EditableBeatmapSelectionView::Setup)> {
  static const MethodInfo* get() {
    static auto* showClearButton = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableBeatmapSelectionView*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showClearButton});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditableBeatmapSelectionView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EditableBeatmapSelectionView::SetBeatmap
// Il2CppName: SetBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditableBeatmapSelectionView::*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::EditableBeatmapSelectionView::SetBeatmap)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    static auto* beatmapDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditableBeatmapSelectionView*), "SetBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel, beatmapCharacteristic, beatmapDifficulty});
  }
};
