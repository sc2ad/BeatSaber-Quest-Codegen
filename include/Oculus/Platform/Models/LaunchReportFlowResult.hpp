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
  // Forward declaring type: LaunchReportFlowResult
  class LaunchReportFlowResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::LaunchReportFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchReportFlowResult*, "Oculus.Platform.Models", "LaunchReportFlowResult");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LaunchReportFlowResult
  // [TokenAttribute] Offset: FFFFFFFF
  class LaunchReportFlowResult : public ::Il2CppObject {
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
    // Padding between fields: DidCancel and: UserReportId
    char __padding0[0x7] = {};
    // public readonly System.UInt64 UserReportId
    // Size: 0x8
    // Offset: 0x18
    uint64_t UserReportId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Get instance field reference: public readonly System.Boolean DidCancel
    bool& dyn_DidCancel();
    // Get instance field reference: public readonly System.UInt64 UserReportId
    uint64_t& dyn_UserReportId();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x19ADDE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LaunchReportFlowResult* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::LaunchReportFlowResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LaunchReportFlowResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LaunchReportFlowResult
  #pragma pack(pop)
  static check_size<sizeof(LaunchReportFlowResult), 24 + sizeof(uint64_t)> __Oculus_Platform_Models_LaunchReportFlowResultSizeCheck;
  static_assert(sizeof(LaunchReportFlowResult) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LaunchReportFlowResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
