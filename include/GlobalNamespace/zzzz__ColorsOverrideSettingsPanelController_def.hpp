#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class ColorSchemeDropdown;
}
namespace GlobalNamespace {
class EditColorSchemeController;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace HMUI {
class ButtonBinder;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace UnityEngine {
class GameObject;
}
namespace HMUI {
class PanelAnimationSO;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class ModalView;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorsOverrideSettingsPanelController;
}
// Type: ::ColorsOverrideSettingsPanelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5501))
// CS Name: ColorsOverrideSettingsPanelController
class CORDL_TYPE ColorsOverrideSettingsPanelController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IRefreshable
constexpr operator  ::GlobalNamespace::IRefreshable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~ColorsOverrideSettingsPanelController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorsOverrideSettingsPanelController", modifiers: " const&", def_value: None }]
constexpr ColorsOverrideSettingsPanelController(ColorsOverrideSettingsPanelController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorsOverrideSettingsPanelController", modifiers: "&&", def_value: None }]
constexpr ColorsOverrideSettingsPanelController(ColorsOverrideSettingsPanelController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorsOverrideSettingsPanelController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ColorsOverrideSettingsPanelController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorsOverrideSettingsPanelController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorsOverrideSettingsPanelController& operator=(ColorsOverrideSettingsPanelController&& o) noexcept = default;
  constexpr ColorsOverrideSettingsPanelController& operator=(ColorsOverrideSettingsPanelController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Toggle __declspec(property(get=__get__overrideColorsToggle, put=__set__overrideColorsToggle))  _overrideColorsToggle;

constexpr void __set__overrideColorsToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get__overrideColorsToggle() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__detailsPanelGO, put=__set__detailsPanelGO))  _detailsPanelGO;

constexpr void __set__detailsPanelGO(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__detailsPanelGO() const;

 ::GlobalNamespace::ColorSchemeDropdown __declspec(property(get=__get__colorSchemeDropDown, put=__set__colorSchemeDropDown))  _colorSchemeDropDown;

constexpr void __set__colorSchemeDropDown(::GlobalNamespace::ColorSchemeDropdown value) ;

constexpr ::GlobalNamespace::ColorSchemeDropdown __get__colorSchemeDropDown() const;

 ::GlobalNamespace::EditColorSchemeController __declspec(property(get=__get__editColorSchemeController, put=__set__editColorSchemeController))  _editColorSchemeController;

constexpr void __set__editColorSchemeController(::GlobalNamespace::EditColorSchemeController value) ;

constexpr ::GlobalNamespace::EditColorSchemeController __get__editColorSchemeController() const;

 ::HMUI::ModalView __declspec(property(get=__get__editColorSchemeModalView, put=__set__editColorSchemeModalView))  _editColorSchemeModalView;

constexpr void __set__editColorSchemeModalView(::HMUI::ModalView value) ;

constexpr ::HMUI::ModalView __get__editColorSchemeModalView() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__editColorSchemeButton, put=__set__editColorSchemeButton))  _editColorSchemeButton;

constexpr void __set__editColorSchemeButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__editColorSchemeButton() const;

 ::HMUI::PanelAnimationSO __declspec(property(get=__get__presentPanelAnimation, put=__set__presentPanelAnimation))  _presentPanelAnimation;

constexpr void __set__presentPanelAnimation(::HMUI::PanelAnimationSO value) ;

constexpr ::HMUI::PanelAnimationSO __get__presentPanelAnimation() const;

 ::HMUI::PanelAnimationSO __declspec(property(get=__get__dismissPanelAnimation, put=__set__dismissPanelAnimation))  _dismissPanelAnimation;

constexpr void __set__dismissPanelAnimation(::HMUI::PanelAnimationSO value) ;

constexpr ::HMUI::PanelAnimationSO __get__dismissPanelAnimation() const;

 ::GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel value) ;

constexpr ::GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;

 ::GlobalNamespace::ColorSchemesSettings __declspec(property(get=__get__colorSchemesSettings, put=__set__colorSchemesSettings))  _colorSchemesSettings;

constexpr void __set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings value) ;

constexpr ::GlobalNamespace::ColorSchemesSettings __get__colorSchemesSettings() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 ::HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder value) ;

constexpr ::HMUI::ButtonBinder __get__buttonBinder() const;


// Properties

 ::GlobalNamespace::ColorSchemesSettings __declspec(property(get=get_colorSchemesSettings))  colorSchemesSettings;


// Methods

/// @brief Method get_colorSchemesSettings addr 0x211e800 size 0x8 virtual false final false
 ::GlobalNamespace::ColorSchemesSettings get_colorSchemesSettings() ;

/// @brief Method SetData addr 0x211e808 size 0x268 virtual false final false
 void SetData(::GlobalNamespace::ColorSchemesSettings colorSchemesSettings) ;

/// @brief Method OnDestroy addr 0x211ebbc size 0x23c virtual false final false
 void OnDestroy() ;

/// @brief Method OnDisable addr 0x211ef44 size 0x24 virtual false final false
 void OnDisable() ;

/// @brief Method Refresh addr 0x211ef68 size 0x1e0 virtual true final true
 void Refresh() ;

/// @brief Method HandleDropDownDidSelectCellWithIdx addr 0x211f148 size 0x18c virtual false final false
 void HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView dropDownWithTableView, int32_t idx) ;

/// @brief Method HandleOverrideColorsToggleValueChanged addr 0x211f2d4 size 0x22c virtual false final false
 void HandleOverrideColorsToggleValueChanged(bool isOn) ;

/// @brief Method HandleEditColorSchemeButtonWasPressed addr 0x211f500 size 0x7c virtual false final false
 void HandleEditColorSchemeButtonWasPressed() ;

/// @brief Method HandleEditColorSchemeControllerDidFinish addr 0x211f594 size 0x50 virtual false final false
 void HandleEditColorSchemeControllerDidFinish() ;

/// @brief Method HandleEditColorSchemeControllerDidChangeColorScheme addr 0x211f5e4 size 0x1c virtual false final false
 void HandleEditColorSchemeControllerDidChangeColorScheme(::GlobalNamespace::ColorScheme colorScheme) ;

// Ctor Parameters []
explicit ColorsOverrideSettingsPanelController() ;

/// @brief Method .ctor addr 0x211f600 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleOverrideColorsToggleValueChanged>b__19_0 addr 0x211f608 size 0x20 virtual false final false
 void _HandleOverrideColorsToggleValueChanged_b__19_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ColorsOverrideSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorsOverrideSettingsPanelController, "", "ColorsOverrideSettingsPanelController");
