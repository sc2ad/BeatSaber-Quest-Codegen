// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SubContainerCreatorByNewGameObjectDynamicContext
#include "Zenject/SubContainerCreatorByNewGameObjectDynamicContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass2_0 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: GameObjectContext
  class GameObjectContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
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
  // Forward declaring type: SubContainerCreatorByNewGameObjectMethod`1<TParam1>
  template<typename TParam1>
  class SubContainerCreatorByNewGameObjectMethod_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByNewGameObjectMethod_1, "Zenject", "SubContainerCreatorByNewGameObjectMethod`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.SubContainerCreatorByNewGameObjectMethod`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1>
  class SubContainerCreatorByNewGameObjectMethod_1 : public ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
    public:
    // Nested type: ::Zenject::SubContainerCreatorByNewGameObjectMethod_1::$$c__DisplayClass2_0<TParam1>
    class $$c__DisplayClass2_0;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.SubContainerCreatorByNewGameObjectMethod`1/Zenject.<>c__DisplayClass2_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass2_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = SubContainerCreatorByNewGameObjectMethod_1<TParam1>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass2_0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public Zenject.SubContainerCreatorByNewGameObjectMethod`1<TParam1> <>4__this
      // Size: 0x8
      // Offset: 0x0
      ::Zenject::SubContainerCreatorByNewGameObjectMethod_1<TParam1>* $$4__this;
      // Field size check
      static_assert(sizeof(::Zenject::SubContainerCreatorByNewGameObjectMethod_1<TParam1>*) == 0x8);
      // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
      // Size: 0x8
      // Offset: 0x0
      ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.SubContainerCreatorByNewGameObjectMethod`1<TParam1> <>4__this
      [[deprecated("Use field access instead!")]] ::Zenject::SubContainerCreatorByNewGameObjectMethod_1<TParam1>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorByNewGameObjectMethod_1::$$c__DisplayClass2_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<::Zenject::SubContainerCreatorByNewGameObjectMethod_1<TParam1>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& dyn_args() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorByNewGameObjectMethod_1::$$c__DisplayClass2_0::dyn_args");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "args"))->offset;
        return *reinterpret_cast<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename SubContainerCreatorByNewGameObjectMethod_1<TParam1>::$$c__DisplayClass2_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorByNewGameObjectMethod_1::$$c__DisplayClass2_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename SubContainerCreatorByNewGameObjectMethod_1<TParam1>::$$c__DisplayClass2_0*, creationType>()));
      }
      // System.Void <AddInstallers>b__0(Zenject.DiContainer subContainer)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void $AddInstallers$b__0(::Zenject::DiContainer* subContainer) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorByNewGameObjectMethod_1::$$c__DisplayClass2_0::<AddInstallers>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<AddInstallers>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(subContainer)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, subContainer);
      }
      // static private System.Object __zenCreate(System.Object[] P_0)
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorByNewGameObjectMethod_1::$$c__DisplayClass2_0::__zenCreate");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename SubContainerCreatorByNewGameObjectMethod_1<TParam1>::$$c__DisplayClass2_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
      }
      // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorByNewGameObjectMethod_1::$$c__DisplayClass2_0::__zenCreateInjectTypeInfo");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename SubContainerCreatorByNewGameObjectMethod_1<TParam1>::$$c__DisplayClass2_0*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
    }; // Zenject.SubContainerCreatorByNewGameObjectMethod`1/Zenject.<>c__DisplayClass2_0
    // Could not write size check! Type: Zenject.SubContainerCreatorByNewGameObjectMethod`1/Zenject.<>c__DisplayClass2_0 is generic, or has no fields that are valid for size checks!
    public:
    // private readonly System.Action`2<Zenject.DiContainer,TParam1> _installerMethod
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_2<::Zenject::DiContainer*, TParam1>* installerMethod;
    // Field size check
    static_assert(sizeof(::System::Action_2<::Zenject::DiContainer*, TParam1>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Action`2<Zenject.DiContainer,TParam1> _installerMethod
    [[deprecated("Use field access instead!")]] ::System::Action_2<::Zenject::DiContainer*, TParam1>*& dyn__installerMethod() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorByNewGameObjectMethod_1::dyn__installerMethod");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_installerMethod"))->offset;
      return *reinterpret_cast<::System::Action_2<::Zenject::DiContainer*, TParam1>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.Action`2<Zenject.DiContainer,TParam1> installerMethod)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByNewGameObjectMethod_1<TParam1>* New_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Action_2<::Zenject::DiContainer*, TParam1>* installerMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorByNewGameObjectMethod_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByNewGameObjectMethod_1<TParam1>*, creationType>(container, gameObjectBindInfo, installerMethod)));
    }
    // protected override System.Void AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.SubContainerCreatorDynamicContext
    // Base method: System.Void SubContainerCreatorDynamicContext::AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerCreatorByNewGameObjectMethod_1::AddInstallers");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddInstallers", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractType(context)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, args, context);
    }
  }; // Zenject.SubContainerCreatorByNewGameObjectMethod`1
  // Could not write size check! Type: Zenject.SubContainerCreatorByNewGameObjectMethod`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
