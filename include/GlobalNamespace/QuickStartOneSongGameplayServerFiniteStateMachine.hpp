// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameplayServerFiniteStateMachine
#include "GlobalNamespace/GameplayServerFiniteStateMachine.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: QuickStartOneSongGameplayServerFiniteStateMachine
  class QuickStartOneSongGameplayServerFiniteStateMachine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine*, "", "QuickStartOneSongGameplayServerFiniteStateMachine");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: QuickStartOneSongGameplayServerFiniteStateMachine
  // [TokenAttribute] Offset: FFFFFFFF
  class QuickStartOneSongGameplayServerFiniteStateMachine : public ::GlobalNamespace::GameplayServerFiniteStateMachine {
    public:
    // public System.Void .ctor(GameplayServerFiniteStateMachine/InitParams initParams)
    // Offset: 0x1A03D40
    // Implemented from: GameplayServerFiniteStateMachine
    // Base method: System.Void GameplayServerFiniteStateMachine::.ctor(GameplayServerFiniteStateMachine/InitParams initParams)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickStartOneSongGameplayServerFiniteStateMachine* New_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine::InitParams initParams) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickStartOneSongGameplayServerFiniteStateMachine*, creationType>(initParams)));
    }
  }; // QuickStartOneSongGameplayServerFiniteStateMachine
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
