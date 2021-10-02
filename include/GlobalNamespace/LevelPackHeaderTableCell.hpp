// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: LevelPackHeaderTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelPackHeaderTableCell : public HMUI::TableCell {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x50
    TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _backgroundImage
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::UI::Image* backgroundImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // [SpaceAttribute] Offset: 0xF0CEBC
    // private UnityEngine.Color _highlightBackgroundColor
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Color highlightBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _selectedBackgroundColor
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Color selectedBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _selectedAndHighlightedBackgroundColor
    // Size: 0x10
    // Offset: 0x80
    UnityEngine::Color selectedAndHighlightedBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private TMPro.TextMeshProUGUI _nameText
    TMPro::TextMeshProUGUI*& dyn__nameText();
    // Get instance field reference: private UnityEngine.UI.Image _backgroundImage
    UnityEngine::UI::Image*& dyn__backgroundImage();
    // Get instance field reference: private UnityEngine.Color _highlightBackgroundColor
    UnityEngine::Color& dyn__highlightBackgroundColor();
    // Get instance field reference: private UnityEngine.Color _selectedBackgroundColor
    UnityEngine::Color& dyn__selectedBackgroundColor();
    // Get instance field reference: private UnityEngine.Color _selectedAndHighlightedBackgroundColor
    UnityEngine::Color& dyn__selectedAndHighlightedBackgroundColor();
    // public System.Void SetData(System.String headerText)
    // Offset: 0x130D0D8
    void SetData(::Il2CppString* headerText);
    // private System.Void RefreshVisuals()
    // Offset: 0x130D0F8
    void RefreshVisuals();
    // public System.Void .ctor()
    // Offset: 0x130D1A4
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelPackHeaderTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelPackHeaderTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelPackHeaderTableCell*, creationType>()));
    }
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x130D0F4
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x130D1A0
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
  }; // LevelPackHeaderTableCell
  #pragma pack(pop)
  static check_size<sizeof(LevelPackHeaderTableCell), 128 + sizeof(UnityEngine::Color)> __GlobalNamespace_LevelPackHeaderTableCellSizeCheck;
  static_assert(sizeof(LevelPackHeaderTableCell) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelPackHeaderTableCell*, "", "LevelPackHeaderTableCell");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelPackHeaderTableCell::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackHeaderTableCell::*)(::Il2CppString*)>(&GlobalNamespace::LevelPackHeaderTableCell::SetData)> {
  static const MethodInfo* get() {
    static auto* headerText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackHeaderTableCell*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headerText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackHeaderTableCell::RefreshVisuals
// Il2CppName: RefreshVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackHeaderTableCell::*)()>(&GlobalNamespace::LevelPackHeaderTableCell::RefreshVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackHeaderTableCell*), "RefreshVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackHeaderTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelPackHeaderTableCell::SelectionDidChange
// Il2CppName: SelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackHeaderTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::LevelPackHeaderTableCell::SelectionDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackHeaderTableCell*), "SelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackHeaderTableCell::HighlightDidChange
// Il2CppName: HighlightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackHeaderTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::LevelPackHeaderTableCell::HighlightDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackHeaderTableCell*), "HighlightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
