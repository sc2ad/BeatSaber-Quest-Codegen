// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteCutCoreEffectsSpawner : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Single _shockWaveYPos
    // Size: 0x4
    // Offset: 0x18
    float shockWaveYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: shockWaveYPos and: noteCutParticlesEffect
    char __padding0[0x4] = {};
    // [SpaceAttribute] Offset: 0xF05480
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
    // [InjectAttribute] Offset: 0xF054F8
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF05508
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF05518
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _shockWaveYPos
    float& dyn__shockWaveYPos();
    // Get instance field reference: private NoteCutParticlesEffect _noteCutParticlesEffect
    GlobalNamespace::NoteCutParticlesEffect*& dyn__noteCutParticlesEffect();
    // Get instance field reference: private NoteDebrisSpawner _noteDebrisSpawner
    GlobalNamespace::NoteDebrisSpawner*& dyn__noteDebrisSpawner();
    // Get instance field reference: private NoteCutHapticEffect _noteCutHapticEffect
    GlobalNamespace::NoteCutHapticEffect*& dyn__noteCutHapticEffect();
    // Get instance field reference: private ShockwaveEffect _shockwaveEffect
    GlobalNamespace::ShockwaveEffect*& dyn__shockwaveEffect();
    // Get instance field reference: private BombExplosionEffect _bombExplosionEffect
    GlobalNamespace::BombExplosionEffect*& dyn__bombExplosionEffect();
    // Get instance field reference: private readonly ColorManager _colorManager
    GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // protected System.Void Start()
    // Offset: 0x113DCB8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x113DD44
    void OnDestroy();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x113DDDC
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo);
    // private System.Void SpawnNoteCutEffect(in NoteCutInfo noteCutInfo, NoteController noteController)
    // Offset: 0x113DEFC
    void SpawnNoteCutEffect(ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, GlobalNamespace::NoteController* noteController);
    // private System.Void SpawnBombCutEffect(in NoteCutInfo noteCutInfo, NoteController noteController)
    // Offset: 0x113DE9C
    void SpawnBombCutEffect(ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, GlobalNamespace::NoteController* noteController);
    // public System.Void .ctor()
    // Offset: 0x113E2F4
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutCoreEffectsSpawner::*)(GlobalNamespace::NoteController*, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::NoteCutCoreEffectsSpawner::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutCoreEffectsSpawner*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect
// Il2CppName: SpawnNoteCutEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutCoreEffectsSpawner::*)(ByRef<GlobalNamespace::NoteCutInfo>, GlobalNamespace::NoteController*)>(&GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect)> {
  static const MethodInfo* get() {
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutCoreEffectsSpawner*), "SpawnNoteCutEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutInfo, noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect
// Il2CppName: SpawnBombCutEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutCoreEffectsSpawner::*)(ByRef<GlobalNamespace::NoteCutInfo>, GlobalNamespace::NoteController*)>(&GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect)> {
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
