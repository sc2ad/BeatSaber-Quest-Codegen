// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.LivestreamingStartStatus
#include "Oculus/Platform/LivestreamingStartStatus.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LivestreamingStartResult
  class LivestreamingStartResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::LivestreamingStartResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LivestreamingStartResult*, "Oculus.Platform.Models", "LivestreamingStartResult");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LivestreamingStartResult
  // [TokenAttribute] Offset: FFFFFFFF
  class LivestreamingStartResult : public ::Il2CppObject {
    public:
    public:
    // public readonly Oculus.Platform.LivestreamingStartStatus StreamingResult
    // Size: 0x4
    // Offset: 0x10
    ::Oculus::Platform::LivestreamingStartStatus StreamingResult;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::LivestreamingStartStatus) == 0x4);
    public:
    // Creating conversion operator: operator ::Oculus::Platform::LivestreamingStartStatus
    constexpr operator ::Oculus::Platform::LivestreamingStartStatus() const noexcept {
      return StreamingResult;
    }
    // Get instance field reference: public readonly Oculus.Platform.LivestreamingStartStatus StreamingResult
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::LivestreamingStartStatus& dyn_StreamingResult();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A11068
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LivestreamingStartResult* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::LivestreamingStartResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LivestreamingStartResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LivestreamingStartResult
  #pragma pack(pop)
  static check_size<sizeof(LivestreamingStartResult), 16 + sizeof(::Oculus::Platform::LivestreamingStartStatus)> __Oculus_Platform_Models_LivestreamingStartResultSizeCheck;
  static_assert(sizeof(LivestreamingStartResult) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LivestreamingStartResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
