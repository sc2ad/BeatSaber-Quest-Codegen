// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IPrefabProvider
  class IPrefabProvider;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SubContainerCreatorByNewPrefabWithParams
  class SubContainerCreatorByNewPrefabWithParams;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewPrefabWithParams);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewPrefabWithParams*, "Zenject", "SubContainerCreatorByNewPrefabWithParams");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorByNewPrefabWithParams
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SubContainerCreatorByNewPrefabWithParams : public ::Il2CppObject/*, public ::Zenject::ISubContainerCreator*/ {
    public:
    // Nested type: ::Zenject::SubContainerCreatorByNewPrefabWithParams::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    public:
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private readonly Zenject.IPrefabProvider _prefabProvider
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::IPrefabProvider* prefabProvider;
    // Field size check
    static_assert(sizeof(::Zenject::IPrefabProvider*) == 0x8);
    // private readonly System.Type _installerType
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* installerType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Size: 0x8
    // Offset: 0x28
    ::Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // Field size check
    static_assert(sizeof(::Zenject::GameObjectCreationParameters*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::ISubContainerCreator
    operator ::Zenject::ISubContainerCreator() noexcept {
      return *reinterpret_cast<::Zenject::ISubContainerCreator*>(this);
    }
    // Creating interface conversion operator: i_ISubContainerCreator
    inline ::Zenject::ISubContainerCreator* i_ISubContainerCreator() noexcept {
      return reinterpret_cast<::Zenject::ISubContainerCreator*>(this);
    }
    // Get instance field reference: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private readonly Zenject.IPrefabProvider _prefabProvider
    [[deprecated("Use field access instead!")]] ::Zenject::IPrefabProvider*& dyn__prefabProvider();
    // Get instance field reference: private readonly System.Type _installerType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__installerType();
    // Get instance field reference: private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    [[deprecated("Use field access instead!")]] ::Zenject::GameObjectCreationParameters*& dyn__gameObjectBindInfo();
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x1DC142C
    ::Zenject::DiContainer* get_Container();
    // public System.Void .ctor(System.Type installerType, Zenject.DiContainer container, Zenject.IPrefabProvider prefabProvider, Zenject.GameObjectCreationParameters gameObjectBindInfo)
    // Offset: 0x1DC13E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByNewPrefabWithParams* New_ctor(::System::Type* installerType, ::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorByNewPrefabWithParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByNewPrefabWithParams*, creationType>(installerType, container, prefabProvider, gameObjectBindInfo)));
    }
    // private Zenject.DiContainer CreateTempContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args)
    // Offset: 0x1DC1434
    ::Zenject::DiContainer* CreateTempContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args);
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext parentContext)
    // Offset: 0x1DC1890
    ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* parentContext);
  }; // Zenject.SubContainerCreatorByNewPrefabWithParams
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorByNewPrefabWithParams), 40 + sizeof(::Zenject::GameObjectCreationParameters*)> __Zenject_SubContainerCreatorByNewPrefabWithParamsSizeCheck;
  static_assert(sizeof(SubContainerCreatorByNewPrefabWithParams) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabWithParams::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::SubContainerCreatorByNewPrefabWithParams::*)()>(&Zenject::SubContainerCreatorByNewPrefabWithParams::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByNewPrefabWithParams*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabWithParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabWithParams::CreateTempContainer
// Il2CppName: CreateTempContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::SubContainerCreatorByNewPrefabWithParams::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(&Zenject::SubContainerCreatorByNewPrefabWithParams::CreateTempContainer)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByNewPrefabWithParams*), "CreateTempContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabWithParams::CreateSubContainer
// Il2CppName: CreateSubContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::SubContainerCreatorByNewPrefabWithParams::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*)>(&Zenject::SubContainerCreatorByNewPrefabWithParams::CreateSubContainer)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* parentContext = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByNewPrefabWithParams*), "CreateSubContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, parentContext});
  }
};
