// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AveragingValueRecorder
  class AveragingValueRecorder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AveragingValueRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AveragingValueRecorder*, "", "AveragingValueRecorder");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: AveragingValueRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class AveragingValueRecorder : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::AveragingValueRecorder::AverageValueData
    struct AverageValueData;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: AveragingValueRecorder/AverageValueData
    // [TokenAttribute] Offset: FFFFFFFF
    struct AverageValueData/*, public ::System::ValueType*/ {
      public:
      public:
      // private System.Single <value>k__BackingField
      // Size: 0x4
      // Offset: 0x0
      float value;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Single <time>k__BackingField
      // Size: 0x4
      // Offset: 0x4
      float time;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: AverageValueData
      constexpr AverageValueData(float value_ = {}, float time_ = {}) noexcept : value{value_}, time{time_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: private System.Single <value>k__BackingField
      [[deprecated("Use field access instead!")]] float& dyn_$value$k__BackingField();
      // Get instance field reference: private System.Single <time>k__BackingField
      [[deprecated("Use field access instead!")]] float& dyn_$time$k__BackingField();
      // public System.Single get_value()
      // Offset: 0x153ED00
      float get_value();
      // private System.Void set_value(System.Single value)
      // Offset: 0x153ED08
      void set_value(float value);
      // public System.Single get_time()
      // Offset: 0x153ED10
      float get_time();
      // private System.Void set_time(System.Single value)
      // Offset: 0x153ED18
      void set_time(float value);
      // public System.Void .ctor(System.Single value, System.Single time)
      // Offset: 0x153ECE0
      // ABORTED: conflicts with another method.  AverageValueData(float value, float time);
    }; // AveragingValueRecorder/AverageValueData
    #pragma pack(pop)
    static check_size<sizeof(AveragingValueRecorder::AverageValueData), 4 + sizeof(float)> __GlobalNamespace_AveragingValueRecorder_AverageValueDataSizeCheck;
    static_assert(sizeof(AveragingValueRecorder::AverageValueData) == 0x8);
    public:
    // private System.Single _averageWindowDuration
    // Size: 0x4
    // Offset: 0x10
    float averageWindowDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _historyValuesPerSecond
    // Size: 0x4
    // Offset: 0x14
    float historyValuesPerSecond;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _historyValuesCount
    // Size: 0x4
    // Offset: 0x18
    int historyValuesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: historyValuesCount and: averageWindowValues
    char __padding2[0x4] = {};
    // private System.Collections.Generic.Queue`1<AveragingValueRecorder/AverageValueData> _averageWindowValues
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Queue_1<::GlobalNamespace::AveragingValueRecorder::AverageValueData>* averageWindowValues;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::GlobalNamespace::AveragingValueRecorder::AverageValueData>*) == 0x8);
    // private System.Collections.Generic.Queue`1<System.Single> _historyValues
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Queue_1<float>* historyValues;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<float>*) == 0x8);
    // private System.Single _time
    // Size: 0x4
    // Offset: 0x30
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _historyTime
    // Size: 0x4
    // Offset: 0x34
    float historyTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _averageValue
    // Size: 0x4
    // Offset: 0x38
    float averageValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _averageWindowValuesDuration
    // Size: 0x4
    // Offset: 0x3C
    float averageWindowValuesDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastValue
    // Size: 0x4
    // Offset: 0x40
    float lastValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single _averageWindowDuration
    [[deprecated("Use field access instead!")]] float& dyn__averageWindowDuration();
    // Get instance field reference: private System.Single _historyValuesPerSecond
    [[deprecated("Use field access instead!")]] float& dyn__historyValuesPerSecond();
    // Get instance field reference: private System.Int32 _historyValuesCount
    [[deprecated("Use field access instead!")]] int& dyn__historyValuesCount();
    // Get instance field reference: private System.Collections.Generic.Queue`1<AveragingValueRecorder/AverageValueData> _averageWindowValues
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::GlobalNamespace::AveragingValueRecorder::AverageValueData>*& dyn__averageWindowValues();
    // Get instance field reference: private System.Collections.Generic.Queue`1<System.Single> _historyValues
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<float>*& dyn__historyValues();
    // Get instance field reference: private System.Single _time
    [[deprecated("Use field access instead!")]] float& dyn__time();
    // Get instance field reference: private System.Single _historyTime
    [[deprecated("Use field access instead!")]] float& dyn__historyTime();
    // Get instance field reference: private System.Single _averageValue
    [[deprecated("Use field access instead!")]] float& dyn__averageValue();
    // Get instance field reference: private System.Single _averageWindowValuesDuration
    [[deprecated("Use field access instead!")]] float& dyn__averageWindowValuesDuration();
    // Get instance field reference: private System.Single _lastValue
    [[deprecated("Use field access instead!")]] float& dyn__lastValue();
    // public System.Void .ctor(System.Single averageWindowDuration, System.Single historyWindowDuration, System.Single historyValuesPerSecond)
    // Offset: 0x153E988
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AveragingValueRecorder* New_ctor(float averageWindowDuration, float historyWindowDuration, float historyValuesPerSecond) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AveragingValueRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AveragingValueRecorder*, creationType>(averageWindowDuration, historyWindowDuration, historyValuesPerSecond)));
    }
    // public System.Void Update(System.Single value, System.Single deltaTime)
    // Offset: 0x153EAB4
    void Update(float value, float deltaTime);
    // public System.Single GetAverageValue()
    // Offset: 0x153ECE8
    float GetAverageValue();
    // public System.Single GetLastValue()
    // Offset: 0x153ECF0
    float GetLastValue();
    // public System.Collections.Generic.Queue`1<System.Single> GetHistoryValues()
    // Offset: 0x153ECF8
    ::System::Collections::Generic::Queue_1<float>* GetHistoryValues();
  }; // AveragingValueRecorder
  #pragma pack(pop)
  static check_size<sizeof(AveragingValueRecorder), 64 + sizeof(float)> __GlobalNamespace_AveragingValueRecorderSizeCheck;
  static_assert(sizeof(AveragingValueRecorder) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AveragingValueRecorder::AverageValueData, "", "AveragingValueRecorder/AverageValueData");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AveragingValueRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AveragingValueRecorder::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AveragingValueRecorder::*)(float, float)>(&GlobalNamespace::AveragingValueRecorder::Update)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AveragingValueRecorder*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, deltaTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AveragingValueRecorder::GetAverageValue
// Il2CppName: GetAverageValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AveragingValueRecorder::*)()>(&GlobalNamespace::AveragingValueRecorder::GetAverageValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AveragingValueRecorder*), "GetAverageValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AveragingValueRecorder::GetLastValue
// Il2CppName: GetLastValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AveragingValueRecorder::*)()>(&GlobalNamespace::AveragingValueRecorder::GetLastValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AveragingValueRecorder*), "GetLastValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AveragingValueRecorder::GetHistoryValues
// Il2CppName: GetHistoryValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Queue_1<float>* (GlobalNamespace::AveragingValueRecorder::*)()>(&GlobalNamespace::AveragingValueRecorder::GetHistoryValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AveragingValueRecorder*), "GetHistoryValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
