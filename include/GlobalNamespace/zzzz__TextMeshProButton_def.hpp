#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class TextMeshProButton;
}
// Type: ::TextMeshProButton
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5541))
// CS Name: TextMeshProButton
class CORDL_TYPE TextMeshProButton : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TextMeshProButton() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProButton", modifiers: " const&", def_value: None }]
constexpr TextMeshProButton(TextMeshProButton const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProButton", modifiers: "&&", def_value: None }]
constexpr TextMeshProButton(TextMeshProButton&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextMeshProButton(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TextMeshProButton& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextMeshProButton& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextMeshProButton& operator=(TextMeshProButton&& o) noexcept = default;
  constexpr TextMeshProButton& operator=(TextMeshProButton const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__text() const;

 UnityEngine::UI::Button __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__button() const;


// Properties

 TMPro::TextMeshProUGUI __declspec(property(get=get_text))  text;

 UnityEngine::UI::Button __declspec(property(get=get_button))  button;


// Methods

/// @brief Method get_text addr 0x2127a20 size 0x8 virtual false final false
 TMPro::TextMeshProUGUI get_text() ;

/// @brief Method get_button addr 0x2127a28 size 0x8 virtual false final false
 UnityEngine::UI::Button get_button() ;

// Ctor Parameters []
explicit TextMeshProButton() ;

/// @brief Method .ctor addr 0x2127a30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TextMeshProButton);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TextMeshProButton, "", "TextMeshProButton");
