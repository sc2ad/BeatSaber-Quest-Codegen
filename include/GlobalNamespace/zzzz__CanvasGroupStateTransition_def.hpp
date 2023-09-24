#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class CanvasGroupTransitionSO;
}
namespace Tweening {
class FloatTween;
}
// Forward declare root types
namespace GlobalNamespace {
class CanvasGroupStateTransition;
}
// Type: ::CanvasGroupStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15764)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5544), inst: 892 }), TypeDefinitionIndex(TypeDefinitionIndex(5544))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5546))
// CS Name: CanvasGroupStateTransition
class CORDL_TYPE CanvasGroupStateTransition : public GlobalNamespace::BaseStateTransition_1<UnityEngine::CanvasGroup> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CanvasGroupStateTransition() = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasGroupStateTransition", modifiers: " const&", def_value: None }]
constexpr CanvasGroupStateTransition(CanvasGroupStateTransition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasGroupStateTransition", modifiers: "&&", def_value: None }]
constexpr CanvasGroupStateTransition(CanvasGroupStateTransition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CanvasGroupStateTransition(void* ptr) noexcept : GlobalNamespace::BaseStateTransition_1<UnityEngine::CanvasGroup>(ptr) {
}


  constexpr CanvasGroupStateTransition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CanvasGroupStateTransition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CanvasGroupStateTransition& operator=(CanvasGroupStateTransition&& o) noexcept = default;
  constexpr CanvasGroupStateTransition& operator=(CanvasGroupStateTransition const& o) noexcept = default;
                


// Fields

 GlobalNamespace::CanvasGroupTransitionSO __declspec(property(get=__get__transition, put=__set__transition))  _transition;

constexpr void __set__transition(GlobalNamespace::CanvasGroupTransitionSO value) ;

constexpr GlobalNamespace::CanvasGroupTransitionSO __get__transition() const;

 Tweening::FloatTween __declspec(property(get=__get__floatTween, put=__set__floatTween))  _floatTween;

constexpr void __set__floatTween(Tweening::FloatTween value) ;

constexpr Tweening::FloatTween __get__floatTween() const;


// Properties

 GlobalNamespace::BaseTransitionSO __declspec(property(get=get_transition))  transition;


// Methods

/// @brief Method get_transition addr 0x2127eb0 size 0x8 virtual true final false
 GlobalNamespace::BaseTransitionSO get_transition() ;

/// @brief Method TransitionToNormalState addr 0x2127eb8 size 0x1c virtual true final false
 void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x21280b0 size 0x1c virtual true final false
 void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x21280cc size 0x1c virtual true final false
 void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x21280e8 size 0x1c virtual true final false
 void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x2128104 size 0x1c virtual true final false
 void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x2128120 size 0x1c virtual true final false
 void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x212813c size 0x28 virtual true final false
 void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x2128164 size 0x28 virtual true final false
 void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x212818c size 0x28 virtual true final false
 void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x21281b4 size 0x28 virtual true final false
 void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x21281dc size 0x28 virtual true final false
 void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x2128204 size 0x28 virtual true final false
 void SetSelectedAndHighlightedState() ;

/// @brief Method StartTween addr 0x2127ed4 size 0x1dc virtual false final false
 void StartTween(float_t endAlpha) ;

static GlobalNamespace::CanvasGroupStateTransition New_ctor() ;

/// @brief Method .ctor addr 0x212822c size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method <StartTween>b__16_0 addr 0x2128274 size 0x1c virtual false final false
 void _StartTween_b__16_0(float_t alpha) ;

/// @brief Method <StartTween>b__16_1 addr 0x2128290 size 0x88 virtual false final false
 void _StartTween_b__16_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CanvasGroupStateTransition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CanvasGroupStateTransition, "", "CanvasGroupStateTransition");
