#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
namespace {
namespace HMUI {
struct UISelectionState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UI {
struct ____UnityEngine__UI__Selectable__SelectionState;
}
// Forward declare root types
namespace HMUI {
class NoTransitionsToggle;
}
// Type: HMUI::NoTransitionsToggle
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13070))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13688))
// CS Name: HMUI.NoTransitionsToggle
class CORDL_TYPE NoTransitionsToggle : public ::UnityEngine::UI::Toggle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x130};

virtual ~NoTransitionsToggle() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionsToggle", modifiers: " const&", def_value: None }]
constexpr NoTransitionsToggle(NoTransitionsToggle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionsToggle", modifiers: "&&", def_value: None }]
constexpr NoTransitionsToggle(NoTransitionsToggle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoTransitionsToggle(void* ptr) noexcept : ::UnityEngine::UI::Toggle(ptr) {
}


  constexpr NoTransitionsToggle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoTransitionsToggle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoTransitionsToggle& operator=(NoTransitionsToggle&& o) noexcept = default;
  constexpr NoTransitionsToggle& operator=(NoTransitionsToggle const& o) noexcept = default;
                


// Fields

 ::System::Action_1<::HMUI::UISelectionState> __declspec(property(get=__get_selectionStateDidChangeEvent, put=__set_selectionStateDidChangeEvent))  selectionStateDidChangeEvent;

constexpr void __set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState> value) ;

constexpr ::System::Action_1<::HMUI::UISelectionState> __get_selectionStateDidChangeEvent() const;

 ::HMUI::UISelectionState __declspec(property(get=__get__selectionState, put=__set__selectionState))  _selectionState;

constexpr void __set__selectionState(::HMUI::UISelectionState value) ;

constexpr ::HMUI::UISelectionState __get__selectionState() const;


// Properties

 ::HMUI::UISelectionState __declspec(property(get=get_selectionState))  selectionState;


// Methods

/// @brief Method get_selectionState addr 0x1fcf2bc size 0x8 virtual false final false
 ::HMUI::UISelectionState get_selectionState() ;

/// @brief Method add_selectionStateDidChangeEvent addr 0x1fcf2c4 size 0xb4 virtual false final false
 void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState> value) ;

/// @brief Method remove_selectionStateDidChangeEvent addr 0x1fcf378 size 0xb4 virtual false final false
 void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState> value) ;

/// @brief Method Start addr 0x1fcf42c size 0xac virtual true final false
 void Start() ;

/// @brief Method DoStateTransition addr 0x1fcf4d8 size 0x54 virtual true final false
 void DoStateTransition(::UnityEngine::UI::____UnityEngine__UI__Selectable__SelectionState state, bool instant) ;

// Ctor Parameters []
explicit NoTransitionsToggle() ;

/// @brief Method .ctor addr 0x1fcf52c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__6_0 addr 0x1fcf534 size 0x30 virtual false final false
 void _Start_b__6_0(bool isOn) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::NoTransitionsToggle);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NoTransitionsToggle, "HMUI", "NoTransitionsToggle");
