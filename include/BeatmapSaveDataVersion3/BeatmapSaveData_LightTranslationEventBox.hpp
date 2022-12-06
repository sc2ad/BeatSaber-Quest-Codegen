// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox
#include "BeatmapSaveDataVersion3/BeatmapSaveData_EventBox.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis
#include "BeatmapSaveDataVersion3/BeatmapSaveData_Axis.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType
#include "BeatmapSaveDataVersion3/BeatmapSaveData_EaseType.hpp"
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
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightTranslationEventBox");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightTranslationEventBox
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::LightTranslationEventBox : public ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox {
    public:
    public:
    // private System.Single s
    // Size: 0x4
    // Offset: 0x20
    float s;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType t
    // Size: 0x4
    // Offset: 0x24
    ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType t;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType) == 0x4);
    // private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis a
    // Size: 0x4
    // Offset: 0x28
    ::BeatmapSaveDataVersion3::BeatmapSaveData::Axis a;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::Axis) == 0x4);
    // private System.Int32 r
    // Size: 0x4
    // Offset: 0x2C
    int r;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 b
    // Size: 0x4
    // Offset: 0x30
    int b;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType i
    // Size: 0x4
    // Offset: 0x34
    ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType i;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType) == 0x4);
    // private System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightTranslationBaseData> l
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationBaseData*>* l;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationBaseData*>*) == 0x8);
    public:
    // Get instance field reference: private System.Single s
    [[deprecated("Use field access instead!")]] float& dyn_s();
    // Get instance field reference: private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType t
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType& dyn_t();
    // Get instance field reference: private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis a
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::Axis& dyn_a();
    // Get instance field reference: private System.Int32 r
    [[deprecated("Use field access instead!")]] int& dyn_r();
    // Get instance field reference: private System.Int32 b
    [[deprecated("Use field access instead!")]] int& dyn_b();
    // Get instance field reference: private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType i
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType& dyn_i();
    // Get instance field reference: private System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightTranslationBaseData> l
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationBaseData*>*& dyn_l();
    // public System.Single get_gapDistributionParam()
    // Offset: 0x274D218
    float get_gapDistributionParam();
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType get_gapDistributionParamType()
    // Offset: 0x274D220
    ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType get_gapDistributionParamType();
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis get_axis()
    // Offset: 0x274D228
    ::BeatmapSaveDataVersion3::BeatmapSaveData::Axis get_axis();
    // public System.Boolean get_flipTranslation()
    // Offset: 0x274D230
    bool get_flipTranslation();
    // public System.Boolean get_gapDistributionShouldAffectFirstBaseEvent()
    // Offset: 0x274D240
    bool get_gapDistributionShouldAffectFirstBaseEvent();
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType get_gapDistributionEaseType()
    // Offset: 0x274D250
    ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType get_gapDistributionEaseType();
    // public System.Collections.Generic.IReadOnlyList`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightTranslationBaseData> get_lightTranslationBaseDataList()
    // Offset: 0x274D258
    ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationBaseData*>* get_lightTranslationBaseDataList();
    // public System.Void .ctor(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter indexFilter, System.Single beatDistributionPara, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType beatDistributionParamType, System.Single gapDistributionParam, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType gapDistributionParamType, System.Boolean gapDistributionShouldAffectFirstBaseEvent, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType gapDistributionEaseType, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis axis, System.Boolean flipTranslation, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightTranslationBaseData> lightTranslationBaseDataList)
    // Offset: 0x274D260
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::LightTranslationEventBox* New_ctor(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter* indexFilter, float beatDistributionPara, ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType beatDistributionParamType, float gapDistributionParam, ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType gapDistributionEaseType, ::BeatmapSaveDataVersion3::BeatmapSaveData::Axis axis, bool flipTranslation, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationBaseData*>* lightTranslationBaseDataList) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::LightTranslationEventBox*, creationType>(indexFilter, beatDistributionPara, beatDistributionParamType, gapDistributionParam, gapDistributionParamType, gapDistributionShouldAffectFirstBaseEvent, gapDistributionEaseType, axis, flipTranslation, lightTranslationBaseDataList)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightTranslationEventBox
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::LightTranslationEventBox), 56 + sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationBaseData*>*)> __BeatmapSaveDataVersion3_BeatmapSaveData_LightTranslationEventBoxSizeCheck;
  static_assert(sizeof(BeatmapSaveData::LightTranslationEventBox) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_gapDistributionParam
// Il2CppName: get_gapDistributionParam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_gapDistributionParam)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox*), "get_gapDistributionParam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_gapDistributionParamType
// Il2CppName: get_gapDistributionParamType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType (BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_gapDistributionParamType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox*), "get_gapDistributionParamType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_axis
// Il2CppName: get_axis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::Axis (BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_axis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox*), "get_axis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_flipTranslation
// Il2CppName: get_flipTranslation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_flipTranslation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox*), "get_flipTranslation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_gapDistributionShouldAffectFirstBaseEvent
// Il2CppName: get_gapDistributionShouldAffectFirstBaseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_gapDistributionShouldAffectFirstBaseEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox*), "get_gapDistributionShouldAffectFirstBaseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_gapDistributionEaseType
// Il2CppName: get_gapDistributionEaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType (BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_gapDistributionEaseType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox*), "get_gapDistributionEaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_lightTranslationBaseDataList
// Il2CppName: get_lightTranslationBaseDataList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationBaseData*>* (BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::get_lightTranslationBaseDataList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox*), "get_lightTranslationBaseDataList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightTranslationEventBox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
