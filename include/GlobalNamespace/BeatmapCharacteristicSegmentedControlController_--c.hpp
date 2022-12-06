// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapCharacteristicSegmentedControlController
#include "GlobalNamespace/BeatmapCharacteristicSegmentedControlController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c*, "", "BeatmapCharacteristicSegmentedControlController/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicSegmentedControlController/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapCharacteristicSegmentedControlController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BeatmapCharacteristicSegmentedControlController/<>c <>9
    static ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c* _get_$$9();
    // Set static field: static public readonly BeatmapCharacteristicSegmentedControlController/<>c <>9
    static void _set_$$9(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c* value);
    // Get static field: static public System.Comparison`1<IDifficultyBeatmapSet> <>9__10_0
    static ::System::Comparison_1<::GlobalNamespace::IDifficultyBeatmapSet*>* _get_$$9__10_0();
    // Set static field: static public System.Comparison`1<IDifficultyBeatmapSet> <>9__10_0
    static void _set_$$9__10_0(::System::Comparison_1<::GlobalNamespace::IDifficultyBeatmapSet*>* value);
    // static private System.Void .cctor()
    // Offset: 0x13A6140
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x13A61A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicSegmentedControlController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicSegmentedControlController::$$c*, creationType>()));
    }
    // System.Int32 <SetData>b__10_0(IDifficultyBeatmapSet a, IDifficultyBeatmapSet b)
    // Offset: 0x13A61AC
    int $SetData$b__10_0(::GlobalNamespace::IDifficultyBeatmapSet* a, ::GlobalNamespace::IDifficultyBeatmapSet* b);
  }; // BeatmapCharacteristicSegmentedControlController/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c::$SetData$b__10_0
// Il2CppName: <SetData>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c::*)(::GlobalNamespace::IDifficultyBeatmapSet*, ::GlobalNamespace::IDifficultyBeatmapSet*)>(&GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c::$SetData$b__10_0)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmapSet")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmapSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c*), "<SetData>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
