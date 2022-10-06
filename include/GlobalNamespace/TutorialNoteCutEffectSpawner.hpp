// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FlyingTextSpawner
  class FlyingTextSpawner;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TutorialNoteCutEffectSpawner
  class TutorialNoteCutEffectSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialNoteCutEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialNoteCutEffectSpawner*, "", "TutorialNoteCutEffectSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: TutorialNoteCutEffectSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialNoteCutEffectSpawner : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private FlyingTextSpawner _failFlyingTextSpawner
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::FlyingTextSpawner* failFlyingTextSpawner;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FlyingTextSpawner*) == 0x8);
    // [InjectAttribute] Offset: 0x1104F00
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private FlyingTextSpawner _failFlyingTextSpawner
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FlyingTextSpawner*& dyn__failFlyingTextSpawner();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // public System.Void .ctor()
    // Offset: 0x13F1DCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialNoteCutEffectSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialNoteCutEffectSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialNoteCutEffectSpawner*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13F1A70
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13F1AFC
    void OnDestroy();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x13F1B94
    void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);
  }; // TutorialNoteCutEffectSpawner
  #pragma pack(pop)
  static check_size<sizeof(TutorialNoteCutEffectSpawner), 32 + sizeof(::GlobalNamespace::BeatmapObjectManager*)> __GlobalNamespace_TutorialNoteCutEffectSpawnerSizeCheck;
  static_assert(sizeof(TutorialNoteCutEffectSpawner) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteCutEffectSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteCutEffectSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoteCutEffectSpawner::*)()>(&GlobalNamespace::TutorialNoteCutEffectSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteCutEffectSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteCutEffectSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoteCutEffectSpawner::*)()>(&GlobalNamespace::TutorialNoteCutEffectSpawner::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteCutEffectSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoteCutEffectSpawner::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoteCutEffectSpawner::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::TutorialNoteCutEffectSpawner::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoteCutEffectSpawner*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
