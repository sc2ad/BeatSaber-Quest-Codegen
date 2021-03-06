// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutParticlesEffect
  class NoteCutParticlesEffect;
  // Forward declaring type: NoteDebrisSpawner
  class NoteDebrisSpawner;
  // Forward declaring type: NoteCutHapticEffect
  class NoteCutHapticEffect;
  // Forward declaring type: ShockwaveEffect
  class ShockwaveEffect;
  // Forward declaring type: BombExplosionEffect
  class BombExplosionEffect;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutCoreEffectsSpawner
  class NoteCutCoreEffectsSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _shockWaveYPos
    // Size: 0x4
    // Offset: 0x18
    float shockWaveYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: shockWaveYPos and: noteCutParticlesEffect
    char __padding0[0x4] = {};
    // [SpaceAttribute] Offset: 0xE19E34
    // private NoteCutParticlesEffect _noteCutParticlesEffect
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NoteCutParticlesEffect* noteCutParticlesEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutParticlesEffect*) == 0x8);
    // private NoteDebrisSpawner _noteDebrisSpawner
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NoteDebrisSpawner* noteDebrisSpawner;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteDebrisSpawner*) == 0x8);
    // private NoteCutHapticEffect _noteCutHapticEffect
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::NoteCutHapticEffect* noteCutHapticEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutHapticEffect*) == 0x8);
    // private ShockwaveEffect _shockwaveEffect
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ShockwaveEffect* shockwaveEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ShockwaveEffect*) == 0x8);
    // private BombExplosionEffect _bombExplosionEffect
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BombExplosionEffect* bombExplosionEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BombExplosionEffect*) == 0x8);
    // [InjectAttribute] Offset: 0xE19EAC
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE19EBC
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE19ECC
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // Creating value type constructor for type: NoteCutCoreEffectsSpawner
    NoteCutCoreEffectsSpawner(float shockWaveYPos_ = {}, GlobalNamespace::NoteCutParticlesEffect* noteCutParticlesEffect_ = {}, GlobalNamespace::NoteDebrisSpawner* noteDebrisSpawner_ = {}, GlobalNamespace::NoteCutHapticEffect* noteCutHapticEffect_ = {}, GlobalNamespace::ShockwaveEffect* shockwaveEffect_ = {}, GlobalNamespace::BombExplosionEffect* bombExplosionEffect_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}) noexcept : shockWaveYPos{shockWaveYPos_}, noteCutParticlesEffect{noteCutParticlesEffect_}, noteDebrisSpawner{noteDebrisSpawner_}, noteCutHapticEffect{noteCutHapticEffect_}, shockwaveEffect{shockwaveEffect_}, bombExplosionEffect{bombExplosionEffect_}, colorManager{colorManager_}, beatmapObjectManager{beatmapObjectManager_}, audioTimeSyncController{audioTimeSyncController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x11D32D0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11D335C
    void OnDestroy();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x11D33F4
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo& noteCutInfo);
    // private System.Void SpawnNoteCutEffect(in NoteCutInfo noteCutInfo, NoteController noteController)
    // Offset: 0x11D3510
    void SpawnNoteCutEffect(GlobalNamespace::NoteCutInfo& noteCutInfo, GlobalNamespace::NoteController* noteController);
    // private System.Void SpawnBombCutEffect(in NoteCutInfo noteCutInfo, NoteController noteController)
    // Offset: 0x11D34B0
    void SpawnBombCutEffect(GlobalNamespace::NoteCutInfo& noteCutInfo, GlobalNamespace::NoteController* noteController);
    // public System.Void .ctor()
    // Offset: 0x11D469C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutCoreEffectsSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutCoreEffectsSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutCoreEffectsSpawner*, creationType>()));
    }
  }; // NoteCutCoreEffectsSpawner
  #pragma pack(pop)
  static check_size<sizeof(NoteCutCoreEffectsSpawner), 88 + sizeof(GlobalNamespace::AudioTimeSyncController*)> __GlobalNamespace_NoteCutCoreEffectsSpawnerSizeCheck;
  static_assert(sizeof(NoteCutCoreEffectsSpawner) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutCoreEffectsSpawner*, "", "NoteCutCoreEffectsSpawner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutCoreEffectsSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutCoreEffectsSpawner::*)()>(&GlobalNamespace::NoteCutCoreEffectsSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutCoreEffectsSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutCoreEffectsSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutCoreEffectsSpawner::*)()>(&GlobalNamespace::NoteCutCoreEffectsSpawner::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutCoreEffectsSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutCoreEffectsSpawner::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutCoreEffectsSpawner::*)(GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo&)>(&GlobalNamespace::NoteCutCoreEffectsSpawner::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutCoreEffectsSpawner*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect
// Il2CppName: SpawnNoteCutEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutCoreEffectsSpawner::*)(GlobalNamespace::NoteCutInfo&, GlobalNamespace::NoteController*)>(&GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect)> {
  static const MethodInfo* get() {
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutCoreEffectsSpawner*), "SpawnNoteCutEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutInfo, noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect
// Il2CppName: SpawnBombCutEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutCoreEffectsSpawner::*)(GlobalNamespace::NoteCutInfo&, GlobalNamespace::NoteController*)>(&GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect)> {
  static const MethodInfo* get() {
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutCoreEffectsSpawner*), "SpawnBombCutEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutInfo, noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutCoreEffectsSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
