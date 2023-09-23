#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
namespace GlobalNamespace {
class SpriteSwapTransitionSO;
}
namespace GlobalNamespace {
class BaseTransitionSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SpriteSwapGraphicViewStateTransition;
}
// Type: ::SpriteSwapGraphicViewStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5544)), TypeDefinitionIndex(TypeDefinitionIndex(12994)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5544), inst: 894 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5563))
// CS Name: SpriteSwapGraphicViewStateTransition
class CORDL_TYPE SpriteSwapGraphicViewStateTransition : public GlobalNamespace::BaseStateTransition_1<UnityEngine::UI::Image> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SpriteSwapGraphicViewStateTransition() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteSwapGraphicViewStateTransition", modifiers: " const&", def_value: None }]
constexpr SpriteSwapGraphicViewStateTransition(SpriteSwapGraphicViewStateTransition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteSwapGraphicViewStateTransition", modifiers: "&&", def_value: None }]
constexpr SpriteSwapGraphicViewStateTransition(SpriteSwapGraphicViewStateTransition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpriteSwapGraphicViewStateTransition(void* ptr) noexcept : GlobalNamespace::BaseStateTransition_1<UnityEngine::UI::Image>(ptr) {
}


  constexpr SpriteSwapGraphicViewStateTransition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpriteSwapGraphicViewStateTransition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpriteSwapGraphicViewStateTransition& operator=(SpriteSwapGraphicViewStateTransition&& o) noexcept = default;
  constexpr SpriteSwapGraphicViewStateTransition& operator=(SpriteSwapGraphicViewStateTransition const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SpriteSwapTransitionSO __declspec(property(get=__get__transition, put=__set__transition))  _transition;

constexpr void __set__transition(GlobalNamespace::SpriteSwapTransitionSO value) ;

constexpr GlobalNamespace::SpriteSwapTransitionSO __get__transition() const;


// Properties

 GlobalNamespace::BaseTransitionSO __declspec(property(get=get_transition))  transition;


// Methods

/// @brief Method get_transition addr 0x212c0c4 size 0x8 virtual true final false
 GlobalNamespace::BaseTransitionSO get_transition() ;

/// @brief Method TransitionToNormalState addr 0x212c0cc size 0xc virtual true final false
 void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x212c0d8 size 0xc virtual true final false
 void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x212c0e4 size 0x10 virtual true final false
 void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x212c0f4 size 0x10 virtual true final false
 void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x212c104 size 0x10 virtual true final false
 void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x212c114 size 0x10 virtual true final false
 void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x212c124 size 0x28 virtual true final false
 void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x212c14c size 0x28 virtual true final false
 void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x212c174 size 0x28 virtual true final false
 void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x212c19c size 0x28 virtual true final false
 void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x212c1c4 size 0x28 virtual true final false
 void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x212c1ec size 0x28 virtual true final false
 void SetSelectedAndHighlightedState() ;

// Ctor Parameters []
explicit SpriteSwapGraphicViewStateTransition() ;

/// @brief Method .ctor addr 0x212c214 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SpriteSwapGraphicViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpriteSwapGraphicViewStateTransition, "", "SpriteSwapGraphicViewStateTransition");
