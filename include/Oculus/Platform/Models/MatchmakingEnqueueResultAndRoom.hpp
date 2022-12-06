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
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
  // Forward declaring type: Room
  class Room;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingEnqueueResultAndRoom
  class MatchmakingEnqueueResultAndRoom;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*, "Oculus.Platform.Models", "MatchmakingEnqueueResultAndRoom");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchmakingEnqueueResultAndRoom : public ::Il2CppObject {
    public:
    public:
    // public readonly Oculus.Platform.Models.MatchmakingEnqueueResult MatchmakingEnqueueResult
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Platform::Models::MatchmakingEnqueueResult* MatchmakingEnqueueResult;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::MatchmakingEnqueueResult*) == 0x8);
    // public readonly Oculus.Platform.Models.Room Room
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Platform::Models::Room* Room;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::Room*) == 0x8);
    public:
    // Get instance field reference: public readonly Oculus.Platform.Models.MatchmakingEnqueueResult MatchmakingEnqueueResult
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::MatchmakingEnqueueResult*& dyn_MatchmakingEnqueueResult();
    // Get instance field reference: public readonly Oculus.Platform.Models.Room Room
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::Room*& dyn_Room();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A106C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingEnqueueResultAndRoom* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingEnqueueResultAndRoom*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom
  #pragma pack(pop)
  static check_size<sizeof(MatchmakingEnqueueResultAndRoom), 24 + sizeof(::Oculus::Platform::Models::Room*)> __Oculus_Platform_Models_MatchmakingEnqueueResultAndRoomSizeCheck;
  static_assert(sizeof(MatchmakingEnqueueResultAndRoom) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
