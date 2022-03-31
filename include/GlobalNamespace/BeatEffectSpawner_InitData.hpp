// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatEffectSpawner
#include "GlobalNamespace/BeatEffectSpawner.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatEffectSpawner::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatEffectSpawner::InitData*, "", "BeatEffectSpawner/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: BeatEffectSpawner/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatEffectSpawner::InitData : public ::Il2CppObject {
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
    // public readonly System.Boolean hideNoteSpawnEffect
    // Size: 0x1
    // Offset: 0x10
    bool hideNoteSpawnEffect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return hideNoteSpawnEffect;
    }
    // Get instance field reference: public readonly System.Boolean hideNoteSpawnEffect
    bool& dyn_hideNoteSpawnEffect();
    // public System.Void .ctor(System.Boolean hideNoteSpawnEffect)
    // Offset: 0x1362E00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatEffectSpawner::InitData* New_ctor(bool hideNoteSpawnEffect) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatEffectSpawner::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatEffectSpawner::InitData*, creationType>(hideNoteSpawnEffect)));
    }
  }; // BeatEffectSpawner/InitData
  #pragma pack(pop)
  static check_size<sizeof(BeatEffectSpawner::InitData), 16 + sizeof(bool)> __GlobalNamespace_BeatEffectSpawner_InitDataSizeCheck;
  static_assert(sizeof(BeatEffectSpawner::InitData) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatEffectSpawner::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
