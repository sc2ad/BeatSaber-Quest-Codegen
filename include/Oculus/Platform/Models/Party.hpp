// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserList
  class UserList;
  // Forward declaring type: User
  class User;
  // Forward declaring type: Room
  class Room;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Party
  class Party;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::Party);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Party*, "Oculus.Platform.Models", "Party");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Party
  // [TokenAttribute] Offset: FFFFFFFF
  class Party : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x10
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly Oculus.Platform.Models.UserList InvitedUsersOptional
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Platform::Models::UserList* InvitedUsersOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x12419A8
    // public readonly Oculus.Platform.Models.UserList InvitedUsers
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Platform::Models::UserList* InvitedUsers;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // public readonly Oculus.Platform.Models.User LeaderOptional
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Platform::Models::User* LeaderOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::User*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x12419E0
    // public readonly Oculus.Platform.Models.User Leader
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Platform::Models::User* Leader;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::User*) == 0x8);
    // public readonly Oculus.Platform.Models.Room RoomOptional
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Platform::Models::Room* RoomOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::Room*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x1241A18
    // public readonly Oculus.Platform.Models.Room Room
    // Size: 0x8
    // Offset: 0x40
    ::Oculus::Platform::Models::Room* Room;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::Room*) == 0x8);
    // public readonly Oculus.Platform.Models.UserList UsersOptional
    // Size: 0x8
    // Offset: 0x48
    ::Oculus::Platform::Models::UserList* UsersOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x1241A50
    // public readonly Oculus.Platform.Models.UserList Users
    // Size: 0x8
    // Offset: 0x50
    ::Oculus::Platform::Models::UserList* Users;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    public:
    // Get instance field reference: public readonly System.UInt64 ID
    uint64_t& dyn_ID();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList InvitedUsersOptional
    ::Oculus::Platform::Models::UserList*& dyn_InvitedUsersOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList InvitedUsers
    ::Oculus::Platform::Models::UserList*& dyn_InvitedUsers();
    // Get instance field reference: public readonly Oculus.Platform.Models.User LeaderOptional
    ::Oculus::Platform::Models::User*& dyn_LeaderOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.User Leader
    ::Oculus::Platform::Models::User*& dyn_Leader();
    // Get instance field reference: public readonly Oculus.Platform.Models.Room RoomOptional
    ::Oculus::Platform::Models::Room*& dyn_RoomOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.Room Room
    ::Oculus::Platform::Models::Room*& dyn_Room();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList UsersOptional
    ::Oculus::Platform::Models::UserList*& dyn_UsersOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList Users
    ::Oculus::Platform::Models::UserList*& dyn_Users();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x19B0F90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Party* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::Party::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Party*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.Party
  #pragma pack(pop)
  static check_size<sizeof(Party), 80 + sizeof(::Oculus::Platform::Models::UserList*)> __Oculus_Platform_Models_PartySizeCheck;
  static_assert(sizeof(Party) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::Party::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
