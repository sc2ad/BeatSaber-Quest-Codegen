// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBoxGroup
#include "BeatmapSaveDataVersion3/BeatmapSaveData_EventBoxGroup.hpp"
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
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup_1, "BeatmapSaveDataVersion3", "BeatmapSaveData/EventBoxGroup`1");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBoxGroup`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class BeatmapSaveData::EventBoxGroup_1 : public ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup {
    public:
    public:
    // protected System.Collections.Generic.List`1<T> e
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<T>* e;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<T>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: protected System.Collections.Generic.List`1<T> e
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<T>*& dyn_e() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup_1::dyn_e");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "e"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Collections.Generic.IReadOnlyList`1<T> get_eventBoxes()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IReadOnlyList_1<T>* get_eventBoxes() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup_1::get_eventBoxes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_eventBoxes", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*, false>(this, ___internal__method);
    }
    // protected System.Void .ctor(System.Single beat, System.Int32 groupId, System.Collections.Generic.List`1<T> eventBoxes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::EventBoxGroup_1<T>* New_ctor(float beat, int groupId, ::System::Collections::Generic::List_1<T>* eventBoxes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::EventBoxGroup_1<T>*, creationType>(beat, groupId, eventBoxes)));
    }
    // public override System.Collections.Generic.IReadOnlyList`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox> get_baseEventBoxes()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBoxGroup
    // Base method: System.Collections.Generic.IReadOnlyList`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox> EventBoxGroup::get_baseEventBoxes()
    ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox*>* get_baseEventBoxes() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup_1::get_baseEventBoxes");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_baseEventBoxes", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox*>*, false>(this, ___internal__method);
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBoxGroup`1
  // Could not write size check! Type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBoxGroup`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
