// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectExecutionRatingsRecorder/CutScoreHandler
#include "GlobalNamespace/BeatmapObjectExecutionRatingsRecorder_CutScoreHandler.hpp"
// Including type: Zenject.MemoryPool`1
#include "Zenject/MemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool*, "", "BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/Pool");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool : public ::Zenject::MemoryPool_1<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler*> {
    public:
    // protected System.Void OnDespawned(BeatmapObjectExecutionRatingsRecorder/CutScoreHandler item)
    // Offset: 0x14CA8CC
    void OnDespawned(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler* item);
    // public System.Void .ctor()
    // Offset: 0x14CA8E4
    // Implemented from: Zenject.MemoryPool`1
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool*, creationType>()));
    }
  }; // BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/Pool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool::OnDespawned
// Il2CppName: OnDespawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool::*)(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler*)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool::OnDespawned)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectExecutionRatingsRecorder/CutScoreHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool*), "OnDespawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder_CutScoreHandler::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
