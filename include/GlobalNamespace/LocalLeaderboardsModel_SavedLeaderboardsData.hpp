// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LocalLeaderboardsModel
#include "GlobalNamespace/LocalLeaderboardsModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsModel::SavedLeaderboardsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsModel::SavedLeaderboardsData*, "", "LocalLeaderboardsModel/SavedLeaderboardsData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: LocalLeaderboardsModel/SavedLeaderboardsData
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalLeaderboardsModel::SavedLeaderboardsData : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.List`1<LocalLeaderboardsModel/LeaderboardData> _leaderboardsData
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>* leaderboardsData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>*
    constexpr operator ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>*() const noexcept {
      return leaderboardsData;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<LocalLeaderboardsModel/LeaderboardData> _leaderboardsData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>*& dyn__leaderboardsData();
    // public System.Void .ctor()
    // Offset: 0x1578144
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalLeaderboardsModel::SavedLeaderboardsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocalLeaderboardsModel::SavedLeaderboardsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalLeaderboardsModel::SavedLeaderboardsData*, creationType>()));
    }
  }; // LocalLeaderboardsModel/SavedLeaderboardsData
  #pragma pack(pop)
  static check_size<sizeof(LocalLeaderboardsModel::SavedLeaderboardsData), 16 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*>*)> __GlobalNamespace_LocalLeaderboardsModel_SavedLeaderboardsDataSizeCheck;
  static_assert(sizeof(LocalLeaderboardsModel::SavedLeaderboardsData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardsModel::SavedLeaderboardsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
