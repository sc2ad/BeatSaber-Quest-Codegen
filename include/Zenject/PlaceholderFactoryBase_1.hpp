// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IPlaceholderFactory
#include "Zenject/IPlaceholderFactory.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PlaceholderFactoryBase`1<TValue>
  template<typename TValue>
  class PlaceholderFactoryBase_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PlaceholderFactoryBase_1, "Zenject", "PlaceholderFactoryBase`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PlaceholderFactoryBase`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TValue>
  class PlaceholderFactoryBase_1 : public ::Il2CppObject/*, public ::Zenject::IPlaceholderFactory*/ {
    public:
    public:
    // private Zenject.IProvider _provider
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::IProvider* provider;
    // Field size check
    static_assert(sizeof(::Zenject::IProvider*) == 0x8);
    // private Zenject.InjectContext _injectContext
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::InjectContext* injectContext;
    // Field size check
    static_assert(sizeof(::Zenject::InjectContext*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IPlaceholderFactory
    operator ::Zenject::IPlaceholderFactory() noexcept {
      return *reinterpret_cast<::Zenject::IPlaceholderFactory*>(this);
    }
    // Creating interface conversion operator: i_IPlaceholderFactory
    inline ::Zenject::IPlaceholderFactory* i_IPlaceholderFactory() noexcept {
      return reinterpret_cast<::Zenject::IPlaceholderFactory*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private Zenject.IProvider _provider
    [[deprecated("Use field access instead!")]] ::Zenject::IProvider*& dyn__provider() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PlaceholderFactoryBase_1::dyn__provider");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_provider"))->offset;
      return *reinterpret_cast<::Zenject::IProvider**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Zenject.InjectContext _injectContext
    [[deprecated("Use field access instead!")]] ::Zenject::InjectContext*& dyn__injectContext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PlaceholderFactoryBase_1::dyn__injectContext");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_injectContext"))->offset;
      return *reinterpret_cast<::Zenject::InjectContext**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected System.Collections.Generic.IEnumerable`1<System.Type> get_ParamTypes()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ParamTypes() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PlaceholderFactoryBase_1::get_ParamTypes");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ParamTypes", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaceholderFactoryBase_1<TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PlaceholderFactoryBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaceholderFactoryBase_1<TValue>*, creationType>()));
    }
    // private System.Void Construct(Zenject.IProvider provider, Zenject.InjectContext injectContext)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Construct(::Zenject::IProvider* provider, ::Zenject::InjectContext* injectContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PlaceholderFactoryBase_1::Construct");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Construct", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider), ::il2cpp_utils::ExtractType(injectContext)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, provider, injectContext);
    }
    // protected TValue CreateInternal(System.Collections.Generic.List`1<Zenject.TypeValuePair> extraArgs)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue CreateInternal(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PlaceholderFactoryBase_1::CreateInternal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateInternal", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(extraArgs)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, extraArgs);
    }
    // public System.Void Validate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Validate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PlaceholderFactoryBase_1::Validate");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Validate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // static private System.Void __zenInjectMethod0(System.Object P_0, System.Object[] P_1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void __zenInjectMethod0(::Il2CppObject* P_0, ::ArrayW<::Il2CppObject*> P_1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PlaceholderFactoryBase_1::__zenInjectMethod0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PlaceholderFactoryBase_1<TValue>*>::get(), "__zenInjectMethod0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0), ::il2cpp_utils::ExtractType(P_1)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0, P_1);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PlaceholderFactoryBase_1::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PlaceholderFactoryBase_1<TValue>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.PlaceholderFactoryBase`1
  // Could not write size check! Type: Zenject.PlaceholderFactoryBase`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
