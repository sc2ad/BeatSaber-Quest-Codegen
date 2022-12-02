// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerConnectedPlayerBeatmapObjectManager
#include "GlobalNamespace/MultiplayerConnectedPlayerBeatmapObjectManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::InitData*, "", "MultiplayerConnectedPlayerBeatmapObjectManager/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerBeatmapObjectManager/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerBeatmapObjectManager::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Boolean disappearingArrows
    // Size: 0x1
    // Offset: 0x10
    bool disappearingArrows;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean ghostNotes
    // Size: 0x1
    // Offset: 0x11
    bool ghostNotes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ghostNotes and: notesUniformScale
    char __padding1[0x2] = {};
    // public readonly System.Single notesUniformScale
    // Size: 0x4
    // Offset: 0x14
    float notesUniformScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly System.Boolean disappearingArrows
    [[deprecated("Use field access instead!")]] bool& dyn_disappearingArrows();
    // Get instance field reference: public readonly System.Boolean ghostNotes
    [[deprecated("Use field access instead!")]] bool& dyn_ghostNotes();
    // Get instance field reference: public readonly System.Single notesUniformScale
    [[deprecated("Use field access instead!")]] float& dyn_notesUniformScale();
    // public System.Void .ctor(System.Boolean disappearingArrows, System.Boolean ghostNotes, System.Single notesUniformScale)
    // Offset: 0x145DA28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerBeatmapObjectManager::InitData* New_ctor(bool disappearingArrows, bool ghostNotes, float notesUniformScale) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerBeatmapObjectManager::InitData*, creationType>(disappearingArrows, ghostNotes, notesUniformScale)));
    }
  }; // MultiplayerConnectedPlayerBeatmapObjectManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerBeatmapObjectManager::InitData), 20 + sizeof(float)> __GlobalNamespace_MultiplayerConnectedPlayerBeatmapObjectManager_InitDataSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerBeatmapObjectManager::InitData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
