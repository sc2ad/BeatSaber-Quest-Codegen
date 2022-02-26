// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerBadgeDataMinMaxFloatSO
#include "GlobalNamespace/MultiplayerBadgeDataMinMaxFloatSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: MultiplayerBadgeDataPrecisionSO
  class MultiplayerBadgeDataPrecisionSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataPrecisionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataPrecisionSO*, "", "MultiplayerBadgeDataPrecisionSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBadgeDataPrecisionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerBadgeDataPrecisionSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO {
    public:
    // public System.Void .ctor()
    // Offset: 0x142AADC
    // Implemented from: MultiplayerBadgeDataMinMaxFloatSO
    // Base method: System.Void MultiplayerBadgeDataMinMaxFloatSO::.ctor()
    // Base method: System.Void MultiplayerBadgeDataSO::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgeDataPrecisionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerBadgeDataPrecisionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgeDataPrecisionSO*, creationType>()));
    }
    // protected override System.Single GetValue(MultiplayerPlayerResultsData result)
    // Offset: 0x142AA9C
    // Implemented from: MultiplayerBadgeDataMinMaxFloatSO
    // Base method: System.Single MultiplayerBadgeDataMinMaxFloatSO::GetValue(MultiplayerPlayerResultsData result)
    float GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result);
  }; // MultiplayerBadgeDataPrecisionSO
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataPrecisionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataPrecisionSO::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerBadgeDataPrecisionSO::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(&GlobalNamespace::MultiplayerBadgeDataPrecisionSO::GetValue)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeDataPrecisionSO*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
