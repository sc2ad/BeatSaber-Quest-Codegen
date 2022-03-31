// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockBeatmapData
  class MockBeatmapData;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: MockNoteData
  class MockNoteData;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: MockObstacleData
  class MockObstacleData;
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MockBeatmapDataConverter
  class MockBeatmapDataConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockBeatmapDataConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapDataConverter*, "", "MockBeatmapDataConverter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MockBeatmapDataConverter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MockBeatmapDataConverter : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::MockBeatmapDataConverter::$$c
    class $$c;
    // static public MockBeatmapData ToMockBeatmapData(IReadonlyBeatmapData beatmapData)
    // Offset: 0x13C3D64
    static ::GlobalNamespace::MockBeatmapData* ToMockBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);
    // static public MockNoteData ToMockNoteData(NoteData noteData)
    // Offset: 0x13C4614
    static ::GlobalNamespace::MockNoteData* ToMockNoteData(::GlobalNamespace::NoteData* noteData);
    // static public MockObstacleData ToMockObstacleData(ObstacleData obstacleData)
    // Offset: 0x13C46A8
    static ::GlobalNamespace::MockObstacleData* ToMockObstacleData(::GlobalNamespace::ObstacleData* obstacleData);
  }; // MockBeatmapDataConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::ToMockBeatmapData
// Il2CppName: ToMockBeatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MockBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(&GlobalNamespace::MockBeatmapDataConverter::ToMockBeatmapData)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter*), "ToMockBeatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::ToMockNoteData
// Il2CppName: ToMockNoteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MockNoteData* (*)(::GlobalNamespace::NoteData*)>(&GlobalNamespace::MockBeatmapDataConverter::ToMockNoteData)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter*), "ToMockNoteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::ToMockObstacleData
// Il2CppName: ToMockObstacleData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MockObstacleData* (*)(::GlobalNamespace::ObstacleData*)>(&GlobalNamespace::MockBeatmapDataConverter::ToMockObstacleData)> {
  static const MethodInfo* get() {
    static auto* obstacleData = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter*), "ToMockObstacleData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleData});
  }
};
