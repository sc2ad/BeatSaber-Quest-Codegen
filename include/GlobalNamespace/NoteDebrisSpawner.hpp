// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: INoteDebrisDidFinishEvent
#include "GlobalNamespace/INoteDebrisDidFinishEvent.hpp"
// Including type: NoteDebris
#include "GlobalNamespace/NoteDebris.hpp"
// Including type: NoteData/GameplayType
#include "GlobalNamespace/NoteData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorType
  struct ColorType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteDebrisSpawner
  class NoteDebrisSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteDebrisSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisSpawner*, "", "NoteDebrisSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: NoteDebrisSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteDebrisSpawner : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::INoteDebrisDidFinishEvent*/ {
    public:
    public:
    // private System.Single _rotation
    // Size: 0x4
    // Offset: 0x18
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _cutDirMultiplier
    // Size: 0x4
    // Offset: 0x1C
    float cutDirMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fromCenterSpeed
    // Size: 0x4
    // Offset: 0x20
    float fromCenterSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _moveSpeedMultiplier
    // Size: 0x4
    // Offset: 0x24
    float moveSpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0x10FE398
    // private readonly NoteDebris/Pool _normalNotesDebrisPool
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::NoteDebris::Pool* normalNotesDebrisPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteDebris::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0x10FE410
    // private readonly NoteDebris/Pool _burstSliderHeadNotesDebrisPool
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::NoteDebris::Pool* burstSliderHeadNotesDebrisPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteDebris::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0x10FE48C
    // private readonly NoteDebris/Pool _burstSliderElementNotesDebrisPool
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::NoteDebris::Pool* burstSliderElementNotesDebrisPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteDebris::Pool*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<NoteData/GameplayType,NoteDebris/Pool> _poolForNoteGameplayType
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData::GameplayType, ::GlobalNamespace::NoteDebris::Pool*>* poolForNoteGameplayType;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData::GameplayType, ::GlobalNamespace::NoteDebris::Pool*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<NoteDebris,NoteDebris/Pool> _poolForNoteDebris
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteDebris*, ::GlobalNamespace::NoteDebris::Pool*>* poolForNoteDebris;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteDebris*, ::GlobalNamespace::NoteDebris::Pool*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteDebrisDidFinishEvent
    operator ::GlobalNamespace::INoteDebrisDidFinishEvent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteDebrisDidFinishEvent*>(this);
    }
    // Creating interface conversion operator: i_INoteDebrisDidFinishEvent
    inline ::GlobalNamespace::INoteDebrisDidFinishEvent* i_INoteDebrisDidFinishEvent() noexcept {
      return reinterpret_cast<::GlobalNamespace::INoteDebrisDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kMinLifeTime
    static constexpr const float kMinLifeTime = 0.2;
    // Get static field: static private System.Single kMinLifeTime
    static float _get_kMinLifeTime();
    // Set static field: static private System.Single kMinLifeTime
    static void _set_kMinLifeTime(float value);
    // static field const value: static private System.Single kMaxLifeTime
    static constexpr const float kMaxLifeTime = 2;
    // Get static field: static private System.Single kMaxLifeTime
    static float _get_kMaxLifeTime();
    // Set static field: static private System.Single kMaxLifeTime
    static void _set_kMaxLifeTime(float value);
    // static field const value: static private System.Single kLifeTimeOffset
    static constexpr const float kLifeTimeOffset = 0.05;
    // Get static field: static private System.Single kLifeTimeOffset
    static float _get_kLifeTimeOffset();
    // Set static field: static private System.Single kLifeTimeOffset
    static void _set_kLifeTimeOffset(float value);
    // Get instance field reference: private System.Single _rotation
    [[deprecated("Use field access instead!")]] float& dyn__rotation();
    // Get instance field reference: private System.Single _cutDirMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__cutDirMultiplier();
    // Get instance field reference: private System.Single _fromCenterSpeed
    [[deprecated("Use field access instead!")]] float& dyn__fromCenterSpeed();
    // Get instance field reference: private System.Single _moveSpeedMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__moveSpeedMultiplier();
    // Get instance field reference: private readonly NoteDebris/Pool _normalNotesDebrisPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteDebris::Pool*& dyn__normalNotesDebrisPool();
    // Get instance field reference: private readonly NoteDebris/Pool _burstSliderHeadNotesDebrisPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteDebris::Pool*& dyn__burstSliderHeadNotesDebrisPool();
    // Get instance field reference: private readonly NoteDebris/Pool _burstSliderElementNotesDebrisPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteDebris::Pool*& dyn__burstSliderElementNotesDebrisPool();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<NoteData/GameplayType,NoteDebris/Pool> _poolForNoteGameplayType
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData::GameplayType, ::GlobalNamespace::NoteDebris::Pool*>*& dyn__poolForNoteGameplayType();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<NoteDebris,NoteDebris/Pool> _poolForNoteDebris
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteDebris*, ::GlobalNamespace::NoteDebris::Pool*>*& dyn__poolForNoteDebris();
    // public System.Void .ctor()
    // Offset: 0x1509614
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteDebrisSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteDebrisSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteDebrisSpawner*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x15092EC
    void Start();
    // public System.Void SpawnDebris(NoteData/GameplayType noteGameplayType, UnityEngine.Vector3 cutPoint, UnityEngine.Vector3 cutNormal, System.Single saberSpeed, UnityEngine.Vector3 saberDir, UnityEngine.Vector3 notePos, UnityEngine.Quaternion noteRotation, UnityEngine.Vector3 noteScale, ColorType colorType, System.Single timeToNextColorNote, UnityEngine.Vector3 moveVec)
    // Offset: 0x1505160
    void SpawnDebris(::GlobalNamespace::NoteData::GameplayType noteGameplayType, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, float saberSpeed, ::UnityEngine::Vector3 saberDir, ::UnityEngine::Vector3 notePos, ::UnityEngine::Quaternion noteRotation, ::UnityEngine::Vector3 noteScale, ::GlobalNamespace::ColorType colorType, float timeToNextColorNote, ::UnityEngine::Vector3 moveVec);
    // public System.Void HandleNoteDebrisDidFinish(NoteDebris noteDebris)
    // Offset: 0x15094A4
    void HandleNoteDebrisDidFinish(::GlobalNamespace::NoteDebris* noteDebris);
    // private System.Void SpawnNoteDebris(NoteData/GameplayType noteGameplayType, out NoteDebris debris0, out NoteDebris debris1)
    // Offset: 0x15093A8
    void SpawnNoteDebris(::GlobalNamespace::NoteData::GameplayType noteGameplayType, ByRef<::GlobalNamespace::NoteDebris*> debris0, ByRef<::GlobalNamespace::NoteDebris*> debris1);
    // private System.Void DespawnNoteDebris(NoteDebris noteDebris)
    // Offset: 0x1509578
    void DespawnNoteDebris(::GlobalNamespace::NoteDebris* noteDebris);
  }; // NoteDebrisSpawner
  #pragma pack(pop)
  static check_size<sizeof(NoteDebrisSpawner), 72 + sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteDebris*, ::GlobalNamespace::NoteDebris::Pool*>*)> __GlobalNamespace_NoteDebrisSpawnerSizeCheck;
  static_assert(sizeof(NoteDebrisSpawner) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)()>(&GlobalNamespace::NoteDebrisSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSpawner::SpawnDebris
// Il2CppName: SpawnDebris
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)(::GlobalNamespace::NoteData::GameplayType, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::GlobalNamespace::ColorType, float, ::UnityEngine::Vector3)>(&GlobalNamespace::NoteDebrisSpawner::SpawnDebris)> {
  static const MethodInfo* get() {
    static auto* noteGameplayType = &::il2cpp_utils::GetClassFromName("", "NoteData/GameplayType")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* cutNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* saberSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* saberDir = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* notePos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* noteRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* noteScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* colorType = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    static auto* timeToNextColorNote = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* moveVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisSpawner*), "SpawnDebris", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteGameplayType, cutPoint, cutNormal, saberSpeed, saberDir, notePos, noteRotation, noteScale, colorType, timeToNextColorNote, moveVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSpawner::HandleNoteDebrisDidFinish
// Il2CppName: HandleNoteDebrisDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)(::GlobalNamespace::NoteDebris*)>(&GlobalNamespace::NoteDebrisSpawner::HandleNoteDebrisDidFinish)> {
  static const MethodInfo* get() {
    static auto* noteDebris = &::il2cpp_utils::GetClassFromName("", "NoteDebris")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisSpawner*), "HandleNoteDebrisDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteDebris});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSpawner::SpawnNoteDebris
// Il2CppName: SpawnNoteDebris
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)(::GlobalNamespace::NoteData::GameplayType, ByRef<::GlobalNamespace::NoteDebris*>, ByRef<::GlobalNamespace::NoteDebris*>)>(&GlobalNamespace::NoteDebrisSpawner::SpawnNoteDebris)> {
  static const MethodInfo* get() {
    static auto* noteGameplayType = &::il2cpp_utils::GetClassFromName("", "NoteData/GameplayType")->byval_arg;
    static auto* debris0 = &::il2cpp_utils::GetClassFromName("", "NoteDebris")->this_arg;
    static auto* debris1 = &::il2cpp_utils::GetClassFromName("", "NoteDebris")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisSpawner*), "SpawnNoteDebris", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteGameplayType, debris0, debris1});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisSpawner::DespawnNoteDebris
// Il2CppName: DespawnNoteDebris
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)(::GlobalNamespace::NoteDebris*)>(&GlobalNamespace::NoteDebrisSpawner::DespawnNoteDebris)> {
  static const MethodInfo* get() {
    static auto* noteDebris = &::il2cpp_utils::GetClassFromName("", "NoteDebris")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisSpawner*), "DespawnNoteDebris", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteDebris});
  }
};
