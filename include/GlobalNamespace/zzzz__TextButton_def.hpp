#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class TextButton;
}
// Type: ::TextButton
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5540))
// CS Name: TextButton
class CORDL_TYPE TextButton : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TextButton() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextButton", modifiers: " const&", def_value: None }]
constexpr TextButton(TextButton const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextButton", modifiers: "&&", def_value: None }]
constexpr TextButton(TextButton&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextButton(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TextButton& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextButton& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextButton& operator=(TextButton&& o) noexcept = default;
  constexpr TextButton& operator=(TextButton const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Text __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get__text() const;

 UnityEngine::UI::Button __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__button() const;


// Properties

 UnityEngine::UI::Text __declspec(property(get=get_text))  text;

 UnityEngine::UI::Button __declspec(property(get=get_button))  button;


// Methods

/// @brief Method get_text addr 0x2127a08 size 0x8 virtual false final false
 UnityEngine::UI::Text get_text() ;

/// @brief Method get_button addr 0x2127a10 size 0x8 virtual false final false
 UnityEngine::UI::Button get_button() ;

// Ctor Parameters []
explicit TextButton() ;

/// @brief Method .ctor addr 0x2127a18 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TextButton);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TextButton, "", "TextButton");
