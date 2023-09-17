#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class Vector3SO;
}
namespace HMUI {
class RangeValuesTextSlider;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class ControllersTransformSettingsViewController;
}
// Type: ::ControllersTransformSettingsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5711))
// CS Name: ControllersTransformSettingsViewController
class CORDL_TYPE ControllersTransformSettingsViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~ControllersTransformSettingsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ControllersTransformSettingsViewController", modifiers: " const&", def_value: None }]
constexpr ControllersTransformSettingsViewController(ControllersTransformSettingsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ControllersTransformSettingsViewController", modifiers: "&&", def_value: None }]
constexpr ControllersTransformSettingsViewController(ControllersTransformSettingsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ControllersTransformSettingsViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr ControllersTransformSettingsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ControllersTransformSettingsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ControllersTransformSettingsViewController& operator=(ControllersTransformSettingsViewController&& o) noexcept = default;
  constexpr ControllersTransformSettingsViewController& operator=(ControllersTransformSettingsViewController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::Vector3SO __declspec(property(get=__get__controllerPosition, put=__set__controllerPosition))  _controllerPosition;

constexpr void __set__controllerPosition(::GlobalNamespace::Vector3SO value) ;

constexpr ::GlobalNamespace::Vector3SO __get__controllerPosition() const;

 ::GlobalNamespace::Vector3SO __declspec(property(get=__get__controllerRotation, put=__set__controllerRotation))  _controllerRotation;

constexpr void __set__controllerRotation(::GlobalNamespace::Vector3SO value) ;

constexpr ::GlobalNamespace::Vector3SO __get__controllerRotation() const;

 ::HMUI::RangeValuesTextSlider __declspec(property(get=__get__posXSlider, put=__set__posXSlider))  _posXSlider;

constexpr void __set__posXSlider(::HMUI::RangeValuesTextSlider value) ;

constexpr ::HMUI::RangeValuesTextSlider __get__posXSlider() const;

 ::HMUI::RangeValuesTextSlider __declspec(property(get=__get__posYSlider, put=__set__posYSlider))  _posYSlider;

constexpr void __set__posYSlider(::HMUI::RangeValuesTextSlider value) ;

constexpr ::HMUI::RangeValuesTextSlider __get__posYSlider() const;

 ::HMUI::RangeValuesTextSlider __declspec(property(get=__get__posZSlider, put=__set__posZSlider))  _posZSlider;

constexpr void __set__posZSlider(::HMUI::RangeValuesTextSlider value) ;

constexpr ::HMUI::RangeValuesTextSlider __get__posZSlider() const;

 ::HMUI::RangeValuesTextSlider __declspec(property(get=__get__rotXSlider, put=__set__rotXSlider))  _rotXSlider;

constexpr void __set__rotXSlider(::HMUI::RangeValuesTextSlider value) ;

constexpr ::HMUI::RangeValuesTextSlider __get__rotXSlider() const;

 ::HMUI::RangeValuesTextSlider __declspec(property(get=__get__rotYSlider, put=__set__rotYSlider))  _rotYSlider;

constexpr void __set__rotYSlider(::HMUI::RangeValuesTextSlider value) ;

constexpr ::HMUI::RangeValuesTextSlider __get__rotYSlider() const;

 ::HMUI::RangeValuesTextSlider __declspec(property(get=__get__rotZSlider, put=__set__rotZSlider))  _rotZSlider;

constexpr void __set__rotZSlider(::HMUI::RangeValuesTextSlider value) ;

constexpr ::HMUI::RangeValuesTextSlider __get__rotZSlider() const;

 ::GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

/// @brief Field kPositionStep offset 0
static constexpr float_t  kPositionStep{0.1};

/// @brief Field kPositionMul offset 0
static constexpr float_t  kPositionMul{100};

/// @brief Field kRotationStep offset 0
static constexpr float_t  kRotationStep{1};


// Methods

/// @brief Method DidActivate addr 0x2157608 size 0x570 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2157b78 size 0xac virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x2157c24 size 0x338 virtual true final false
 void OnDestroy() ;

/// @brief Method HandlePositionSliderValueDidChange addr 0x2157f5c size 0x120 virtual false final false
 void HandlePositionSliderValueDidChange(::HMUI::RangeValuesTextSlider slider, float_t value) ;

/// @brief Method HandleRotationSliderValueDidChange addr 0x215807c size 0x118 virtual false final false
 void HandleRotationSliderValueDidChange(::HMUI::RangeValuesTextSlider slider, float_t value) ;

// Ctor Parameters []
explicit ControllersTransformSettingsViewController() ;

/// @brief Method .ctor addr 0x2158194 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ControllersTransformSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ControllersTransformSettingsViewController, "", "ControllersTransformSettingsViewController");
