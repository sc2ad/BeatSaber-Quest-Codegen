#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
namespace UnityEngine {
struct Color;
}
namespace Tweening {
class ColorTween;
}
namespace GlobalNamespace {
class ColorTransitionSO;
}
namespace GlobalNamespace {
class BaseTransitionSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorTMPTextStateTransition;
}
// Type: ::ColorTMPTextStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12388)), TypeDefinitionIndex(TypeDefinitionIndex(5544)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5544), inst: 897 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5549))
// CS Name: ColorTMPTextStateTransition
class CORDL_TYPE ColorTMPTextStateTransition : public GlobalNamespace::BaseStateTransition_1<TMPro::TMP_Text> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ColorTMPTextStateTransition() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorTMPTextStateTransition", modifiers: " const&", def_value: None }]
constexpr ColorTMPTextStateTransition(ColorTMPTextStateTransition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorTMPTextStateTransition", modifiers: "&&", def_value: None }]
constexpr ColorTMPTextStateTransition(ColorTMPTextStateTransition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorTMPTextStateTransition(void* ptr) noexcept : GlobalNamespace::BaseStateTransition_1<TMPro::TMP_Text>(ptr) {
}


  constexpr ColorTMPTextStateTransition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorTMPTextStateTransition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorTMPTextStateTransition& operator=(ColorTMPTextStateTransition&& o) noexcept = default;
  constexpr ColorTMPTextStateTransition& operator=(ColorTMPTextStateTransition const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorTransitionSO __declspec(property(get=__get__transition, put=__set__transition))  _transition;

constexpr void __set__transition(GlobalNamespace::ColorTransitionSO value) ;

constexpr GlobalNamespace::ColorTransitionSO __get__transition() const;

 Tweening::ColorTween __declspec(property(get=__get__colorTween, put=__set__colorTween))  _colorTween;

constexpr void __set__colorTween(Tweening::ColorTween value) ;

constexpr Tweening::ColorTween __get__colorTween() const;


// Properties

 GlobalNamespace::BaseTransitionSO __declspec(property(get=get_transition))  transition;


// Methods

/// @brief Method get_transition addr 0x212893c size 0x8 virtual true final false
 GlobalNamespace::BaseTransitionSO get_transition() ;

/// @brief Method TransitionToNormalState addr 0x2128944 size 0x2c virtual true final false
 void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x2128ba8 size 0x2c virtual true final false
 void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x2128bd4 size 0x2c virtual true final false
 void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x2128c00 size 0x2c virtual true final false
 void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x2128c2c size 0x2c virtual true final false
 void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x2128c58 size 0x2c virtual true final false
 void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x2128c84 size 0x3c virtual true final false
 void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x2128cc0 size 0x3c virtual true final false
 void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x2128cfc size 0x3c virtual true final false
 void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x2128d38 size 0x3c virtual true final false
 void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x2128d74 size 0x3c virtual true final false
 void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x2128db0 size 0x3c virtual true final false
 void SetSelectedAndHighlightedState() ;

/// @brief Method StartTween addr 0x2128970 size 0x238 virtual false final false
 void StartTween(UnityEngine::Color endColor) ;

// Ctor Parameters []
explicit ColorTMPTextStateTransition() ;

/// @brief Method .ctor addr 0x2128dec size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method <StartTween>b__16_0 addr 0x2128e34 size 0x24 virtual false final false
 void _StartTween_b__16_0(UnityEngine::Color color) ;

/// @brief Method <StartTween>b__16_1 addr 0x2128e58 size 0x88 virtual false final false
 void _StartTween_b__16_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorTMPTextStateTransition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorTMPTextStateTransition, "", "ColorTMPTextStateTransition");
