#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include <cstddef>
#include <cstdint>
namespace HMUI {
struct HMUI__NoTransitionsButton__SelectionState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Selectable__SelectionState;
}
// Forward declare root types
namespace HMUI {
struct HMUI__NoTransitionsButton__SelectionState;
}
namespace HMUI {
class NoTransitionsButton;
}
// Type: ::SelectionState
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13673))
// CS Name: HMUI.NoTransitionsButton::SelectionState
struct CORDL_TYPE HMUI__NoTransitionsButton__SelectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__NoTransitionsButton__SelectionState(int32_t value__) noexcept;


                    constexpr HMUI__NoTransitionsButton__SelectionState(HMUI__NoTransitionsButton__SelectionState const&) = default;
                    constexpr HMUI__NoTransitionsButton__SelectionState(HMUI__NoTransitionsButton__SelectionState&&) = default;
                    constexpr HMUI__NoTransitionsButton__SelectionState& operator=(HMUI__NoTransitionsButton__SelectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__NoTransitionsButton__SelectionState& operator=(HMUI__NoTransitionsButton__SelectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__NoTransitionsButton__SelectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__NoTransitionsButton__SelectionState_Unwrapped : int32_t {
__Normal = 0,
__Highlighted = 1,
__Pressed = 2,
__Disabled = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__NoTransitionsButton__SelectionState_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__NoTransitionsButton__SelectionState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static HMUI::HMUI__NoTransitionsButton__SelectionState const Normal;

/// @brief Field Highlighted offset 0
static HMUI::HMUI__NoTransitionsButton__SelectionState const Highlighted;

/// @brief Field Pressed offset 0
static HMUI::HMUI__NoTransitionsButton__SelectionState const Pressed;

/// @brief Field Disabled offset 0
static HMUI::HMUI__NoTransitionsButton__SelectionState const Disabled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::NoTransitionsButton
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12958))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13674))
// CS Name: HMUI.NoTransitionsButton
class CORDL_TYPE NoTransitionsButton : public UnityEngine::UI::Button {
public:
// Declarations
using SelectionState = HMUI::HMUI__NoTransitionsButton__SelectionState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x110};

virtual ~NoTransitionsButton() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionsButton", modifiers: " const&", def_value: None }]
constexpr NoTransitionsButton(NoTransitionsButton const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionsButton", modifiers: "&&", def_value: None }]
constexpr NoTransitionsButton(NoTransitionsButton&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoTransitionsButton(void* ptr) noexcept : UnityEngine::UI::Button(ptr) {
}


  constexpr NoTransitionsButton& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoTransitionsButton& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoTransitionsButton& operator=(NoTransitionsButton&& o) noexcept = default;
  constexpr NoTransitionsButton& operator=(NoTransitionsButton const& o) noexcept = default;
                


// Fields

 System::Action_1<HMUI::HMUI__NoTransitionsButton__SelectionState> __declspec(property(get=__get_selectionStateDidChangeEvent, put=__set_selectionStateDidChangeEvent))  selectionStateDidChangeEvent;

constexpr void __set_selectionStateDidChangeEvent(System::Action_1<HMUI::HMUI__NoTransitionsButton__SelectionState> value) ;

constexpr System::Action_1<HMUI::HMUI__NoTransitionsButton__SelectionState> __get_selectionStateDidChangeEvent() const;

 HMUI::HMUI__NoTransitionsButton__SelectionState __declspec(property(get=__get__selectionState, put=__set__selectionState))  _selectionState;

constexpr void __set__selectionState(HMUI::HMUI__NoTransitionsButton__SelectionState value) ;

constexpr HMUI::HMUI__NoTransitionsButton__SelectionState __get__selectionState() const;


// Properties

 HMUI::HMUI__NoTransitionsButton__SelectionState __declspec(property(get=get_selectionState))  selectionState;


// Methods

/// @brief Method get_selectionState addr 0x1fbd25c size 0x8 virtual false final false
 HMUI::HMUI__NoTransitionsButton__SelectionState get_selectionState() ;

/// @brief Method add_selectionStateDidChangeEvent addr 0x1fbca80 size 0xb4 virtual false final false
 void add_selectionStateDidChangeEvent(System::Action_1<HMUI::HMUI__NoTransitionsButton__SelectionState> value) ;

/// @brief Method remove_selectionStateDidChangeEvent addr 0x1fbcc68 size 0xb4 virtual false final false
 void remove_selectionStateDidChangeEvent(System::Action_1<HMUI::HMUI__NoTransitionsButton__SelectionState> value) ;

/// @brief Method DoStateTransition addr 0x1fbd264 size 0x40 virtual true final false
 void DoStateTransition(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState state, bool instant) ;

static HMUI::NoTransitionsButton New_ctor() ;

/// @brief Method .ctor addr 0x1fbd2a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__NoTransitionsButton__SelectionState, "HMUI", "NoTransitionsButton/SelectionState");
NEED_NO_BOX(HMUI::NoTransitionsButton);
DEFINE_IL2CPP_ARG_TYPE(HMUI::NoTransitionsButton, "HMUI", "NoTransitionsButton");
