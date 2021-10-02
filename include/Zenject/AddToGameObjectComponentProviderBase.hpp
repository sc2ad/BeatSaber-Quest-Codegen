// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.AddToGameObjectComponentProviderBase
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class AddToGameObjectComponentProviderBase : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // Nested type: Zenject::AddToGameObjectComponentProviderBase::$$c__DisplayClass17_0
    class $$c__DisplayClass17_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly System.Type _componentType
    // Size: 0x8
    // Offset: 0x10
    System::Type* componentType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArguments
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArguments;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
    // private readonly System.Object _concreteIdentifier
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* concreteIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Action`2<Zenject.InjectContext,System.Object> _instantiateCallback
    // Size: 0x8
    // Offset: 0x30
    System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback;
    // Field size check
    static_assert(sizeof(System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // Get instance field reference: private readonly System.Type _componentType
    System::Type*& dyn__componentType();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArguments
    System::Collections::Generic::List_1<Zenject::TypeValuePair>*& dyn__extraArguments();
    // Get instance field reference: private readonly System.Object _concreteIdentifier
    ::Il2CppObject*& dyn__concreteIdentifier();
    // Get instance field reference: private readonly System.Action`2<Zenject.InjectContext,System.Object> _instantiateCallback
    System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>*& dyn__instantiateCallback();
    // public System.Boolean get_IsCached()
    // Offset: 0x14F3470
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x14F3478
    bool get_TypeVariesBasedOnMemberType();
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x14F3480
    Zenject::DiContainer* get_Container();
    // protected System.Type get_ComponentType()
    // Offset: 0x14F3488
    System::Type* get_ComponentType();
    // protected System.Boolean get_ShouldToggleActive()
    // Offset: 0xFFFFFFFF
    bool get_ShouldToggleActive();
    // public System.Void .ctor(Zenject.DiContainer container, System.Type componentType, System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArguments, System.Object concreteIdentifier, System.Action`2<Zenject.InjectContext,System.Object> instantiateCallback)
    // Offset: 0x14F32C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddToGameObjectComponentProviderBase* New_ctor(Zenject::DiContainer* container, System::Type* componentType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArguments, ::Il2CppObject* concreteIdentifier, System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::AddToGameObjectComponentProviderBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddToGameObjectComponentProviderBase*, creationType>(container, componentType, extraArguments, concreteIdentifier, instantiateCallback)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x14F3490
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x14F3498
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, ByRef<System::Action*> injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
    // protected UnityEngine.GameObject GetGameObject(Zenject.InjectContext context)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* GetGameObject(Zenject::InjectContext* context);
  }; // Zenject.AddToGameObjectComponentProviderBase
  #pragma pack(pop)
  static check_size<sizeof(AddToGameObjectComponentProviderBase), 48 + sizeof(System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>*)> __Zenject_AddToGameObjectComponentProviderBaseSizeCheck;
  static_assert(sizeof(AddToGameObjectComponentProviderBase) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::AddToGameObjectComponentProviderBase*, "Zenject", "AddToGameObjectComponentProviderBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::AddToGameObjectComponentProviderBase::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::AddToGameObjectComponentProviderBase::*)()>(&Zenject::AddToGameObjectComponentProviderBase::get_IsCached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToGameObjectComponentProviderBase*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::AddToGameObjectComponentProviderBase::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::AddToGameObjectComponentProviderBase::*)()>(&Zenject::AddToGameObjectComponentProviderBase::get_TypeVariesBasedOnMemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToGameObjectComponentProviderBase*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::AddToGameObjectComponentProviderBase::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::AddToGameObjectComponentProviderBase::*)()>(&Zenject::AddToGameObjectComponentProviderBase::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToGameObjectComponentProviderBase*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::AddToGameObjectComponentProviderBase::get_ComponentType
// Il2CppName: get_ComponentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::AddToGameObjectComponentProviderBase::*)()>(&Zenject::AddToGameObjectComponentProviderBase::get_ComponentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToGameObjectComponentProviderBase*), "get_ComponentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::AddToGameObjectComponentProviderBase::get_ShouldToggleActive
// Il2CppName: get_ShouldToggleActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::AddToGameObjectComponentProviderBase::*)()>(&Zenject::AddToGameObjectComponentProviderBase::get_ShouldToggleActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToGameObjectComponentProviderBase*), "get_ShouldToggleActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::AddToGameObjectComponentProviderBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::AddToGameObjectComponentProviderBase::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::AddToGameObjectComponentProviderBase::*)(Zenject::InjectContext*)>(&Zenject::AddToGameObjectComponentProviderBase::GetInstanceType)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToGameObjectComponentProviderBase*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::AddToGameObjectComponentProviderBase::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AddToGameObjectComponentProviderBase::*)(Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*, ByRef<System::Action*>, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::AddToGameObjectComponentProviderBase::GetAllInstancesWithInjectSplit)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToGameObjectComponentProviderBase*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction, buffer});
  }
};
// Writing MetadataGetter for method: Zenject::AddToGameObjectComponentProviderBase::GetGameObject
// Il2CppName: GetGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (Zenject::AddToGameObjectComponentProviderBase::*)(Zenject::InjectContext*)>(&Zenject::AddToGameObjectComponentProviderBase::GetGameObject)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToGameObjectComponentProviderBase*), "GetGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
