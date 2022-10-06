// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IRefreshable
#include "GlobalNamespace/IRefreshable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeDropdown
  class ColorSchemeDropdown;
  // Forward declaring type: EditColorSchemeController
  class EditColorSchemeController;
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: ColorSchemesSettings
  class ColorSchemesSettings;
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ModalView
  class ModalView;
  // Forward declaring type: PanelAnimationSO
  class PanelAnimationSO;
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorsOverrideSettingsPanelController
  class ColorsOverrideSettingsPanelController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorsOverrideSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorsOverrideSettingsPanelController*, "", "ColorsOverrideSettingsPanelController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: ColorsOverrideSettingsPanelController
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorsOverrideSettingsPanelController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IRefreshable*/ {
    public:
    public:
    // private UnityEngine.UI.Toggle _overrideColorsToggle
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Toggle* overrideColorsToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.GameObject _detailsPanelGO
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* detailsPanelGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private ColorSchemeDropdown _colorSchemeDropDown
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::ColorSchemeDropdown* colorSchemeDropDown;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSchemeDropdown*) == 0x8);
    // private EditColorSchemeController _editColorSchemeController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::EditColorSchemeController* editColorSchemeController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EditColorSchemeController*) == 0x8);
    // private HMUI.ModalView _editColorSchemeModalView
    // Size: 0x8
    // Offset: 0x38
    ::HMUI::ModalView* editColorSchemeModalView;
    // Field size check
    static_assert(sizeof(::HMUI::ModalView*) == 0x8);
    // private UnityEngine.UI.Button _editColorSchemeButton
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::UI::Button* editColorSchemeButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0x1106240
    // private HMUI.PanelAnimationSO _presentPanelAnimation
    // Size: 0x8
    // Offset: 0x48
    ::HMUI::PanelAnimationSO* presentPanelAnimation;
    // Field size check
    static_assert(sizeof(::HMUI::PanelAnimationSO*) == 0x8);
    // private HMUI.PanelAnimationSO _dismissPanelAnimation
    // Size: 0x8
    // Offset: 0x50
    ::HMUI::PanelAnimationSO* dismissPanelAnimation;
    // Field size check
    static_assert(sizeof(::HMUI::PanelAnimationSO*) == 0x8);
    // [InjectAttribute] Offset: 0x1106288
    // private readonly IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAnalyticsModel*) == 0x8);
    // private ColorSchemesSettings _colorSchemesSettings
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSchemesSettings*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x68
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: buttonBinder
    char __padding10[0x7] = {};
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x70
    ::HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ButtonBinder*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IRefreshable
    operator ::GlobalNamespace::IRefreshable() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IRefreshable*>(this);
    }
    // Creating interface conversion operator: i_IRefreshable
    inline ::GlobalNamespace::IRefreshable* i_IRefreshable() noexcept {
      return reinterpret_cast<::GlobalNamespace::IRefreshable*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Toggle _overrideColorsToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__overrideColorsToggle();
    // Get instance field reference: private UnityEngine.GameObject _detailsPanelGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__detailsPanelGO();
    // Get instance field reference: private ColorSchemeDropdown _colorSchemeDropDown
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSchemeDropdown*& dyn__colorSchemeDropDown();
    // Get instance field reference: private EditColorSchemeController _editColorSchemeController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EditColorSchemeController*& dyn__editColorSchemeController();
    // Get instance field reference: private HMUI.ModalView _editColorSchemeModalView
    [[deprecated("Use field access instead!")]] ::HMUI::ModalView*& dyn__editColorSchemeModalView();
    // Get instance field reference: private UnityEngine.UI.Button _editColorSchemeButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__editColorSchemeButton();
    // Get instance field reference: private HMUI.PanelAnimationSO _presentPanelAnimation
    [[deprecated("Use field access instead!")]] ::HMUI::PanelAnimationSO*& dyn__presentPanelAnimation();
    // Get instance field reference: private HMUI.PanelAnimationSO _dismissPanelAnimation
    [[deprecated("Use field access instead!")]] ::HMUI::PanelAnimationSO*& dyn__dismissPanelAnimation();
    // Get instance field reference: private readonly IAnalyticsModel _analyticsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAnalyticsModel*& dyn__analyticsModel();
    // Get instance field reference: private ColorSchemesSettings _colorSchemesSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSchemesSettings*& dyn__colorSchemesSettings();
    // Get instance field reference: private System.Boolean _initialized
    [[deprecated("Use field access instead!")]] bool& dyn__initialized();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ButtonBinder*& dyn__buttonBinder();
    // public ColorSchemesSettings get_colorSchemesSettings()
    // Offset: 0x1472640
    ::GlobalNamespace::ColorSchemesSettings* get_colorSchemesSettings();
    // public System.Void .ctor()
    // Offset: 0x14732DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorsOverrideSettingsPanelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorsOverrideSettingsPanelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorsOverrideSettingsPanelController*, creationType>()));
    }
    // public System.Void SetData(ColorSchemesSettings colorSchemesSettings)
    // Offset: 0x1472648
    void SetData(::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings);
    // protected System.Void OnDestroy()
    // Offset: 0x147298C
    void OnDestroy();
    // protected System.Void OnDisable()
    // Offset: 0x1472CC4
    void OnDisable();
    // public System.Void Refresh()
    // Offset: 0x1472CE8
    void Refresh();
    // private System.Void HandleDropDownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropDownWithTableView, System.Int32 idx)
    // Offset: 0x1472E80
    void HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropDownWithTableView, int idx);
    // private System.Void HandleOverrideColorsToggleValueChanged(System.Boolean isOn)
    // Offset: 0x1472FE0
    void HandleOverrideColorsToggleValueChanged(bool isOn);
    // private System.Void HandleEditColorSchemeButtonWasPressed()
    // Offset: 0x14731C4
    void HandleEditColorSchemeButtonWasPressed();
    // private System.Void HandleEditColorSchemeControllerDidFinish()
    // Offset: 0x1473264
    void HandleEditColorSchemeControllerDidFinish();
    // private System.Void HandleEditColorSchemeControllerDidChangeColorScheme(ColorScheme colorScheme)
    // Offset: 0x14732C0
    void HandleEditColorSchemeControllerDidChangeColorScheme(::GlobalNamespace::ColorScheme* colorScheme);
    // private System.Void <HandleOverrideColorsToggleValueChanged>b__19_0()
    // Offset: 0x14732E4
    void $HandleOverrideColorsToggleValueChanged$b__19_0();
  }; // ColorsOverrideSettingsPanelController
  #pragma pack(pop)
  static check_size<sizeof(ColorsOverrideSettingsPanelController), 112 + sizeof(::HMUI::ButtonBinder*)> __GlobalNamespace_ColorsOverrideSettingsPanelControllerSizeCheck;
  static_assert(sizeof(ColorsOverrideSettingsPanelController) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorsOverrideSettingsPanelController::get_colorSchemesSettings
// Il2CppName: get_colorSchemesSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorSchemesSettings* (GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(&GlobalNamespace::ColorsOverrideSettingsPanelController::get_colorSchemesSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorsOverrideSettingsPanelController*), "get_colorSchemesSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorsOverrideSettingsPanelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorsOverrideSettingsPanelController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorsOverrideSettingsPanelController::*)(::GlobalNamespace::ColorSchemesSettings*)>(&GlobalNamespace::ColorsOverrideSettingsPanelController::SetData)> {
  static const MethodInfo* get() {
    static auto* colorSchemesSettings = &::il2cpp_utils::GetClassFromName("", "ColorSchemesSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorsOverrideSettingsPanelController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorSchemesSettings});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorsOverrideSettingsPanelController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(&GlobalNamespace::ColorsOverrideSettingsPanelController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorsOverrideSettingsPanelController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorsOverrideSettingsPanelController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(&GlobalNamespace::ColorsOverrideSettingsPanelController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorsOverrideSettingsPanelController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorsOverrideSettingsPanelController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(&GlobalNamespace::ColorsOverrideSettingsPanelController::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorsOverrideSettingsPanelController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorsOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx
// Il2CppName: HandleDropDownDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorsOverrideSettingsPanelController::*)(::HMUI::DropdownWithTableView*, int)>(&GlobalNamespace::ColorsOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* dropDownWithTableView = &::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorsOverrideSettingsPanelController*), "HandleDropDownDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dropDownWithTableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorsOverrideSettingsPanelController::HandleOverrideColorsToggleValueChanged
// Il2CppName: HandleOverrideColorsToggleValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorsOverrideSettingsPanelController::*)(bool)>(&GlobalNamespace::ColorsOverrideSettingsPanelController::HandleOverrideColorsToggleValueChanged)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorsOverrideSettingsPanelController*), "HandleOverrideColorsToggleValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorsOverrideSettingsPanelController::HandleEditColorSchemeButtonWasPressed
// Il2CppName: HandleEditColorSchemeButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(&GlobalNamespace::ColorsOverrideSettingsPanelController::HandleEditColorSchemeButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorsOverrideSettingsPanelController*), "HandleEditColorSchemeButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorsOverrideSettingsPanelController::HandleEditColorSchemeControllerDidFinish
// Il2CppName: HandleEditColorSchemeControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(&GlobalNamespace::ColorsOverrideSettingsPanelController::HandleEditColorSchemeControllerDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorsOverrideSettingsPanelController*), "HandleEditColorSchemeControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorsOverrideSettingsPanelController::HandleEditColorSchemeControllerDidChangeColorScheme
// Il2CppName: HandleEditColorSchemeControllerDidChangeColorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorsOverrideSettingsPanelController::*)(::GlobalNamespace::ColorScheme*)>(&GlobalNamespace::ColorsOverrideSettingsPanelController::HandleEditColorSchemeControllerDidChangeColorScheme)> {
  static const MethodInfo* get() {
    static auto* colorScheme = &::il2cpp_utils::GetClassFromName("", "ColorScheme")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorsOverrideSettingsPanelController*), "HandleEditColorSchemeControllerDidChangeColorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorScheme});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorsOverrideSettingsPanelController::$HandleOverrideColorsToggleValueChanged$b__19_0
// Il2CppName: <HandleOverrideColorsToggleValueChanged>b__19_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(&GlobalNamespace::ColorsOverrideSettingsPanelController::$HandleOverrideColorsToggleValueChanged$b__19_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorsOverrideSettingsPanelController*), "<HandleOverrideColorsToggleValueChanged>b__19_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
