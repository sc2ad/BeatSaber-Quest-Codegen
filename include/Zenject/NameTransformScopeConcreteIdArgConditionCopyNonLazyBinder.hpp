// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/TransformScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // public Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder WithGameObjectName(System.String gameObjectName)
    // Offset: 0x1BDB30C
    ::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder* WithGameObjectName(::StringW gameObjectName);
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.GameObjectCreationParameters gameObjectInfo)
    // Offset: 0x1BDB304
    // Implemented from: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder
    // Base method: System.Void TransformScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo, Zenject.GameObjectCreationParameters gameObjectInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, creationType>(bindInfo, gameObjectInfo)));
    }
  }; // Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::WithGameObjectName
// Il2CppName: WithGameObjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::StringW)>(&Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::WithGameObjectName)> {
  static const MethodInfo* get() {
    static auto* gameObjectName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*), "WithGameObjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObjectName});
  }
};
// Writing MetadataGetter for method: Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
