#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class Signal;
}
// Forward declare root types
namespace GlobalNamespace {
class SignalOnUIButtonClick;
}
// Type: ::SignalOnUIButtonClick
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13885))
// CS Name: SignalOnUIButtonClick
class CORDL_TYPE SignalOnUIButtonClick : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SignalOnUIButtonClick() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalOnUIButtonClick", modifiers: " const&", def_value: None }]
constexpr SignalOnUIButtonClick(SignalOnUIButtonClick const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalOnUIButtonClick", modifiers: "&&", def_value: None }]
constexpr SignalOnUIButtonClick(SignalOnUIButtonClick&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalOnUIButtonClick(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SignalOnUIButtonClick& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalOnUIButtonClick& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalOnUIButtonClick& operator=(SignalOnUIButtonClick&& o) noexcept = default;
  constexpr SignalOnUIButtonClick& operator=(SignalOnUIButtonClick const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::Signal __declspec(property(get=__get__buttonClickedSignal, put=__set__buttonClickedSignal))  _buttonClickedSignal;

constexpr void __set__buttonClickedSignal(::GlobalNamespace::Signal value) ;

constexpr ::GlobalNamespace::Signal __get__buttonClickedSignal() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__button() const;


// Methods

/// @brief Method OnReset addr 0x1f83654 size 0x50 virtual false final false
 void OnReset() ;

/// @brief Method Start addr 0x1f836a4 size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x1f83730 size 0xd0 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit SignalOnUIButtonClick() ;

/// @brief Method .ctor addr 0x1f83800 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SignalOnUIButtonClick);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalOnUIButtonClick, "", "SignalOnUIButtonClick");
