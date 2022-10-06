// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: NoteCutCoreEffectsSpawner
  class NoteCutCoreEffectsSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteCutCoreEffectsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutCoreEffectsSpawner*, "", "NoteCutCoreEffectsSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutCoreEffectsSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteCutCoreEffectsSpawner : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _shockWaveYPos
    // Size: 0x4
    // Offset: 0x18
    float shockWaveYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: shockWaveYPos and: noteCutParticlesEffect
    char __padding0[0x4] = {};
    // [SpaceAttribute] Offset: 0x10FE290
    // private NoteCutParticlesEffect _noteCutParticlesEffect
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::NoteCutParticlesEffect* noteCutParticlesEffect;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutParticlesEffect*) == 0x8);
    // private NoteDebrisSpawner _noteDebrisSpawner
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::NoteDebrisSpawner* noteDebrisSpawner;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteDebrisSpawner*) == 0x8);
    // private NoteCutHapticEffect _noteCutHapticEffect
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::NoteCutHapticEffect* noteCutHapticEffect;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutHapticEffect*) == 0x8);
    // private ShockwaveEffect _shockwaveEffect
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ShockwaveEffect* shockwaveEffect;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ShockwaveEffect*) == 0x8);
    // private BombExplosionEffect _bombExplosionEffect
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BombExplosionEffect* bombExplosionEffect;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BombExplosionEffect*) == 0x8);
    // [InjectAttribute] Offset: 0x10FE308
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10FE318
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10FE328
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kNormalNoteSparkleParticlesCount
    static constexpr const int kNormalNoteSparkleParticlesCount = 150;
    // Get static field: static private System.Int32 kNormalNoteSparkleParticlesCount
    static int _get_kNormalNoteSparkleParticlesCount();
    // Set static field: static private System.Int32 kNormalNoteSparkleParticlesCount
    static void _set_kNormalNoteSparkleParticlesCount(int value);
    // static field const value: static private System.Int32 kNormalNoteExplosionParticlesCount
    static constexpr const int kNormalNoteExplosionParticlesCount = 50;
    // Get static field: static private System.Int32 kNormalNoteExplosionParticlesCount
    static int _get_kNormalNoteExplosionParticlesCount();
    // Set static field: static private System.Int32 kNormalNoteExplosionParticlesCount
    static void _set_kNormalNoteExplosionParticlesCount(int value);
    // static field const value: static private System.Int32 kBurstSliderElementSparkleParticlesCount
    static constexpr const int kBurstSliderElementSparkleParticlesCount = 50;
    // Get static field: static private System.Int32 kBurstSliderElementSparkleParticlesCount
    static int _get_kBurstSliderElementSparkleParticlesCount();
    // Set static field: static private System.Int32 kBurstSliderElementSparkleParticlesCount
    static void _set_kBurstSliderElementSparkleParticlesCount(int value);
    // static field const value: static private System.Int32 kBurstSliderElementParticlesCount
    static constexpr const int kBurstSliderElementParticlesCount = 20;
    // Get static field: static private System.Int32 kBurstSliderElementParticlesCount
    static int _get_kBurstSliderElementParticlesCount();
    // Set static field: static private System.Int32 kBurstSliderElementParticlesCount
    static void _set_kBurstSliderElementParticlesCount(int value);
    // Get instance field reference: private System.Single _shockWaveYPos
    [[deprecated("Use field access instead!")]] float& dyn__shockWaveYPos();
    // Get instance field reference: private NoteCutParticlesEffect _noteCutParticlesEffect
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutParticlesEffect*& dyn__noteCutParticlesEffect();
    // Get instance field reference: private NoteDebrisSpawner _noteDebrisSpawner
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteDebrisSpawner*& dyn__noteDebrisSpawner();
    // Get instance field reference: private NoteCutHapticEffect _noteCutHapticEffect
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutHapticEffect*& dyn__noteCutHapticEffect();
    // Get instance field reference: private ShockwaveEffect _shockwaveEffect
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ShockwaveEffect*& dyn__shockwaveEffect();
    // Get instance field reference: private BombExplosionEffect _bombExplosionEffect
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BombExplosionEffect*& dyn__bombExplosionEffect();
    // Get instance field reference: private readonly ColorManager _colorManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // public System.Void .ctor()
    // Offset: 0x1505A70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutCoreEffectsSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteCutCoreEffectsSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutCoreEffectsSpawner*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1504618
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x15046A4
    void OnDestroy();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x150473C
    void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);
    // private System.Void SpawnNoteCutEffect(in NoteCutInfo noteCutInfo, NoteController noteController, System.Int32 sparkleParticlesCount, System.Int32 explosionParticlesCount)
    // Offset: 0x1504940
    void SpawnNoteCutEffect(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteController* noteController, int sparkleParticlesCount, int explosionParticlesCount);
    // private System.Void SpawnBombCutEffect(in NoteCutInfo noteCutInfo, NoteController noteController)
    // Offset: 0x1504878
    void SpawnBombCutEffect(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteController* noteController);
  }; // NoteCutCoreEffectsSpawner
  #pragma pack(pop)
  static check_size<sizeof(NoteCutCoreEffectsSpawner), 88 + sizeof(::GlobalNamespace::AudioTimeSyncController*)> __GlobalNamespace_NoteCutCoreEffectsSpawnerSizeCheck;
  static_assert(sizeof(NoteCutCoreEffectsSpawner) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutCoreEffectsSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutCoreEffectsSpawner::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::NoteCutCoreEffectsSpawner::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutCoreEffectsSpawner*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect
// Il2CppName: SpawnNoteCutEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutCoreEffectsSpawner::*)(ByRef<::GlobalNamespace::NoteCutInfo>, ::GlobalNamespace::NoteController*, int, int)>(&GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect)> {
  static const MethodInfo* get() {
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* sparkleParticlesCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* explosionParticlesCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutCoreEffectsSpawner*), "SpawnNoteCutEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutInfo, noteController, sparkleParticlesCount, explosionParticlesCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect
// Il2CppName: SpawnBombCutEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutCoreEffectsSpawner::*)(ByRef<::GlobalNamespace::NoteCutInfo>, ::GlobalNamespace::NoteController*)>(&GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect)> {
  static const MethodInfo* get() {
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutCoreEffectsSpawner*), "SpawnBombCutEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutInfo, noteController});
  }
};
