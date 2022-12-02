// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockNoteData
  class MockNoteData;
  // Forward declaring type: MockObstacleData
  class MockObstacleData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MockBeatmapData
  class MockBeatmapData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockBeatmapData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapData*, "", "MockBeatmapData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MockBeatmapData
  // [TokenAttribute] Offset: FFFFFFFF
  class MockBeatmapData : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 <numberOfLines>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int numberOfLines;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single <songEndTime>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float songEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private MockNoteData[] <leftNotes>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::MockNoteData*> leftNotes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MockNoteData*>) == 0x8);
    // private MockNoteData[] <rightNotes>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::MockNoteData*> rightNotes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MockNoteData*>) == 0x8);
    // private MockNoteData[] <bombNotes>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::MockNoteData*> bombNotes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MockNoteData*>) == 0x8);
    // private MockObstacleData[] <obstacles>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::MockObstacleData*> obstacles;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MockObstacleData*>) == 0x8);
    public:
    // Get instance field reference: private System.Int32 <numberOfLines>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$numberOfLines$k__BackingField();
    // Get instance field reference: private System.Single <songEndTime>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$songEndTime$k__BackingField();
    // Get instance field reference: private MockNoteData[] <leftNotes>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MockNoteData*>& dyn_$leftNotes$k__BackingField();
    // Get instance field reference: private MockNoteData[] <rightNotes>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MockNoteData*>& dyn_$rightNotes$k__BackingField();
    // Get instance field reference: private MockNoteData[] <bombNotes>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MockNoteData*>& dyn_$bombNotes$k__BackingField();
    // Get instance field reference: private MockObstacleData[] <obstacles>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MockObstacleData*>& dyn_$obstacles$k__BackingField();
    // public System.Int32 get_numberOfLines()
    // Offset: 0x2B30FE8
    int get_numberOfLines();
    // public System.Void set_numberOfLines(System.Int32 value)
    // Offset: 0x2B30FF0
    void set_numberOfLines(int value);
    // public System.Single get_songEndTime()
    // Offset: 0x2B30FF8
    float get_songEndTime();
    // public System.Void set_songEndTime(System.Single value)
    // Offset: 0x2B31000
    void set_songEndTime(float value);
    // public MockNoteData[] get_leftNotes()
    // Offset: 0x2B31008
    ::ArrayW<::GlobalNamespace::MockNoteData*> get_leftNotes();
    // public System.Void set_leftNotes(MockNoteData[] value)
    // Offset: 0x2B31010
    void set_leftNotes(::ArrayW<::GlobalNamespace::MockNoteData*> value);
    // public MockNoteData[] get_rightNotes()
    // Offset: 0x2B31018
    ::ArrayW<::GlobalNamespace::MockNoteData*> get_rightNotes();
    // public System.Void set_rightNotes(MockNoteData[] value)
    // Offset: 0x2B31020
    void set_rightNotes(::ArrayW<::GlobalNamespace::MockNoteData*> value);
    // public MockNoteData[] get_bombNotes()
    // Offset: 0x2B31028
    ::ArrayW<::GlobalNamespace::MockNoteData*> get_bombNotes();
    // public System.Void set_bombNotes(MockNoteData[] value)
    // Offset: 0x2B31030
    void set_bombNotes(::ArrayW<::GlobalNamespace::MockNoteData*> value);
    // public MockObstacleData[] get_obstacles()
    // Offset: 0x2B31038
    ::ArrayW<::GlobalNamespace::MockObstacleData*> get_obstacles();
    // public System.Void set_obstacles(MockObstacleData[] value)
    // Offset: 0x2B31040
    void set_obstacles(::ArrayW<::GlobalNamespace::MockObstacleData*> value);
    // public System.Void .ctor()
    // Offset: 0x2B31048
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockBeatmapData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockBeatmapData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockBeatmapData*, creationType>()));
    }
  }; // MockBeatmapData
  #pragma pack(pop)
  static check_size<sizeof(MockBeatmapData), 48 + sizeof(::ArrayW<::GlobalNamespace::MockObstacleData*>)> __GlobalNamespace_MockBeatmapDataSizeCheck;
  static_assert(sizeof(MockBeatmapData) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::get_numberOfLines
// Il2CppName: get_numberOfLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MockBeatmapData::*)()>(&GlobalNamespace::MockBeatmapData::get_numberOfLines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapData*), "get_numberOfLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::set_numberOfLines
// Il2CppName: set_numberOfLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapData::*)(int)>(&GlobalNamespace::MockBeatmapData::set_numberOfLines)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapData*), "set_numberOfLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::get_songEndTime
// Il2CppName: get_songEndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MockBeatmapData::*)()>(&GlobalNamespace::MockBeatmapData::get_songEndTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapData*), "get_songEndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::set_songEndTime
// Il2CppName: set_songEndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapData::*)(float)>(&GlobalNamespace::MockBeatmapData::set_songEndTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapData*), "set_songEndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::get_leftNotes
// Il2CppName: get_leftNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::MockNoteData*> (GlobalNamespace::MockBeatmapData::*)()>(&GlobalNamespace::MockBeatmapData::get_leftNotes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapData*), "get_leftNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::set_leftNotes
// Il2CppName: set_leftNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapData::*)(::ArrayW<::GlobalNamespace::MockNoteData*>)>(&GlobalNamespace::MockBeatmapData::set_leftNotes)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "MockNoteData"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapData*), "set_leftNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::get_rightNotes
// Il2CppName: get_rightNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::MockNoteData*> (GlobalNamespace::MockBeatmapData::*)()>(&GlobalNamespace::MockBeatmapData::get_rightNotes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapData*), "get_rightNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::set_rightNotes
// Il2CppName: set_rightNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapData::*)(::ArrayW<::GlobalNamespace::MockNoteData*>)>(&GlobalNamespace::MockBeatmapData::set_rightNotes)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "MockNoteData"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapData*), "set_rightNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::get_bombNotes
// Il2CppName: get_bombNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::MockNoteData*> (GlobalNamespace::MockBeatmapData::*)()>(&GlobalNamespace::MockBeatmapData::get_bombNotes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapData*), "get_bombNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::set_bombNotes
// Il2CppName: set_bombNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapData::*)(::ArrayW<::GlobalNamespace::MockNoteData*>)>(&GlobalNamespace::MockBeatmapData::set_bombNotes)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "MockNoteData"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapData*), "set_bombNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::get_obstacles
// Il2CppName: get_obstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::MockObstacleData*> (GlobalNamespace::MockBeatmapData::*)()>(&GlobalNamespace::MockBeatmapData::get_obstacles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapData*), "get_obstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::set_obstacles
// Il2CppName: set_obstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapData::*)(::ArrayW<::GlobalNamespace::MockObstacleData*>)>(&GlobalNamespace::MockBeatmapData::set_obstacles)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "MockObstacleData"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapData*), "set_obstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
