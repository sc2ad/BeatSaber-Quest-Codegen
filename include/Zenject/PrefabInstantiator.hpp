// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IPrefabInstantiator
#include "Zenject/IPrefabInstantiator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPrefabProvider
  class IPrefabProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PrefabInstantiator
  class PrefabInstantiator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::PrefabInstantiator);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabInstantiator*, "Zenject", "PrefabInstantiator");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabInstantiator
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class PrefabInstantiator : public ::Il2CppObject/*, public ::Zenject::IPrefabInstantiator*/ {
    public:
    // Nested type: ::Zenject::PrefabInstantiator::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    public:
    // private readonly Zenject.IPrefabProvider _prefabProvider
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::IPrefabProvider* prefabProvider;
    // Field size check
    static_assert(sizeof(::Zenject::IPrefabProvider*) == 0x8);
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArguments
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArguments;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*) == 0x8);
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Size: 0x8
    // Offset: 0x28
    ::Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // Field size check
    static_assert(sizeof(::Zenject::GameObjectCreationParameters*) == 0x8);
    // private readonly System.Type _argumentTarget
    // Size: 0x8
    // Offset: 0x30
    ::System::Type* argumentTarget;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.Type> _instantiateCallbackTypes
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::System::Type*>* instantiateCallbackTypes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Type*>*) == 0x8);
    // private readonly System.Action`2<Zenject.InjectContext,System.Object> _instantiateCallback
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback;
    // Field size check
    static_assert(sizeof(::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IPrefabInstantiator
    operator ::Zenject::IPrefabInstantiator() noexcept {
      return *reinterpret_cast<::Zenject::IPrefabInstantiator*>(this);
    }
    // Creating interface conversion operator: i_IPrefabInstantiator
    inline ::Zenject::IPrefabInstantiator* i_IPrefabInstantiator() noexcept {
      return reinterpret_cast<::Zenject::IPrefabInstantiator*>(this);
    }
    // Get instance field reference: private readonly Zenject.IPrefabProvider _prefabProvider
    [[deprecated("Use field access instead!")]] ::Zenject::IPrefabProvider*& dyn__prefabProvider();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArguments
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& dyn__extraArguments();
    // Get instance field reference: private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    [[deprecated("Use field access instead!")]] ::Zenject::GameObjectCreationParameters*& dyn__gameObjectBindInfo();
    // Get instance field reference: private readonly System.Type _argumentTarget
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__argumentTarget();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.Type> _instantiateCallbackTypes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Type*>*& dyn__instantiateCallbackTypes();
    // Get instance field reference: private readonly System.Action`2<Zenject.InjectContext,System.Object> _instantiateCallback
    [[deprecated("Use field access instead!")]] ::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>*& dyn__instantiateCallback();
    // public Zenject.GameObjectCreationParameters get_GameObjectCreationParameters()
    // Offset: 0x1C456B0
    ::Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();
    // public System.Type get_ArgumentTarget()
    // Offset: 0x1C456B8
    ::System::Type* get_ArgumentTarget();
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> get_ExtraArguments()
    // Offset: 0x1C456C0
    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* get_ExtraArguments();
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.Type argumentTarget, System.Collections.Generic.IEnumerable`1<System.Type> instantiateCallbackTypes, System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArguments, Zenject.IPrefabProvider prefabProvider, System.Action`2<Zenject.InjectContext,System.Object> instantiateCallback)
    // Offset: 0x1C447FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabInstantiator* New_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Type* argumentTarget, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* instantiateCallbackTypes, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::Zenject::IPrefabProvider* prefabProvider, ::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PrefabInstantiator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabInstantiator*, creationType>(container, gameObjectBindInfo, argumentTarget, instantiateCallbackTypes, extraArguments, prefabProvider, instantiateCallback)));
    }
    // public UnityEngine.Object GetPrefab()
    // Offset: 0x1C456C8
    ::UnityEngine::Object* GetPrefab();
    // public UnityEngine.GameObject Instantiate(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction)
    // Offset: 0x1C45778
    ::UnityEngine::GameObject* Instantiate(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction);
  }; // Zenject.PrefabInstantiator
  #pragma pack(pop)
  static check_size<sizeof(PrefabInstantiator), 64 + sizeof(::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>*)> __Zenject_PrefabInstantiatorSizeCheck;
  static_assert(sizeof(PrefabInstantiator) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PrefabInstantiator::get_GameObjectCreationParameters
// Il2CppName: get_GameObjectCreationParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::GameObjectCreationParameters* (Zenject::PrefabInstantiator::*)()>(&Zenject::PrefabInstantiator::get_GameObjectCreationParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiator*), "get_GameObjectCreationParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiator::get_ArgumentTarget
// Il2CppName: get_ArgumentTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Zenject::PrefabInstantiator::*)()>(&Zenject::PrefabInstantiator::get_ArgumentTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiator*), "get_ArgumentTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiator::get_ExtraArguments
// Il2CppName: get_ExtraArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* (Zenject::PrefabInstantiator::*)()>(&Zenject::PrefabInstantiator::get_ExtraArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiator*), "get_ExtraArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::PrefabInstantiator::GetPrefab
// Il2CppName: GetPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (Zenject::PrefabInstantiator::*)()>(&Zenject::PrefabInstantiator::GetPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiator*), "GetPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiator::Instantiate
// Il2CppName: Instantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Zenject::PrefabInstantiator::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>)>(&Zenject::PrefabInstantiator::Instantiate)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiator*), "Instantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction});
  }
};
