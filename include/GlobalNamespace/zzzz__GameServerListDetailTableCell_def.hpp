#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerListDetailTableCell;
}
// Type: ::GameServerListDetailTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5516))
// CS Name: GameServerListDetailTableCell
class CORDL_TYPE GameServerListDetailTableCell : public HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~GameServerListDetailTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerListDetailTableCell", modifiers: " const&", def_value: None }]
constexpr GameServerListDetailTableCell(GameServerListDetailTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerListDetailTableCell", modifiers: "&&", def_value: None }]
constexpr GameServerListDetailTableCell(GameServerListDetailTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServerListDetailTableCell(void* ptr) noexcept : HMUI::TableCell(ptr) {
}


  constexpr GameServerListDetailTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServerListDetailTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServerListDetailTableCell& operator=(GameServerListDetailTableCell&& o) noexcept = default;
  constexpr GameServerListDetailTableCell& operator=(GameServerListDetailTableCell const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__joinServerButton, put=__set__joinServerButton))  _joinServerButton;

constexpr void __set__joinServerButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__joinServerButton() const;

 System::Action __declspec(property(get=__get_joinServerButtonWasPressedEvent, put=__set_joinServerButtonWasPressedEvent))  joinServerButtonWasPressedEvent;

constexpr void __set_joinServerButtonWasPressedEvent(System::Action value) ;

constexpr System::Action __get_joinServerButtonWasPressedEvent() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;


// Methods

/// @brief Method add_joinServerButtonWasPressedEvent addr 0x21231a0 size 0x9c virtual false final false
 void add_joinServerButtonWasPressedEvent(System::Action value) ;

/// @brief Method remove_joinServerButtonWasPressedEvent addr 0x212323c size 0x9c virtual false final false
 void remove_joinServerButtonWasPressedEvent(System::Action value) ;

/// @brief Method Start addr 0x21232d8 size 0xa8 virtual true final false
 void Start() ;

// Ctor Parameters []
explicit GameServerListDetailTableCell() ;

/// @brief Method .ctor addr 0x2123380 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__5_0 addr 0x21233e8 size 0x1c virtual false final false
 void _Start_b__5_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameServerListDetailTableCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerListDetailTableCell, "", "GameServerListDetailTableCell");
