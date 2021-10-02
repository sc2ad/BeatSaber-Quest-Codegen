// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactorySubContainerBinderBase`1
#include "Zenject/FactorySubContainerBinderBase_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass4_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass8_0 because it is already included!
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: IInstaller
  class IInstaller;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactorySubContainerBinderWithParams`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TContract>
  class FactorySubContainerBinderWithParams_1 : public Zenject::FactorySubContainerBinderBase_1<TContract> {
    public:
    // Nested type: Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0<TContract>
    class $$c__DisplayClass4_0;
    // Nested type: Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0<TContract>
    class $$c__DisplayClass8_0;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinderWithParams`1/Zenject.<>c__DisplayClass4_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass4_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinderWithParams_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass4_0";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public Zenject.FactorySubContainerBinderWithParams`1<TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinderWithParams_1<TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinderWithParams_1<TContract>*) == 0x8);
      // public System.Type installerType
      // Size: 0x8
      // Offset: 0x0
      System::Type* installerType;
      // Field size check
      static_assert(sizeof(System::Type*) == 0x8);
      // public UnityEngine.Object prefab
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::Object* prefab;
      // Field size check
      static_assert(sizeof(UnityEngine::Object*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactorySubContainerBinderWithParams`1<TContract> <>4__this
      Zenject::FactorySubContainerBinderWithParams_1<TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<Zenject::FactorySubContainerBinderWithParams_1<TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Type installerType
      System::Type*& dyn_installerType() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::dyn_installerType");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "installerType"))->offset;
        return *reinterpret_cast<System::Type**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public UnityEngine.Object prefab
      UnityEngine::Object*& dyn_prefab() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::dyn_prefab");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "prefab"))->offset;
        return *reinterpret_cast<UnityEngine::Object**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.GameObjectCreationParameters gameObjectInfo
      Zenject::GameObjectCreationParameters*& dyn_gameObjectInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::dyn_gameObjectInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "gameObjectInfo"))->offset;
        return *reinterpret_cast<Zenject::GameObjectCreationParameters**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Zenject.IProvider <ByNewContextPrefab>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByNewContextPrefab$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::<ByNewContextPrefab>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewContextPrefab>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(___instance_arg, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass4_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass4_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinderWithParams`1/Zenject.<>c__DisplayClass4_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinderWithParams`1/Zenject.<>c__DisplayClass4_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinderWithParams`1/Zenject.<>c__DisplayClass8_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass8_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinderWithParams_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass8_0";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public Zenject.FactorySubContainerBinderWithParams`1<TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinderWithParams_1<TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinderWithParams_1<TContract>*) == 0x8);
      // public System.Type installerType
      // Size: 0x8
      // Offset: 0x0
      System::Type* installerType;
      // Field size check
      static_assert(sizeof(System::Type*) == 0x8);
      // public System.String resourcePath
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* resourcePath;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactorySubContainerBinderWithParams`1<TContract> <>4__this
      Zenject::FactorySubContainerBinderWithParams_1<TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<Zenject::FactorySubContainerBinderWithParams_1<TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Type installerType
      System::Type*& dyn_installerType() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::dyn_installerType");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "installerType"))->offset;
        return *reinterpret_cast<System::Type**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.String resourcePath
      ::Il2CppString*& dyn_resourcePath() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::dyn_resourcePath");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "resourcePath"))->offset;
        return *reinterpret_cast<::Il2CppString**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.GameObjectCreationParameters gameObjectInfo
      Zenject::GameObjectCreationParameters*& dyn_gameObjectInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::dyn_gameObjectInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "gameObjectInfo"))->offset;
        return *reinterpret_cast<Zenject::GameObjectCreationParameters**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Zenject.IProvider <ByNewContextPrefabResource>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByNewContextPrefabResource$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::<ByNewContextPrefabResource>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewContextPrefabResource>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(___instance_arg, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass8_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass8_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinderWithParams`1/Zenject.<>c__DisplayClass8_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinderWithParams`1/Zenject.<>c__DisplayClass8_0 is generic, or has no fields that are valid for size checks!
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefab(System.Type installerType, UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(System::Type* installerType, UnityEngine::Object* prefab) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewPrefab");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefab", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(installerType), ::il2cpp_utils::ExtractType(prefab)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(___instance_arg, ___internal__method, installerType, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefab(UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(UnityEngine::Object* prefab) {
      static_assert(std::is_base_of_v<Zenject::IInstaller, std::remove_pointer_t<TInstaller>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewPrefab");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefab", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefab)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(___instance_arg, ___generic__method, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefab(UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(UnityEngine::Object* prefab) {
      static_assert(std::is_base_of_v<Zenject::IInstaller, std::remove_pointer_t<TInstaller>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewContextPrefab");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewContextPrefab", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefab)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(___instance_arg, ___generic__method, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefab(System.Type installerType, UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(System::Type* installerType, UnityEngine::Object* prefab) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewContextPrefab");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewContextPrefab", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(installerType), ::il2cpp_utils::ExtractType(prefab)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(___instance_arg, ___internal__method, installerType, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResource(System.String resourcePath)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(::Il2CppString* resourcePath) {
      static_assert(std::is_base_of_v<Zenject::IInstaller, std::remove_pointer_t<TInstaller>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewPrefabResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefabResource", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(resourcePath)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(___instance_arg, ___generic__method, resourcePath);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResource(System.Type installerType, System.String resourcePath)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(System::Type* installerType, ::Il2CppString* resourcePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewPrefabResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefabResource", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(installerType), ::il2cpp_utils::ExtractType(resourcePath)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(___instance_arg, ___internal__method, installerType, resourcePath);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefabResource(System.String resourcePath)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(::Il2CppString* resourcePath) {
      static_assert(std::is_base_of_v<Zenject::IInstaller, std::remove_pointer_t<TInstaller>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewContextPrefabResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewContextPrefabResource", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(resourcePath)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(___instance_arg, ___generic__method, resourcePath);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefabResource(System.Type installerType, System.String resourcePath)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(System::Type* installerType, ::Il2CppString* resourcePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewContextPrefabResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewContextPrefabResource", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(installerType), ::il2cpp_utils::ExtractType(resourcePath)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(___instance_arg, ___internal__method, installerType, resourcePath);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactorySubContainerBinderBase`1
    // Base method: System.Void FactorySubContainerBinderBase_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactorySubContainerBinderWithParams_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, ::Il2CppObject* subIdentifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactorySubContainerBinderWithParams_1<TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo, subIdentifier)));
    }
  }; // Zenject.FactorySubContainerBinderWithParams`1
  // Could not write size check! Type: Zenject.FactorySubContainerBinderWithParams`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactorySubContainerBinderWithParams_1, "Zenject", "FactorySubContainerBinderWithParams`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
