#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace GlobalNamespace {
class GradientTransitionSO;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Tweening {
class ColorTween;
}
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GradientImageViewStateTransition;
}
// Type: ::GradientImageViewStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5544)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5544), inst: 895 }), TypeDefinitionIndex(TypeDefinitionIndex(13678))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5553))
// CS Name: GradientImageViewStateTransition
class CORDL_TYPE GradientImageViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::HMUI::ImageView> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GradientImageViewStateTransition() = default;

// Ctor Parameters [CppParam { name: "", ty: "GradientImageViewStateTransition", modifiers: " const&", def_value: None }]
constexpr GradientImageViewStateTransition(GradientImageViewStateTransition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GradientImageViewStateTransition", modifiers: "&&", def_value: None }]
constexpr GradientImageViewStateTransition(GradientImageViewStateTransition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GradientImageViewStateTransition(void* ptr) noexcept : ::GlobalNamespace::BaseStateTransition_1<::HMUI::ImageView>(ptr) {
}


  constexpr GradientImageViewStateTransition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GradientImageViewStateTransition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GradientImageViewStateTransition& operator=(GradientImageViewStateTransition&& o) noexcept = default;
  constexpr GradientImageViewStateTransition& operator=(GradientImageViewStateTransition const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::GradientTransitionSO __declspec(property(get=__get__transition, put=__set__transition))  _transition;

constexpr void __set__transition(::GlobalNamespace::GradientTransitionSO value) ;

constexpr ::GlobalNamespace::GradientTransitionSO __get__transition() const;

 ::Tweening::ColorTween __declspec(property(get=__get__colorTweenA, put=__set__colorTweenA))  _colorTweenA;

constexpr void __set__colorTweenA(::Tweening::ColorTween value) ;

constexpr ::Tweening::ColorTween __get__colorTweenA() const;

 ::Tweening::ColorTween __declspec(property(get=__get__colorTweenB, put=__set__colorTweenB))  _colorTweenB;

constexpr void __set__colorTweenB(::Tweening::ColorTween value) ;

constexpr ::Tweening::ColorTween __get__colorTweenB() const;


// Properties

 ::GlobalNamespace::BaseTransitionSO __declspec(property(get=get_transition))  transition;


// Methods

/// @brief Method get_transition addr 0x21290b8 size 0x8 virtual true final false
 ::GlobalNamespace::BaseTransitionSO get_transition() ;

/// @brief Method TransitionToNormalState addr 0x21290c0 size 0x80 virtual true final false
 void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x2129364 size 0x80 virtual true final false
 void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x21293fc size 0x80 virtual true final false
 void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x2129494 size 0x80 virtual true final false
 void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x212952c size 0x80 virtual true final false
 void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x21295c4 size 0x80 virtual true final false
 void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x212965c size 0x80 virtual true final false
 void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x212973c size 0x80 virtual true final false
 void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x21297bc size 0x80 virtual true final false
 void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x212983c size 0x80 virtual true final false
 void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x21298bc size 0x80 virtual true final false
 void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x212993c size 0x80 virtual true final false
 void SetSelectedAndHighlightedState() ;

/// @brief Method StartTweens addr 0x2129158 size 0x20c virtual false final false
 void StartTweens(::UnityEngine::Color endColor1, ::UnityEngine::Color endColor2) ;

/// @brief Method StartTween addr 0x21299bc size 0x194 virtual false final false
 void StartTween(::UnityEngine::Color startColor, ::UnityEngine::Color endColor, ::System::Action_1<::UnityEngine::Color> tweenAction, ::System::Action onCompleteAction, ByRef<::Tweening::ColorTween> colorTween) ;

/// @brief Method SetColors addr 0x21296dc size 0x60 virtual false final false
 void SetColors(::UnityEngine::Color startColor, ::UnityEngine::Color endColor) ;

// Ctor Parameters []
explicit GradientImageViewStateTransition() ;

/// @brief Method .ctor addr 0x2129b50 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method <StartTweens>g__Color1CompleteAction|17_0 addr 0x2129b98 size 0x88 virtual false final false
 void _StartTweens_g__Color1CompleteAction_17_0() ;

/// @brief Method <StartTweens>g__Color2CompleteAction|17_1 addr 0x2129c20 size 0x88 virtual false final false
 void _StartTweens_g__Color2CompleteAction_17_1() ;

/// @brief Method <StartTweens>b__17_2 addr 0x2129ca8 size 0x1c virtual false final false
 void _StartTweens_b__17_2(::UnityEngine::Color color) ;

/// @brief Method <StartTweens>b__17_3 addr 0x2129cc4 size 0x1c virtual false final false
 void _StartTweens_b__17_3(::UnityEngine::Color color) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GradientImageViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GradientImageViewStateTransition, "", "GradientImageViewStateTransition");
