// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBoxGroup`1
#include "BeatmapSaveDataVersion3/BeatmapSaveData_EventBoxGroup_1.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightColorEventBoxGroup");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorEventBoxGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::LightColorEventBoxGroup : public ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox*> {
    public:
    // public System.Void .ctor(System.Single beat, System.Int32 groupId, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorEventBox> eventBoxes)
    // Offset: 0x281B728
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::LightColorEventBoxGroup* New_ctor(float beat, int groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBox*>* eventBoxes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::LightColorEventBoxGroup*, creationType>(beat, groupId, eventBoxes)));
    }
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorEventBoxGroup CopyWith(System.Nullable`1<System.Single> newBeat, System.Nullable`1<System.Int32> newGroupId)
    // Offset: 0x281B7A0
    ::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup* CopyWith(::System::Nullable_1<float> newBeat, ::System::Nullable_1<int> newGroupId);
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightColorEventBoxGroup
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup::CopyWith
// Il2CppName: CopyWith
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup* (BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup::*)(::System::Nullable_1<float>, ::System::Nullable_1<int>)>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup::CopyWith)> {
  static const MethodInfo* get() {
    static auto* newBeat = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* newGroupId = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightColorEventBoxGroup*), "CopyWith", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newBeat, newGroupId});
  }
};
