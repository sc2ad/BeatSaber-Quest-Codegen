// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapEventDataBoxGroup
#include "GlobalNamespace/BeatmapEventDataBoxGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventDataBox
  class BeatmapEventDataBox;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*, "", "BeatmapEventDataBoxGroup/ElementData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEventDataBoxGroup/ElementData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapEventDataBoxGroup::ElementData : public ::Il2CppObject {
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
    // public readonly System.Single startBeat
    // Size: 0x4
    // Offset: 0x10
    float startBeat;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Int32 elementId
    // Size: 0x4
    // Offset: 0x14
    int elementId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 orderIndex
    // Size: 0x4
    // Offset: 0x18
    int orderIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: orderIndex and: eventBoxType
    char __padding2[0x4] = {};
    // public readonly System.Type eventBoxType
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* eventBoxType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public readonly System.Int32 eventBoxSubtypeIdentifier
    // Size: 0x4
    // Offset: 0x28
    int eventBoxSubtypeIdentifier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: eventBoxSubtypeIdentifier and: eventBox
    char __padding4[0x4] = {};
    // public readonly BeatmapEventDataBox eventBox
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapEventDataBox* eventBox;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapEventDataBox*) == 0x8);
    // public readonly BeatmapEventDataBoxGroup boxGroup
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapEventDataBoxGroup*) == 0x8);
    // private BeatmapEventDataBoxGroup/ElementData _next
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData* next;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*) == 0x8);
    // private BeatmapEventDataBoxGroup/ElementData _previous
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData* previous;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Single startBeat
    float& dyn_startBeat();
    // Get instance field reference: public readonly System.Int32 elementId
    int& dyn_elementId();
    // Get instance field reference: public readonly System.Int32 orderIndex
    int& dyn_orderIndex();
    // Get instance field reference: public readonly System.Type eventBoxType
    ::System::Type*& dyn_eventBoxType();
    // Get instance field reference: public readonly System.Int32 eventBoxSubtypeIdentifier
    int& dyn_eventBoxSubtypeIdentifier();
    // Get instance field reference: public readonly BeatmapEventDataBox eventBox
    ::GlobalNamespace::BeatmapEventDataBox*& dyn_eventBox();
    // Get instance field reference: public readonly BeatmapEventDataBoxGroup boxGroup
    ::GlobalNamespace::BeatmapEventDataBoxGroup*& dyn_boxGroup();
    // Get instance field reference: private BeatmapEventDataBoxGroup/ElementData _next
    ::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*& dyn__next();
    // Get instance field reference: private BeatmapEventDataBoxGroup/ElementData _previous
    ::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*& dyn__previous();
    // public BeatmapEventDataBoxGroup/ElementData get_next()
    // Offset: 0x14C7C64
    ::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData* get_next();
    // public BeatmapEventDataBoxGroup/ElementData get_previous()
    // Offset: 0x14C7C6C
    ::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData* get_previous();
    // public System.Void .ctor(BeatmapEventDataBoxGroup boxGroup, BeatmapEventDataBox eventBox, System.Int32 elementId, System.Int32 orderIndex, System.Single startBeat)
    // Offset: 0x14C77CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapEventDataBoxGroup::ElementData* New_ctor(::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup, ::GlobalNamespace::BeatmapEventDataBox* eventBox, int elementId, int orderIndex, float startBeat) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapEventDataBoxGroup::ElementData*, creationType>(boxGroup, eventBox, elementId, orderIndex, startBeat)));
    }
    // public System.Void ResetConnections()
    // Offset: 0x14C7C74
    void ResetConnections();
    // public System.Void ConnectWithPrevious(BeatmapEventDataBoxGroup/ElementData prevElementData)
    // Offset: 0x14C7C7C
    void ConnectWithPrevious(::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData* prevElementData);
    // public System.Void ConnectWithNext(BeatmapEventDataBoxGroup/ElementData nextElementData)
    // Offset: 0x14C7C8C
    void ConnectWithNext(::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData* nextElementData);
  }; // BeatmapEventDataBoxGroup/ElementData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapEventDataBoxGroup::ElementData), 72 + sizeof(::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*)> __GlobalNamespace_BeatmapEventDataBoxGroup_ElementDataSizeCheck;
  static_assert(sizeof(BeatmapEventDataBoxGroup::ElementData) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::get_next
// Il2CppName: get_next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData* (GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::*)()>(&GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::get_next)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*), "get_next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::get_previous
// Il2CppName: get_previous
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData* (GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::*)()>(&GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::get_previous)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*), "get_previous", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::ResetConnections
// Il2CppName: ResetConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::*)()>(&GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::ResetConnections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*), "ResetConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::ConnectWithPrevious
// Il2CppName: ConnectWithPrevious
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::*)(::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*)>(&GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::ConnectWithPrevious)> {
  static const MethodInfo* get() {
    static auto* prevElementData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventDataBoxGroup/ElementData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*), "ConnectWithPrevious", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prevElementData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::ConnectWithNext
// Il2CppName: ConnectWithNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::*)(::GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*)>(&GlobalNamespace::BeatmapEventDataBoxGroup::ElementData::ConnectWithNext)> {
  static const MethodInfo* get() {
    static auto* nextElementData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventDataBoxGroup/ElementData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBoxGroup::ElementData*), "ConnectWithNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nextElementData});
  }
};