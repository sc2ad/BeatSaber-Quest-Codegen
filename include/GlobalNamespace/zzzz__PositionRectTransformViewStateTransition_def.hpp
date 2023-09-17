#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
namespace {
namespace GlobalNamespace {
class Vector3TransitionSO;
}
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace Tweening {
class Vector3Tween;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PositionRectTransformViewStateTransition;
}
// Type: ::PositionRectTransformViewStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5544), inst: 896 }), TypeDefinitionIndex(TypeDefinitionIndex(10222)), TypeDefinitionIndex(TypeDefinitionIndex(5544))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5555))
// CS Name: PositionRectTransformViewStateTransition
class CORDL_TYPE PositionRectTransformViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityEngine::RectTransform> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PositionRectTransformViewStateTransition() = default;

// Ctor Parameters [CppParam { name: "", ty: "PositionRectTransformViewStateTransition", modifiers: " const&", def_value: None }]
constexpr PositionRectTransformViewStateTransition(PositionRectTransformViewStateTransition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PositionRectTransformViewStateTransition", modifiers: "&&", def_value: None }]
constexpr PositionRectTransformViewStateTransition(PositionRectTransformViewStateTransition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PositionRectTransformViewStateTransition(void* ptr) noexcept : ::GlobalNamespace::BaseStateTransition_1<::UnityEngine::RectTransform>(ptr) {
}


  constexpr PositionRectTransformViewStateTransition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PositionRectTransformViewStateTransition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PositionRectTransformViewStateTransition& operator=(PositionRectTransformViewStateTransition&& o) noexcept = default;
  constexpr PositionRectTransformViewStateTransition& operator=(PositionRectTransformViewStateTransition const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::Vector3TransitionSO __declspec(property(get=__get__transition, put=__set__transition))  _transition;

constexpr void __set__transition(::GlobalNamespace::Vector3TransitionSO value) ;

constexpr ::GlobalNamespace::Vector3TransitionSO __get__transition() const;

 ::Tweening::Vector3Tween __declspec(property(get=__get__vectorTween, put=__set__vectorTween))  _vectorTween;

constexpr void __set__vectorTween(::Tweening::Vector3Tween value) ;

constexpr ::Tweening::Vector3Tween __get__vectorTween() const;


// Properties

 ::GlobalNamespace::BaseTransitionSO __declspec(property(get=get_transition))  transition;


// Methods

/// @brief Method get_transition addr 0x2129ce8 size 0x8 virtual true final false
 ::GlobalNamespace::BaseTransitionSO get_transition() ;

/// @brief Method TransitionToNormalState addr 0x2129cf0 size 0x20 virtual true final false
 void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x2129f18 size 0x20 virtual true final false
 void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x2129f38 size 0x20 virtual true final false
 void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x2129f58 size 0x20 virtual true final false
 void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x2129f78 size 0x20 virtual true final false
 void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x2129f98 size 0x20 virtual true final false
 void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x2129fb8 size 0x28 virtual true final false
 void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x2129fe0 size 0x28 virtual true final false
 void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x212a008 size 0x28 virtual true final false
 void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x212a030 size 0x28 virtual true final false
 void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x212a058 size 0x28 virtual true final false
 void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x212a080 size 0x28 virtual true final false
 void SetSelectedAndHighlightedState() ;

/// @brief Method StartTween addr 0x2129d10 size 0x208 virtual false final false
 void StartTween(::UnityEngine::Vector3 endPosition) ;

// Ctor Parameters []
explicit PositionRectTransformViewStateTransition() ;

/// @brief Method .ctor addr 0x212a0a8 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method <StartTween>b__16_0 addr 0x212a0f0 size 0x1c virtual false final false
 void _StartTween_b__16_0(::UnityEngine::Vector3 pos) ;

/// @brief Method <StartTween>b__16_1 addr 0x212a10c size 0x1088 virtual false final false
 void _StartTween_b__16_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PositionRectTransformViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PositionRectTransformViewStateTransition, "", "PositionRectTransformViewStateTransition");
