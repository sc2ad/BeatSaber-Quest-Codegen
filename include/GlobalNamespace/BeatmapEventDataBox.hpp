// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatToTimeConvertor
  class IBeatToTimeConvertor;
  // Forward declaring type: IIndexFilter
  class IIndexFilter;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Skipping declaration: DistributionParamType because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventDataBox
  class BeatmapEventDataBox;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBox*, "", "BeatmapEventDataBox");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEventDataBox
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapEventDataBox : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::BeatmapEventDataBox::DistributionParamType
    struct DistributionParamType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BeatmapEventDataBox/DistributionParamType
    // [TokenAttribute] Offset: FFFFFFFF
    struct DistributionParamType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: DistributionParamType
      constexpr DistributionParamType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BeatmapEventDataBox/DistributionParamType Wave
      static constexpr const int Wave = 1;
      // Get static field: static public BeatmapEventDataBox/DistributionParamType Wave
      static ::GlobalNamespace::BeatmapEventDataBox::DistributionParamType _get_Wave();
      // Set static field: static public BeatmapEventDataBox/DistributionParamType Wave
      static void _set_Wave(::GlobalNamespace::BeatmapEventDataBox::DistributionParamType value);
      // static field const value: static public BeatmapEventDataBox/DistributionParamType Step
      static constexpr const int Step = 2;
      // Get static field: static public BeatmapEventDataBox/DistributionParamType Step
      static ::GlobalNamespace::BeatmapEventDataBox::DistributionParamType _get_Step();
      // Set static field: static public BeatmapEventDataBox/DistributionParamType Step
      static void _set_Step(::GlobalNamespace::BeatmapEventDataBox::DistributionParamType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // BeatmapEventDataBox/DistributionParamType
    #pragma pack(pop)
    static check_size<sizeof(BeatmapEventDataBox::DistributionParamType), 0 + sizeof(int)> __GlobalNamespace_BeatmapEventDataBox_DistributionParamTypeSizeCheck;
    static_assert(sizeof(BeatmapEventDataBox::DistributionParamType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly IIndexFilter <indexFilter>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IIndexFilter* indexFilter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IIndexFilter*) == 0x8);
    // private readonly System.Single _beatDistributionParam
    // Size: 0x4
    // Offset: 0x18
    float beatDistributionParam;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly BeatmapEventDataBox/DistributionParamType _beatDistributionParamType
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::BeatmapEventDataBox::DistributionParamType beatDistributionParamType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapEventDataBox::DistributionParamType) == 0x4);
    public:
    // Get instance field reference: private readonly IIndexFilter <indexFilter>k__BackingField
    ::GlobalNamespace::IIndexFilter*& dyn_$indexFilter$k__BackingField();
    // Get instance field reference: private readonly System.Single _beatDistributionParam
    float& dyn__beatDistributionParam();
    // Get instance field reference: private readonly BeatmapEventDataBox/DistributionParamType _beatDistributionParamType
    ::GlobalNamespace::BeatmapEventDataBox::DistributionParamType& dyn__beatDistributionParamType();
    // public System.Int32 get_subtypeIdentifier()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_subtypeIdentifier();
    // public System.Single get_beatStep()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_beatStep();
    // public IIndexFilter get_indexFilter()
    // Offset: 0x14C6DF0
    ::GlobalNamespace::IIndexFilter* get_indexFilter();
    // protected System.Int32 get_numberOfElements()
    // Offset: 0x14C6DF8
    int get_numberOfElements();
    // protected System.Void .ctor(IIndexFilter indexFilter, BeatmapEventDataBox/DistributionParamType beatDistributionParamType, System.Single beatDistributionParam)
    // Offset: 0x14C6EA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapEventDataBox* New_ctor(::GlobalNamespace::IIndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox::DistributionParamType beatDistributionParamType, float beatDistributionParam) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapEventDataBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapEventDataBox*, creationType>(indexFilter, beatDistributionParamType, beatDistributionParam)));
    }
    // public System.Void Unpack(System.Single groupBoxBeat, System.Int32 groupId, System.Int32 elementId, System.Int32 orderIndex, System.Single maxBeat, IBeatToTimeConvertor beatToTimeConvertor, System.Collections.Generic.List`1<BeatmapEventData> output)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Unpack(float groupBoxBeat, int groupId, int elementId, int orderIndex, float maxBeat, ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output);
    // protected System.Single GetBeatStep(System.Single lastBaseEventRelativeBeat)
    // Offset: 0x14C6EF4
    float GetBeatStep(float lastBaseEventRelativeBeat);
    // protected System.Single DistributionParamToStep(System.Single distributionParam, BeatmapEventDataBox/DistributionParamType distributionParamType)
    // Offset: 0x14C6F94
    float DistributionParamToStep(float distributionParam, ::GlobalNamespace::BeatmapEventDataBox::DistributionParamType distributionParamType);
  }; // BeatmapEventDataBox
  #pragma pack(pop)
  static check_size<sizeof(BeatmapEventDataBox), 28 + sizeof(::GlobalNamespace::BeatmapEventDataBox::DistributionParamType)> __GlobalNamespace_BeatmapEventDataBoxSizeCheck;
  static_assert(sizeof(BeatmapEventDataBox) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBox::DistributionParamType, "", "BeatmapEventDataBox/DistributionParamType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBox::get_subtypeIdentifier
// Il2CppName: get_subtypeIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapEventDataBox::*)()>(&GlobalNamespace::BeatmapEventDataBox::get_subtypeIdentifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBox*), "get_subtypeIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBox::get_beatStep
// Il2CppName: get_beatStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapEventDataBox::*)()>(&GlobalNamespace::BeatmapEventDataBox::get_beatStep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBox*), "get_beatStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBox::get_indexFilter
// Il2CppName: get_indexFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IIndexFilter* (GlobalNamespace::BeatmapEventDataBox::*)()>(&GlobalNamespace::BeatmapEventDataBox::get_indexFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBox*), "get_indexFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBox::get_numberOfElements
// Il2CppName: get_numberOfElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapEventDataBox::*)()>(&GlobalNamespace::BeatmapEventDataBox::get_numberOfElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBox*), "get_numberOfElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBox::Unpack
// Il2CppName: Unpack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventDataBox::*)(float, int, int, int, float, ::GlobalNamespace::IBeatToTimeConvertor*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*)>(&GlobalNamespace::BeatmapEventDataBox::Unpack)> {
  static const MethodInfo* get() {
    static auto* groupBoxBeat = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* groupId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* elementId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* orderIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxBeat = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* beatToTimeConvertor = &::il2cpp_utils::GetClassFromName("", "IBeatToTimeConvertor")->byval_arg;
    static auto* output = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBox*), "Unpack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupBoxBeat, groupId, elementId, orderIndex, maxBeat, beatToTimeConvertor, output});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBox::GetBeatStep
// Il2CppName: GetBeatStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapEventDataBox::*)(float)>(&GlobalNamespace::BeatmapEventDataBox::GetBeatStep)> {
  static const MethodInfo* get() {
    static auto* lastBaseEventRelativeBeat = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBox*), "GetBeatStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lastBaseEventRelativeBeat});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataBox::DistributionParamToStep
// Il2CppName: DistributionParamToStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapEventDataBox::*)(float, ::GlobalNamespace::BeatmapEventDataBox::DistributionParamType)>(&GlobalNamespace::BeatmapEventDataBox::DistributionParamToStep)> {
  static const MethodInfo* get() {
    static auto* distributionParam = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* distributionParamType = &::il2cpp_utils::GetClassFromName("", "BeatmapEventDataBox/DistributionParamType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataBox*), "DistributionParamToStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distributionParam, distributionParamType});
  }
};
