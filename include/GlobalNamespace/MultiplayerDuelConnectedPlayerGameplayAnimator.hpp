// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerGameplayAnimator
#include "GlobalNamespace/MultiplayerGameplayAnimator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScaleAnimator
  class ScaleAnimator;
  // Forward declaring type: MultiplayerConnectedPlayerLevelFailController
  class MultiplayerConnectedPlayerLevelFailController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerDuelConnectedPlayerGameplayAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerDuelConnectedPlayerGameplayAnimator : public GlobalNamespace::MultiplayerGameplayAnimator {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [SpaceAttribute] Offset: 0xF08958
    // private ScaleAnimator _avatarScaleAnimator
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::ScaleAnimator* avatarScaleAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScaleAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xF08990
    // private readonly MultiplayerConnectedPlayerLevelFailController _failController
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* failController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*) == 0x8);
    public:
    // Get instance field reference: private ScaleAnimator _avatarScaleAnimator
    GlobalNamespace::ScaleAnimator*& dyn__avatarScaleAnimator();
    // Get instance field reference: private readonly MultiplayerConnectedPlayerLevelFailController _failController
    GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*& dyn__failController();
    // private System.Void TransitionIntoFailedState()
    // Offset: 0x1218AC8
    void TransitionIntoFailedState();
    // private System.Void HandlePlayerDidFail()
    // Offset: 0x1218E18
    void HandlePlayerDidFail();
    // public System.Void .ctor()
    // Offset: 0x1218E1C
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerDuelConnectedPlayerGameplayAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerDuelConnectedPlayerGameplayAnimator*, creationType>()));
    }
    // protected override System.Void OnDestroy()
    // Offset: 0x12189F0
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::OnDestroy()
    void OnDestroy();
    // protected override System.Void AnimateNewLeaderSelected(System.Boolean isLeading)
    // Offset: 0x1218C18
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::AnimateNewLeaderSelected(System.Boolean isLeading)
    void AnimateNewLeaderSelected(bool isLeading);
    // protected override System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x1218D08
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::HandleStateChanged(MultiplayerController/State state)
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
  }; // MultiplayerDuelConnectedPlayerGameplayAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerDuelConnectedPlayerGameplayAnimator), 112 + sizeof(GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*)> __GlobalNamespace_MultiplayerDuelConnectedPlayerGameplayAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerDuelConnectedPlayerGameplayAnimator) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*, "", "MultiplayerDuelConnectedPlayerGameplayAnimator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::TransitionIntoFailedState
// Il2CppName: TransitionIntoFailedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::*)()>(&GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::TransitionIntoFailedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*), "TransitionIntoFailedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::HandlePlayerDidFail
// Il2CppName: HandlePlayerDidFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::*)()>(&GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::HandlePlayerDidFail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*), "HandlePlayerDidFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::*)()>(&GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::AnimateNewLeaderSelected
// Il2CppName: AnimateNewLeaderSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::*)(bool)>(&GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::AnimateNewLeaderSelected)> {
  static const MethodInfo* get() {
    static auto* isLeading = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*), "AnimateNewLeaderSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isLeading});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::*)(GlobalNamespace::MultiplayerController::State)>(&GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "MultiplayerController/State")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
