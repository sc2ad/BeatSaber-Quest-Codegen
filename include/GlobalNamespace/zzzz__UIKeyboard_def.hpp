#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class TextMeshProButton;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__UIKeyboard____c__DisplayClass21_0;
}
namespace GlobalNamespace {
class UIKeyboard;
}
// Type: ::<>c__DisplayClass21_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5567))
// CS Name: UIKeyboard::<>c__DisplayClass21_0
class CORDL_TYPE GlobalNamespace__UIKeyboard____c__DisplayClass21_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__UIKeyboard____c__DisplayClass21_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__UIKeyboard____c__DisplayClass21_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__UIKeyboard____c__DisplayClass21_0(GlobalNamespace__UIKeyboard____c__DisplayClass21_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__UIKeyboard____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__UIKeyboard____c__DisplayClass21_0(GlobalNamespace__UIKeyboard____c__DisplayClass21_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__UIKeyboard____c__DisplayClass21_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__UIKeyboard____c__DisplayClass21_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__UIKeyboard____c__DisplayClass21_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__UIKeyboard____c__DisplayClass21_0& operator=(GlobalNamespace__UIKeyboard____c__DisplayClass21_0&& o) noexcept = default;
  constexpr GlobalNamespace__UIKeyboard____c__DisplayClass21_0& operator=(GlobalNamespace__UIKeyboard____c__DisplayClass21_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::StringW value) ;

constexpr ::StringW __get_key() const;

 GlobalNamespace::UIKeyboard __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::UIKeyboard value) ;

constexpr GlobalNamespace::UIKeyboard __get___4__this() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__UIKeyboard____c__DisplayClass21_0() ;

/// @brief Method .ctor addr 0x212d6a4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__4 addr 0x212d738 size 0x50 virtual false final false
 void _Awake_b__4() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UIKeyboard
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5568))
// CS Name: UIKeyboard
class CORDL_TYPE UIKeyboard : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass21_0 = GlobalNamespace::GlobalNamespace__UIKeyboard____c__DisplayClass21_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~UIKeyboard() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIKeyboard", modifiers: " const&", def_value: None }]
constexpr UIKeyboard(UIKeyboard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIKeyboard", modifiers: "&&", def_value: None }]
constexpr UIKeyboard(UIKeyboard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIKeyboard(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
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

 GlobalNamespace::TextMeshProButton __declspec(property(get=__get__keyButtonPrefab, put=__set__keyButtonPrefab))  _keyButtonPrefab;

constexpr void __set__keyButtonPrefab(GlobalNamespace::TextMeshProButton value) ;

constexpr GlobalNamespace::TextMeshProButton __get__keyButtonPrefab() const;

 System::Action_1<char16_t> __declspec(property(get=__get_textKeyWasPressedEvent, put=__set_textKeyWasPressedEvent))  textKeyWasPressedEvent;

constexpr void __set_textKeyWasPressedEvent(System::Action_1<char16_t> value) ;

constexpr System::Action_1<char16_t> __get_textKeyWasPressedEvent() const;

 System::Action __declspec(property(get=__get_deleteButtonWasPressedEvent, put=__set_deleteButtonWasPressedEvent))  deleteButtonWasPressedEvent;

constexpr void __set_deleteButtonWasPressedEvent(System::Action value) ;

constexpr System::Action __get_deleteButtonWasPressedEvent() const;

 System::Action __declspec(property(get=__get_okButtonWasPressedEvent, put=__set_okButtonWasPressedEvent))  okButtonWasPressedEvent;

constexpr void __set_okButtonWasPressedEvent(System::Action value) ;

constexpr System::Action __get_okButtonWasPressedEvent() const;

 System::Action __declspec(property(get=__get_cancelButtonWasPressedEvent, put=__set_cancelButtonWasPressedEvent))  cancelButtonWasPressedEvent;

constexpr void __set_cancelButtonWasPressedEvent(System::Action value) ;

constexpr System::Action __get_cancelButtonWasPressedEvent() const;

 UnityEngine::UI::Button __declspec(property(get=__get__okButton, put=__set__okButton))  _okButton;

constexpr void __set__okButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__okButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__cancelButton, put=__set__cancelButton))  _cancelButton;

constexpr void __set__cancelButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__cancelButton() const;

 bool __declspec(property(get=__get__okButtonInteractivity, put=__set__okButtonInteractivity))  _okButtonInteractivity;

constexpr void __set__okButtonInteractivity(bool value) ;

constexpr bool __get__okButtonInteractivity() const;

 bool __declspec(property(get=__get__hideCancelButton, put=__set__hideCancelButton))  _hideCancelButton;

constexpr void __set__hideCancelButton(bool value) ;

constexpr bool __get__hideCancelButton() const;


// Properties

 bool __declspec(property(put=set_enableOkButtonInteractivity))  enableOkButtonInteractivity;

 bool __declspec(property(put=set_hideCancelButton))  hideCancelButton;


// Methods

/// @brief Method add_textKeyWasPressedEvent addr 0x212c2fc size 0xb0 virtual false final false
 void add_textKeyWasPressedEvent(System::Action_1<char16_t> value) ;

/// @brief Method remove_textKeyWasPressedEvent addr 0x212c3ac size 0xb0 virtual false final false
 void remove_textKeyWasPressedEvent(System::Action_1<char16_t> value) ;

/// @brief Method add_deleteButtonWasPressedEvent addr 0x212c45c size 0x9c virtual false final false
 void add_deleteButtonWasPressedEvent(System::Action value) ;

/// @brief Method remove_deleteButtonWasPressedEvent addr 0x212c4f8 size 0x9c virtual false final false
 void remove_deleteButtonWasPressedEvent(System::Action value) ;

/// @brief Method add_okButtonWasPressedEvent addr 0x212c594 size 0x9c virtual false final false
 void add_okButtonWasPressedEvent(System::Action value) ;

/// @brief Method remove_okButtonWasPressedEvent addr 0x212c630 size 0x9c virtual false final false
 void remove_okButtonWasPressedEvent(System::Action value) ;

/// @brief Method add_cancelButtonWasPressedEvent addr 0x212c6cc size 0x9c virtual false final false
 void add_cancelButtonWasPressedEvent(System::Action value) ;

/// @brief Method remove_cancelButtonWasPressedEvent addr 0x212c768 size 0x9c virtual false final false
 void remove_cancelButtonWasPressedEvent(System::Action value) ;

/// @brief Method set_enableOkButtonInteractivity addr 0x212c804 size 0xa0 virtual false final false
 void set_enableOkButtonInteractivity(bool value) ;

/// @brief Method set_hideCancelButton addr 0x212c8a4 size 0xb0 virtual false final false
 void set_hideCancelButton(bool value) ;

/// @brief Method Awake addr 0x212c954 size 0xd50 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit UIKeyboard() ;

/// @brief Method .ctor addr 0x212d6ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__21_0 addr 0x212d6b4 size 0x1c virtual false final false
 void _Awake_b__21_0() ;

/// @brief Method <Awake>b__21_1 addr 0x212d6d0 size 0x24 virtual false final false
 void _Awake_b__21_1() ;

/// @brief Method <Awake>b__21_2 addr 0x212d6f4 size 0x24 virtual false final false
 void _Awake_b__21_2() ;

/// @brief Method <Awake>b__21_3 addr 0x212d718 size 0x20 virtual false final false
 void _Awake_b__21_3() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__UIKeyboard____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__UIKeyboard____c__DisplayClass21_0, "", "UIKeyboard/<>c__DisplayClass21_0");
NEED_NO_BOX(GlobalNamespace::UIKeyboard);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UIKeyboard, "", "UIKeyboard");
