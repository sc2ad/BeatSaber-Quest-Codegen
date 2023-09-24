#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine {
struct Vector3;
}
namespace HMUI {
struct HMUI__InputFieldView__SelectionState;
}
namespace HMUI {
class HMUI__InputFieldView__InputFieldChanged;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class YieldInstruction;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Selectable__SelectionState;
}
namespace HMUI {
class ImageView;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace HMUI {
class HMUI__InputFieldView___BlinkingCaretCoroutine_d__43;
}
namespace HMUI {
class UIKeyboard;
}
// Forward declare root types
namespace HMUI {
struct HMUI__InputFieldView__SelectionState;
}
namespace HMUI {
class HMUI__InputFieldView__InputFieldChanged;
}
namespace HMUI {
class HMUI__InputFieldView___BlinkingCaretCoroutine_d__43;
}
namespace HMUI {
class InputFieldView;
}
// Type: ::SelectionState
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13680))
// CS Name: HMUI.InputFieldView::SelectionState
struct CORDL_TYPE HMUI__InputFieldView__SelectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__InputFieldView__SelectionState(int32_t value__) noexcept;


                    constexpr HMUI__InputFieldView__SelectionState(HMUI__InputFieldView__SelectionState const&) = default;
                    constexpr HMUI__InputFieldView__SelectionState(HMUI__InputFieldView__SelectionState&&) = default;
                    constexpr HMUI__InputFieldView__SelectionState& operator=(HMUI__InputFieldView__SelectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__InputFieldView__SelectionState& operator=(HMUI__InputFieldView__SelectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__InputFieldView__SelectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__InputFieldView__SelectionState_Unwrapped : int32_t {
__Normal = 0,
__Highlighted = 1,
__Pressed = 2,
__Disabled = 3,
__Selected = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__InputFieldView__SelectionState_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__InputFieldView__SelectionState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static HMUI::HMUI__InputFieldView__SelectionState const Normal;

/// @brief Field Highlighted offset 0
static HMUI::HMUI__InputFieldView__SelectionState const Highlighted;

/// @brief Field Pressed offset 0
static HMUI::HMUI__InputFieldView__SelectionState const Pressed;

/// @brief Field Disabled offset 0
static HMUI::HMUI__InputFieldView__SelectionState const Disabled;

/// @brief Field Selected offset 0
static HMUI::HMUI__InputFieldView__SelectionState const Selected;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::InputFieldView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13683))
// CS Name: HMUI.InputFieldView
class CORDL_TYPE InputFieldView : public UnityEngine::UI::Selectable {
public:
// Declarations
using _BlinkingCaretCoroutine_d__43 = HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43;

using InputFieldChanged = HMUI::HMUI__InputFieldView__InputFieldChanged;

using SelectionState = HMUI::HMUI__InputFieldView__SelectionState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x178};

virtual ~InputFieldView() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldView", modifiers: " const&", def_value: None }]
constexpr InputFieldView(InputFieldView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldView", modifiers: "&&", def_value: None }]
constexpr InputFieldView(InputFieldView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputFieldView(void* ptr) noexcept : UnityEngine::UI::Selectable(ptr) {
}


  constexpr InputFieldView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputFieldView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputFieldView& operator=(InputFieldView&& o) noexcept = default;
  constexpr InputFieldView& operator=(InputFieldView const& o) noexcept = default;
                


// Fields

/// @brief Field kBlinkingRate offset 0
static constexpr float_t  kBlinkingRate{0.4};

 TMPro::TextMeshProUGUI __declspec(property(get=__get__textView, put=__set__textView))  _textView;

constexpr void __set__textView(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__textView() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__textViewCanvasGroup, put=__set__textViewCanvasGroup))  _textViewCanvasGroup;

constexpr void __set__textViewCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__textViewCanvasGroup() const;

 HMUI::ImageView __declspec(property(get=__get__blinkingCaret, put=__set__blinkingCaret))  _blinkingCaret;

constexpr void __set__blinkingCaret(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__blinkingCaret() const;

 UnityEngine::GameObject __declspec(property(get=__get__placeholderText, put=__set__placeholderText))  _placeholderText;

constexpr void __set__placeholderText(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__placeholderText() const;

 UnityEngine::UI::Button __declspec(property(get=__get__clearSearchButton, put=__set__clearSearchButton))  _clearSearchButton;

constexpr void __set__clearSearchButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__clearSearchButton() const;

 bool __declspec(property(get=__get__useGlobalKeyboard, put=__set__useGlobalKeyboard))  _useGlobalKeyboard;

constexpr void __set__useGlobalKeyboard(bool value) ;

constexpr bool __get__useGlobalKeyboard() const;

 UnityEngine::Vector3 __declspec(property(get=__get__keyboardPositionOffset, put=__set__keyboardPositionOffset))  _keyboardPositionOffset;

constexpr void __set__keyboardPositionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__keyboardPositionOffset() const;

 bool __declspec(property(get=__get__useUppercase, put=__set__useUppercase))  _useUppercase;

constexpr void __set__useUppercase(bool value) ;

constexpr bool __get__useUppercase() const;

 int32_t __declspec(property(get=__get__textLengthLimit, put=__set__textLengthLimit))  _textLengthLimit;

constexpr void __set__textLengthLimit(int32_t value) ;

constexpr int32_t __get__textLengthLimit() const;

 float_t __declspec(property(get=__get__caretOffset, put=__set__caretOffset))  _caretOffset;

constexpr void __set__caretOffset(float_t value) ;

constexpr float_t __get__caretOffset() const;

 System::Action_1<HMUI::HMUI__InputFieldView__SelectionState> __declspec(property(get=__get_selectionStateDidChangeEvent, put=__set_selectionStateDidChangeEvent))  selectionStateDidChangeEvent;

constexpr void __set_selectionStateDidChangeEvent(System::Action_1<HMUI::HMUI__InputFieldView__SelectionState> value) ;

constexpr System::Action_1<HMUI::HMUI__InputFieldView__SelectionState> __get_selectionStateDidChangeEvent() const;

 HMUI::HMUI__InputFieldView__SelectionState __declspec(property(get=__get__selectionState, put=__set__selectionState))  _selectionState;

constexpr void __set__selectionState(HMUI::HMUI__InputFieldView__SelectionState value) ;

constexpr HMUI::HMUI__InputFieldView__SelectionState __get__selectionState() const;

 ::StringW __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::StringW value) ;

constexpr ::StringW __get__text() const;

 bool __declspec(property(get=__get__hasKeyboardAssigned, put=__set__hasKeyboardAssigned))  _hasKeyboardAssigned;

constexpr void __set__hasKeyboardAssigned(bool value) ;

constexpr bool __get__hasKeyboardAssigned() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;

 HMUI::HMUI__InputFieldView__InputFieldChanged __declspec(property(get=__get__onValueChanged, put=__set__onValueChanged))  _onValueChanged;

constexpr void __set__onValueChanged(HMUI::HMUI__InputFieldView__InputFieldChanged value) ;

constexpr HMUI::HMUI__InputFieldView__InputFieldChanged __get__onValueChanged() const;

 UnityEngine::YieldInstruction __declspec(property(get=__get__blinkWaitYieldInstruction, put=__set__blinkWaitYieldInstruction))  _blinkWaitYieldInstruction;

constexpr void __set__blinkWaitYieldInstruction(UnityEngine::YieldInstruction value) ;

constexpr UnityEngine::YieldInstruction __get__blinkWaitYieldInstruction() const;


// Properties

 HMUI::HMUI__InputFieldView__SelectionState __declspec(property(get=get_selectionState))  selectionState;

 UnityEngine::Vector3 __declspec(property(get=get_keyboardPositionOffset))  keyboardPositionOffset;

 HMUI::HMUI__InputFieldView__InputFieldChanged __declspec(property(get=get_onValueChanged, put=set_onValueChanged))  onValueChanged;

 bool __declspec(property(get=get_useGlobalKeyboard))  useGlobalKeyboard;

 ::StringW __declspec(property(get=get_text, put=set_text))  text;


// Methods

/// @brief Method get_selectionState addr 0x1fcd0d0 size 0x8 virtual false final false
 HMUI::HMUI__InputFieldView__SelectionState get_selectionState() ;

/// @brief Method get_keyboardPositionOffset addr 0x1fcd0d8 size 0x10 virtual false final false
 UnityEngine::Vector3 get_keyboardPositionOffset() ;

/// @brief Method add_selectionStateDidChangeEvent addr 0x1fcd0e8 size 0xb4 virtual false final false
 void add_selectionStateDidChangeEvent(System::Action_1<HMUI::HMUI__InputFieldView__SelectionState> value) ;

/// @brief Method remove_selectionStateDidChangeEvent addr 0x1fcd19c size 0xb4 virtual false final false
 void remove_selectionStateDidChangeEvent(System::Action_1<HMUI::HMUI__InputFieldView__SelectionState> value) ;

/// @brief Method get_onValueChanged addr 0x1fcd250 size 0x8 virtual false final false
 HMUI::HMUI__InputFieldView__InputFieldChanged get_onValueChanged() ;

/// @brief Method set_onValueChanged addr 0x1fcd258 size 0x8 virtual false final false
 void set_onValueChanged(HMUI::HMUI__InputFieldView__InputFieldChanged value) ;

/// @brief Method get_useGlobalKeyboard addr 0x1fcd260 size 0x8 virtual false final false
 bool get_useGlobalKeyboard() ;

/// @brief Method get_text addr 0x1fcd268 size 0x8 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x1fcd270 size 0x58 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method Awake addr 0x1fcd3e8 size 0xec virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x1fcd4d4 size 0x14 virtual true final false
 void OnDestroy() ;

/// @brief Method DoStateTransition addr 0x1fcd4e8 size 0x60 virtual true final false
 void DoStateTransition(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState state, bool instant) ;

/// @brief Method ActivateKeyboard addr 0x1fcd548 size 0x1cc virtual false final false
 void ActivateKeyboard(HMUI::UIKeyboard keyboard) ;

/// @brief Method DeactivateKeyboard addr 0x1fcd77c size 0x1a0 virtual false final false
 void DeactivateKeyboard(HMUI::UIKeyboard keyboard) ;

/// @brief Method SetText addr 0x1fcd950 size 0x18 virtual false final false
 void SetText(::StringW value) ;

/// @brief Method ClearInput addr 0x1fcd968 size 0x50 virtual false final false
 void ClearInput() ;

/// @brief Method KeyboardKeyPressed addr 0x1fcd9b8 size 0x128 virtual false final false
 void KeyboardKeyPressed(char16_t letter) ;

/// @brief Method KeyboardDeletePressed addr 0x1fcdae0 size 0xdc virtual false final false
 void KeyboardDeletePressed() ;

/// @brief Method BlinkingCaretCoroutine addr 0x1fcd714 size 0x68 virtual false final false
 System::Collections::IEnumerator BlinkingCaretCoroutine() ;

/// @brief Method UpdateCaretPosition addr 0x1fcd2c8 size 0xf0 virtual false final false
 void UpdateCaretPosition() ;

/// @brief Method UpdatePlaceholder addr 0x1fcd3b8 size 0x30 virtual false final false
 void UpdatePlaceholder() ;

/// @brief Method UpdateClearButton addr 0x1fcd91c size 0x34 virtual false final false
 void UpdateClearButton() ;

static HMUI::InputFieldView New_ctor() ;

/// @brief Method .ctor addr 0x1fcdbe4 size 0x138 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__34_0 addr 0x1fcdd64 size 0x88 virtual false final false
 void _Awake_b__34_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::InputFieldChanged
namespace HMUI {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 316 }), TypeDefinitionIndex(TypeDefinitionIndex(10401)), TypeDefinitionIndex(TypeDefinitionIndex(13683))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13681))
// CS Name: HMUI.InputFieldView::InputFieldChanged
class CORDL_TYPE HMUI__InputFieldView__InputFieldChanged : public UnityEngine::Events::UnityEvent_1<HMUI::InputFieldView> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMUI__InputFieldView__InputFieldChanged() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__InputFieldView__InputFieldChanged", modifiers: " const&", def_value: None }]
constexpr HMUI__InputFieldView__InputFieldChanged(HMUI__InputFieldView__InputFieldChanged const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__InputFieldView__InputFieldChanged", modifiers: "&&", def_value: None }]
constexpr HMUI__InputFieldView__InputFieldChanged(HMUI__InputFieldView__InputFieldChanged&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__InputFieldView__InputFieldChanged(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<HMUI::InputFieldView>(ptr) {
}


  constexpr HMUI__InputFieldView__InputFieldChanged& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__InputFieldView__InputFieldChanged& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__InputFieldView__InputFieldChanged& operator=(HMUI__InputFieldView__InputFieldChanged&& o) noexcept = default;
  constexpr HMUI__InputFieldView__InputFieldChanged& operator=(HMUI__InputFieldView__InputFieldChanged const& o) noexcept = default;
                


// Methods

static HMUI::HMUI__InputFieldView__InputFieldChanged New_ctor() ;

/// @brief Method .ctor addr 0x1fcdd1c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<BlinkingCaretCoroutine>d__43
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13682))
// CS Name: HMUI.InputFieldView::<BlinkingCaretCoroutine>d__43
class CORDL_TYPE HMUI__InputFieldView___BlinkingCaretCoroutine_d__43 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HMUI__InputFieldView___BlinkingCaretCoroutine_d__43() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__InputFieldView___BlinkingCaretCoroutine_d__43", modifiers: " const&", def_value: None }]
constexpr HMUI__InputFieldView___BlinkingCaretCoroutine_d__43(HMUI__InputFieldView___BlinkingCaretCoroutine_d__43 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__InputFieldView___BlinkingCaretCoroutine_d__43", modifiers: "&&", def_value: None }]
constexpr HMUI__InputFieldView___BlinkingCaretCoroutine_d__43(HMUI__InputFieldView___BlinkingCaretCoroutine_d__43&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__InputFieldView___BlinkingCaretCoroutine_d__43(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__InputFieldView___BlinkingCaretCoroutine_d__43& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__InputFieldView___BlinkingCaretCoroutine_d__43& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__InputFieldView___BlinkingCaretCoroutine_d__43& operator=(HMUI__InputFieldView___BlinkingCaretCoroutine_d__43&& o) noexcept = default;
  constexpr HMUI__InputFieldView___BlinkingCaretCoroutine_d__43& operator=(HMUI__InputFieldView___BlinkingCaretCoroutine_d__43 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::InputFieldView __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::InputFieldView value) ;

constexpr HMUI::InputFieldView __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fcdbbc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fcddec size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fcddf0 size 0x8c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fcde7c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fcde84 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fcdec4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__InputFieldView__SelectionState, "HMUI", "InputFieldView/SelectionState");
NEED_NO_BOX(HMUI::HMUI__InputFieldView__InputFieldChanged);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__InputFieldView__InputFieldChanged, "HMUI", "InputFieldView/InputFieldChanged");
NEED_NO_BOX(HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43, "HMUI", "InputFieldView/<BlinkingCaretCoroutine>d__43");
NEED_NO_BOX(HMUI::InputFieldView);
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldView, "HMUI", "InputFieldView");
