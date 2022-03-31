// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.UserPresenceStatus
#include "Oculus/Platform/UserPresenceStatus.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::User);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::User*, "Oculus.Platform.Models", "User");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.User
  // [TokenAttribute] Offset: FFFFFFFF
  class User : public ::Il2CppObject {
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
    // public readonly System.String DisplayName
    // Size: 0x8
    // Offset: 0x10
    ::StringW DisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x18
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String ImageURL
    // Size: 0x8
    // Offset: 0x20
    ::StringW ImageURL;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String InviteToken
    // Size: 0x8
    // Offset: 0x28
    ::StringW InviteToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String OculusID
    // Size: 0x8
    // Offset: 0x30
    ::StringW OculusID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String Presence
    // Size: 0x8
    // Offset: 0x38
    ::StringW Presence;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String PresenceDeeplinkMessage
    // Size: 0x8
    // Offset: 0x40
    ::StringW PresenceDeeplinkMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String PresenceDestinationApiName
    // Size: 0x8
    // Offset: 0x48
    ::StringW PresenceDestinationApiName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String PresenceLobbySessionId
    // Size: 0x8
    // Offset: 0x50
    ::StringW PresenceLobbySessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String PresenceMatchSessionId
    // Size: 0x8
    // Offset: 0x58
    ::StringW PresenceMatchSessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly Oculus.Platform.UserPresenceStatus PresenceStatus
    // Size: 0x4
    // Offset: 0x60
    ::Oculus::Platform::UserPresenceStatus PresenceStatus;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::UserPresenceStatus) == 0x4);
    // Padding between fields: PresenceStatus and: SmallImageUrl
    char __padding10[0x4] = {};
    // public readonly System.String SmallImageUrl
    // Size: 0x8
    // Offset: 0x68
    ::StringW SmallImageUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.String DisplayName
    ::StringW& dyn_DisplayName();
    // Get instance field reference: public readonly System.UInt64 ID
    uint64_t& dyn_ID();
    // Get instance field reference: public readonly System.String ImageURL
    ::StringW& dyn_ImageURL();
    // Get instance field reference: public readonly System.String InviteToken
    ::StringW& dyn_InviteToken();
    // Get instance field reference: public readonly System.String OculusID
    ::StringW& dyn_OculusID();
    // Get instance field reference: public readonly System.String Presence
    ::StringW& dyn_Presence();
    // Get instance field reference: public readonly System.String PresenceDeeplinkMessage
    ::StringW& dyn_PresenceDeeplinkMessage();
    // Get instance field reference: public readonly System.String PresenceDestinationApiName
    ::StringW& dyn_PresenceDestinationApiName();
    // Get instance field reference: public readonly System.String PresenceLobbySessionId
    ::StringW& dyn_PresenceLobbySessionId();
    // Get instance field reference: public readonly System.String PresenceMatchSessionId
    ::StringW& dyn_PresenceMatchSessionId();
    // Get instance field reference: public readonly Oculus.Platform.UserPresenceStatus PresenceStatus
    ::Oculus::Platform::UserPresenceStatus& dyn_PresenceStatus();
    // Get instance field reference: public readonly System.String SmallImageUrl
    ::StringW& dyn_SmallImageUrl();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x19B3638
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static User* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::User::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<User*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.User
  #pragma pack(pop)
  static check_size<sizeof(User), 104 + sizeof(::StringW)> __Oculus_Platform_Models_UserSizeCheck;
  static_assert(sizeof(User) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::User::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
