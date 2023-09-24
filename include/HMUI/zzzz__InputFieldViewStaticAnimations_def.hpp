#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class AnimationClip;
}
namespace HMUI {
class InputFieldView;
}
namespace HMUI {
struct HMUI__InputFieldView__SelectionState;
}
// Forward declare root types
namespace HMUI {
class InputFieldViewStaticAnimations;
}
// Type: HMUI::InputFieldViewStaticAnimations
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13684))
// CS Name: HMUI.InputFieldViewStaticAnimations
class CORDL_TYPE InputFieldViewStaticAnimations : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~InputFieldViewStaticAnimations() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldViewStaticAnimations", modifiers: " const&", def_value: None }]
constexpr InputFieldViewStaticAnimations(InputFieldViewStaticAnimations const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldViewStaticAnimations", modifiers: "&&", def_value: None }]
constexpr InputFieldViewStaticAnimations(InputFieldViewStaticAnimations&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputFieldViewStaticAnimations(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr InputFieldViewStaticAnimations& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputFieldViewStaticAnimations& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputFieldViewStaticAnimations& operator=(InputFieldViewStaticAnimations&& o) noexcept = default;
  constexpr InputFieldViewStaticAnimations& operator=(InputFieldViewStaticAnimations const& o) noexcept = default;
                


// Fields

 HMUI::InputFieldView __declspec(property(get=__get__inputFieldView, put=__set__inputFieldView))  _inputFieldView;

constexpr void __set__inputFieldView(HMUI::InputFieldView value) ;

constexpr HMUI::InputFieldView __get__inputFieldView() const;

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

 UnityEngine::AnimationClip __declspec(property(get=__get__selectedClip, put=__set__selectedClip))  _selectedClip;

constexpr void __set__selectedClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__selectedClip() const;

 bool __declspec(property(get=__get__didStart, put=__set__didStart))  _didStart;

constexpr void __set__didStart(bool value) ;

constexpr bool __get__didStart() const;


// Methods

/// @brief Method Awake addr 0x1fcdecc size 0x88 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x1fcdf54 size 0x24 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x1fce078 size 0x1c virtual false final false
 void OnEnable() ;

/// @brief Method OnDestroy addr 0x1fce094 size 0xd0 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleInputFieldViewSelectionStateDidChange addr 0x1fcdf78 size 0x100 virtual false final false
 void HandleInputFieldViewSelectionStateDidChange(HMUI::HMUI__InputFieldView__SelectionState state) ;

static HMUI::InputFieldViewStaticAnimations New_ctor() ;

/// @brief Method .ctor addr 0x1fce164 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::InputFieldViewStaticAnimations);
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldViewStaticAnimations, "HMUI", "InputFieldViewStaticAnimations");
