// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapEventDataBox
#include "GlobalNamespace/BeatmapEventDataBox.hpp"
// Including type: LightAxis
#include "GlobalNamespace/LightAxis.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightTranslationBaseData
  class LightTranslationBaseData;
  // Forward declaring type: IndexFilter
  class IndexFilter;
  // Forward declaring type: IBeatToTimeConvertor
  class IBeatToTimeConvertor;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightTranslationBeatmapEventDataBox
  class LightTranslationBeatmapEventDataBox;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightTranslationBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationBeatmapEventDataBox*, "", "LightTranslationBeatmapEventDataBox");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: LightTranslationBeatmapEventDataBox
  // [TokenAttribute] Offset: FFFFFFFF
  class LightTranslationBeatmapEventDataBox : public ::GlobalNamespace::BeatmapEventDataBox {
    public:
    // Writing base type padding for base size: 0x34 to desired offset: 0x38
    char ___base_padding[0x4] = {};
    public:
    // private readonly System.Collections.Generic.IReadOnlyList`1<LightTranslationBaseData> _lightTranslationBaseDataList
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* lightTranslationBaseDataList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>*) == 0x8);
    // private readonly LightAxis _axis
    // Size: 0x4
    // Offset: 0x40
    ::GlobalNamespace::LightAxis axis;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightAxis) == 0x4);
    // private readonly System.Single _translationDirection
    // Size: 0x4
    // Offset: 0x44
    float translationDirection;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _beatStep
    // Size: 0x4
    // Offset: 0x48
    float beatStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private readonly System.Collections.Generic.IReadOnlyList`1<LightTranslationBaseData> _lightTranslationBaseDataList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>*& dyn__lightTranslationBaseDataList();
    // Get instance field reference: private readonly LightAxis _axis
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightAxis& dyn__axis();
    // Get instance field reference: private readonly System.Single _translationDirection
    [[deprecated("Use field access instead!")]] float& dyn__translationDirection();
    // Get instance field reference: private readonly System.Single _beatStep
    [[deprecated("Use field access instead!")]] float& dyn__beatStep();
    // public System.Void .ctor(IndexFilter indexFilter, System.Single beatDistributionParam, BeatmapEventDataBox/DistributionParamType beatDistributionParamType, LightAxis axis, System.Boolean flipTranslation, System.Single gapDistributionParam, BeatmapEventDataBox/DistributionParamType gapDistributionParamType, System.Boolean gapDistributionShouldAffectFirstBaseEvent, EaseType gapDistributionEaseType, System.Collections.Generic.IReadOnlyList`1<LightTranslationBaseData> lightTranslationBaseDataList)
    // Offset: 0x1517310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightTranslationBeatmapEventDataBox* New_ctor(::GlobalNamespace::IndexFilter* indexFilter, float beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox::DistributionParamType beatDistributionParamType, ::GlobalNamespace::LightAxis axis, bool flipTranslation, float gapDistributionParam, ::GlobalNamespace::BeatmapEventDataBox::DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType gapDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* lightTranslationBaseDataList) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTranslationBeatmapEventDataBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightTranslationBeatmapEventDataBox*, creationType>(indexFilter, beatDistributionParam, beatDistributionParamType, axis, flipTranslation, gapDistributionParam, gapDistributionParamType, gapDistributionShouldAffectFirstBaseEvent, gapDistributionEaseType, lightTranslationBaseDataList)));
    }
    // public override System.Int32 get_subtypeIdentifier()
    // Offset: 0x1517300
    // Implemented from: BeatmapEventDataBox
    // Base method: System.Int32 BeatmapEventDataBox::get_subtypeIdentifier()
    int get_subtypeIdentifier();
    // public override System.Single get_beatStep()
    // Offset: 0x1517308
    // Implemented from: BeatmapEventDataBox
    // Base method: System.Single BeatmapEventDataBox::get_beatStep()
    float get_beatStep();
    // public override System.Void Unpack(System.Single groupBoxBeat, System.Int32 groupId, System.Int32 elementId, System.Int32 durationOrderIndex, System.Int32 distributionOrderIndex, System.Single maxBeat, IBeatToTimeConvertor beatToTimeConvertor, System.Collections.Generic.List`1<BeatmapEventData> output)
    // Offset: 0x1517558
    // Implemented from: BeatmapEventDataBox
    // Base method: System.Void BeatmapEventDataBox::Unpack(System.Single groupBoxBeat, System.Int32 groupId, System.Int32 elementId, System.Int32 durationOrderIndex, System.Int32 distributionOrderIndex, System.Single maxBeat, IBeatToTimeConvertor beatToTimeConvertor, System.Collections.Generic.List`1<BeatmapEventData> output)
    void Unpack(float groupBoxBeat, int groupId, int elementId, int durationOrderIndex, int distributionOrderIndex, float maxBeat, ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output);
  }; // LightTranslationBeatmapEventDataBox
  #pragma pack(pop)
  static check_size<sizeof(LightTranslationBeatmapEventDataBox), 72 + sizeof(float)> __GlobalNamespace_LightTranslationBeatmapEventDataBoxSizeCheck;
  static_assert(sizeof(LightTranslationBeatmapEventDataBox) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventDataBox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventDataBox::get_subtypeIdentifier
// Il2CppName: get_subtypeIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightTranslationBeatmapEventDataBox::*)()>(&GlobalNamespace::LightTranslationBeatmapEventDataBox::get_subtypeIdentifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationBeatmapEventDataBox*), "get_subtypeIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventDataBox::get_beatStep
// Il2CppName: get_beatStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightTranslationBeatmapEventDataBox::*)()>(&GlobalNamespace::LightTranslationBeatmapEventDataBox::get_beatStep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationBeatmapEventDataBox*), "get_beatStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationBeatmapEventDataBox::Unpack
// Il2CppName: Unpack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightTranslationBeatmapEventDataBox::*)(float, int, int, int, int, float, ::GlobalNamespace::IBeatToTimeConvertor*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*)>(&GlobalNamespace::LightTranslationBeatmapEventDataBox::Unpack)> {
  static const MethodInfo* get() {
    static auto* groupBoxBeat = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* groupId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* elementId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* durationOrderIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* distributionOrderIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxBeat = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* beatToTimeConvertor = &::il2cpp_utils::GetClassFromName("", "IBeatToTimeConvertor")->byval_arg;
    static auto* output = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationBeatmapEventDataBox*), "Unpack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupBoxBeat, groupId, elementId, durationOrderIndex, distributionOrderIndex, maxBeat, beatToTimeConvertor, output});
  }
};
