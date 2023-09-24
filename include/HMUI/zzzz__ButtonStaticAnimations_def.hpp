#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class AnimationClip;
}
namespace HMUI {
struct HMUI__NoTransitionsButton__SelectionState;
}
namespace HMUI {
class NoTransitionsButton;
}
// Forward declare root types
namespace HMUI {
class ButtonStaticAnimations;
}
// Type: HMUI::ButtonStaticAnimations
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13672))
// CS Name: HMUI.ButtonStaticAnimations
class CORDL_TYPE ButtonStaticAnimations : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ButtonStaticAnimations() = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonStaticAnimations", modifiers: " const&", def_value: None }]
constexpr ButtonStaticAnimations(ButtonStaticAnimations const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonStaticAnimations", modifiers: "&&", def_value: None }]
constexpr ButtonStaticAnimations(ButtonStaticAnimations&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ButtonStaticAnimations(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ButtonStaticAnimations& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ButtonStaticAnimations& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ButtonStaticAnimations& operator=(ButtonStaticAnimations&& o) noexcept = default;
  constexpr ButtonStaticAnimations& operator=(ButtonStaticAnimations const& o) noexcept = default;
                


// Fields

 HMUI::NoTransitionsButton __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(HMUI::NoTransitionsButton value) ;

constexpr HMUI::NoTransitionsButton __get__button() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__normalClip, put=__set__normalClip))  _normalClip;

constexpr void __set__normalClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__normalClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__highlightedClip, put=__set__highlightedClip))  _highlightedClip;

constexpr void __set__highlightedClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__highlightedClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__pressedClip, put=__set__pressedClip))  _pressedClip;

constexpr void __set__pressedClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__pressedClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__disabledClip, put=__set__disabledClip))  _disabledClip;

constexpr void __set__disabledClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__disabledClip() const;

 bool __declspec(property(get=__get__didStart, put=__set__didStart))  _didStart;

constexpr void __set__didStart(bool value) ;

constexpr bool __get__didStart() const;


// Methods

/// @brief Method Awake addr 0x1fbcfc4 size 0x88 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x1fbd04c size 0x24 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x1fbd168 size 0x1c virtual false final false
 void OnEnable() ;

/// @brief Method OnDestroy addr 0x1fbd184 size 0xd0 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleButtonSelectionStateDidChange addr 0x1fbd070 size 0xf8 virtual false final false
 void HandleButtonSelectionStateDidChange(HMUI::HMUI__NoTransitionsButton__SelectionState state) ;

static HMUI::ButtonStaticAnimations New_ctor() ;

/// @brief Method .ctor addr 0x1fbd254 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::ButtonStaticAnimations);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ButtonStaticAnimations, "HMUI", "ButtonStaticAnimations");
