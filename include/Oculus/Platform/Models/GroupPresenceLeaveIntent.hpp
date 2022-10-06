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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: GroupPresenceLeaveIntent
  class GroupPresenceLeaveIntent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::GroupPresenceLeaveIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::GroupPresenceLeaveIntent*, "Oculus.Platform.Models", "GroupPresenceLeaveIntent");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.GroupPresenceLeaveIntent
  // [TokenAttribute] Offset: FFFFFFFF
  class GroupPresenceLeaveIntent : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String DestinationApiName
    // Size: 0x8
    // Offset: 0x10
    ::StringW DestinationApiName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String LobbySessionId
    // Size: 0x8
    // Offset: 0x18
    ::StringW LobbySessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String MatchSessionId
    // Size: 0x8
    // Offset: 0x20
    ::StringW MatchSessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.String DestinationApiName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DestinationApiName();
    // Get instance field reference: public readonly System.String LobbySessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_LobbySessionId();
    // Get instance field reference: public readonly System.String MatchSessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_MatchSessionId();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x19F6CC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupPresenceLeaveIntent* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::GroupPresenceLeaveIntent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupPresenceLeaveIntent*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.GroupPresenceLeaveIntent
  #pragma pack(pop)
  static check_size<sizeof(GroupPresenceLeaveIntent), 32 + sizeof(::StringW)> __Oculus_Platform_Models_GroupPresenceLeaveIntentSizeCheck;
  static_assert(sizeof(GroupPresenceLeaveIntent) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::GroupPresenceLeaveIntent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
