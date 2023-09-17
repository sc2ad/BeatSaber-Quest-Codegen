#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class ILobbyPlayerData;
}
// Type: ::ILobbyPlayerData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4500))
// CS Name: ILobbyPlayerData
class CORDL_TYPE ILobbyPlayerData : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ILevelGameplaySetupData
constexpr operator  ::GlobalNamespace::ILevelGameplaySetupData() const noexcept;

~ILobbyPlayerData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILobbyPlayerData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_isPartyOwner, put=set_isPartyOwner))  isPartyOwner;

 bool __declspec(property(get=get_isActive, put=set_isActive))  isActive;

 bool __declspec(property(get=get_isReady, put=set_isReady))  isReady;

 bool __declspec(property(get=get_isInLobby, put=set_isInLobby))  isInLobby;


// Methods

/// @brief Method get_isPartyOwner addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isPartyOwner() ;

/// @brief Method set_isPartyOwner addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_isPartyOwner(bool value) ;

/// @brief Method get_isActive addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isActive() ;

/// @brief Method set_isActive addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_isActive(bool value) ;

/// @brief Method get_isReady addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isReady() ;

/// @brief Method set_isReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_isReady(bool value) ;

/// @brief Method get_isInLobby addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isInLobby() ;

/// @brief Method set_isInLobby addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_isInLobby(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ILobbyPlayerData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILobbyPlayerData, "", "ILobbyPlayerData");
