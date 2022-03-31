// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BTSStarTextEffectController
#include "GlobalNamespace/BTSStarTextEffectController.hpp"
// Including type: Zenject.MonoMemoryPool`4
#include "Zenject/MonoMemoryPool_4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEffectController::Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEffectController::Pool*, "", "BTSStarTextEffectController/Pool");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BTSStarTextEffectController/Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSStarTextEffectController::Pool : public ::Zenject::MonoMemoryPool_4<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float, ::GlobalNamespace::BTSStarTextEffectController*> {
    public:
    // protected System.Void Reinitialize(UnityEngine.Sprite sprite, UnityEngine.Transform transform, System.Single desiredAnimationLength, BTSStarTextEffectController starTextEffectController)
    // Offset: 0x135CBC0
    void Reinitialize(::UnityEngine::Sprite* sprite, ::UnityEngine::Transform* transform, float desiredAnimationLength, ::GlobalNamespace::BTSStarTextEffectController* starTextEffectController);
    // public System.Void .ctor()
    // Offset: 0x135CBD8
    // Implemented from: Zenject.MonoMemoryPool`4
    // Base method: System.Void MonoMemoryPool_4::.ctor()
    // Base method: System.Void MemoryPool_4::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSStarTextEffectController::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BTSStarTextEffectController::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSStarTextEffectController::Pool*, creationType>()));
    }
  }; // BTSStarTextEffectController/Pool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectController::Pool::Reinitialize
// Il2CppName: Reinitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEffectController::Pool::*)(::UnityEngine::Sprite*, ::UnityEngine::Transform*, float, ::GlobalNamespace::BTSStarTextEffectController*)>(&GlobalNamespace::BTSStarTextEffectController::Pool::Reinitialize)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* desiredAnimationLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* starTextEffectController = &::il2cpp_utils::GetClassFromName("", "BTSStarTextEffectController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEffectController::Pool*), "Reinitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite, transform, desiredAnimationLength, starTextEffectController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectController::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
