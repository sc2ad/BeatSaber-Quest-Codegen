// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.RoomJoinPolicy
#include "Oculus/Platform/RoomJoinPolicy.hpp"
// Including type: Oculus.Platform.RoomJoinability
#include "Oculus/Platform/RoomJoinability.hpp"
// Including type: Oculus.Platform.RoomType
#include "Oculus/Platform/RoomType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserList
  class UserList;
  // Forward declaring type: MatchmakingEnqueuedUserList
  class MatchmakingEnqueuedUserList;
  // Forward declaring type: User
  class User;
  // Forward declaring type: TeamList
  class TeamList;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Room
  class Room;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::Room);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Room*, "Oculus.Platform.Models", "Room");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0xAC
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Room
  // [TokenAttribute] Offset: FFFFFFFF
  class Room : public ::Il2CppObject {
    public:
    public:
    // public readonly System.UInt64 ApplicationID
    // Size: 0x8
    // Offset: 0x10
    uint64_t ApplicationID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.Collections.Generic.Dictionary`2<System.String,System.String> DataStore
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* DataStore;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    // public readonly System.String Description
    // Size: 0x8
    // Offset: 0x20
    ::StringW Description;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x28
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly Oculus.Platform.Models.UserList InvitedUsersOptional
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Platform::Models::UserList* InvitedUsersOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x1106C14
    // public readonly Oculus.Platform.Models.UserList InvitedUsers
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Platform::Models::UserList* InvitedUsers;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // public readonly System.Boolean IsMembershipLocked
    // Size: 0x1
    // Offset: 0x40
    bool IsMembershipLocked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsMembershipLocked and: JoinPolicy
    char __padding6[0x3] = {};
    // public readonly Oculus.Platform.RoomJoinPolicy JoinPolicy
    // Size: 0x4
    // Offset: 0x44
    ::Oculus::Platform::RoomJoinPolicy JoinPolicy;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::RoomJoinPolicy) == 0x4);
    // public readonly Oculus.Platform.RoomJoinability Joinability
    // Size: 0x4
    // Offset: 0x48
    ::Oculus::Platform::RoomJoinability Joinability;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::RoomJoinability) == 0x4);
    // Padding between fields: Joinability and: MatchedUsersOptional
    char __padding8[0x4] = {};
    // public readonly Oculus.Platform.Models.MatchmakingEnqueuedUserList MatchedUsersOptional
    // Size: 0x8
    // Offset: 0x50
    ::Oculus::Platform::Models::MatchmakingEnqueuedUserList* MatchedUsersOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::MatchmakingEnqueuedUserList*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x1106C4C
    // public readonly Oculus.Platform.Models.MatchmakingEnqueuedUserList MatchedUsers
    // Size: 0x8
    // Offset: 0x58
    ::Oculus::Platform::Models::MatchmakingEnqueuedUserList* MatchedUsers;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::MatchmakingEnqueuedUserList*) == 0x8);
    // public readonly System.UInt32 MaxUsers
    // Size: 0x4
    // Offset: 0x60
    uint MaxUsers;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: MaxUsers and: Name
    char __padding11[0x4] = {};
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x68
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly Oculus.Platform.Models.User OwnerOptional
    // Size: 0x8
    // Offset: 0x70
    ::Oculus::Platform::Models::User* OwnerOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::User*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x1106C84
    // public readonly Oculus.Platform.Models.User Owner
    // Size: 0x8
    // Offset: 0x78
    ::Oculus::Platform::Models::User* Owner;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::User*) == 0x8);
    // public readonly Oculus.Platform.Models.TeamList TeamsOptional
    // Size: 0x8
    // Offset: 0x80
    ::Oculus::Platform::Models::TeamList* TeamsOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::TeamList*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x1106CBC
    // public readonly Oculus.Platform.Models.TeamList Teams
    // Size: 0x8
    // Offset: 0x88
    ::Oculus::Platform::Models::TeamList* Teams;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::TeamList*) == 0x8);
    // public readonly Oculus.Platform.RoomType Type
    // Size: 0x4
    // Offset: 0x90
    ::Oculus::Platform::RoomType Type;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::RoomType) == 0x4);
    // Padding between fields: Type and: UsersOptional
    char __padding17[0x4] = {};
    // public readonly Oculus.Platform.Models.UserList UsersOptional
    // Size: 0x8
    // Offset: 0x98
    ::Oculus::Platform::Models::UserList* UsersOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x1106CF4
    // public readonly Oculus.Platform.Models.UserList Users
    // Size: 0x8
    // Offset: 0xA0
    ::Oculus::Platform::Models::UserList* Users;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // public readonly System.UInt32 Version
    // Size: 0x4
    // Offset: 0xA8
    uint Version;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Get instance field reference: public readonly System.UInt64 ApplicationID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ApplicationID();
    // Get instance field reference: public readonly System.Collections.Generic.Dictionary`2<System.String,System.String> DataStore
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_DataStore();
    // Get instance field reference: public readonly System.String Description
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Description();
    // Get instance field reference: public readonly System.UInt64 ID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ID();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList InvitedUsersOptional
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::UserList*& dyn_InvitedUsersOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList InvitedUsers
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::UserList*& dyn_InvitedUsers();
    // Get instance field reference: public readonly System.Boolean IsMembershipLocked
    [[deprecated("Use field access instead!")]] bool& dyn_IsMembershipLocked();
    // Get instance field reference: public readonly Oculus.Platform.RoomJoinPolicy JoinPolicy
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::RoomJoinPolicy& dyn_JoinPolicy();
    // Get instance field reference: public readonly Oculus.Platform.RoomJoinability Joinability
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::RoomJoinability& dyn_Joinability();
    // Get instance field reference: public readonly Oculus.Platform.Models.MatchmakingEnqueuedUserList MatchedUsersOptional
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::MatchmakingEnqueuedUserList*& dyn_MatchedUsersOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.MatchmakingEnqueuedUserList MatchedUsers
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::MatchmakingEnqueuedUserList*& dyn_MatchedUsers();
    // Get instance field reference: public readonly System.UInt32 MaxUsers
    [[deprecated("Use field access instead!")]] uint& dyn_MaxUsers();
    // Get instance field reference: public readonly System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: public readonly Oculus.Platform.Models.User OwnerOptional
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::User*& dyn_OwnerOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.User Owner
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::User*& dyn_Owner();
    // Get instance field reference: public readonly Oculus.Platform.Models.TeamList TeamsOptional
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::TeamList*& dyn_TeamsOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.TeamList Teams
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::TeamList*& dyn_Teams();
    // Get instance field reference: public readonly Oculus.Platform.RoomType Type
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::RoomType& dyn_Type();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList UsersOptional
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::UserList*& dyn_UsersOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList Users
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::UserList*& dyn_Users();
    // Get instance field reference: public readonly System.UInt32 Version
    [[deprecated("Use field access instead!")]] uint& dyn_Version();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A10888
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Room* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::Room::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Room*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.Room
  #pragma pack(pop)
  static check_size<sizeof(Room), 168 + sizeof(uint)> __Oculus_Platform_Models_RoomSizeCheck;
  static_assert(sizeof(Room) == 0xAC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::Room::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
