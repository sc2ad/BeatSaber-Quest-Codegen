// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveDataItem.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.NoteType
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveData_NoteType.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/NoteData");
// Type namespace: BeatmapSaveDataVersion2_6_0AndEarlier
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.NoteData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::NoteData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
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
    // private System.Single _time
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _lineIndex
    // Size: 0x4
    // Offset: 0x14
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private NoteLineLayer _lineLayer
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::NoteLineLayer lineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // private BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.NoteType _type
    // Size: 0x4
    // Offset: 0x1C
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteType type;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteType) == 0x4);
    // private NoteCutDirection _cutDirection
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::NoteCutDirection cutDirection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutDirection) == 0x4);
    public:
    // Get instance field reference: private System.Single _time
    float& dyn__time();
    // Get instance field reference: private System.Int32 _lineIndex
    int& dyn__lineIndex();
    // Get instance field reference: private NoteLineLayer _lineLayer
    ::GlobalNamespace::NoteLineLayer& dyn__lineLayer();
    // Get instance field reference: private BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.NoteType _type
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteType& dyn__type();
    // Get instance field reference: private NoteCutDirection _cutDirection
    ::GlobalNamespace::NoteCutDirection& dyn__cutDirection();
    // public System.Int32 get_lineIndex()
    // Offset: 0x2819290
    int get_lineIndex();
    // public NoteLineLayer get_lineLayer()
    // Offset: 0x2819298
    ::GlobalNamespace::NoteLineLayer get_lineLayer();
    // public BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.NoteType get_type()
    // Offset: 0x28192A0
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteType get_type();
    // public NoteCutDirection get_cutDirection()
    // Offset: 0x28192A8
    ::GlobalNamespace::NoteCutDirection get_cutDirection();
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer lineLayer, BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.NoteType type, NoteCutDirection cutDirection)
    // Offset: 0x28192B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::NoteData* New_ctor(float time, int lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteType type, ::GlobalNamespace::NoteCutDirection cutDirection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::NoteData*, creationType>(time, lineIndex, lineLayer, type, cutDirection)));
    }
    // public override System.Single get_time()
    // Offset: 0x2819288
    // Implemented from: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem
    // Base method: System.Single BeatmapSaveDataItem::get_time()
    float get_time();
  }; // BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.NoteData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::NoteData), 32 + sizeof(::GlobalNamespace::NoteCutDirection)> __BeatmapSaveDataVersion2_6_0AndEarlier_BeatmapSaveData_NoteDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::NoteData) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::get_lineIndex
// Il2CppName: get_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::get_lineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData*), "get_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::get_lineLayer
// Il2CppName: get_lineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::get_lineLayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData*), "get_lineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteType (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::get_cutDirection
// Il2CppName: get_cutDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::get_cutDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData*), "get_cutDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::NoteData*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
