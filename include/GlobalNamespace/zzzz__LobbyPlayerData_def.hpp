#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LevelGameplaySetupData_def.hpp"
namespace {
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyPlayerData;
}
// Type: ::LobbyPlayerData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4507))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4513))
// CS Name: LobbyPlayerData
class CORDL_TYPE LobbyPlayerData : public ::GlobalNamespace::LevelGameplaySetupData {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ILobbyPlayerData
constexpr operator  ::GlobalNamespace::ILobbyPlayerData() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::ILevelGameplaySetupData
constexpr operator  ::GlobalNamespace::ILevelGameplaySetupData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LobbyPlayerData() = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyPlayerData", modifiers: " const&", def_value: None }]
constexpr LobbyPlayerData(LobbyPlayerData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyPlayerData", modifiers: "&&", def_value: None }]
constexpr LobbyPlayerData(LobbyPlayerData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LobbyPlayerData(void* ptr) noexcept : ::GlobalNamespace::LevelGameplaySetupData(ptr) {
}


  constexpr LobbyPlayerData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LobbyPlayerData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LobbyPlayerData& operator=(LobbyPlayerData&& o) noexcept = default;
  constexpr LobbyPlayerData& operator=(LobbyPlayerData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isPartyOwner_k__BackingField, put=__set__isPartyOwner_k__BackingField))  _isPartyOwner_k__BackingField;

constexpr void __set__isPartyOwner_k__BackingField(bool value) ;

constexpr bool __get__isPartyOwner_k__BackingField() const;

 bool __declspec(property(get=__get__isActive_k__BackingField, put=__set__isActive_k__BackingField))  _isActive_k__BackingField;

constexpr void __set__isActive_k__BackingField(bool value) ;

constexpr bool __get__isActive_k__BackingField() const;

 bool __declspec(property(get=__get__isReady_k__BackingField, put=__set__isReady_k__BackingField))  _isReady_k__BackingField;

constexpr void __set__isReady_k__BackingField(bool value) ;

constexpr bool __get__isReady_k__BackingField() const;

 bool __declspec(property(get=__get__isInLobby_k__BackingField, put=__set__isInLobby_k__BackingField))  _isInLobby_k__BackingField;

constexpr void __set__isInLobby_k__BackingField(bool value) ;

constexpr bool __get__isInLobby_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_isPartyOwner, put=set_isPartyOwner))  isPartyOwner;

 bool __declspec(property(get=get_isActive, put=set_isActive))  isActive;

 bool __declspec(property(get=get_isReady, put=set_isReady))  isReady;

 bool __declspec(property(get=get_isInLobby, put=set_isInLobby))  isInLobby;


// Methods

/// @brief Method get_isPartyOwner addr 0x21f8c5c size 0x8 virtual true final true
 bool get_isPartyOwner() ;

/// @brief Method set_isPartyOwner addr 0x21f8c64 size 0xc virtual true final true
 void set_isPartyOwner(bool value) ;

/// @brief Method get_isActive addr 0x21f8c70 size 0x8 virtual true final true
 bool get_isActive() ;

/// @brief Method set_isActive addr 0x21f8c78 size 0xc virtual true final true
 void set_isActive(bool value) ;

/// @brief Method get_isReady addr 0x21f8c84 size 0x8 virtual true final true
 bool get_isReady() ;

/// @brief Method set_isReady addr 0x21f8c8c size 0xc virtual true final true
 void set_isReady(bool value) ;

/// @brief Method get_isInLobby addr 0x21f8c98 size 0x8 virtual true final true
 bool get_isInLobby() ;

/// @brief Method set_isInLobby addr 0x21f8ca0 size 0xc virtual true final true
 void set_isInLobby(bool value) ;

// Ctor Parameters []
explicit LobbyPlayerData() ;

/// @brief Method .ctor addr 0x21f8cac size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LobbyPlayerData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyPlayerData, "", "LobbyPlayerData");
