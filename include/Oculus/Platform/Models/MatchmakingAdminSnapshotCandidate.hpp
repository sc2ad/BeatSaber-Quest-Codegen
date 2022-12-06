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
  // Forward declaring type: MatchmakingAdminSnapshotCandidate
  class MatchmakingAdminSnapshotCandidate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate*, "Oculus.Platform.Models", "MatchmakingAdminSnapshotCandidate");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.MatchmakingAdminSnapshotCandidate
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchmakingAdminSnapshotCandidate : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Boolean CanMatch
    // Size: 0x1
    // Offset: 0x10
    bool CanMatch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CanMatch and: MyTotalScore
    char __padding0[0x7] = {};
    // public readonly System.Double MyTotalScore
    // Size: 0x8
    // Offset: 0x18
    double MyTotalScore;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public readonly System.Double TheirCurrentThreshold
    // Size: 0x8
    // Offset: 0x20
    double TheirCurrentThreshold;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public readonly System.Double TheirTotalScore
    // Size: 0x8
    // Offset: 0x28
    double TheirTotalScore;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public readonly System.String TraceId
    // Size: 0x8
    // Offset: 0x30
    ::StringW TraceId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.Boolean CanMatch
    [[deprecated("Use field access instead!")]] bool& dyn_CanMatch();
    // Get instance field reference: public readonly System.Double MyTotalScore
    [[deprecated("Use field access instead!")]] double& dyn_MyTotalScore();
    // Get instance field reference: public readonly System.Double TheirCurrentThreshold
    [[deprecated("Use field access instead!")]] double& dyn_TheirCurrentThreshold();
    // Get instance field reference: public readonly System.Double TheirTotalScore
    [[deprecated("Use field access instead!")]] double& dyn_TheirTotalScore();
    // Get instance field reference: public readonly System.String TraceId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TraceId();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A156FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingAdminSnapshotCandidate* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingAdminSnapshotCandidate*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.MatchmakingAdminSnapshotCandidate
  #pragma pack(pop)
  static check_size<sizeof(MatchmakingAdminSnapshotCandidate), 48 + sizeof(::StringW)> __Oculus_Platform_Models_MatchmakingAdminSnapshotCandidateSizeCheck;
  static_assert(sizeof(MatchmakingAdminSnapshotCandidate) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
