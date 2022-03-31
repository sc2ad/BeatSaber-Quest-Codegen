// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialSongController::TutorialObjectSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController::TutorialObjectSpawnData*, "", "TutorialSongController/TutorialObjectSpawnData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: TutorialSongController/TutorialObjectSpawnData
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialSongController::TutorialObjectSpawnData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly Signal signal
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::Signal* signal;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Signal*) == 0x8);
    // public readonly System.Int32 beatOffset
    // Size: 0x4
    // Offset: 0x18
    int beatOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 firstTimeBeatOffset
    // Size: 0x4
    // Offset: 0x1C
    int firstTimeBeatOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 lineIndex
    // Size: 0x4
    // Offset: 0x20
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly Signal signal
    ::GlobalNamespace::Signal*& dyn_signal();
    // Get instance field reference: public readonly System.Int32 beatOffset
    int& dyn_beatOffset();
    // Get instance field reference: public readonly System.Int32 firstTimeBeatOffset
    int& dyn_firstTimeBeatOffset();
    // Get instance field reference: public readonly System.Int32 lineIndex
    int& dyn_lineIndex();
    // protected System.Void .ctor(Signal signal, System.Int32 firstTimeBeatOffset, System.Int32 beatOffset, System.Int32 lineIndex)
    // Offset: 0x2AB39DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialSongController::TutorialObjectSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int firstTimeBeatOffset, int beatOffset, int lineIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialSongController::TutorialObjectSpawnData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialSongController::TutorialObjectSpawnData*, creationType>(signal, firstTimeBeatOffset, beatOffset, lineIndex)));
    }
  }; // TutorialSongController/TutorialObjectSpawnData
  #pragma pack(pop)
  static check_size<sizeof(TutorialSongController::TutorialObjectSpawnData), 32 + sizeof(int)> __GlobalNamespace_TutorialSongController_TutorialObjectSpawnDataSizeCheck;
  static_assert(sizeof(TutorialSongController::TutorialObjectSpawnData) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::TutorialObjectSpawnData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
