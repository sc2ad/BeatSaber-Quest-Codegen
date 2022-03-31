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
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LaunchInvitePanelFlowResult
  class LaunchInvitePanelFlowResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::LaunchInvitePanelFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchInvitePanelFlowResult*, "Oculus.Platform.Models", "LaunchInvitePanelFlowResult");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LaunchInvitePanelFlowResult
  // [TokenAttribute] Offset: FFFFFFFF
  class LaunchInvitePanelFlowResult : public ::Il2CppObject {
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
    // public readonly Oculus.Platform.Models.UserList InvitedUsers
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Platform::Models::UserList* InvitedUsers;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    public:
    // Creating conversion operator: operator ::Oculus::Platform::Models::UserList*
    constexpr operator ::Oculus::Platform::Models::UserList*() const noexcept {
      return InvitedUsers;
    }
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList InvitedUsers
    ::Oculus::Platform::Models::UserList*& dyn_InvitedUsers();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x19ADBF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LaunchInvitePanelFlowResult* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::LaunchInvitePanelFlowResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LaunchInvitePanelFlowResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LaunchInvitePanelFlowResult
  #pragma pack(pop)
  static check_size<sizeof(LaunchInvitePanelFlowResult), 16 + sizeof(::Oculus::Platform::Models::UserList*)> __Oculus_Platform_Models_LaunchInvitePanelFlowResultSizeCheck;
  static_assert(sizeof(LaunchInvitePanelFlowResult) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LaunchInvitePanelFlowResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
