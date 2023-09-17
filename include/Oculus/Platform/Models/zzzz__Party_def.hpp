#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class Room;
}
namespace Oculus::Platform::Models {
class User;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Party;
}
// Type: Oculus.Platform.Models::Party
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13456))
// CS Name: Oculus.Platform.Models.Party
class CORDL_TYPE Party : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Party() = default;

// Ctor Parameters [CppParam { name: "", ty: "Party", modifiers: " const&", def_value: None }]
constexpr Party(Party const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Party", modifiers: "&&", def_value: None }]
constexpr Party(Party&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Party(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Party& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Party& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Party& operator=(Party&& o) noexcept = default;
  constexpr Party& operator=(Party const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;

 ::Oculus::Platform::Models::UserList __declspec(property(get=__get_InvitedUsersOptional, put=__set_InvitedUsersOptional))  InvitedUsersOptional;

constexpr void __set_InvitedUsersOptional(::Oculus::Platform::Models::UserList value) ;

constexpr ::Oculus::Platform::Models::UserList __get_InvitedUsersOptional() const;

 ::Oculus::Platform::Models::UserList __declspec(property(get=__get_InvitedUsers, put=__set_InvitedUsers))  InvitedUsers;

constexpr void __set_InvitedUsers(::Oculus::Platform::Models::UserList value) ;

constexpr ::Oculus::Platform::Models::UserList __get_InvitedUsers() const;

 ::Oculus::Platform::Models::User __declspec(property(get=__get_LeaderOptional, put=__set_LeaderOptional))  LeaderOptional;

constexpr void __set_LeaderOptional(::Oculus::Platform::Models::User value) ;

constexpr ::Oculus::Platform::Models::User __get_LeaderOptional() const;

 ::Oculus::Platform::Models::User __declspec(property(get=__get_Leader, put=__set_Leader))  Leader;

constexpr void __set_Leader(::Oculus::Platform::Models::User value) ;

constexpr ::Oculus::Platform::Models::User __get_Leader() const;

 ::Oculus::Platform::Models::Room __declspec(property(get=__get_RoomOptional, put=__set_RoomOptional))  RoomOptional;

constexpr void __set_RoomOptional(::Oculus::Platform::Models::Room value) ;

constexpr ::Oculus::Platform::Models::Room __get_RoomOptional() const;

 ::Oculus::Platform::Models::Room __declspec(property(get=__get_Room, put=__set_Room))  Room;

constexpr void __set_Room(::Oculus::Platform::Models::Room value) ;

constexpr ::Oculus::Platform::Models::Room __get_Room() const;

 ::Oculus::Platform::Models::UserList __declspec(property(get=__get_UsersOptional, put=__set_UsersOptional))  UsersOptional;

constexpr void __set_UsersOptional(::Oculus::Platform::Models::UserList value) ;

constexpr ::Oculus::Platform::Models::UserList __get_UsersOptional() const;

 ::Oculus::Platform::Models::UserList __declspec(property(get=__get_Users, put=__set_Users))  Users;

constexpr void __set_Users(::Oculus::Platform::Models::UserList value) ;

constexpr ::Oculus::Platform::Models::UserList __get_Users() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Party(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a1c1c size 0x274 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::Party);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Party, "Oculus.Platform.Models", "Party");
