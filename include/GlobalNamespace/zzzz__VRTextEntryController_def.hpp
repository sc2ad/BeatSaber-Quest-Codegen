#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class UIKeyboard;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class VRTextEntryController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23;
}
// Type: ::<BlinkCursor>d__23
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5570))
// CS Name: VRTextEntryController::<BlinkCursor>d__23
class CORDL_TYPE ____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23(____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23(____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23& operator=(____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23&& o) noexcept = default;
  constexpr ____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23& operator=(____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::VRTextEntryController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::VRTextEntryController value) ;

constexpr ::GlobalNamespace::VRTextEntryController __get___4__this() const;

 ::UnityEngine::Color __declspec(property(get=__get__cursorColor_5__2, put=__set__cursorColor_5__2))  _cursorColor_5__2;

constexpr void __set__cursorColor_5__2(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__cursorColor_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23(int32_t __1__state) ;

/// @brief Method .ctor addr 0x212e740 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x212e9e0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x212e9e4 size 0x160 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x212eb44 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x212eb4c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x212eb8c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VRTextEntryController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5571))
// CS Name: VRTextEntryController
class CORDL_TYPE VRTextEntryController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _BlinkCursor_d__23 = ::GlobalNamespace::____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~VRTextEntryController() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRTextEntryController", modifiers: " const&", def_value: None }]
constexpr VRTextEntryController(VRTextEntryController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRTextEntryController", modifiers: "&&", def_value: None }]
constexpr VRTextEntryController(VRTextEntryController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRTextEntryController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRTextEntryController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRTextEntryController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRTextEntryController& operator=(VRTextEntryController&& o) noexcept = default;
  constexpr VRTextEntryController& operator=(VRTextEntryController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::UIKeyboard __declspec(property(get=__get__uiKeyboard, put=__set__uiKeyboard))  _uiKeyboard;

constexpr void __set__uiKeyboard(::GlobalNamespace::UIKeyboard value) ;

constexpr ::GlobalNamespace::UIKeyboard __get__uiKeyboard() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__text() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__cursorText, put=__set__cursorText))  _cursorText;

constexpr void __set__cursorText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__cursorText() const;

 int32_t __declspec(property(get=__get__maxLength, put=__set__maxLength))  _maxLength;

constexpr void __set__maxLength(int32_t value) ;

constexpr int32_t __get__maxLength() const;

 bool __declspec(property(get=__get__allowBlank, put=__set__allowBlank))  _allowBlank;

constexpr void __set__allowBlank(bool value) ;

constexpr bool __get__allowBlank() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_textDidChangeEvent, put=__set_textDidChangeEvent))  textDidChangeEvent;

constexpr void __set_textDidChangeEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_textDidChangeEvent() const;

 ::System::Action __declspec(property(get=__get_okButtonWasPressedEvent, put=__set_okButtonWasPressedEvent))  okButtonWasPressedEvent;

constexpr void __set_okButtonWasPressedEvent(::System::Action value) ;

constexpr ::System::Action __get_okButtonWasPressedEvent() const;

 ::System::Action __declspec(property(get=__get_cancelButtonWasPressedEvent, put=__set_cancelButtonWasPressedEvent))  cancelButtonWasPressedEvent;

constexpr void __set_cancelButtonWasPressedEvent(::System::Action value) ;

constexpr ::System::Action __get_cancelButtonWasPressedEvent() const;

 bool __declspec(property(get=__get__stopBlinkingCursor, put=__set__stopBlinkingCursor))  _stopBlinkingCursor;

constexpr void __set__stopBlinkingCursor(bool value) ;

constexpr bool __get__stopBlinkingCursor() const;


// Properties

 bool __declspec(property(put=set_hideCancelButton))  hideCancelButton;

 ::StringW __declspec(property(get=get_text, put=set_text))  text;


// Methods

/// @brief Method add_textDidChangeEvent addr 0x212e058 size 0xb0 virtual false final false
 void add_textDidChangeEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_textDidChangeEvent addr 0x212e108 size 0xb0 virtual false final false
 void remove_textDidChangeEvent(::System::Action_1<::StringW> value) ;

/// @brief Method add_okButtonWasPressedEvent addr 0x212e1b8 size 0x9c virtual false final false
 void add_okButtonWasPressedEvent(::System::Action value) ;

/// @brief Method remove_okButtonWasPressedEvent addr 0x212e254 size 0x9c virtual false final false
 void remove_okButtonWasPressedEvent(::System::Action value) ;

/// @brief Method add_cancelButtonWasPressedEvent addr 0x212e2f0 size 0x9c virtual false final false
 void add_cancelButtonWasPressedEvent(::System::Action value) ;

/// @brief Method remove_cancelButtonWasPressedEvent addr 0x212e38c size 0x9c virtual false final false
 void remove_cancelButtonWasPressedEvent(::System::Action value) ;

/// @brief Method set_hideCancelButton addr 0x212e428 size 0x1c virtual false final false
 void set_hideCancelButton(bool value) ;

/// @brief Method get_text addr 0x212e444 size 0x24 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x212e468 size 0xb4 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method Awake addr 0x212e51c size 0x18c virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x212e6a8 size 0x24 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x212e734 size 0xc virtual false final false
 void OnDisable() ;

/// @brief Method BlinkCursor addr 0x212e6cc size 0x68 virtual false final false
 ::System::Collections::IEnumerator BlinkCursor() ;

/// @brief Method HandleUIKeyboardTextKeyWasPressed addr 0x212e768 size 0xfc virtual false final false
 void HandleUIKeyboardTextKeyWasPressed(char16_t key) ;

/// @brief Method HandleUIKeyboardDeleteButtonWasPressed addr 0x212e864 size 0x134 virtual false final false
 void HandleUIKeyboardDeleteButtonWasPressed() ;

// Ctor Parameters []
explicit VRTextEntryController() ;

/// @brief Method .ctor addr 0x212e998 size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__20_0 addr 0x212e9a8 size 0x1c virtual false final false
 void _Awake_b__20_0() ;

/// @brief Method <Awake>b__20_1 addr 0x212e9c4 size 0x1c virtual false final false
 void _Awake_b__20_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::VRTextEntryController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRTextEntryController, "", "VRTextEntryController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__VRTextEntryController___BlinkCursor_d__23, "", "VRTextEntryController/<BlinkCursor>d__23");
