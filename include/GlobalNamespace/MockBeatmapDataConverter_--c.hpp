// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MockBeatmapDataConverter
#include "GlobalNamespace/MockBeatmapDataConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: MockNoteData
  class MockNoteData;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: MockObstacleData
  class MockObstacleData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockBeatmapDataConverter::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapDataConverter::$$c*, "", "MockBeatmapDataConverter/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MockBeatmapDataConverter/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MockBeatmapDataConverter::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly MockBeatmapDataConverter/<>c <>9
    static ::GlobalNamespace::MockBeatmapDataConverter::$$c* _get_$$9();
    // Set static field: static public readonly MockBeatmapDataConverter/<>c <>9
    static void _set_$$9(::GlobalNamespace::MockBeatmapDataConverter::$$c* value);
    // Get static field: static public System.Func`2<NoteData,System.Boolean> <>9__0_0
    static ::System::Func_2<::GlobalNamespace::NoteData*, bool>* _get_$$9__0_0();
    // Set static field: static public System.Func`2<NoteData,System.Boolean> <>9__0_0
    static void _set_$$9__0_0(::System::Func_2<::GlobalNamespace::NoteData*, bool>* value);
    // Get static field: static public System.Func`2<NoteData,MockNoteData> <>9__0_1
    static ::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* _get_$$9__0_1();
    // Set static field: static public System.Func`2<NoteData,MockNoteData> <>9__0_1
    static void _set_$$9__0_1(::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* value);
    // Get static field: static public System.Func`2<NoteData,System.Boolean> <>9__0_2
    static ::System::Func_2<::GlobalNamespace::NoteData*, bool>* _get_$$9__0_2();
    // Set static field: static public System.Func`2<NoteData,System.Boolean> <>9__0_2
    static void _set_$$9__0_2(::System::Func_2<::GlobalNamespace::NoteData*, bool>* value);
    // Get static field: static public System.Func`2<NoteData,MockNoteData> <>9__0_3
    static ::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* _get_$$9__0_3();
    // Set static field: static public System.Func`2<NoteData,MockNoteData> <>9__0_3
    static void _set_$$9__0_3(::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* value);
    // Get static field: static public System.Func`2<NoteData,System.Boolean> <>9__0_4
    static ::System::Func_2<::GlobalNamespace::NoteData*, bool>* _get_$$9__0_4();
    // Set static field: static public System.Func`2<NoteData,System.Boolean> <>9__0_4
    static void _set_$$9__0_4(::System::Func_2<::GlobalNamespace::NoteData*, bool>* value);
    // Get static field: static public System.Func`2<NoteData,MockNoteData> <>9__0_5
    static ::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* _get_$$9__0_5();
    // Set static field: static public System.Func`2<NoteData,MockNoteData> <>9__0_5
    static void _set_$$9__0_5(::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* value);
    // Get static field: static public System.Func`2<ObstacleData,MockObstacleData> <>9__0_6
    static ::System::Func_2<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::MockObstacleData*>* _get_$$9__0_6();
    // Set static field: static public System.Func`2<ObstacleData,MockObstacleData> <>9__0_6
    static void _set_$$9__0_6(::System::Func_2<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::MockObstacleData*>* value);
    // static private System.Void .cctor()
    // Offset: 0x14AA460
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x14AA4C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockBeatmapDataConverter::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockBeatmapDataConverter::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockBeatmapDataConverter::$$c*, creationType>()));
    }
    // System.Boolean <ToMockBeatmapData>b__0_0(NoteData nd)
    // Offset: 0x14AA4CC
    bool $ToMockBeatmapData$b__0_0(::GlobalNamespace::NoteData* nd);
    // MockNoteData <ToMockBeatmapData>b__0_1(NoteData nd)
    // Offset: 0x14AA4EC
    ::GlobalNamespace::MockNoteData* $ToMockBeatmapData$b__0_1(::GlobalNamespace::NoteData* nd);
    // System.Boolean <ToMockBeatmapData>b__0_2(NoteData nd)
    // Offset: 0x14AA4F4
    bool $ToMockBeatmapData$b__0_2(::GlobalNamespace::NoteData* nd);
    // MockNoteData <ToMockBeatmapData>b__0_3(NoteData nd)
    // Offset: 0x14AA514
    ::GlobalNamespace::MockNoteData* $ToMockBeatmapData$b__0_3(::GlobalNamespace::NoteData* nd);
    // System.Boolean <ToMockBeatmapData>b__0_4(NoteData nd)
    // Offset: 0x14AA51C
    bool $ToMockBeatmapData$b__0_4(::GlobalNamespace::NoteData* nd);
    // MockNoteData <ToMockBeatmapData>b__0_5(NoteData nd)
    // Offset: 0x14AA53C
    ::GlobalNamespace::MockNoteData* $ToMockBeatmapData$b__0_5(::GlobalNamespace::NoteData* nd);
    // MockObstacleData <ToMockBeatmapData>b__0_6(ObstacleData od)
    // Offset: 0x14AA544
    ::GlobalNamespace::MockObstacleData* $ToMockBeatmapData$b__0_6(::GlobalNamespace::ObstacleData* od);
  }; // MockBeatmapDataConverter/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MockBeatmapDataConverter::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_0
