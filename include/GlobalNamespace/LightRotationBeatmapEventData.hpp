// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapEventData
#include "GlobalNamespace/BeatmapEventData.hpp"
// Including type: EaseType
#include "GlobalNamespace/EaseType.hpp"
// Including type: LightRotationDirection
#include "GlobalNamespace/LightRotationDirection.hpp"
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
  // Skipping declaration: Axis because it is already included!
  // Skipping declaration: BeatmapDataItem because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightRotationBeatmapEventData
  class LightRotationBeatmapEventData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightRotationBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBeatmapEventData*, "", "LightRotationBeatmapEventData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: LightRotationBeatmapEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class LightRotationBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
    public:
    // Nested type: ::GlobalNamespace::LightRotationBeatmapEventData::Axis
    struct Axis;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LightRotationBeatmapEventData/Axis
    // [TokenAttribute] Offset: FFFFFFFF
    struct Axis/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Axis
      constexpr Axis(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LightRotationBeatmapEventData/Axis X
      static constexpr const int X = 0;
      // Get static field: static public LightRotationBeatmapEventData/Axis X
      static ::GlobalNamespace::LightRotationBeatmapEventData::Axis _get_X();
      // Set static field: static public LightRotationBeatmapEventData/Axis X
      static void _set_X(::GlobalNamespace::LightRotationBeatmapEventData::Axis value);
      // static field const value: static public LightRotationBeatmapEventData/Axis Y
      static constexpr const int Y = 1;
      // Get static field: static public LightRotationBeatmapEventData/Axis Y
      static ::GlobalNamespace::LightRotationBeatmapEventData::Axis _get_Y();
      // Set static field: static public LightRotationBeatmapEventData/Axis Y
      static void _set_Y(::GlobalNamespace::LightRotationBeatmapEventData::Axis value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // LightRotationBeatmapEventData/Axis
    #pragma pack(pop)
    static check_size<sizeof(LightRotationBeatmapEventData::Axis), 0 + sizeof(int)> __GlobalNamespace_LightRotationBeatmapEventData_AxisSizeCheck;
    static_assert(sizeof(LightRotationBeatmapEventData::Axis) == 0x4);
    public:
    // public readonly System.Int32 groupId
    // Size: 0x4
    // Offset: 0x30
    int groupId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 elementId
    // Size: 0x4
    // Offset: 0x34
    int elementId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean usePreviousEventValue
    // Size: 0x1
    // Offset: 0x38
    bool usePreviousEventValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usePreviousEventValue and: easeType
    char __padding2[0x3] = {};
    // public readonly EaseType easeType
    // Size: 0x4
    // Offset: 0x3C
    ::GlobalNamespace::EaseType easeType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EaseType) == 0x4);
    // public readonly LightRotationBeatmapEventData/Axis axis
    // Size: 0x4
    // Offset: 0x40
    ::GlobalNamespace::LightRotationBeatmapEventData::Axis axis;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightRotationBeatmapEventData::Axis) == 0x4);
    // public readonly System.Int32 loopCount
    // Size: 0x4
    // Offset: 0x44
    int loopCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly LightRotationDirection rotationDirection
    // Size: 0x4
    // Offset: 0x48
    ::GlobalNamespace::LightRotationDirection rotationDirection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightRotationDirection) == 0x4);
    // private System.Single <rotation>k__BackingField
    // Size: 0x4
    // Offset: 0x4C
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10D6BB8
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,LightRotationBeatmapEventData> _defaults
    static ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::LightRotationBeatmapEventData*>* _get__defaults();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,LightRotationBeatmapEventData> _defaults
    static void _set__defaults(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::LightRotationBeatmapEventData*>* value);
    // Get instance field reference: public readonly System.Int32 groupId
    [[deprecated("Use field access instead!")]] int& dyn_groupId();
    // Get instance field reference: public readonly System.Int32 elementId
    [[deprecated("Use field access instead!")]] int& dyn_elementId();
    // Get instance field reference: public readonly System.Boolean usePreviousEventValue
    [[deprecated("Use field access instead!")]] bool& dyn_usePreviousEventValue();
    // Get instance field reference: public readonly EaseType easeType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EaseType& dyn_easeType();
    // Get instance field reference: public readonly LightRotationBeatmapEventData/Axis axis
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightRotationBeatmapEventData::Axis& dyn_axis();
    // Get instance field reference: public readonly System.Int32 loopCount
    [[deprecated("Use field access instead!")]] int& dyn_loopCount();
    // Get instance field reference: public readonly LightRotationDirection rotationDirection
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightRotationDirection& dyn_rotationDirection();
    // Get instance field reference: private System.Single <rotation>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$rotation$k__BackingField();
    // public System.Single get_rotation()
    // Offset: 0x28BF41C
    float get_rotation();
    // private System.Void set_rotation(System.Single value)
    // Offset: 0x28BF424
    void set_rotation(float value);
    // public System.Void .ctor(System.Single time, System.Int32 groupId, System.Int32 elementId, System.Boolean usePreviousEventValue, EaseType easeType, LightRotationBeatmapEventData/Axis axis, System.Single rotation, System.Int32 loopCount, LightRotationDirection rotationDirection)
    // Offset: 0x28BF42C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightRotationBeatmapEventData* New_ctor(float time, int groupId, int elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightRotationBeatmapEventData::Axis axis, float rotation, int loopCount, ::GlobalNamespace::LightRotationDirection rotationDirection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightRotationBeatmapEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightRotationBeatmapEventData*, creationType>(time, groupId, elementId, usePreviousEventValue, easeType, axis, rotation, loopCount, rotationDirection)));
    }
    // static private System.Void .cctor()
    // Offset: 0x28BF76C
    static void _cctor();
    // public System.Void ChangeRotation(System.Single rotation)
    // Offset: 0x28BF53C
    void ChangeRotation(float rotation);
    // static public System.Int32 SubtypeIdentifier(System.Int32 groupId, System.Int32 elementId, LightRotationBeatmapEventData/Axis axis)
    // Offset: 0x28BF524
    static int SubtypeIdentifier(int groupId, int elementId, ::GlobalNamespace::LightRotationBeatmapEventData::Axis axis);
    // public override BeatmapDataItem GetCopy()
    // Offset: 0x28BF544
    // Implemented from: BeatmapDataItem
    // Base method: BeatmapDataItem BeatmapDataItem::GetCopy()
    ::GlobalNamespace::BeatmapDataItem* GetCopy();
    // protected override BeatmapEventData GetDefault()
    // Offset: 0x28BF604
    // Implemented from: BeatmapEventData
    // Base method: BeatmapEventData BeatmapEventData::GetDefault()
    ::GlobalNamespace::BeatmapEventData* GetDefault();
  }; // LightRotationBeatmapEventData
  #pragma pack(pop)
  static check_size<sizeof(LightRotationBeatmapEventData), 76 + sizeof(float)> __GlobalNamespace_LightRotationBeatmapEventDataSizeCheck;
  static_assert(sizeof(LightRotationBeatmapEventData) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBeatmapEventData::Axis, "", "LightRotationBeatmapEventData/Axis");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBeatmapEventData::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightRotationBeatmapEventData::*)()>(&GlobalNamespace::LightRotationBeatmapEventData::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationBeatmapEventData*), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBeatmapEventData::set_rotation
