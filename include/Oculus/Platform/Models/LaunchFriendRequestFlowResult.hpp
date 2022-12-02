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
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LaunchFriendRequestFlowResult
  class LaunchFriendRequestFlowResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::LaunchFriendRequestFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchFriendRequestFlowResult*, "Oculus.Platform.Models", "LaunchFriendRequestFlowResult");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LaunchFriendRequestFlowResult
  // [TokenAttribute] Offset: FFFFFFFF
  class LaunchFriendRequestFlowResult : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Boolean DidCancel
    // Size: 0x1
    // Offset: 0x10
    bool DidCancel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean DidSendRequest
    // Size: 0x1
    // Offset: 0x11
    bool DidSendRequest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.Boolean DidCancel
    [[deprecated("Use field access instead!")]] bool& dyn_DidCancel();
    // Get instance field reference: public readonly System.Boolean DidSendRequest
    [[deprecated("Use field access instead!")]] bool& dyn_DidSendRequest();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A0FDC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LaunchFriendRequestFlowResult* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::LaunchFriendRequestFlowResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LaunchFriendRequestFlowResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LaunchFriendRequestFlowResult
  #pragma pack(pop)
  static check_size<sizeof(LaunchFriendRequestFlowResult), 17 + sizeof(bool)> __Oculus_Platform_Models_LaunchFriendRequestFlowResultSizeCheck;
  static_assert(sizeof(LaunchFriendRequestFlowResult) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LaunchFriendRequestFlowResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