// Il2CppName: <ToMockBeatmapData>b__0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockBeatmapDataConverter::$$c::*)(::GlobalNamespace::NoteData*)>(&GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_0)> {
  static const MethodInfo* get() {
    static auto* nd = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter::$$c*), "<ToMockBeatmapData>b__0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nd});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_1
// Il2CppName: <ToMockBeatmapData>b__0_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MockNoteData* (GlobalNamespace::MockBeatmapDataConverter::$$c::*)(::GlobalNamespace::NoteData*)>(&GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_1)> {
  static const MethodInfo* get() {
    static auto* nd = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter::$$c*), "<ToMockBeatmapData>b__0_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nd});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_2
// Il2CppName: <ToMockBeatmapData>b__0_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockBeatmapDataConverter::$$c::*)(::GlobalNamespace::NoteData*)>(&GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_2)> {
  static const MethodInfo* get() {
    static auto* nd = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter::$$c*), "<ToMockBeatmapData>b__0_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nd});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_3
// Il2CppName: <ToMockBeatmapData>b__0_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MockNoteData* (GlobalNamespace::MockBeatmapDataConverter::$$c::*)(::GlobalNamespace::NoteData*)>(&GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_3)> {
  static const MethodInfo* get() {
    static auto* nd = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter::$$c*), "<ToMockBeatmapData>b__0_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nd});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_4
// Il2CppName: <ToMockBeatmapData>b__0_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockBeatmapDataConverter::$$c::*)(::GlobalNamespace::NoteData*)>(&GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_4)> {
  static const MethodInfo* get() {
    static auto* nd = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter::$$c*), "<ToMockBeatmapData>b__0_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nd});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_5
// Il2CppName: <ToMockBeatmapData>b__0_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MockNoteData* (GlobalNamespace::MockBeatmapDataConverter::$$c::*)(::GlobalNamespace::NoteData*)>(&GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_5)> {
  static const MethodInfo* get() {
    static auto* nd = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter::$$c*), "<ToMockBeatmapData>b__0_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nd});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_6
// Il2CppName: <ToMockBeatmapData>b__0_6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MockObstacleData* (GlobalNamespace::MockBeatmapDataConverter::$$c::*)(::GlobalNamespace::ObstacleData*)>(&GlobalNamespace::MockBeatmapDataConverter::$$c::$ToMockBeatmapData$b__0_6)> {
  static const MethodInfo* get() {
    static auto* od = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter::$$c*), "<ToMockBeatmapData>b__0_6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{od});
  }
};
