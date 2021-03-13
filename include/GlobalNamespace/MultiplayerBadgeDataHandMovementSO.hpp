// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerBadgeDataMinMaxFloatSO
#include "GlobalNamespace/MultiplayerBadgeDataMinMaxFloatSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBadgeDataHandMovementSO
  // [] Offset: FFFFFFFF
  class MultiplayerBadgeDataHandMovementSO : public GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO {
    public:
    // Creating value type constructor for type: MultiplayerBadgeDataHandMovementSO
    MultiplayerBadgeDataHandMovementSO() noexcept {}
    // protected override System.Single GetValue(MultiplayerPlayerResultsData result)
    // Offset: 0x1038E18
    // Implemented from: MultiplayerBadgeDataMinMaxFloatSO
    // Base method: System.Single MultiplayerBadgeDataMinMaxFloatSO::GetValue_NEW(MultiplayerPlayerResultsData result)
    float GetValue(GlobalNamespace::MultiplayerPlayerResultsData* result);
    // public System.Void .ctor()
    // Offset: 0x1038E40
    // Implemented from: MultiplayerBadgeDataMinMaxFloatSO
    // Base method: System.Void MultiplayerBadgeDataMinMaxFloatSO::.ctor()
    // Base method: System.Void MultiplayerBadgeDataSO::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgeDataHandMovementSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerBadgeDataHandMovementSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgeDataHandMovementSO*, creationType>()));
    }
  }; // MultiplayerBadgeDataHandMovementSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgeDataHandMovementSO*, "", "MultiplayerBadgeDataHandMovementSO");