// Il2CppName: set_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationBeatmapEventData::*)(float)>(&GlobalNamespace::LightRotationBeatmapEventData::set_rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationBeatmapEventData*), "set_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBeatmapEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBeatmapEventData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LightRotationBeatmapEventData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationBeatmapEventData*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBeatmapEventData::ChangeRotation
// Il2CppName: ChangeRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationBeatmapEventData::*)(float)>(&GlobalNamespace::LightRotationBeatmapEventData::ChangeRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationBeatmapEventData*), "ChangeRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBeatmapEventData::SubtypeIdentifier
// Il2CppName: SubtypeIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, ::GlobalNamespace::LightRotationBeatmapEventData::Axis)>(&GlobalNamespace::LightRotationBeatmapEventData::SubtypeIdentifier)> {
  static const MethodInfo* get() {
    static auto* groupId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* elementId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("", "LightRotationBeatmapEventData/Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationBeatmapEventData*), "SubtypeIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupId, elementId, axis});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBeatmapEventData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (GlobalNamespace::LightRotationBeatmapEventData::*)()>(&GlobalNamespace::LightRotationBeatmapEventData::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationBeatmapEventData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightRotationBeatmapEventData::GetDefault
// Il2CppName: GetDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (GlobalNamespace::LightRotationBeatmapEventData::*)()>(&GlobalNamespace::LightRotationBeatmapEventData::GetDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightRotationBeatmapEventData*), "GetDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
