// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
// Including type: TutorialSongController/TutorialJumpingNoteSpawnData
#include "GlobalNamespace/TutorialSongController_TutorialJumpingNoteSpawnData.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
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
NEED_NO_BOX(::GlobalNamespace::TutorialSongController::TutorialBasicNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController::TutorialBasicNoteSpawnData*, "", "TutorialSongController/TutorialBasicNoteSpawnData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TutorialSongController/TutorialBasicNoteSpawnData
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialSongController::TutorialBasicNoteSpawnData : public ::GlobalNamespace::TutorialSongController::TutorialJumpingNoteSpawnData {
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
    // public readonly NoteCutDirection cutDirection
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::NoteCutDirection cutDirection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutDirection) == 0x4);
    // public readonly ColorType colorType
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::ColorType colorType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorType) == 0x4);
    public:
    // Deleting conversion operator: operator ::GlobalNamespace::NoteLineLayer
    constexpr operator ::GlobalNamespace::NoteLineLayer() const noexcept = delete;
    // Get instance field reference: public readonly NoteCutDirection cutDirection
    ::GlobalNamespace::NoteCutDirection& dyn_cutDirection();
    // Get instance field reference: public readonly ColorType colorType
    ::GlobalNamespace::ColorType& dyn_colorType();
    // public System.Void .ctor(Signal signal, System.Int32 firstTimeBeatOffset, System.Int32 beatOffset, System.Int32 lineIndex, NoteLineLayer noteLineLayer, NoteCutDirection cutDirection, ColorType colorType)
    // Offset: 0x2AEDF48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialSongController::TutorialBasicNoteSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int firstTimeBeatOffset, int beatOffset, int lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteCutDirection cutDirection, ::GlobalNamespace::ColorType colorType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialSongController::TutorialBasicNoteSpawnData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialSongController::TutorialBasicNoteSpawnData*, creationType>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer, cutDirection, colorType)));
    }
  }; // TutorialSongController/TutorialBasicNoteSpawnData
  #pragma pack(pop)
  static check_size<sizeof(TutorialSongController::TutorialBasicNoteSpawnData), 44 + sizeof(::GlobalNamespace::ColorType)> __GlobalNamespace_TutorialSongController_TutorialBasicNoteSpawnDataSizeCheck;
  static_assert(sizeof(TutorialSongController::TutorialBasicNoteSpawnData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::TutorialBasicNoteSpawnData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
