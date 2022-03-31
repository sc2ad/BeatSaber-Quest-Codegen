// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapEventDataProcessor`1
#include "GlobalNamespace/BeatmapEventDataProcessor_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightRotationBeatmapEventData
  class LightRotationBeatmapEventData;
  // Forward declaring type: BeatmapDataItem
  class BeatmapDataItem;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightRotationBeatmapEventDataProcessor
  class LightRotationBeatmapEventDataProcessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightRotationBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBeatmapEventDataProcessor*, "", "LightRotationBeatmapEventDataProcessor");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LightRotationBeatmapEventDataProcessor
  // [TokenAttribute] Offset: FFFFFFFF
  class LightRotationBeatmapEventDataProcessor : public ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::LightRotationBeatmapEventData*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x281CA8C
    // Implemented from: BeatmapEventDataProcessor`1
    // Base method: System.Void BeatmapEventDataProcessor_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightRotationBeatmapEventDataProcessor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightRotationBeatmapEventDataProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightRotationBeatmapEventDataProcessor*, creationType>()));
    }
    // protected override System.Void ProcessInsertedEventDataInternal(System.Collections.Generic.LinkedListNode`1<BeatmapDataItem> insertedNode)
    // Offset: 0x281C888
    // Implemented from: BeatmapEventDataProcessor`1
    // Base method: System.Void BeatmapEventDataProcessor_1::ProcessInsertedEventDataInternal(System.Collections.Generic.LinkedListNode`1<BeatmapDataItem> insertedNode)
    void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);
    // protected override System.Void ProcessBeforeDeleteEventDataInternal(System.Collections.Generic.LinkedListNode`1<BeatmapDataItem> nodeToDelete)
    // Offset: 0x281C994
    // Implemented from: BeatmapEventDataProcessor`1
    // Base method: System.Void BeatmapEventDataProcessor_1::ProcessBeforeDeleteEventDataInternal(System.Collections.Generic.LinkedListNode`1<BeatmapDataItem> nodeToDelete)
    void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);
  }; // LightRotationBeatmapEventDataProcessor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBeatmapEventDataProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessInsertedEventDataInternal
// Il2CppName: ProcessInsertedEventDataInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationBeatmapEventDataProcessor::*)(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessInsertedEventDataInternal)> {
  static const MethodInfo* get() {
    static auto* insertedNode = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "LinkedListNode`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationBeatmapEventDataProcessor*), "ProcessInsertedEventDataInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{insertedNode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessBeforeDeleteEventDataInternal
// Il2CppName: ProcessBeforeDeleteEventDataInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationBeatmapEventDataProcessor::*)(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessBeforeDeleteEventDataInternal)> {
  static const MethodInfo* get() {
    static auto* nodeToDelete = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "LinkedListNode`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationBeatmapEventDataProcessor*), "ProcessBeforeDeleteEventDataInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeToDelete});
  }
};
