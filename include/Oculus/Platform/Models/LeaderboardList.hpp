// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
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
  // Forward declaring type: Leaderboard
  class Leaderboard;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardList
  class LeaderboardList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::LeaderboardList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LeaderboardList*, "Oculus.Platform.Models", "LeaderboardList");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Models.LeaderboardList
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Leaderboard*> {
    public:
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0x1967654
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardList* New_ctor(::System::IntPtr a) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::LeaderboardList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardList*, creationType>(a)));
    }
  }; // Oculus.Platform.Models.LeaderboardList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LeaderboardList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
