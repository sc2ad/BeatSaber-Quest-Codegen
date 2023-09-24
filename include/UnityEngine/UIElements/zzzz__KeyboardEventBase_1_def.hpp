#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine::UIElements {
class IKeyboardEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class KeyboardEventBase_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class KeyboardEventBase_1<T>;
}
// Type: UnityEngine.UIElements::KeyboardEventBase`1
// Type: UnityEngine.UIElements::KeyboardEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7339)), TypeDefinitionIndex(TypeDefinitionIndex(7279)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1630 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7339), inst: 2 })
// CS Name: UnityEngine.UIElements.KeyboardEventBase`1
class CORDL_TYPE KeyboardEventBase_1<T> : public UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IKeyboardEvent
constexpr operator  UnityEngine::UIElements::IKeyboardEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~KeyboardEventBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardEventBase_1", modifiers: " const&", def_value: None }]
constexpr KeyboardEventBase_1(KeyboardEventBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardEventBase_1", modifiers: "&&", def_value: None }]
constexpr KeyboardEventBase_1(KeyboardEventBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyboardEventBase_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<T>(ptr) {
}


  constexpr KeyboardEventBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyboardEventBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyboardEventBase_1& operator=(KeyboardEventBase_1&& o) noexcept = default;
  constexpr KeyboardEventBase_1& operator=(KeyboardEventBase_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::EventModifiers __declspec(property(get=__get__modifiers_k__BackingField, put=__set__modifiers_k__BackingField))  _modifiers_k__BackingField;

constexpr void __set__modifiers_k__BackingField(UnityEngine::EventModifiers value) ;

constexpr UnityEngine::EventModifiers __get__modifiers_k__BackingField() const;

 char16_t __declspec(property(get=__get__character_k__BackingField, put=__set__character_k__BackingField))  _character_k__BackingField;

constexpr void __set__character_k__BackingField(char16_t value) ;

constexpr char16_t __get__character_k__BackingField() const;

 UnityEngine::KeyCode __declspec(property(get=__get__keyCode_k__BackingField, put=__set__keyCode_k__BackingField))  _keyCode_k__BackingField;

constexpr void __set__keyCode_k__BackingField(UnityEngine::KeyCode value) ;

constexpr UnityEngine::KeyCode __get__keyCode_k__BackingField() const;


// Properties

 UnityEngine::EventModifiers __declspec(property(get=get_modifiers, put=set_modifiers))  modifiers;

 char16_t __declspec(property(get=get_character, put=set_character))  character;

 UnityEngine::KeyCode __declspec(property(get=get_keyCode, put=set_keyCode))  keyCode;

 bool __declspec(property(get=get_shiftKey))  shiftKey;

 bool __declspec(property(get=get_ctrlKey))  ctrlKey;

 bool __declspec(property(get=get_commandKey))  commandKey;

 bool __declspec(property(get=get_altKey))  altKey;

 bool __declspec(property(get=get_actionKey))  actionKey;


// Methods

/// @brief Method get_modifiers addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method set_modifiers addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_modifiers(UnityEngine::EventModifiers value) ;

/// @brief Method get_character addr 0x0 size 0xffffffffffffffff virtual true final true
 char16_t get_character() ;

/// @brief Method set_character addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_character(char16_t value) ;

/// @brief Method get_keyCode addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::KeyCode get_keyCode() ;

/// @brief Method set_keyCode addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_keyCode(UnityEngine::KeyCode value) ;

/// @brief Method get_shiftKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_shiftKey() ;

/// @brief Method get_ctrlKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_ctrlKey() ;

/// @brief Method get_commandKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_commandKey() ;

/// @brief Method get_altKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_altKey() ;

/// @brief Method get_actionKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_actionKey() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(char16_t c, UnityEngine::KeyCode keyCode, UnityEngine::EventModifiers modifiers) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(UnityEngine::Event systemEvent) ;

static UnityEngine::UIElements::KeyboardEventBase_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::KeyboardEventBase_1, "UnityEngine.UIElements", "KeyboardEventBase`1");
