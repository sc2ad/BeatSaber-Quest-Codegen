#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class DisconnectedPlayer;
}
// Type: ::DisconnectedPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12661))
// CS Name: DisconnectedPlayer
class CORDL_TYPE DisconnectedPlayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IConnectedPlayer
constexpr operator  GlobalNamespace::IConnectedPlayer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~DisconnectedPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectedPlayer", modifiers: " const&", def_value: None }]
constexpr DisconnectedPlayer(DisconnectedPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectedPlayer", modifiers: "&&", def_value: None }]
constexpr DisconnectedPlayer(DisconnectedPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisconnectedPlayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DisconnectedPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisconnectedPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisconnectedPlayer& operator=(DisconnectedPlayer&& o) noexcept = default;
  constexpr DisconnectedPlayer& operator=(DisconnectedPlayer const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__userId_k__BackingField, put=__set__userId_k__BackingField))  _userId_k__BackingField;

constexpr void __set__userId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__userId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__userName_k__BackingField, put=__set__userName_k__BackingField))  _userName_k__BackingField;

constexpr void __set__userName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__userName_k__BackingField() const;

 int32_t __declspec(property(get=__get__sortIndex_k__BackingField, put=__set__sortIndex_k__BackingField))  _sortIndex_k__BackingField;

constexpr void __set__sortIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__sortIndex_k__BackingField() const;

 GlobalNamespace::MultiplayerAvatarData __declspec(property(get=__get__multiplayerAvatarData_k__BackingField, put=__set__multiplayerAvatarData_k__BackingField))  _multiplayerAvatarData_k__BackingField;

constexpr void __set__multiplayerAvatarData_k__BackingField(GlobalNamespace::MultiplayerAvatarData value) ;

constexpr GlobalNamespace::MultiplayerAvatarData __get__multiplayerAvatarData_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_offsetSyncTime))  offsetSyncTime;

 bool __declspec(property(get=get_isFailed))  isFailed;

 bool __declspec(property(get=get_isMe))  isMe;

 ::StringW __declspec(property(get=get_userId, put=set_userId))  userId;

 ::StringW __declspec(property(get=get_userName, put=set_userName))  userName;

 bool __declspec(property(get=get_hasValidLatency))  hasValidLatency;

 float_t __declspec(property(get=get_currentLatency))  currentLatency;

 bool __declspec(property(get=get_isConnected))  isConnected;

 GlobalNamespace::DisconnectedReason __declspec(property(get=get_disconnectedReason))  disconnectedReason;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 int32_t __declspec(property(get=get_sortIndex))  sortIndex;

 GlobalNamespace::MultiplayerAvatarData __declspec(property(get=get_multiplayerAvatarData))  multiplayerAvatarData;

 bool __declspec(property(get=get_isKicked))  isKicked;


// Methods

/// @brief Method get_offsetSyncTime addr 0xda6b84 size 0x8 virtual true final true
 float_t get_offsetSyncTime() ;

/// @brief Method get_isFailed addr 0xda6b8c size 0x8 virtual false final false
 bool get_isFailed() ;

/// @brief Method get_isMe addr 0xda6b94 size 0x8 virtual true final true
 bool get_isMe() ;

/// @brief Method get_userId addr 0xda6b9c size 0x8 virtual true final true
 ::StringW get_userId() ;

/// @brief Method set_userId addr 0xda6ba4 size 0x8 virtual false final false
 void set_userId(::StringW value) ;

/// @brief Method get_userName addr 0xda6bac size 0x8 virtual true final true
 ::StringW get_userName() ;

/// @brief Method set_userName addr 0xda6bb4 size 0x8 virtual false final false
 void set_userName(::StringW value) ;

/// @brief Method get_hasValidLatency addr 0xda6bbc size 0x8 virtual true final true
 bool get_hasValidLatency() ;

/// @brief Method get_currentLatency addr 0xda6bc4 size 0x8 virtual true final true
 float_t get_currentLatency() ;

/// @brief Method get_isConnected addr 0xda6bcc size 0x8 virtual true final true
 bool get_isConnected() ;

/// @brief Method get_disconnectedReason addr 0xda6bd4 size 0x8 virtual true final true
 GlobalNamespace::DisconnectedReason get_disconnectedReason() ;

/// @brief Method get_isConnectionOwner addr 0xda6bdc size 0x8 virtual true final true
 bool get_isConnectionOwner() ;

/// @brief Method get_sortIndex addr 0xda6be4 size 0x8 virtual true final true
 int32_t get_sortIndex() ;

/// @brief Method get_multiplayerAvatarData addr 0xda6bec size 0x10 virtual true final true
 GlobalNamespace::MultiplayerAvatarData get_multiplayerAvatarData() ;

/// @brief Method get_isKicked addr 0xda6bfc size 0x8 virtual true final true
 bool get_isKicked() ;

/// @brief Method HasState addr 0xda6c04 size 0x8 virtual true final true
 bool HasState(::StringW state) ;

static GlobalNamespace::DisconnectedPlayer New_ctor(::StringW userId, ::StringW userName, int32_t sortIndex) ;

/// @brief Method .ctor addr 0xda6c0c size 0x5c virtual false final false
 void _ctor(::StringW userId, ::StringW userName, int32_t sortIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DisconnectedPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisconnectedPlayer, "", "DisconnectedPlayer");
