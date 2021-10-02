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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCharacteristicTableCell : public HMUI::TableCell {
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
    // private UnityEngine.UI.Image _iconImage
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::UI::Image* iconImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _bgImage
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::UI::Image* bgImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _selectionImage
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::UI::Image* selectionImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // [SpaceAttribute] Offset: 0xF0C8E8
    // private UnityEngine.Color _bgNormalColor
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Color bgNormalColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _bgHighlightColor
    // Size: 0x10
    // Offset: 0x80
    UnityEngine::Color bgHighlightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private TMPro.TextMeshProUGUI _nameText
    TMPro::TextMeshProUGUI*& dyn__nameText();
    // Get instance field reference: private UnityEngine.UI.Image _iconImage
    UnityEngine::UI::Image*& dyn__iconImage();
    // Get instance field reference: private UnityEngine.UI.Image _bgImage
    UnityEngine::UI::Image*& dyn__bgImage();
    // Get instance field reference: private UnityEngine.UI.Image _selectionImage
    UnityEngine::UI::Image*& dyn__selectionImage();
    // Get instance field reference: private UnityEngine.Color _bgNormalColor
    UnityEngine::Color& dyn__bgNormalColor();
    // Get instance field reference: private UnityEngine.Color _bgHighlightColor
    UnityEngine::Color& dyn__bgHighlightColor();
    // public System.Void SetData(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x1272F28
    void SetData(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // private System.Void RefreshVisuals()
    // Offset: 0x1272F90
    void RefreshVisuals();
    // public System.Void .ctor()
    // Offset: 0x127301C
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
    static BeatmapCharacteristicTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCharacteristicTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicTableCell*, creationType>()));
    }
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x1272F8C
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x1273018
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
  }; // BeatmapCharacteristicTableCell
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCharacteristicTableCell), 128 + sizeof(UnityEngine::Color)> __GlobalNamespace_BeatmapCharacteristicTableCellSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicTableCell) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicTableCell*, "", "BeatmapCharacteristicTableCell");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicTableCell::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicTableCell::*)(GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::BeatmapCharacteristicTableCell::SetData)> {
  static const MethodInfo* get() {
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicTableCell*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapCharacteristic});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicTableCell::RefreshVisuals
// Il2CppName: RefreshVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicTableCell::*)()>(&GlobalNamespace::BeatmapCharacteristicTableCell::RefreshVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicTableCell*), "RefreshVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicTableCell::SelectionDidChange
// Il2CppName: SelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::BeatmapCharacteristicTableCell::SelectionDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicTableCell*), "SelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicTableCell::HighlightDidChange
// Il2CppName: HighlightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::BeatmapCharacteristicTableCell::HighlightDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicTableCell*), "HighlightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
