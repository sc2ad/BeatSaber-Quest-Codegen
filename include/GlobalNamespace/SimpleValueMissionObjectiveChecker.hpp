// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissionObjectiveChecker
#include "GlobalNamespace/MissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SimpleValueMissionObjectiveChecker
  class SimpleValueMissionObjectiveChecker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SimpleValueMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleValueMissionObjectiveChecker*, "", "SimpleValueMissionObjectiveChecker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: SimpleValueMissionObjectiveChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleValueMissionObjectiveChecker : public ::GlobalNamespace::MissionObjectiveChecker {
    public:
    // protected System.Void CheckAndUpdateStatus()
    // Offset: 0x13BD464
    void CheckAndUpdateStatus();
    // protected System.Void .ctor()
    // Offset: 0x13BD6D8
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleValueMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SimpleValueMissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleValueMissionObjectiveChecker*, creationType>()));
    }
  }; // SimpleValueMissionObjectiveChecker
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleValueMissionObjectiveChecker::CheckAndUpdateStatus
// Il2CppName: CheckAndUpdateStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleValueMissionObjectiveChecker::*)()>(&GlobalNamespace::SimpleValueMissionObjectiveChecker::CheckAndUpdateStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleValueMissionObjectiveChecker*), "CheckAndUpdateStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleValueMissionObjectiveChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
