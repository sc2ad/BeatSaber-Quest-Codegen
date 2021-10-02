// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ObstacleType
#include "GlobalNamespace/ObstacleType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: MockObstacleData
  // [TokenAttribute] Offset: FFFFFFFF
  class MockObstacleData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <lineIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private ObstacleType <obstacleType>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::ObstacleType obstacleType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleType) == 0x4);
    // private System.Single <duration>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <width>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Single <time>k__BackingField
    float& dyn_$time$k__BackingField();
    // Get instance field reference: private System.Int32 <lineIndex>k__BackingField
    int& dyn_$lineIndex$k__BackingField();
    // Get instance field reference: private ObstacleType <obstacleType>k__BackingField
    GlobalNamespace::ObstacleType& dyn_$obstacleType$k__BackingField();
    // Get instance field reference: private System.Single <duration>k__BackingField
    float& dyn_$duration$k__BackingField();
    // Get instance field reference: private System.Int32 <width>k__BackingField
    int& dyn_$width$k__BackingField();
    // public System.Single get_time()
    // Offset: 0x25E2240
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0x25E2248
    void set_time(float value);
    // public System.Int32 get_lineIndex()
    // Offset: 0x25E2250
    int get_lineIndex();
    // public System.Void set_lineIndex(System.Int32 value)
    // Offset: 0x25E2258
    void set_lineIndex(int value);
    // public ObstacleType get_obstacleType()
    // Offset: 0x25E2260
    GlobalNamespace::ObstacleType get_obstacleType();
    // public System.Void set_obstacleType(ObstacleType value)
    // Offset: 0x25E2268
    void set_obstacleType(GlobalNamespace::ObstacleType value);
    // public System.Single get_duration()
    // Offset: 0x25E2270
    float get_duration();
    // public System.Void set_duration(System.Single value)
    // Offset: 0x25E2278
    void set_duration(float value);
    // public System.Int32 get_width()
    // Offset: 0x25E2280
    int get_width();
    // public System.Void set_width(System.Int32 value)
    // Offset: 0x25E2288
    void set_width(int value);
    // public System.Void .ctor()
    // Offset: 0x25E2290
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockObstacleData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockObstacleData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockObstacleData*, creationType>()));
    }
  }; // MockObstacleData
  #pragma pack(pop)
  static check_size<sizeof(MockObstacleData), 32 + sizeof(int)> __GlobalNamespace_MockObstacleDataSizeCheck;
  static_assert(sizeof(MockObstacleData) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockObstacleData*, "", "MockObstacleData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockObstacleData::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MockObstacleData::*)()>(&GlobalNamespace::MockObstacleData::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockObstacleData*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockObstacleData::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockObstacleData::*)(float)>(&GlobalNamespace::MockObstacleData::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockObstacleData*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockObstacleData::get_lineIndex
// Il2CppName: get_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MockObstacleData::*)()>(&GlobalNamespace::MockObstacleData::get_lineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockObstacleData*), "get_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockObstacleData::set_lineIndex
// Il2CppName: set_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockObstacleData::*)(int)>(&GlobalNamespace::MockObstacleData::set_lineIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockObstacleData*), "set_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockObstacleData::get_obstacleType
// Il2CppName: get_obstacleType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ObstacleType (GlobalNamespace::MockObstacleData::*)()>(&GlobalNamespace::MockObstacleData::get_obstacleType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockObstacleData*), "get_obstacleType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockObstacleData::set_obstacleType
// Il2CppName: set_obstacleType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockObstacleData::*)(GlobalNamespace::ObstacleType)>(&GlobalNamespace::MockObstacleData::set_obstacleType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ObstacleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockObstacleData*), "set_obstacleType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockObstacleData::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MockObstacleData::*)()>(&GlobalNamespace::MockObstacleData::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockObstacleData*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockObstacleData::set_duration
// Il2CppName: set_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockObstacleData::*)(float)>(&GlobalNamespace::MockObstacleData::set_duration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockObstacleData*), "set_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockObstacleData::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MockObstacleData::*)()>(&GlobalNamespace::MockObstacleData::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockObstacleData*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockObstacleData::set_width
// Il2CppName: set_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockObstacleData::*)(int)>(&GlobalNamespace::MockObstacleData::set_width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockObstacleData*), "set_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockObstacleData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
