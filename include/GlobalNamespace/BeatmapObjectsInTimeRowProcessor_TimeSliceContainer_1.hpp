// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectsInTimeRowProcessor
#include "GlobalNamespace/BeatmapObjectsInTimeRowProcessor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataItem
  class BeatmapDataItem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1, "", "BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1 : public ::Il2CppObject {
    public:
    public:
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <previousTimeSliceTime>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    float previousTimeSliceTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Action`2<BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>,System.Single> didFinishTimeSliceEvent
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, float>* didFinishTimeSliceEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, float>*) == 0x8);
    // private System.Action`1<BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>> didStartNewTimeSliceEvent
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*>* didStartNewTimeSliceEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*>*) == 0x8);
    // private System.Action`2<BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>,T> didAddItemEvent
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, T>* didAddItemEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, T>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<T> _items
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<T>* items;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<T>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Single <time>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$time$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::dyn_$time$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<time>k__BackingField"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Single <previousTimeSliceTime>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$previousTimeSliceTime$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::dyn_$previousTimeSliceTime$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<previousTimeSliceTime>k__BackingField"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action`2<BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>,System.Single> didFinishTimeSliceEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, float>*& dyn_didFinishTimeSliceEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::dyn_didFinishTimeSliceEvent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "didFinishTimeSliceEvent"))->offset;
      return *reinterpret_cast<::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, float>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action`1<BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>> didStartNewTimeSliceEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*>*& dyn_didStartNewTimeSliceEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::dyn_didStartNewTimeSliceEvent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "didStartNewTimeSliceEvent"))->offset;
      return *reinterpret_cast<::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action`2<BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>,T> didAddItemEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, T>*& dyn_didAddItemEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::dyn_didAddItemEvent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "didAddItemEvent"))->offset;
      return *reinterpret_cast<::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.List`1<T> _items
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<T>*& dyn__items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::dyn__items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_items"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Single get_time()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_time() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::get_time");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_time", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<float, false>(this, ___internal__method);
    }
    // private System.Void set_time(System.Single value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_time(float value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::set_time");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_time", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Single get_previousTimeSliceTime()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_previousTimeSliceTime() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::get_previousTimeSliceTime");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_previousTimeSliceTime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<float, false>(this, ___internal__method);
    }
    // private System.Void set_previousTimeSliceTime(System.Single value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_previousTimeSliceTime(float value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::set_previousTimeSliceTime");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_previousTimeSliceTime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Collections.Generic.IReadOnlyList`1<T> get_items()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IReadOnlyList_1<T>* get_items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::get_items");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_items", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*, false>(this, ___internal__method);
    }
    // public System.Void add_didFinishTimeSliceEvent(System.Action`2<BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>,System.Single> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_didFinishTimeSliceEvent(::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, float>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::add_didFinishTimeSliceEvent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "add_didFinishTimeSliceEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void remove_didFinishTimeSliceEvent(System.Action`2<BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>,System.Single> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_didFinishTimeSliceEvent(::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, float>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::remove_didFinishTimeSliceEvent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "remove_didFinishTimeSliceEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void add_didStartNewTimeSliceEvent(System.Action`1<BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_didStartNewTimeSliceEvent(::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::add_didStartNewTimeSliceEvent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "add_didStartNewTimeSliceEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void remove_didStartNewTimeSliceEvent(System.Action`1<BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_didStartNewTimeSliceEvent(::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::remove_didStartNewTimeSliceEvent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "remove_didStartNewTimeSliceEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void add_didAddItemEvent(System.Action`2<BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>,T> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_didAddItemEvent(::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::add_didAddItemEvent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "add_didAddItemEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void remove_didAddItemEvent(System.Action`2<BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>,T> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_didAddItemEvent(::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::remove_didAddItemEvent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "remove_didAddItemEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1<T>*, creationType>(capacity)));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void AddWithoutNotifications(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddWithoutNotifications(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::AddWithoutNotifications");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddWithoutNotifications", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void FinishTimeSlice(System.Single nextTimeSliceTime)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void FinishTimeSlice(float nextTimeSliceTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::FinishTimeSlice");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FinishTimeSlice", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(nextTimeSliceTime)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, nextTimeSliceTime);
    }
    // private System.Void StartNewTimeSlice(System.Single newSliceTime)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void StartNewTimeSlice(float newSliceTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer_1::StartNewTimeSlice");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "StartNewTimeSlice", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(newSliceTime)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, newSliceTime);
    }
  }; // BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1
  // Could not write size check! Type: BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
