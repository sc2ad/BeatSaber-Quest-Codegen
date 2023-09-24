#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardPlayerInfo;
}
// Type: ::LeaderboardPlayerInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4231))
// CS Name: LeaderboardPlayerInfo
class CORDL_TYPE LeaderboardPlayerInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~LeaderboardPlayerInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardPlayerInfo", modifiers: " const&", def_value: None }]
constexpr LeaderboardPlayerInfo(LeaderboardPlayerInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardPlayerInfo", modifiers: "&&", def_value: None }]
constexpr LeaderboardPlayerInfo(LeaderboardPlayerInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardPlayerInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LeaderboardPlayerInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardPlayerInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardPlayerInfo& operator=(LeaderboardPlayerInfo&& o) noexcept = default;
  constexpr LeaderboardPlayerInfo& operator=(LeaderboardPlayerInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_serverKey, put=__set_serverKey))  serverKey;

constexpr void __set_serverKey(::StringW value) ;

constexpr ::StringW __get_serverKey() const;

 ::StringW __declspec(property(get=__get__playerId_k__BackingField, put=__set__playerId_k__BackingField))  _playerId_k__BackingField;

constexpr void __set__playerId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__playerId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__playerName_k__BackingField, put=__set__playerName_k__BackingField))  _playerName_k__BackingField;

constexpr void __set__playerName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__playerName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__playerKey_k__BackingField, put=__set__playerKey_k__BackingField))  _playerKey_k__BackingField;

constexpr void __set__playerKey_k__BackingField(::StringW value) ;

constexpr ::StringW __get__playerKey_k__BackingField() const;

 ::StringW __declspec(property(get=__get__authType_k__BackingField, put=__set__authType_k__BackingField))  _authType_k__BackingField;

constexpr void __set__authType_k__BackingField(::StringW value) ;

constexpr ::StringW __get__authType_k__BackingField() const;

 ::StringW __declspec(property(get=__get__playerFriends_k__BackingField, put=__set__playerFriends_k__BackingField))  _playerFriends_k__BackingField;

constexpr void __set__playerFriends_k__BackingField(::StringW value) ;

constexpr ::StringW __get__playerFriends_k__BackingField() const;

 bool __declspec(property(get=__get__succeeded_k__BackingField, put=__set__succeeded_k__BackingField))  _succeeded_k__BackingField;

constexpr void __set__succeeded_k__BackingField(bool value) ;

constexpr bool __get__succeeded_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_playerId, put=set_playerId))  playerId;

 ::StringW __declspec(property(get=get_playerName, put=set_playerName))  playerName;

 ::StringW __declspec(property(get=get_playerKey, put=set_playerKey))  playerKey;

 ::StringW __declspec(property(get=get_authType, put=set_authType))  authType;

 ::StringW __declspec(property(get=get_playerFriends, put=set_playerFriends))  playerFriends;

 bool __declspec(property(get=get_succeeded, put=set_succeeded))  succeeded;


// Methods

/// @brief Method get_playerId addr 0x21c3a78 size 0x8 virtual false final false
 ::StringW get_playerId() ;

/// @brief Method set_playerId addr 0x21c3a80 size 0x8 virtual false final false
 void set_playerId(::StringW value) ;

/// @brief Method get_playerName addr 0x21c3a88 size 0x8 virtual false final false
 ::StringW get_playerName() ;

/// @brief Method set_playerName addr 0x21c3a90 size 0x8 virtual false final false
 void set_playerName(::StringW value) ;

/// @brief Method get_playerKey addr 0x21c3a98 size 0x8 virtual false final false
 ::StringW get_playerKey() ;

/// @brief Method set_playerKey addr 0x21c3aa0 size 0x8 virtual false final false
 void set_playerKey(::StringW value) ;

/// @brief Method get_authType addr 0x21c3aa8 size 0x8 virtual false final false
 ::StringW get_authType() ;

/// @brief Method set_authType addr 0x21c3ab0 size 0x8 virtual false final false
 void set_authType(::StringW value) ;

/// @brief Method get_playerFriends addr 0x21c3ab8 size 0x8 virtual false final false
 ::StringW get_playerFriends() ;

/// @brief Method set_playerFriends addr 0x21c3ac0 size 0x8 virtual false final false
 void set_playerFriends(::StringW value) ;

/// @brief Method get_succeeded addr 0x21c3ac8 size 0x8 virtual false final false
 bool get_succeeded() ;

/// @brief Method set_succeeded addr 0x21c3ad0 size 0xc virtual false final false
 void set_succeeded(bool value) ;

static GlobalNamespace::LeaderboardPlayerInfo New_ctor(bool succeeded, ::StringW playerId, ::StringW playerName, ::StringW playerKey, ::StringW authType, ::StringW playerFriends) ;

/// @brief Method .ctor addr 0x21c3adc size 0x5c virtual false final false
 void _ctor(bool succeeded, ::StringW playerId, ::StringW playerName, ::StringW playerKey, ::StringW authType, ::StringW playerFriends) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LeaderboardPlayerInfo);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardPlayerInfo, "", "LeaderboardPlayerInfo");
