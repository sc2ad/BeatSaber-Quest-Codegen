// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: LeaderboardEntry
  class LeaderboardEntry;
}
// Completed forward declares
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: LeaderboardEntries
  class LeaderboardEntries;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::LeaderboardEntries);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::LeaderboardEntries*, "BeatSaberAPI.DataTransferObjects", "LeaderboardEntries");
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.LeaderboardEntries
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardEntries : public ::Il2CppObject {
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
    // public BeatSaberAPI.DataTransferObjects.LeaderboardEntry[] entries
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*> entries;
    // Field size check
    static_assert(sizeof(::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>
    constexpr operator ::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>() const noexcept {
      return entries;
    }
    // Get instance field reference: public BeatSaberAPI.DataTransferObjects.LeaderboardEntry[] entries
    ::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>& dyn_entries();
    // public System.Void .ctor()
    // Offset: 0x2B40600
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardEntries* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatSaberAPI::DataTransferObjects::LeaderboardEntries::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardEntries*, creationType>()));
    }
  }; // BeatSaberAPI.DataTransferObjects.LeaderboardEntries
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardEntries), 16 + sizeof(::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>)> __BeatSaberAPI_DataTransferObjects_LeaderboardEntriesSizeCheck;
  static_assert(sizeof(LeaderboardEntries) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::LeaderboardEntries::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
