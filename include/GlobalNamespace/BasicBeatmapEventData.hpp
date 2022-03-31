// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapEventData
#include "GlobalNamespace/BeatmapEventData.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: BeatmapDataItem because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BasicBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicBeatmapEventData*, "", "BasicBeatmapEventData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BasicBeatmapEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class BasicBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
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
    // private System.Int32 <sameTypeIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int sameTypeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly BasicBeatmapEventType basicBeatmapEventType
    // Size: 0x4
    // Offset: 0x34
    ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // public readonly System.Int32 value
    // Size: 0x4
    // Offset: 0x38
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Single floatValue
    // Size: 0x4
    // Offset: 0x3C
    float floatValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x122922C
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<BasicBeatmapEventType,BasicBeatmapEventData> _defaultsForType
    static ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::GlobalNamespace::BasicBeatmapEventData*>* _get__defaultsForType();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<BasicBeatmapEventType,BasicBeatmapEventData> _defaultsForType
    static void _set__defaultsForType(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::GlobalNamespace::BasicBeatmapEventData*>* value);
    // Get instance field reference: private System.Int32 <sameTypeIndex>k__BackingField
    int& dyn_$sameTypeIndex$k__BackingField();
    // Get instance field reference: public readonly BasicBeatmapEventType basicBeatmapEventType
    ::GlobalNamespace::BasicBeatmapEventType& dyn_basicBeatmapEventType();
    // Get instance field reference: public readonly System.Int32 value
    int& dyn_value();
    // Get instance field reference: public readonly System.Single floatValue
    float& dyn_floatValue();
    // public BasicBeatmapEventData get_previousSameTypeEventData()
    // Offset: 0x28153D4
    ::GlobalNamespace::BasicBeatmapEventData* get_previousSameTypeEventData();
    // public BasicBeatmapEventData get_nextSameTypeEventData()
    // Offset: 0x2815454
    ::GlobalNamespace::BasicBeatmapEventData* get_nextSameTypeEventData();
    // public System.Int32 get_sameTypeIndex()
    // Offset: 0x28154D4
    int get_sameTypeIndex();
    // private System.Void set_sameTypeIndex(System.Int32 value)
    // Offset: 0x28154DC
    void set_sameTypeIndex(int value);
    // public System.Void .ctor(System.Single time, BasicBeatmapEventType basicBeatmapEventType, System.Int32 value, System.Single floatValue)
    // Offset: 0x28154E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicBeatmapEventData* New_ctor(float time, ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType, int value, float floatValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BasicBeatmapEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicBeatmapEventData*, creationType>(time, basicBeatmapEventType, value, floatValue)));
    }
    // static private System.Void .cctor()
    // Offset: 0x2815750
    static void _cctor();
    // static public System.Int32 SubtypeIdentifier(BasicBeatmapEventType type)
    // Offset: 0x281558C
    static int SubtypeIdentifier(::GlobalNamespace::BasicBeatmapEventType type);
    // public System.Void SetFirstSameTypeIndex()
    // Offset: 0x2815618
    void SetFirstSameTypeIndex();
    // public System.Void RecalculateSameTypeIndexFromPreviousEvent(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x2815624
    void RecalculateSameTypeIndexFromPreviousEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
    // public override BeatmapDataItem GetCopy()
    // Offset: 0x2815590
    // Implemented from: BeatmapDataItem
    // Base method: BeatmapDataItem BeatmapDataItem::GetCopy()
    ::GlobalNamespace::BeatmapDataItem* GetCopy();
    // protected override BeatmapEventData GetDefault()
    // Offset: 0x2815644
    // Implemented from: BeatmapEventData
    // Base method: BeatmapEventData BeatmapEventData::GetDefault()
    ::GlobalNamespace::BeatmapEventData* GetDefault();
  }; // BasicBeatmapEventData
  #pragma pack(pop)
  static check_size<sizeof(BasicBeatmapEventData), 60 + sizeof(float)> __GlobalNamespace_BasicBeatmapEventDataSizeCheck;
  static_assert(sizeof(BasicBeatmapEventData) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapEventData::get_previousSameTypeEventData
// Il2CppName: get_previousSameTypeEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BasicBeatmapEventData* (GlobalNamespace::BasicBeatmapEventData::*)()>(&GlobalNamespace::BasicBeatmapEventData::get_previousSameTypeEventData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapEventData*), "get_previousSameTypeEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapEventData::get_nextSameTypeEventData
// Il2CppName: get_nextSameTypeEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BasicBeatmapEventData* (GlobalNamespace::BasicBeatmapEventData::*)()>(&GlobalNamespace::BasicBeatmapEventData::get_nextSameTypeEventData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapEventData*), "get_nextSameTypeEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapEventData::get_sameTypeIndex
// Il2CppName: get_sameTypeIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BasicBeatmapEventData::*)()>(&GlobalNamespace::BasicBeatmapEventData::get_sameTypeIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapEventData*), "get_sameTypeIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapEventData::set_sameTypeIndex
// Il2CppName: set_sameTypeIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicBeatmapEventData::*)(int)>(&GlobalNamespace::BasicBeatmapEventData::set_sameTypeIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapEventData*), "set_sameTypeIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapEventData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BasicBeatmapEventData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapEventData*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapEventData::SubtypeIdentifier
// Il2CppName: SubtypeIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::GlobalNamespace::BasicBeatmapEventType)>(&GlobalNamespace::BasicBeatmapEventData::SubtypeIdentifier)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapEventData*), "SubtypeIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapEventData::SetFirstSameTypeIndex
// Il2CppName: SetFirstSameTypeIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicBeatmapEventData::*)()>(&GlobalNamespace::BasicBeatmapEventData::SetFirstSameTypeIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapEventData*), "SetFirstSameTypeIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapEventData::RecalculateSameTypeIndexFromPreviousEvent
// Il2CppName: RecalculateSameTypeIndexFromPreviousEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicBeatmapEventData::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::BasicBeatmapEventData::RecalculateSameTypeIndexFromPreviousEvent)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapEventData*), "RecalculateSameTypeIndexFromPreviousEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapEventData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (GlobalNamespace::BasicBeatmapEventData::*)()>(&GlobalNamespace::BasicBeatmapEventData::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapEventData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapEventData::GetDefault
// Il2CppName: GetDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (GlobalNamespace::BasicBeatmapEventData::*)()>(&GlobalNamespace::BasicBeatmapEventData::GetDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapEventData*), "GetDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
