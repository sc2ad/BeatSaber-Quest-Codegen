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
  // Forward declaring type: CountdownGameplayServerFiniteStateMachine
  class CountdownGameplayServerFiniteStateMachine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CountdownGameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CountdownGameplayServerFiniteStateMachine*, "", "CountdownGameplayServerFiniteStateMachine");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: CountdownGameplayServerFiniteStateMachine
  // [TokenAttribute] Offset: FFFFFFFF
  class CountdownGameplayServerFiniteStateMachine : public ::GlobalNamespace::GameplayServerFiniteStateMachine {
    public:
    // public System.Void .ctor(GameplayServerFiniteStateMachine/InitParams initParams)
    // Offset: 0x161AB44
    // Implemented from: GameplayServerFiniteStateMachine
    // Base method: System.Void GameplayServerFiniteStateMachine::.ctor(GameplayServerFiniteStateMachine/InitParams initParams)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CountdownGameplayServerFiniteStateMachine* New_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine::InitParams initParams) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CountdownGameplayServerFiniteStateMachine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CountdownGameplayServerFiniteStateMachine*, creationType>(initParams)));
    }
  }; // CountdownGameplayServerFiniteStateMachine
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CountdownGameplayServerFiniteStateMachine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
