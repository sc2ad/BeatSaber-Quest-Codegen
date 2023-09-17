#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace HMUI {
class UIKeyboardKey;
}
// Type: HMUI::UIKeyboardKey
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13593))
// CS Name: HMUI.UIKeyboardKey
class CORDL_TYPE UIKeyboardKey : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~UIKeyboardKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIKeyboardKey", modifiers: " const&", def_value: None }]
constexpr UIKeyboardKey(UIKeyboardKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIKeyboardKey", modifiers: "&&", def_value: None }]
constexpr UIKeyboardKey(UIKeyboardKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIKeyboardKey(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr UIKeyboardKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIKeyboardKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIKeyboardKey& operator=(UIKeyboardKey&& o) noexcept = default;
  constexpr UIKeyboardKey& operator=(UIKeyboardKey const& o) noexcept = default;
                


// Fields

 ::UnityEngine::KeyCode __declspec(property(get=__get__keyCode, put=__set__keyCode))  _keyCode;

constexpr void __set__keyCode(::UnityEngine::KeyCode value) ;

constexpr ::UnityEngine::KeyCode __get__keyCode() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__text() const;

 ::StringW __declspec(property(get=__get__overrideText, put=__set__overrideText))  _overrideText;

constexpr void __set__overrideText(::StringW value) ;

constexpr ::StringW __get__overrideText() const;

 bool __declspec(property(get=__get__canBeUppercase, put=__set__canBeUppercase))  _canBeUppercase;

constexpr void __set__canBeUppercase(bool value) ;

constexpr bool __get__canBeUppercase() const;


// Properties

 ::UnityEngine::KeyCode __declspec(property(get=get_keyCode))  keyCode;

 bool __declspec(property(get=get_canBeUppercase))  canBeUppercase;


// Methods

/// @brief Method get_keyCode addr 0x1fab3fc size 0x8 virtual false final false
 ::UnityEngine::KeyCode get_keyCode() ;

/// @brief Method get_canBeUppercase addr 0x1fab404 size 0x8 virtual false final false
 bool get_canBeUppercase() ;

/// @brief Method Awake addr 0x1fab40c size 0xa4 virtual false final false
 void Awake() ;

/// @brief Method OnValidate addr 0x1fab4b0 size 0xe0 virtual false final false
 void OnValidate() ;

// Ctor Parameters []
explicit UIKeyboardKey() ;

/// @brief Method .ctor addr 0x1fab590 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::UIKeyboardKey);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::UIKeyboardKey, "HMUI", "UIKeyboardKey");
