#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace HMUI {
struct HMUI__KeyboardBinder__KeyBindingType;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Tuple_3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace HMUI {
struct HMUI__KeyboardBinder__KeyBindingType;
}
namespace HMUI {
class KeyboardBinder;
}
// Type: ::KeyBindingType
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13570))
// CS Name: HMUI.KeyboardBinder::KeyBindingType
struct CORDL_TYPE HMUI__KeyboardBinder__KeyBindingType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__KeyboardBinder__KeyBindingType(int32_t value__) noexcept;


                    constexpr HMUI__KeyboardBinder__KeyBindingType(HMUI__KeyboardBinder__KeyBindingType const&) = default;
                    constexpr HMUI__KeyboardBinder__KeyBindingType(HMUI__KeyboardBinder__KeyBindingType&&) = default;
                    constexpr HMUI__KeyboardBinder__KeyBindingType& operator=(HMUI__KeyboardBinder__KeyBindingType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__KeyboardBinder__KeyBindingType& operator=(HMUI__KeyboardBinder__KeyBindingType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__KeyboardBinder__KeyBindingType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__KeyboardBinder__KeyBindingType_Unwrapped : int32_t {
__KeyDown = 0,
__KeyUp = 1,
__KeyPress = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__KeyboardBinder__KeyBindingType_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__KeyboardBinder__KeyBindingType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field KeyDown offset 0
static HMUI::HMUI__KeyboardBinder__KeyBindingType const KeyDown;

/// @brief Field KeyUp offset 0
static HMUI::HMUI__KeyboardBinder__KeyBindingType const KeyUp;

/// @brief Field KeyPress offset 0
static HMUI::HMUI__KeyboardBinder__KeyBindingType const KeyPress;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::KeyboardBinder
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13571))
// CS Name: HMUI.KeyboardBinder
class CORDL_TYPE KeyboardBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using KeyBindingType = HMUI::HMUI__KeyboardBinder__KeyBindingType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KeyboardBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardBinder", modifiers: " const&", def_value: None }]
constexpr KeyboardBinder(KeyboardBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardBinder", modifiers: "&&", def_value: None }]
constexpr KeyboardBinder(KeyboardBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyboardBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeyboardBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyboardBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyboardBinder& operator=(KeyboardBinder&& o) noexcept = default;
  constexpr KeyboardBinder& operator=(KeyboardBinder const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__enabled_k__BackingField, put=__set__enabled_k__BackingField))  _enabled_k__BackingField;

constexpr void __set__enabled_k__BackingField(bool value) ;

constexpr bool __get__enabled_k__BackingField() const;

 System::Collections::Generic::List_1<System::Tuple_3<UnityEngine::KeyCode,HMUI::HMUI__KeyboardBinder__KeyBindingType,UnityEngine::Events::UnityAction_1<bool>>> __declspec(property(get=__get__bindings, put=__set__bindings))  _bindings;

constexpr void __set__bindings(System::Collections::Generic::List_1<System::Tuple_3<UnityEngine::KeyCode,HMUI::HMUI__KeyboardBinder__KeyBindingType,UnityEngine::Events::UnityAction_1<bool>>> value) ;

constexpr System::Collections::Generic::List_1<System::Tuple_3<UnityEngine::KeyCode,HMUI::HMUI__KeyboardBinder__KeyBindingType,UnityEngine::Events::UnityAction_1<bool>>> __get__bindings() const;


// Properties

 bool __declspec(property(get=get_enabled, put=set_enabled))  enabled;


// Methods

/// @brief Method get_enabled addr 0x1fa6abc size 0x8 virtual false final false
 bool get_enabled() ;

/// @brief Method set_enabled addr 0x1fa6ac4 size 0xc virtual false final false
 void set_enabled(bool value) ;

static HMUI::KeyboardBinder New_ctor() ;

/// @brief Method .ctor addr 0x1fa6ad0 size 0x1c virtual false final false
 void _ctor() ;

static HMUI::KeyboardBinder New_ctor(UnityEngine::KeyCode keycode, HMUI::HMUI__KeyboardBinder__KeyBindingType keyBindingType, System::Action_1<bool> action) ;

/// @brief Method .ctor addr 0x1fa6b68 size 0x4c virtual false final false
 void _ctor(UnityEngine::KeyCode keycode, HMUI::HMUI__KeyboardBinder__KeyBindingType keyBindingType, System::Action_1<bool> action) ;

static HMUI::KeyboardBinder New_ctor(System::Collections::Generic::List_1<System::Tuple_3<UnityEngine::KeyCode,HMUI::HMUI__KeyboardBinder__KeyBindingType,System::Action_1<bool>>> bindingData) ;

/// @brief Method .ctor addr 0x1fa6d14 size 0x34 virtual false final false
 void _ctor(System::Collections::Generic::List_1<System::Tuple_3<UnityEngine::KeyCode,HMUI::HMUI__KeyboardBinder__KeyBindingType,System::Action_1<bool>>> bindingData) ;

/// @brief Method Init addr 0x1fa6aec size 0x7c virtual false final false
 void Init() ;

/// @brief Method AddBindings addr 0x1fa6d48 size 0x174 virtual false final false
 void AddBindings(System::Collections::Generic::List_1<System::Tuple_3<UnityEngine::KeyCode,HMUI::HMUI__KeyboardBinder__KeyBindingType,System::Action_1<bool>>> bindingData) ;

/// @brief Method AddBinding addr 0x1fa6bb4 size 0x160 virtual false final false
 void AddBinding(UnityEngine::KeyCode keyCode, HMUI::HMUI__KeyboardBinder__KeyBindingType keyBindingType, System::Action_1<bool> action) ;

/// @brief Method ClearBindings addr 0x1fa6ebc size 0x6c virtual false final false
 void ClearBindings() ;

/// @brief Method ManualUpdate addr 0x1fa6f28 size 0x12c virtual false final false
 void ManualUpdate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__KeyboardBinder__KeyBindingType, "HMUI", "KeyboardBinder/KeyBindingType");
NEED_NO_BOX(HMUI::KeyboardBinder);
DEFINE_IL2CPP_ARG_TYPE(HMUI::KeyboardBinder, "HMUI", "KeyboardBinder");
