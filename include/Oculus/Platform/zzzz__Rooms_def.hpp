#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform::Models {
class RoomInviteNotification;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
namespace Oculus::Platform::Models {
class Room;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform {
struct RoomMembershipLockStatus;
}
namespace Oculus::Platform {
template<typename T>
class ____Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform {
class RoomOptions;
}
namespace Oculus::Platform::Models {
class RoomList;
}
// Forward declare root types
namespace Oculus::Platform {
class Rooms;
}
// Type: Oculus.Platform::Rooms
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13312))
// CS Name: Oculus.Platform.Rooms
class CORDL_TYPE Rooms : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Rooms() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rooms", modifiers: " const&", def_value: None }]
constexpr Rooms(Rooms const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rooms", modifiers: "&&", def_value: None }]
constexpr Rooms(Rooms&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rooms(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Rooms& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rooms& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rooms& operator=(Rooms&& o) noexcept = default;
  constexpr Rooms& operator=(Rooms const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateDataStore addr 0x2585fd8 size 0x320 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> UpdateDataStore(uint64_t roomID, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> data) ;

/// @brief Method SetRoomInviteNotificationCallback addr 0x25862f8 size 0x4 virtual false final false
static void SetRoomInviteNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW> callback) ;

/// @brief Method CreateAndJoinPrivate addr 0x2586370 size 0x178 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> CreateAndJoinPrivate(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, bool subscribeToUpdates) ;

/// @brief Method CreateAndJoinPrivate2 addr 0x25864e8 size 0x18c virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> CreateAndJoinPrivate2(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, ::Oculus::Platform::RoomOptions roomOptions) ;

/// @brief Method Get addr 0x2586674 size 0x160 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> Get(uint64_t roomID) ;

/// @brief Method GetCurrent addr 0x25867d4 size 0x158 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> GetCurrent() ;

/// @brief Method GetCurrentForUser addr 0x258692c size 0x160 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> GetCurrentForUser(uint64_t userID) ;

/// @brief Method GetInvitableUsers addr 0x2586a8c size 0x158 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList> GetInvitableUsers() ;

/// @brief Method GetInvitableUsers2 addr 0x2586be4 size 0x174 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList> GetInvitableUsers2(::Oculus::Platform::RoomOptions roomOptions) ;

/// @brief Method GetModeratedRooms addr 0x2586d58 size 0x158 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList> GetModeratedRooms() ;

/// @brief Method InviteUser addr 0x2586eb0 size 0x170 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> InviteUser(uint64_t roomID, ::StringW inviteToken) ;

/// @brief Method Join addr 0x2587020 size 0x170 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> Join(uint64_t roomID, bool subscribeToUpdates) ;

/// @brief Method Join2 addr 0x2587190 size 0x184 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> Join2(uint64_t roomID, ::Oculus::Platform::RoomOptions roomOptions) ;

/// @brief Method KickUser addr 0x2587314 size 0x178 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> KickUser(uint64_t roomID, uint64_t userID, int32_t kickDurationSeconds) ;

/// @brief Method LaunchInvitableUserFlow addr 0x258748c size 0x14c virtual false final false
static ::Oculus::Platform::Request LaunchInvitableUserFlow(uint64_t roomID) ;

/// @brief Method Leave addr 0x25875d8 size 0x160 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> Leave(uint64_t roomID) ;

/// @brief Method SetDescription addr 0x2587738 size 0x170 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> SetDescription(uint64_t roomID, ::StringW description) ;

/// @brief Method UpdateMembershipLockStatus addr 0x25878a8 size 0x170 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> UpdateMembershipLockStatus(uint64_t roomID, ::Oculus::Platform::RoomMembershipLockStatus membershipLockStatus) ;

/// @brief Method UpdateOwner addr 0x2587a18 size 0x15c virtual false final false
static ::Oculus::Platform::Request UpdateOwner(uint64_t roomID, uint64_t userID) ;

/// @brief Method UpdatePrivateRoomJoinPolicy addr 0x2587b74 size 0x170 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> UpdatePrivateRoomJoinPolicy(uint64_t roomID, ::Oculus::Platform::RoomJoinPolicy newJoinPolicy) ;

/// @brief Method SetRoomInviteAcceptedNotificationCallback addr 0x25862fc size 0x74 virtual false final false
static void SetRoomInviteAcceptedNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW> callback) ;

/// @brief Method SetRoomInviteReceivedNotificationCallback addr 0x2587ce4 size 0x74 virtual false final false
static void SetRoomInviteReceivedNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::RoomInviteNotification> callback) ;

/// @brief Method SetUpdateNotificationCallback addr 0x2587d58 size 0x74 virtual false final false
static void SetUpdateNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::Room> callback) ;

/// @brief Method GetNextRoomListPage addr 0x2587dcc size 0x1dc virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList> GetNextRoomListPage(::Oculus::Platform::Models::RoomList list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Rooms);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Rooms, "Oculus.Platform", "Rooms");
