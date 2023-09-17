#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Action;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct KeyCode;
}
namespace TMPro {
struct FontStyles;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class UIKeyboardKey;
}
// Forward declare root types
namespace HMUI {
class UIKeyboard;
}
namespace HMUI {
class ____HMUI__UIKeyboard____c__DisplayClass13_0;
}
// Type: ::<>c__DisplayClass13_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13591))
// CS Name: HMUI.UIKeyboard::<>c__DisplayClass13_0
class CORDL_TYPE ____HMUI__UIKeyboard____c__DisplayClass13_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____HMUI__UIKeyboard____c__DisplayClass13_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____HMUI__UIKeyboard____c__DisplayClass13_0", modifiers: " const&", def_value: None }]
constexpr ____HMUI__UIKeyboard____c__DisplayClass13_0(____HMUI__UIKeyboard____c__DisplayClass13_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____HMUI__UIKeyboard____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
constexpr ____HMUI__UIKeyboard____c__DisplayClass13_0(____HMUI__UIKeyboard____c__DisplayClass13_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____HMUI__UIKeyboard____c__DisplayClass13_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____HMUI__UIKeyboard____c__DisplayClass13_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____HMUI__UIKeyboard____c__DisplayClass13_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____HMUI__UIKeyboard____c__DisplayClass13_0& operator=(____HMUI__UIKeyboard____c__DisplayClass13_0&& o) noexcept = default;
  constexpr ____HMUI__UIKeyboard____c__DisplayClass13_0& operator=(____HMUI__UIKeyboard____c__DisplayClass13_0 const& o) noexcept = default;
                


// Fields

 ::HMUI::UIKeyboardKey __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::HMUI::UIKeyboardKey value) ;

constexpr ::HMUI::UIKeyboardKey __get_key() const;

 ::HMUI::UIKeyboard __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::HMUI::UIKeyboard value) ;

constexpr ::HMUI::UIKeyboard __get___4__this() const;


// Methods

// Ctor Parameters []
explicit ____HMUI__UIKeyboard____c__DisplayClass13_0() ;

/// @brief Method .ctor addr 0x1fab110 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__2 addr 0x1fab3d8 size 0x24 virtual false final false
 void _Awake_b__2() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::UIKeyboard
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13592))
// CS Name: HMUI.UIKeyboard
class CORDL_TYPE UIKeyboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass13_0 = ::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~UIKeyboard() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIKeyboard", modifiers: " const&", def_value: None }]
constexpr UIKeyboard(UIKeyboard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIKeyboard", modifiers: "&&", def_value: None }]
constexpr UIKeyboard(UIKeyboard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIKeyboard(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr UIKeyboard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIKeyboard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIKeyboard& operator=(UIKeyboard&& o) noexcept = default;
  constexpr UIKeyboard& operator=(UIKeyboard const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Button __declspec(property(get=__get__okButton, put=__set__okButton))  _okButton;

constexpr void __set__okButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__okButton() const;

 ::System::Action __declspec(property(get=__get_okButtonWasPressedEvent, put=__set_okButtonWasPressedEvent))  okButtonWasPressedEvent;

constexpr void __set_okButtonWasPressedEvent(::System::Action value) ;

constexpr ::System::Action __get_okButtonWasPressedEvent() const;

 ::System::Action_1<char16_t> __declspec(property(get=__get_keyWasPressedEvent, put=__set_keyWasPressedEvent))  keyWasPressedEvent;

constexpr void __set_keyWasPressedEvent(::System::Action_1<char16_t> value) ;

constexpr ::System::Action_1<char16_t> __get_keyWasPressedEvent() const;

 ::System::Action __declspec(property(get=__get_deleteButtonWasPressedEvent, put=__set_deleteButtonWasPressedEvent))  deleteButtonWasPressedEvent;

constexpr void __set_deleteButtonWasPressedEvent(::System::Action value) ;

constexpr ::System::Action __get_deleteButtonWasPressedEvent() const;

 ::HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder value) ;

constexpr ::HMUI::ButtonBinder __get__buttonBinder() const;

 bool __declspec(property(get=__get__shouldCapitalize, put=__set__shouldCapitalize))  _shouldCapitalize;

constexpr void __set__shouldCapitalize(bool value) ;

constexpr bool __get__shouldCapitalize() const;

 ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI> __declspec(property(get=__get__letterBtnTexts, put=__set__letterBtnTexts))  _letterBtnTexts;

constexpr void __set__letterBtnTexts(::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI> value) ;

constexpr ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI> __get__letterBtnTexts() const;


// Methods

/// @brief Method add_okButtonWasPressedEvent addr 0x1faaa08 size 0x9c virtual false final false
 void add_okButtonWasPressedEvent(::System::Action value) ;

/// @brief Method remove_okButtonWasPressedEvent addr 0x1faaaa4 size 0x9c virtual false final false
 void remove_okButtonWasPressedEvent(::System::Action value) ;

/// @brief Method add_keyWasPressedEvent addr 0x1faab40 size 0xb0 virtual false final false
 void add_keyWasPressedEvent(::System::Action_1<char16_t> value) ;

/// @brief Method remove_keyWasPressedEvent addr 0x1faabf0 size 0xb0 virtual false final false
 void remove_keyWasPressedEvent(::System::Action_1<char16_t> value) ;

/// @brief Method add_deleteButtonWasPressedEvent addr 0x1faaca0 size 0x9c virtual false final false
 void add_deleteButtonWasPressedEvent(::System::Action value) ;

/// @brief Method remove_deleteButtonWasPressedEvent addr 0x1faad3c size 0x9c virtual false final false
 void remove_deleteButtonWasPressedEvent(::System::Action value) ;

/// @brief Method Awake addr 0x1faadd8 size 0x338 virtual false final false
 void Awake() ;

/// @brief Method HandleKeyPress addr 0x1fab118 size 0xe8 virtual false final false
 void HandleKeyPress(::UnityEngine::KeyCode keyCode) ;

/// @brief Method HandleCapsLockPressed addr 0x1fab200 size 0x18 virtual false final false
 void HandleCapsLockPressed() ;

/// @brief Method SetKeyboardCapitalization addr 0x1fab218 size 0xec virtual false final false
 void SetKeyboardCapitalization(bool capitalize) ;

/// @brief Method HasFontStyle addr 0x1fab304 size 0x20 virtual false final false
 bool HasFontStyle(::TMPro::TextMeshProUGUI text, ::TMPro::FontStyles style) ;

/// @brief Method OnEnable addr 0x1fab324 size 0xc virtual false final false
 void OnEnable() ;

// Ctor Parameters []
explicit UIKeyboard() ;

/// @brief Method .ctor addr 0x1fab330 size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__13_0 addr 0x1fab3a0 size 0x1c virtual false final false
 void _Awake_b__13_0() ;

/// @brief Method <Awake>b__13_1 addr 0x1fab3bc size 0x1c virtual false final false
 void _Awake_b__13_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::UIKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::UIKeyboard, "HMUI", "UIKeyboard");
NEED_NO_BOX(::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0, "HMUI", "UIKeyboard/<>c__DisplayClass13_0");
