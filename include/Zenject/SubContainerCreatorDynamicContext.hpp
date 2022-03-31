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
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: GameObjectContext
  class GameObjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SubContainerCreatorDynamicContext
  class SubContainerCreatorDynamicContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SubContainerCreatorDynamicContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorDynamicContext*, "Zenject", "SubContainerCreatorDynamicContext");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorDynamicContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SubContainerCreatorDynamicContext : public ::Il2CppObject/*, public ::Zenject::ISubContainerCreator*/ {
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
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::ISubContainerCreator
    operator ::Zenject::ISubContainerCreator() noexcept {
      return *reinterpret_cast<::Zenject::ISubContainerCreator*>(this);
    }
    // Creating conversion operator: operator ::Zenject::DiContainer*
    constexpr operator ::Zenject::DiContainer*() const noexcept {
      return container;
    }
    // Get instance field reference: private readonly Zenject.DiContainer _container
    ::Zenject::DiContainer*& dyn__container();
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x1CE8DA0
    ::Zenject::DiContainer* get_Container();
    // public System.Void .ctor(Zenject.DiContainer container)
    // Offset: 0x1CE764C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorDynamicContext* New_ctor(::Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorDynamicContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorDynamicContext*, creationType>(container)));
    }
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext parentContext)
    // Offset: 0x1CE8DA8
    ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* parentContext);
    // protected System.Void AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context);
    // protected UnityEngine.GameObject CreateGameObject(out System.Boolean shouldMakeActive)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::GameObject* CreateGameObject(ByRef<bool> shouldMakeActive);
  }; // Zenject.SubContainerCreatorDynamicContext
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorDynamicContext), 16 + sizeof(::Zenject::DiContainer*)> __Zenject_SubContainerCreatorDynamicContextSizeCheck;
  static_assert(sizeof(SubContainerCreatorDynamicContext) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerCreatorDynamicContext::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::SubContainerCreatorDynamicContext::*)()>(&Zenject::SubContainerCreatorDynamicContext::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorDynamicContext*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorDynamicContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorDynamicContext::CreateSubContainer
// Il2CppName: CreateSubContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::SubContainerCreatorDynamicContext::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*)>(&Zenject::SubContainerCreatorDynamicContext::CreateSubContainer)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* parentContext = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorDynamicContext*), "CreateSubContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, parentContext});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorDynamicContext::AddInstallers
// Il2CppName: AddInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorDynamicContext::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::GameObjectContext*)>(&Zenject::SubContainerCreatorDynamicContext::AddInstallers)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "GameObjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorDynamicContext*), "AddInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, context});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorDynamicContext::CreateGameObject
// Il2CppName: CreateGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Zenject::SubContainerCreatorDynamicContext::*)(ByRef<bool>)>(&Zenject::SubContainerCreatorDynamicContext::CreateGameObject)> {
  static const MethodInfo* get() {
    static auto* shouldMakeActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorDynamicContext*), "CreateGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldMakeActive});
  }
};
