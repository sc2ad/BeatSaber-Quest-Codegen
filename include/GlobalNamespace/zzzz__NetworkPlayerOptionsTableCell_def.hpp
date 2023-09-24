#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine::UI {
class Button;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayerOptionsTableCell;
}
// Type: ::NetworkPlayerOptionsTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5672))
// CS Name: NetworkPlayerOptionsTableCell
class CORDL_TYPE NetworkPlayerOptionsTableCell : public HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~NetworkPlayerOptionsTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerOptionsTableCell", modifiers: " const&", def_value: None }]
constexpr NetworkPlayerOptionsTableCell(NetworkPlayerOptionsTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerOptionsTableCell", modifiers: "&&", def_value: None }]
constexpr NetworkPlayerOptionsTableCell(NetworkPlayerOptionsTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkPlayerOptionsTableCell(void* ptr) noexcept : HMUI::TableCell(ptr) {
}


  constexpr NetworkPlayerOptionsTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkPlayerOptionsTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkPlayerOptionsTableCell& operator=(NetworkPlayerOptionsTableCell&& o) noexcept = default;
  constexpr NetworkPlayerOptionsTableCell& operator=(NetworkPlayerOptionsTableCell const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::UI::Button> __declspec(property(get=__get__buttons, put=__set__buttons))  _buttons;

constexpr void __set__buttons(::ArrayW<UnityEngine::UI::Button> value) ;

constexpr ::ArrayW<UnityEngine::UI::Button> __get__buttons() const;

 ::ArrayW<TMPro::TextMeshProUGUI> __declspec(property(get=__get__buttonTexts, put=__set__buttonTexts))  _buttonTexts;

constexpr void __set__buttonTexts(::ArrayW<TMPro::TextMeshProUGUI> value) ;

constexpr ::ArrayW<TMPro::TextMeshProUGUI> __get__buttonTexts() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;

 GlobalNamespace::INetworkPlayer __declspec(property(get=__get__player, put=__set__player))  _player;

constexpr void __set__player(GlobalNamespace::INetworkPlayer value) ;

constexpr GlobalNamespace::INetworkPlayer __get__player() const;


// Properties

 GlobalNamespace::INetworkPlayer __declspec(property(get=get_player, put=set_player))  player;


// Methods

/// @brief Method get_player addr 0x214fd10 size 0x8 virtual false final false
 GlobalNamespace::INetworkPlayer get_player() ;

/// @brief Method set_player addr 0x214fd18 size 0x8 virtual false final false
 void set_player(GlobalNamespace::INetworkPlayer value) ;

/// @brief Method Refresh addr 0x214fd20 size 0xb74 virtual false final false
 void Refresh() ;

/// @brief Method Block addr 0x2150894 size 0xac virtual false final false
 void Block() ;

/// @brief Method Unblock addr 0x2150940 size 0xac virtual false final false
 void Unblock() ;

/// @brief Method Join addr 0x21509ec size 0xac virtual false final false
 void Join() ;

/// @brief Method Invite addr 0x2150a98 size 0xac virtual false final false
 void Invite() ;

/// @brief Method Kick addr 0x2150b44 size 0xac virtual false final false
 void Kick() ;

/// @brief Method Leave addr 0x2150bf0 size 0xac virtual false final false
 void Leave() ;

static GlobalNamespace::NetworkPlayerOptionsTableCell New_ctor() ;

/// @brief Method .ctor addr 0x2150c9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NetworkPlayerOptionsTableCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayerOptionsTableCell, "", "NetworkPlayerOptionsTableCell");
