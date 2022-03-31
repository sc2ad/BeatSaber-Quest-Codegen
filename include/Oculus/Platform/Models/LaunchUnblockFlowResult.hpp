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
  // Forward declaring type: LaunchUnblockFlowResult
  class LaunchUnblockFlowResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::LaunchUnblockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchUnblockFlowResult*, "Oculus.Platform.Models", "LaunchUnblockFlowResult");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LaunchUnblockFlowResult
  // [TokenAttribute] Offset: FFFFFFFF
  class LaunchUnblockFlowResult : public ::Il2CppObject {
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
    // public readonly System.Boolean DidCancel
    // Size: 0x1
    // Offset: 0x10
    bool DidCancel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean DidUnblock
    // Size: 0x1
    // Offset: 0x11
    bool DidUnblock;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.Boolean DidCancel
    bool& dyn_DidCancel();
    // Get instance field reference: public readonly System.Boolean DidUnblock
    bool& dyn_DidUnblock();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x19ADFC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LaunchUnblockFlowResult* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::LaunchUnblockFlowResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LaunchUnblockFlowResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LaunchUnblockFlowResult
  #pragma pack(pop)
  static check_size<sizeof(LaunchUnblockFlowResult), 17 + sizeof(bool)> __Oculus_Platform_Models_LaunchUnblockFlowResultSizeCheck;
  static_assert(sizeof(LaunchUnblockFlowResult) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LaunchUnblockFlowResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
