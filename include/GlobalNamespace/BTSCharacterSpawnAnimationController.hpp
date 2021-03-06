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
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: JumpReceiver
  class JumpReceiver;
  // Forward declaring type: MaterialPropertyBlockColorSetter
  class MaterialPropertyBlockColorSetter;
  // Forward declaring type: MaterialPropertyBlockFloatAnimator
  class MaterialPropertyBlockFloatAnimator;
  // Forward declaring type: SongSpeedData
  class SongSpeedData;
  // Forward declaring type: BTSCharacter
  class BTSCharacter;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ActivationTrack
  class ActivationTrack;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterSpawnAnimationController
  class BTSCharacterSpawnAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Playables.PlayableDirector _spawnCharacterPlayableDirector
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableDirector* spawnCharacterPlayableDirector;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // [SpaceAttribute] Offset: 0xE12D88
    // private JumpReceiver _jumpReceiver
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::JumpReceiver* jumpReceiver;
    // Field size check
    static_assert(sizeof(GlobalNamespace::JumpReceiver*) == 0x8);
    // private System.Single _appearAnimationEndTime
    // Size: 0x4
    // Offset: 0x28
    float appearAnimationEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disappearAnimationStartTime
    // Size: 0x4
    // Offset: 0x2C
    float disappearAnimationStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xE12DE0
    // private MaterialPropertyBlockColorSetter _rimLightColorSetter
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MaterialPropertyBlockColorSetter* rimLightColorSetter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockColorSetter*) == 0x8);
    // private MaterialPropertyBlockFloatAnimator _rimLightIntensityAnimator
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MaterialPropertyBlockFloatAnimator* rimLightIntensityAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockFloatAnimator*) == 0x8);
    // private MaterialPropertyBlockFloatAnimator _rimLightEdgeStartAnimator
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MaterialPropertyBlockFloatAnimator* rimLightEdgeStartAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockFloatAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xE12E38
    // private readonly SongSpeedData _songSpeedData
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::SongSpeedData* songSpeedData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongSpeedData*) == 0x8);
    // private UnityEngine.Timeline.ActivationTrack _characterActivationTrack
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Timeline::ActivationTrack* characterActivationTrack;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::ActivationTrack*) == 0x8);
    // private BTSCharacter _currentBtsCharacter
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::BTSCharacter* currentBtsCharacter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSCharacter*) == 0x8);
    // private System.Single _defaultSpawnCharacterDuration
    // Size: 0x4
    // Offset: 0x60
    float defaultSpawnCharacterDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: defaultSpawnCharacterDuration and: playableDirectorTimeBeforePause
    char __padding10[0x4] = {};
    // private System.Double _playableDirectorTimeBeforePause
    // Size: 0x8
    // Offset: 0x68
    double playableDirectorTimeBeforePause;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Single _animatorNormalizedTimeBeforePause
    // Size: 0x4
    // Offset: 0x70
    float animatorNormalizedTimeBeforePause;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BTSCharacterSpawnAnimationController
    BTSCharacterSpawnAnimationController(UnityEngine::Playables::PlayableDirector* spawnCharacterPlayableDirector_ = {}, GlobalNamespace::JumpReceiver* jumpReceiver_ = {}, float appearAnimationEndTime_ = {}, float disappearAnimationStartTime_ = {}, GlobalNamespace::MaterialPropertyBlockColorSetter* rimLightColorSetter_ = {}, GlobalNamespace::MaterialPropertyBlockFloatAnimator* rimLightIntensityAnimator_ = {}, GlobalNamespace::MaterialPropertyBlockFloatAnimator* rimLightEdgeStartAnimator_ = {}, GlobalNamespace::SongSpeedData* songSpeedData_ = {}, UnityEngine::Timeline::ActivationTrack* characterActivationTrack_ = {}, GlobalNamespace::BTSCharacter* currentBtsCharacter_ = {}, float defaultSpawnCharacterDuration_ = {}, double playableDirectorTimeBeforePause_ = {}, float animatorNormalizedTimeBeforePause_ = {}) noexcept : spawnCharacterPlayableDirector{spawnCharacterPlayableDirector_}, jumpReceiver{jumpReceiver_}, appearAnimationEndTime{appearAnimationEndTime_}, disappearAnimationStartTime{disappearAnimationStartTime_}, rimLightColorSetter{rimLightColorSetter_}, rimLightIntensityAnimator{rimLightIntensityAnimator_}, rimLightEdgeStartAnimator{rimLightEdgeStartAnimator_}, songSpeedData{songSpeedData_}, characterActivationTrack{characterActivationTrack_}, currentBtsCharacter{currentBtsCharacter_}, defaultSpawnCharacterDuration{defaultSpawnCharacterDuration_}, playableDirectorTimeBeforePause{playableDirectorTimeBeforePause_}, animatorNormalizedTimeBeforePause{animatorNormalizedTimeBeforePause_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCharacterActivationStreamName
    static constexpr const char* kCharacterActivationStreamName = "CharacterActivationTrack";
    // Get static field: static private System.String kCharacterActivationStreamName
    static ::Il2CppString* _get_kCharacterActivationStreamName();
    // Set static field: static private System.String kCharacterActivationStreamName
    static void _set_kCharacterActivationStreamName(::Il2CppString* value);
    // public System.Boolean get_isCharacterVisible()
    // Offset: 0x113A8B0
    bool get_isCharacterVisible();
    // public System.Single get_duration()
    // Offset: 0x113A8DC
    float get_duration();
    // private UnityEngine.Timeline.ActivationTrack get_characterActivationTrack()
    // Offset: 0x113A920
    UnityEngine::Timeline::ActivationTrack* get_characterActivationTrack();
    // public System.Void PlayAnimation()
    // Offset: 0x113AC70
    void PlayAnimation();
    // public System.Void EndEarlyAnimation()
    // Offset: 0x113AD44
    void EndEarlyAnimation();
    // public System.Void StopAnimation()
    // Offset: 0x113ADC8
    void StopAnimation();
    // public System.Void SetCharacter(BTSCharacter btsCharacter)
    // Offset: 0x113ADE4
    void SetCharacter(GlobalNamespace::BTSCharacter* btsCharacter);
    // public System.Void WillResumeAnimation()
    // Offset: 0x113AE80
    void WillResumeAnimation();
    // public System.Void ResumeAnimation()
    // Offset: 0x113AEEC
    void ResumeAnimation();
    // public System.Void PauseAnimation()
    // Offset: 0x113AF58
    void PauseAnimation();
    // public System.Void .ctor()
    // Offset: 0x113B000
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterSpawnAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterSpawnAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterSpawnAnimationController*, creationType>()));
    }
  }; // BTSCharacterSpawnAnimationController
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterSpawnAnimationController), 112 + sizeof(float)> __GlobalNamespace_BTSCharacterSpawnAnimationControllerSizeCheck;
  static_assert(sizeof(BTSCharacterSpawnAnimationController) == 0x74);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterSpawnAnimationController*, "", "BTSCharacterSpawnAnimationController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::get_isCharacterVisible
// Il2CppName: get_isCharacterVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::get_isCharacterVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "get_isCharacterVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::get_characterActivationTrack
// Il2CppName: get_characterActivationTrack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::ActivationTrack* (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::get_characterActivationTrack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "get_characterActivationTrack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::PlayAnimation
// Il2CppName: PlayAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::PlayAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "PlayAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::EndEarlyAnimation
// Il2CppName: EndEarlyAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::EndEarlyAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "EndEarlyAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::StopAnimation
// Il2CppName: StopAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::StopAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "StopAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::SetCharacter
// Il2CppName: SetCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)(GlobalNamespace::BTSCharacter*)>(&GlobalNamespace::BTSCharacterSpawnAnimationController::SetCharacter)> {
  static const MethodInfo* get() {
    static auto* btsCharacter = &::il2cpp_utils::GetClassFromName("", "BTSCharacter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "SetCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{btsCharacter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::WillResumeAnimation
// Il2CppName: WillResumeAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::WillResumeAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "WillResumeAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::ResumeAnimation
// Il2CppName: ResumeAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::ResumeAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "ResumeAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::PauseAnimation
// Il2CppName: PauseAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::PauseAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "PauseAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
