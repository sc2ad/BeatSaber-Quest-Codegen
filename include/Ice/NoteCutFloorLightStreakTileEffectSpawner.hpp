// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Ice
namespace Ice {
  // Forward declaring type: FloorLightStreakTileEffect
  class FloorLightStreakTileEffect;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: Ice
namespace Ice {
  // Forward declaring type: NoteCutFloorLightStreakTileEffectSpawner
  class NoteCutFloorLightStreakTileEffectSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Ice::NoteCutFloorLightStreakTileEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::Ice::NoteCutFloorLightStreakTileEffectSpawner*, "Ice", "NoteCutFloorLightStreakTileEffectSpawner");
// Type namespace: Ice
namespace Ice {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Ice.NoteCutFloorLightStreakTileEffectSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteCutFloorLightStreakTileEffectSpawner : public ::UnityEngine::MonoBehaviour {
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
    // private Ice.FloorLightStreakTileEffect _floorLightStreakTileEffect
    // Size: 0x8
    // Offset: 0x18
    ::Ice::FloorLightStreakTileEffect* floorLightStreakTileEffect;
    // Field size check
    static_assert(sizeof(::Ice::FloorLightStreakTileEffect*) == 0x8);
    // [InjectAttribute] Offset: 0x127BC50
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0x127BC60
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorManager*) == 0x8);
    // private UnityEngine.Color _spawnColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color spawnColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Ice.FloorLightStreakTileEffect _floorLightStreakTileEffect
    ::Ice::FloorLightStreakTileEffect*& dyn__floorLightStreakTileEffect();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly ColorManager _colorManager
    ::GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private UnityEngine.Color _spawnColor
    ::UnityEngine::Color& dyn__spawnColor();
    // public UnityEngine.Color get_spawnColor()
    // Offset: 0x2A703FC
    ::UnityEngine::Color get_spawnColor();
    // public System.Void set_spawnColor(UnityEngine.Color value)
    // Offset: 0x2A703F0
    void set_spawnColor(::UnityEngine::Color value);
    // protected System.Void Start()
    // Offset: 0x2A70408
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x2A70494
    void OnDestroy();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x2A7052C
    void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);
    // public System.Void .ctor()
    // Offset: 0x2A70594
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutFloorLightStreakTileEffectSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Ice::NoteCutFloorLightStreakTileEffectSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutFloorLightStreakTileEffectSpawner*, creationType>()));
    }
  }; // Ice.NoteCutFloorLightStreakTileEffectSpawner
  #pragma pack(pop)
  static check_size<sizeof(NoteCutFloorLightStreakTileEffectSpawner), 48 + sizeof(::UnityEngine::Color)> __Ice_NoteCutFloorLightStreakTileEffectSpawnerSizeCheck;
  static_assert(sizeof(NoteCutFloorLightStreakTileEffectSpawner) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Ice::NoteCutFloorLightStreakTileEffectSpawner::get_spawnColor
// Il2CppName: get_spawnColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Ice::NoteCutFloorLightStreakTileEffectSpawner::*)()>(&Ice::NoteCutFloorLightStreakTileEffectSpawner::get_spawnColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::NoteCutFloorLightStreakTileEffectSpawner*), "get_spawnColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::NoteCutFloorLightStreakTileEffectSpawner::set_spawnColor
// Il2CppName: set_spawnColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::NoteCutFloorLightStreakTileEffectSpawner::*)(::UnityEngine::Color)>(&Ice::NoteCutFloorLightStreakTileEffectSpawner::set_spawnColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ice::NoteCutFloorLightStreakTileEffectSpawner*), "set_spawnColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Ice::NoteCutFloorLightStreakTileEffectSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::NoteCutFloorLightStreakTileEffectSpawner::*)()>(&Ice::NoteCutFloorLightStreakTileEffectSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::NoteCutFloorLightStreakTileEffectSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::NoteCutFloorLightStreakTileEffectSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::NoteCutFloorLightStreakTileEffectSpawner::*)()>(&Ice::NoteCutFloorLightStreakTileEffectSpawner::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::NoteCutFloorLightStreakTileEffectSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::NoteCutFloorLightStreakTileEffectSpawner::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::NoteCutFloorLightStreakTileEffectSpawner::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&Ice::NoteCutFloorLightStreakTileEffectSpawner::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Ice::NoteCutFloorLightStreakTileEffectSpawner*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: Ice::NoteCutFloorLightStreakTileEffectSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
