#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
namespace Oculus::Platform::Models {
class MatchmakingEnqueuedUserList;
}
namespace Oculus::Platform {
struct RoomJoinability;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform {
struct RoomType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform::Models {
class TeamList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Room;
}
// Type: Oculus.Platform.Models::Room
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13468))
// CS Name: Oculus.Platform.Models.Room
class CORDL_TYPE Room : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~Room() = default;

// Ctor Parameters [CppParam { name: "", ty: "Room", modifiers: " const&", def_value: None }]
constexpr Room(Room const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Room", modifiers: "&&", def_value: None }]
constexpr Room(Room&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Room(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Room& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Room& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Room& operator=(Room&& o) noexcept = default;
  constexpr Room& operator=(Room const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_ApplicationID, put=__set_ApplicationID))  ApplicationID;

constexpr void __set_ApplicationID(uint64_t value) ;

constexpr uint64_t __get_ApplicationID() const;

 System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_DataStore, put=__set_DataStore))  DataStore;

constexpr void __set_DataStore(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_DataStore() const;

 ::StringW __declspec(property(get=__get_Description, put=__set_Description))  Description;

constexpr void __set_Description(::StringW value) ;

constexpr ::StringW __get_Description() const;

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;

 Oculus::Platform::Models::UserList __declspec(property(get=__get_InvitedUsersOptional, put=__set_InvitedUsersOptional))  InvitedUsersOptional;

constexpr void __set_InvitedUsersOptional(Oculus::Platform::Models::UserList value) ;

constexpr Oculus::Platform::Models::UserList __get_InvitedUsersOptional() const;

 Oculus::Platform::Models::UserList __declspec(property(get=__get_InvitedUsers, put=__set_InvitedUsers))  InvitedUsers;

constexpr void __set_InvitedUsers(Oculus::Platform::Models::UserList value) ;

constexpr Oculus::Platform::Models::UserList __get_InvitedUsers() const;

 bool __declspec(property(get=__get_IsMembershipLocked, put=__set_IsMembershipLocked))  IsMembershipLocked;

constexpr void __set_IsMembershipLocked(bool value) ;

constexpr bool __get_IsMembershipLocked() const;

 Oculus::Platform::RoomJoinPolicy __declspec(property(get=__get_JoinPolicy, put=__set_JoinPolicy))  JoinPolicy;

constexpr void __set_JoinPolicy(Oculus::Platform::RoomJoinPolicy value) ;

constexpr Oculus::Platform::RoomJoinPolicy __get_JoinPolicy() const;

 Oculus::Platform::RoomJoinability __declspec(property(get=__get_Joinability, put=__set_Joinability))  Joinability;

constexpr void __set_Joinability(Oculus::Platform::RoomJoinability value) ;

constexpr Oculus::Platform::RoomJoinability __get_Joinability() const;

 Oculus::Platform::Models::MatchmakingEnqueuedUserList __declspec(property(get=__get_MatchedUsersOptional, put=__set_MatchedUsersOptional))  MatchedUsersOptional;

constexpr void __set_MatchedUsersOptional(Oculus::Platform::Models::MatchmakingEnqueuedUserList value) ;

constexpr Oculus::Platform::Models::MatchmakingEnqueuedUserList __get_MatchedUsersOptional() const;

 Oculus::Platform::Models::MatchmakingEnqueuedUserList __declspec(property(get=__get_MatchedUsers, put=__set_MatchedUsers))  MatchedUsers;

constexpr void __set_MatchedUsers(Oculus::Platform::Models::MatchmakingEnqueuedUserList value) ;

constexpr Oculus::Platform::Models::MatchmakingEnqueuedUserList __get_MatchedUsers() const;

 uint32_t __declspec(property(get=__get_MaxUsers, put=__set_MaxUsers))  MaxUsers;

constexpr void __set_MaxUsers(uint32_t value) ;

constexpr uint32_t __get_MaxUsers() const;

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 Oculus::Platform::Models::User __declspec(property(get=__get_OwnerOptional, put=__set_OwnerOptional))  OwnerOptional;

constexpr void __set_OwnerOptional(Oculus::Platform::Models::User value) ;

constexpr Oculus::Platform::Models::User __get_OwnerOptional() const;

 Oculus::Platform::Models::User __declspec(property(get=__get_Owner, put=__set_Owner))  Owner;

constexpr void __set_Owner(Oculus::Platform::Models::User value) ;

constexpr Oculus::Platform::Models::User __get_Owner() const;

 Oculus::Platform::Models::TeamList __declspec(property(get=__get_TeamsOptional, put=__set_TeamsOptional))  TeamsOptional;

constexpr void __set_TeamsOptional(Oculus::Platform::Models::TeamList value) ;

constexpr Oculus::Platform::Models::TeamList __get_TeamsOptional() const;

 Oculus::Platform::Models::TeamList __declspec(property(get=__get_Teams, put=__set_Teams))  Teams;

constexpr void __set_Teams(Oculus::Platform::Models::TeamList value) ;

constexpr Oculus::Platform::Models::TeamList __get_Teams() const;

 Oculus::Platform::RoomType __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(Oculus::Platform::RoomType value) ;

constexpr Oculus::Platform::RoomType __get_Type() const;

 Oculus::Platform::Models::UserList __declspec(property(get=__get_UsersOptional, put=__set_UsersOptional))  UsersOptional;

constexpr void __set_UsersOptional(Oculus::Platform::Models::UserList value) ;

constexpr Oculus::Platform::Models::UserList __get_UsersOptional() const;

 Oculus::Platform::Models::UserList __declspec(property(get=__get_Users, put=__set_Users))  Users;

constexpr void __set_Users(Oculus::Platform::Models::UserList value) ;

constexpr Oculus::Platform::Models::UserList __get_Users() const;

 uint32_t __declspec(property(get=__get_Version, put=__set_Version))  Version;

constexpr void __set_Version(uint32_t value) ;

constexpr uint32_t __get_Version() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Room(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a0e7c size 0x3b0 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::Room);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Room, "Oculus.Platform.Models", "Room");
