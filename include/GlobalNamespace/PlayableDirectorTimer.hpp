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
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayableDirectorTimer
  class PlayableDirectorTimer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayableDirectorTimer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayableDirectorTimer*, "", "PlayableDirectorTimer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayableDirectorTimer
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayableDirectorTimer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Playables.PlayableDirector _playableDirector
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Playables::PlayableDirector* playableDirector;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableDirector*) == 0x8);
    // [InjectAttribute] Offset: 0x1123A64
    // private AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Playables.PlayableDirector _playableDirector
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableDirector*& dyn__playableDirector();
    // Get instance field reference: private AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // public System.Void .ctor()
    // Offset: 0x1576F0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayableDirectorTimer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayableDirectorTimer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayableDirectorTimer*, creationType>()));
    }
    // protected System.Void Update()
    // Offset: 0x1576EC0
    void Update();
  }; // PlayableDirectorTimer
  #pragma pack(pop)
  static check_size<sizeof(PlayableDirectorTimer), 32 + sizeof(::GlobalNamespace::AudioTimeSyncController*)> __GlobalNamespace_PlayableDirectorTimerSizeCheck;
  static_assert(sizeof(PlayableDirectorTimer) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayableDirectorTimer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayableDirectorTimer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayableDirectorTimer::*)()>(&GlobalNamespace::PlayableDirectorTimer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayableDirectorTimer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
