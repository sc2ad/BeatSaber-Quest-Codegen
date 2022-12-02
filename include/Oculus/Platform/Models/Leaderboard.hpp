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
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Destination
  class Destination;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Leaderboard
  class Leaderboard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::Leaderboard);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Leaderboard*, "Oculus.Platform.Models", "Leaderboard");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Leaderboard
  // [TokenAttribute] Offset: FFFFFFFF
  class Leaderboard : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String ApiName
    // Size: 0x8
    // Offset: 0x10
    ::StringW ApiName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly Oculus.Platform.Models.Destination DestinationOptional
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Platform::Models::Destination* DestinationOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::Destination*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x1104B24
    // public readonly Oculus.Platform.Models.Destination Destination
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Platform::Models::Destination* Destination;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::Destination*) == 0x8);
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x28
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Get instance field reference: public readonly System.String ApiName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ApiName();
    // Get instance field reference: public readonly Oculus.Platform.Models.Destination DestinationOptional
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::Destination*& dyn_DestinationOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.Destination Destination
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::Destination*& dyn_Destination();
    // Get instance field reference: public readonly System.UInt64 ID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ID();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A16258
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Leaderboard* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::Leaderboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Leaderboard*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.Leaderboard
  #pragma pack(pop)
  static check_size<sizeof(Leaderboard), 40 + sizeof(uint64_t)> __Oculus_Platform_Models_LeaderboardSizeCheck;
  static_assert(sizeof(Leaderboard) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::Leaderboard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
