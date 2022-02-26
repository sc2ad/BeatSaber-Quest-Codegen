// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FromBinderGeneric`1
#include "Zenject/FromBinderGeneric_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass5_0 because it is already included!
  // Forward declaring type: FromBinderNonGeneric
  class FromBinderNonGeneric;
  // Forward declaring type: ConventionSelectTypesBinder
  class ConventionSelectTypesBinder;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindStatement
  class BindStatement;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ConcreteBinderGeneric_1, "Zenject", "ConcreteBinderGeneric`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.ConcreteBinderGeneric`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TContract>
  class ConcreteBinderGeneric_1 : public ::Zenject::FromBinderGeneric_1<TContract> {
    public:
    // Nested type: ::Zenject::ConcreteBinderGeneric_1::$$c__DisplayClass5_0<TContract>
    class $$c__DisplayClass5_0;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.ConcreteBinderGeneric`1/Zenject.<>c__DisplayClass5_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass5_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = ConcreteBinderGeneric_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass5_0";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      #ifdef CODEGEN_FIELD_ACCESSIBILITY
      CODEGEN_FIELD_ACCESSIBILITY:
      #else
      protected:
      #endif
      #endif
      // public System.Type concreteType
      // Size: 0x8
      // Offset: 0x0
      ::System::Type* concreteType;
      // Field size check
      static_assert(sizeof(::System::Type*) == 0x8);
      public:
      // Creating conversion operator: operator ::System::Type*
      constexpr operator ::System::Type*() const noexcept {
        return concreteType;
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Type concreteType
      ::System::Type*& dyn_concreteType() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::$$c__DisplayClass5_0::dyn_concreteType");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "concreteType"))->offset;
        return *reinterpret_cast<::System::Type**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // System.Boolean <To>b__1(System.Type contractType)
      // Offset: 0xFFFFFFFF
      bool $To$b__1(::System::Type* contractType) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::$$c__DisplayClass5_0::<To>b__1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<To>b__1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(contractType)})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, contractType);
      }
      // static private System.Object __zenCreate(System.Object[] P_0)
      // Offset: 0xFFFFFFFF
      static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::$$c__DisplayClass5_0::__zenCreate");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename ConcreteBinderGeneric_1<TContract>::$$c__DisplayClass5_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
      }
      // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
      // Offset: 0xFFFFFFFF
      static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::$$c__DisplayClass5_0::__zenCreateInjectTypeInfo");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename ConcreteBinderGeneric_1<TContract>::$$c__DisplayClass5_0*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ConcreteBinderGeneric_1<TContract>::$$c__DisplayClass5_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::$$c__DisplayClass5_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ConcreteBinderGeneric_1<TContract>::$$c__DisplayClass5_0*, creationType>()));
      }
    }; // Zenject.ConcreteBinderGeneric`1/Zenject.<>c__DisplayClass5_0
    // Could not write size check! Type: Zenject.ConcreteBinderGeneric`1/Zenject.<>c__DisplayClass5_0 is generic, or has no fields that are valid for size checks!
    // public Zenject.FromBinderGeneric`1<TContract> ToSelf()
    // Offset: 0xFFFFFFFF
    ::Zenject::FromBinderGeneric_1<TContract>* ToSelf() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::ToSelf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToSelf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::FromBinderGeneric_1<TContract>*, false>(this, ___internal__method);
    }
    // public Zenject.FromBinderGeneric`1<TConcrete> To()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    ::Zenject::FromBinderGeneric_1<TConcrete>* To() {
      static_assert(std::is_convertible_v<TConcrete, TContract>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::To");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "To", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::FromBinderGeneric_1<TConcrete>*, false>(this, ___generic__method);
    }
    // public Zenject.FromBinderNonGeneric To(params System.Type[] concreteTypes)
    // Offset: 0xFFFFFFFF
    ::Zenject::FromBinderNonGeneric* To(::ArrayW<::System::Type*> concreteTypes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::To");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "To", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(concreteTypes)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal__method, concreteTypes);
    }
    // public Zenject.FromBinderNonGeneric To(System.Collections.Generic.IEnumerable`1<System.Type> concreteTypes)
    // Offset: 0xFFFFFFFF
    ::Zenject::FromBinderNonGeneric* To(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::To");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "To", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(concreteTypes)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal__method, concreteTypes);
    }
    // public Zenject.FromBinderNonGeneric To(System.Action`1<Zenject.ConventionSelectTypesBinder> generator)
    // Offset: 0xFFFFFFFF
    ::Zenject::FromBinderNonGeneric* To(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>* generator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::To");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "To", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(generator)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal__method, generator);
    }
    // private Zenject.IProvider <ToSelf>b__1_0(Zenject.DiContainer container, System.Type type)
    // Offset: 0xFFFFFFFF
    ::Zenject::IProvider* $ToSelf$b__1_0(::Zenject::DiContainer* container, ::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::<ToSelf>b__1_0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ToSelf>b__1_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container), ::il2cpp_utils::ExtractType(type)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal__method, container, type);
    }
    // private System.Boolean <To>b__5_0(System.Type concreteType)
    // Offset: 0xFFFFFFFF
    bool $To$b__5_0(::System::Type* concreteType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::<To>b__5_0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<To>b__5_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(concreteType)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, concreteType);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FromBinderGeneric`1
    // Base method: System.Void FromBinderGeneric_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Base method: System.Void FromBinder::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConcreteBinderGeneric_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConcreteBinderGeneric_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConcreteBinderGeneric_1<TContract>*, creationType>(bindContainer, bindInfo, bindStatement)));
    }
  }; // Zenject.ConcreteBinderGeneric`1
  // Could not write size check! Type: Zenject.ConcreteBinderGeneric`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
