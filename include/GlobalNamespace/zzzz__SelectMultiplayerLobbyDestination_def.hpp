#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class SelectMultiplayerLobbyDestination;
}
// Type: ::SelectMultiplayerLobbyDestination
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4184))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4189))
// CS Name: SelectMultiplayerLobbyDestination
class CORDL_TYPE SelectMultiplayerLobbyDestination : public GlobalNamespace::MenuDestination {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SelectMultiplayerLobbyDestination() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectMultiplayerLobbyDestination", modifiers: " const&", def_value: None }]
constexpr SelectMultiplayerLobbyDestination(SelectMultiplayerLobbyDestination const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectMultiplayerLobbyDestination", modifiers: "&&", def_value: None }]
constexpr SelectMultiplayerLobbyDestination(SelectMultiplayerLobbyDestination&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectMultiplayerLobbyDestination(void* ptr) noexcept : GlobalNamespace::MenuDestination(ptr) {
}


  constexpr SelectMultiplayerLobbyDestination& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectMultiplayerLobbyDestination& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectMultiplayerLobbyDestination& operator=(SelectMultiplayerLobbyDestination&& o) noexcept = default;
  constexpr SelectMultiplayerLobbyDestination& operator=(SelectMultiplayerLobbyDestination const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_lobbySecret, put=__set_lobbySecret))  lobbySecret;

constexpr void __set_lobbySecret(::StringW value) ;

constexpr ::StringW __get_lobbySecret() const;

 ::StringW __declspec(property(get=__get_lobbyCode, put=__set_lobbyCode))  lobbyCode;

constexpr void __set_lobbyCode(::StringW value) ;

constexpr ::StringW __get_lobbyCode() const;


// Methods

static GlobalNamespace::SelectMultiplayerLobbyDestination New_ctor(::StringW lobbySecret, ::StringW lobbyCode) ;

/// @brief Method .ctor addr 0x21bc618 size 0x2c virtual false final false
 void _ctor(::StringW lobbySecret, ::StringW lobbyCode) ;

static GlobalNamespace::SelectMultiplayerLobbyDestination New_ctor(uint64_t roomId) ;

/// @brief Method .ctor addr 0x21bc644 size 0xd4 virtual false final false
 void _ctor(uint64_t roomId) ;

static GlobalNamespace::SelectMultiplayerLobbyDestination New_ctor(::StringW lobbyCode) ;

/// @brief Method .ctor addr 0x21bd470 size 0x28 virtual false final false
 void _ctor(::StringW lobbyCode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SelectMultiplayerLobbyDestination);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectMultiplayerLobbyDestination, "", "SelectMultiplayerLobbyDestination");
