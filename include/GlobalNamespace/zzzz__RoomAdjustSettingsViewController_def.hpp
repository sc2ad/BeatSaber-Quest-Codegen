#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class StepValuePicker;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class Vector3SO;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomAdjustSettingsViewController;
}
// Type: ::RoomAdjustSettingsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5840))
// CS Name: RoomAdjustSettingsViewController
class CORDL_TYPE RoomAdjustSettingsViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~RoomAdjustSettingsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "RoomAdjustSettingsViewController", modifiers: " const&", def_value: None }]
constexpr RoomAdjustSettingsViewController(RoomAdjustSettingsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RoomAdjustSettingsViewController", modifiers: "&&", def_value: None }]
constexpr RoomAdjustSettingsViewController(RoomAdjustSettingsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RoomAdjustSettingsViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr RoomAdjustSettingsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RoomAdjustSettingsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RoomAdjustSettingsViewController& operator=(RoomAdjustSettingsViewController&& o) noexcept = default;
  constexpr RoomAdjustSettingsViewController& operator=(RoomAdjustSettingsViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::Vector3SO __declspec(property(get=__get__roomCenter, put=__set__roomCenter))  _roomCenter;

constexpr void __set__roomCenter(GlobalNamespace::Vector3SO value) ;

constexpr GlobalNamespace::Vector3SO __get__roomCenter() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get__roomRotation, put=__set__roomRotation))  _roomRotation;

constexpr void __set__roomRotation(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get__roomRotation() const;

 GlobalNamespace::StepValuePicker __declspec(property(get=__get__xStepValuePicker, put=__set__xStepValuePicker))  _xStepValuePicker;

constexpr void __set__xStepValuePicker(GlobalNamespace::StepValuePicker value) ;

constexpr GlobalNamespace::StepValuePicker __get__xStepValuePicker() const;

 GlobalNamespace::StepValuePicker __declspec(property(get=__get__yStepValuePicker, put=__set__yStepValuePicker))  _yStepValuePicker;

constexpr void __set__yStepValuePicker(GlobalNamespace::StepValuePicker value) ;

constexpr GlobalNamespace::StepValuePicker __get__yStepValuePicker() const;

 GlobalNamespace::StepValuePicker __declspec(property(get=__get__zStepValuePicker, put=__set__zStepValuePicker))  _zStepValuePicker;

constexpr void __set__zStepValuePicker(GlobalNamespace::StepValuePicker value) ;

constexpr GlobalNamespace::StepValuePicker __get__zStepValuePicker() const;

 GlobalNamespace::StepValuePicker __declspec(property(get=__get__rotStepValuePicker, put=__set__rotStepValuePicker))  _rotStepValuePicker;

constexpr void __set__rotStepValuePicker(GlobalNamespace::StepValuePicker value) ;

constexpr GlobalNamespace::StepValuePicker __get__rotStepValuePicker() const;

 UnityEngine::UI::Button __declspec(property(get=__get__resetButton, put=__set__resetButton))  _resetButton;

constexpr void __set__resetButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__resetButton() const;

/// @brief Field kHorizontalMoveStep offset 0
static constexpr float_t  kHorizontalMoveStep{0.1};

/// @brief Field kVerticalMoveStep offset 0
static constexpr float_t  kVerticalMoveStep{0.05};

/// @brief Field kRotationStep offset 0
static constexpr float_t  kRotationStep{5};


// Methods

/// @brief Method DidActivate addr 0x21805d4 size 0x30c virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method Move addr 0x2180af8 size 0x94 virtual false final false
 void Move(UnityEngine::Vector3 move) ;

/// @brief Method Rotate addr 0x2180b8c size 0x88 virtual false final false
 void Rotate(float_t rotation) ;

/// @brief Method ResetRoom addr 0x2180c14 size 0x8c virtual false final false
 void ResetRoom() ;

/// @brief Method RefreshTexts addr 0x21808e0 size 0x218 virtual false final false
 void RefreshTexts() ;

// Ctor Parameters []
explicit RoomAdjustSettingsViewController() ;

/// @brief Method .ctor addr 0x2180ca0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__10_0 addr 0x2180ca8 size 0x14 virtual false final false
 void _DidActivate_b__10_0() ;

/// @brief Method <DidActivate>b__10_1 addr 0x2180cbc size 0x14 virtual false final false
 void _DidActivate_b__10_1() ;

/// @brief Method <DidActivate>b__10_2 addr 0x2180cd0 size 0x14 virtual false final false
 void _DidActivate_b__10_2() ;

/// @brief Method <DidActivate>b__10_3 addr 0x2180ce4 size 0x14 virtual false final false
 void _DidActivate_b__10_3() ;

/// @brief Method <DidActivate>b__10_4 addr 0x2180cf8 size 0x14 virtual false final false
 void _DidActivate_b__10_4() ;

/// @brief Method <DidActivate>b__10_5 addr 0x2180d0c size 0x14 virtual false final false
 void _DidActivate_b__10_5() ;

/// @brief Method <DidActivate>b__10_6 addr 0x2180d20 size 0x8 virtual false final false
 void _DidActivate_b__10_6() ;

/// @brief Method <DidActivate>b__10_7 addr 0x2180d28 size 0x8 virtual false final false
 void _DidActivate_b__10_7() ;

/// @brief Method <DidActivate>b__10_8 addr 0x2180d30 size 0x4 virtual false final false
 void _DidActivate_b__10_8() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RoomAdjustSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RoomAdjustSettingsViewController, "", "RoomAdjustSettingsViewController");
