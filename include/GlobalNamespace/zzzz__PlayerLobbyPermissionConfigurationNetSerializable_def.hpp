#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerLobbyPermissionConfigurationNetSerializable;
}
// Type: ::PlayerLobbyPermissionConfigurationNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15122))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15119))
// CS Name: PlayerLobbyPermissionConfigurationNetSerializable
class CORDL_TYPE PlayerLobbyPermissionConfigurationNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PlayerLobbyPermissionConfigurationNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLobbyPermissionConfigurationNetSerializable", modifiers: " const&", def_value: None }]
constexpr PlayerLobbyPermissionConfigurationNetSerializable(PlayerLobbyPermissionConfigurationNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLobbyPermissionConfigurationNetSerializable", modifiers: "&&", def_value: None }]
constexpr PlayerLobbyPermissionConfigurationNetSerializable(PlayerLobbyPermissionConfigurationNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerLobbyPermissionConfigurationNetSerializable(void* ptr) noexcept : ::GlobalNamespace::PoolableSerializable(ptr) {
}


  constexpr PlayerLobbyPermissionConfigurationNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerLobbyPermissionConfigurationNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerLobbyPermissionConfigurationNetSerializable& operator=(PlayerLobbyPermissionConfigurationNetSerializable&& o) noexcept = default;
  constexpr PlayerLobbyPermissionConfigurationNetSerializable& operator=(PlayerLobbyPermissionConfigurationNetSerializable const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 bool __declspec(property(get=__get__isServerOwner, put=__set__isServerOwner))  _isServerOwner;

constexpr void __set__isServerOwner(bool value) ;

constexpr bool __get__isServerOwner() const;

 bool __declspec(property(get=__get__hasRecommendBeatmapsPermission, put=__set__hasRecommendBeatmapsPermission))  _hasRecommendBeatmapsPermission;

constexpr void __set__hasRecommendBeatmapsPermission(bool value) ;

constexpr bool __get__hasRecommendBeatmapsPermission() const;

 bool __declspec(property(get=__get__hasRecommendGameplayModifiersPermission, put=__set__hasRecommendGameplayModifiersPermission))  _hasRecommendGameplayModifiersPermission;

constexpr void __set__hasRecommendGameplayModifiersPermission(bool value) ;

constexpr bool __get__hasRecommendGameplayModifiersPermission() const;

 bool __declspec(property(get=__get__hasKickVotePermission, put=__set__hasKickVotePermission))  _hasKickVotePermission;

constexpr void __set__hasKickVotePermission(bool value) ;

constexpr bool __get__hasKickVotePermission() const;

 bool __declspec(property(get=__get__hasInvitePermission, put=__set__hasInvitePermission))  _hasInvitePermission;

constexpr void __set__hasInvitePermission(bool value) ;

constexpr bool __get__hasInvitePermission() const;


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 bool __declspec(property(get=get_isServerOwner))  isServerOwner;

 bool __declspec(property(get=get_hasRecommendBeatmapsPermission))  hasRecommendBeatmapsPermission;

 bool __declspec(property(get=get_hasRecommendGameplayModifiersPermission))  hasRecommendGameplayModifiersPermission;

 bool __declspec(property(get=get_hasKickVotePermission))  hasKickVotePermission;

 bool __declspec(property(get=get_hasInvitePermission))  hasInvitePermission;


// Methods

/// @brief Method get_userId addr 0x1218540 size 0x8 virtual false final false
 ::StringW get_userId() ;

/// @brief Method get_isServerOwner addr 0x1218548 size 0x8 virtual false final false
 bool get_isServerOwner() ;

/// @brief Method get_hasRecommendBeatmapsPermission addr 0x1218550 size 0x8 virtual false final false
 bool get_hasRecommendBeatmapsPermission() ;

/// @brief Method get_hasRecommendGameplayModifiersPermission addr 0x1218558 size 0x8 virtual false final false
 bool get_hasRecommendGameplayModifiersPermission() ;

/// @brief Method get_hasKickVotePermission addr 0x1218560 size 0x8 virtual false final false
 bool get_hasKickVotePermission() ;

/// @brief Method get_hasInvitePermission addr 0x1218568 size 0x8 virtual false final false
 bool get_hasInvitePermission() ;

/// @brief Method Obtain addr 0x1218570 size 0x64 virtual false final false
static ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable Obtain() ;

/// @brief Method Init addr 0x12185d4 size 0x30 virtual false final false
 ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable Init(::StringW userId, bool isServerOwner, bool hasRecommendBeatmapsPermission, bool hasRecommendGameplayModifiersPermission, bool hasKickVotePermission, bool hasInvitePermission) ;

// Ctor Parameters []
explicit PlayerLobbyPermissionConfigurationNetSerializable() ;

/// @brief Method .ctor addr 0x1218604 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method Serialize addr 0x121865c size 0x60 virtual true final false
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x12186bc size 0x6c virtual true final false
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable, "", "PlayerLobbyPermissionConfigurationNetSerializable");
