// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelsModel
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
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
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsModel::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsModel::$$c*, "", "BeatmapLevelsModel/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelsModel/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapLevelsModel::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BeatmapLevelsModel/<>c <>9
    static ::GlobalNamespace::BeatmapLevelsModel::$$c* _get_$$9();
    // Set static field: static public readonly BeatmapLevelsModel/<>c <>9
    static void _set_$$9(::GlobalNamespace::BeatmapLevelsModel::$$c* value);
    // Get static field: static public System.Func`2<IBeatmapLevelPack,System.Collections.Generic.IEnumerable`1<IPreviewBeatmapLevel>> <>9__35_0
    static ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>* _get_$$9__35_0();
    // Set static field: static public System.Func`2<IBeatmapLevelPack,System.Collections.Generic.IEnumerable`1<IPreviewBeatmapLevel>> <>9__35_0
    static void _set_$$9__35_0(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x156C9FC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x156CA60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelsModel::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapLevelsModel::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelsModel::$$c*, creationType>()));
    }
    // System.Collections.Generic.IEnumerable`1<IPreviewBeatmapLevel> <GetLevelPreviewForLevelId>b__35_0(IBeatmapLevelPack beatmapLevelPack)
    // Offset: 0x156CA68
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>* $GetLevelPreviewForLevelId$b__35_0(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);
  }; // BeatmapLevelsModel/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BeatmapLevelsModel::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelsModel::$$c::$GetLevelPreviewForLevelId$b__35_0
// Il2CppName: <GetLevelPreviewForLevelId>b__35_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>* (GlobalNamespace::BeatmapLevelsModel::$$c::*)(::GlobalNamespace::IBeatmapLevelPack*)>(&GlobalNamespace::BeatmapLevelsModel::$$c::$GetLevelPreviewForLevelId$b__35_0)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelPack = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelsModel::$$c*), "<GetLevelPreviewForLevelId>b__35_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelPack});
  }
};
