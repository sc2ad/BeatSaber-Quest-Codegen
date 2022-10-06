// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DefaultEnvironmentEvents
#include "GlobalNamespace/DefaultEnvironmentEvents.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent*, "", "DefaultEnvironmentEvents/BasicBeatmapEvent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: DefaultEnvironmentEvents/BasicBeatmapEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultEnvironmentEvents::BasicBeatmapEvent : public ::Il2CppObject {
    public:
    public:
    // private BasicBeatmapEventType _eventType
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::BasicBeatmapEventType eventType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // private System.Int32 _value
    // Size: 0x4
    // Offset: 0x14
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _floatValue
    // Size: 0x4
    // Offset: 0x18
    float floatValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private BasicBeatmapEventType _eventType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicBeatmapEventType& dyn__eventType();
    // Get instance field reference: private System.Int32 _value
    [[deprecated("Use field access instead!")]] int& dyn__value();
    // Get instance field reference: private System.Single _floatValue
    [[deprecated("Use field access instead!")]] float& dyn__floatValue();
    // public BasicBeatmapEventType get_eventType()
    // Offset: 0x147E5A0
    ::GlobalNamespace::BasicBeatmapEventType get_eventType();
    // public System.Int32 get_value()
    // Offset: 0x147E5A8
    int get_value();
    // public System.Single get_floatValue()
    // Offset: 0x147E5B0
    float get_floatValue();
    // public System.Void .ctor()
    // Offset: 0x147E5B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultEnvironmentEvents::BasicBeatmapEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultEnvironmentEvents::BasicBeatmapEvent*, creationType>()));
    }
  }; // DefaultEnvironmentEvents/BasicBeatmapEvent
  #pragma pack(pop)
  static check_size<sizeof(DefaultEnvironmentEvents::BasicBeatmapEvent), 24 + sizeof(float)> __GlobalNamespace_DefaultEnvironmentEvents_BasicBeatmapEventSizeCheck;
  static_assert(sizeof(DefaultEnvironmentEvents::BasicBeatmapEvent) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent::get_eventType
// Il2CppName: get_eventType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BasicBeatmapEventType (GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent::get_eventType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent*), "get_eventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent::get_floatValue
// Il2CppName: get_floatValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent::*)()>(&GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent::get_floatValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent*), "get_floatValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEvents::BasicBeatmapEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
