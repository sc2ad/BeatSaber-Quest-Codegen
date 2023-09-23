#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UI {
struct UnityEngine__UI__Selectable__SelectionState;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace HMUI {
struct HMUI__ToggleWithCallbacks__SelectionState;
}
namespace HMUI {
class ToggleWithCallbacks;
}
// Type: ::SelectionState
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13722))
// CS Name: HMUI.ToggleWithCallbacks::SelectionState
struct CORDL_TYPE HMUI__ToggleWithCallbacks__SelectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__ToggleWithCallbacks__SelectionState(int32_t value__) noexcept;


                    constexpr HMUI__ToggleWithCallbacks__SelectionState(HMUI__ToggleWithCallbacks__SelectionState const&) = default;
                    constexpr HMUI__ToggleWithCallbacks__SelectionState(HMUI__ToggleWithCallbacks__SelectionState&&) = default;
                    constexpr HMUI__ToggleWithCallbacks__SelectionState& operator=(HMUI__ToggleWithCallbacks__SelectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__ToggleWithCallbacks__SelectionState& operator=(HMUI__ToggleWithCallbacks__SelectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__ToggleWithCallbacks__SelectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__ToggleWithCallbacks__SelectionState_Unwrapped : int32_t {
__Normal = 0,
__Highlighted = 1,
__Pressed = 2,
__Selected = 3,
__Disabled = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__ToggleWithCallbacks__SelectionState_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__ToggleWithCallbacks__SelectionState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static HMUI::HMUI__ToggleWithCallbacks__SelectionState const Normal;

/// @brief Field Highlighted offset 0
static HMUI::HMUI__ToggleWithCallbacks__SelectionState const Highlighted;

/// @brief Field Pressed offset 0
static HMUI::HMUI__ToggleWithCallbacks__SelectionState const Pressed;

/// @brief Field Selected offset 0
static HMUI::HMUI__ToggleWithCallbacks__SelectionState const Selected;

/// @brief Field Disabled offset 0
static HMUI::HMUI__ToggleWithCallbacks__SelectionState const Disabled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::ToggleWithCallbacks
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13070))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13723))
// CS Name: HMUI.ToggleWithCallbacks
class CORDL_TYPE ToggleWithCallbacks : public UnityEngine::UI::Toggle {
public:
// Declarations
using SelectionState = HMUI::HMUI__ToggleWithCallbacks__SelectionState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~ToggleWithCallbacks() = default;

// Ctor Parameters [CppParam { name: "", ty: "ToggleWithCallbacks", modifiers: " const&", def_value: None }]
constexpr ToggleWithCallbacks(ToggleWithCallbacks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ToggleWithCallbacks", modifiers: "&&", def_value: None }]
constexpr ToggleWithCallbacks(ToggleWithCallbacks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ToggleWithCallbacks(void* ptr) noexcept : UnityEngine::UI::Toggle(ptr) {
}


  constexpr ToggleWithCallbacks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ToggleWithCallbacks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ToggleWithCallbacks& operator=(ToggleWithCallbacks&& o) noexcept = default;
  constexpr ToggleWithCallbacks& operator=(ToggleWithCallbacks const& o) noexcept = default;
                


// Fields

 System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState> __declspec(property(get=__get_stateDidChangeEvent, put=__set_stateDidChangeEvent))  stateDidChangeEvent;

constexpr void __set_stateDidChangeEvent(System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState> value) ;

constexpr System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState> __get_stateDidChangeEvent() const;


// Properties

 HMUI::HMUI__ToggleWithCallbacks__SelectionState __declspec(property(get=get_selectionState))  selectionState;


// Methods

/// @brief Method add_stateDidChangeEvent addr 0x1fd335c size 0xb4 virtual false final false
 void add_stateDidChangeEvent(System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState> value) ;

/// @brief Method remove_stateDidChangeEvent addr 0x1fd3640 size 0xb4 virtual false final false
 void remove_stateDidChangeEvent(System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState> value) ;

/// @brief Method get_selectionState addr 0x1fd36fc size 0x54 virtual false final false
 HMUI::HMUI__ToggleWithCallbacks__SelectionState get_selectionState() ;

/// @brief Method DoStateTransition addr 0x1fd7240 size 0x4c virtual true final false
 void DoStateTransition(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState state, bool instant) ;

// Ctor Parameters []
explicit ToggleWithCallbacks() ;

/// @brief Method .ctor addr 0x1fd728c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ToggleWithCallbacks__SelectionState, "HMUI", "ToggleWithCallbacks/SelectionState");
NEED_NO_BOX(HMUI::ToggleWithCallbacks);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ToggleWithCallbacks, "HMUI", "ToggleWithCallbacks");
