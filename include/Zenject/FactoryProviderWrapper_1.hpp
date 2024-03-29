// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IFactory`1
#include "Zenject/IFactory_1.hpp"
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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: FactoryProviderWrapper`1<TContract>
  template<typename TContract>
  class FactoryProviderWrapper_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryProviderWrapper_1, "Zenject", "FactoryProviderWrapper`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryProviderWrapper`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TContract>
  class FactoryProviderWrapper_1 : public ::Il2CppObject/*, public ::Zenject::IFactory_1<TContract>*/ {
    public:
    public:
    // private readonly Zenject.IProvider _provider
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::IProvider* provider;
    // Field size check
    static_assert(sizeof(::Zenject::IProvider*) == 0x8);
    // private readonly Zenject.InjectContext _injectContext
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::InjectContext* injectContext;
    // Field size check
    static_assert(sizeof(::Zenject::InjectContext*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IFactory_1<TContract>
    operator ::Zenject::IFactory_1<TContract>() noexcept {
      return *reinterpret_cast<::Zenject::IFactory_1<TContract>*>(this);
    }
    // Creating interface conversion operator: i_IFactory_1_TContract
    inline ::Zenject::IFactory_1<TContract>* i_IFactory_1_TContract() noexcept {
      return reinterpret_cast<::Zenject::IFactory_1<TContract>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.IProvider _provider
    [[deprecated("Use field access instead!")]] ::Zenject::IProvider*& dyn__provider() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryProviderWrapper_1::dyn__provider");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_provider"))->offset;
      return *reinterpret_cast<::Zenject::IProvider**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.InjectContext _injectContext
    [[deprecated("Use field access instead!")]] ::Zenject::InjectContext*& dyn__injectContext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryProviderWrapper_1::dyn__injectContext");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_injectContext"))->offset;
      return *reinterpret_cast<::Zenject::InjectContext**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(Zenject.IProvider provider, Zenject.InjectContext injectContext)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryProviderWrapper_1<TContract>* New_ctor(::Zenject::IProvider* provider, ::Zenject::InjectContext* injectContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryProviderWrapper_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryProviderWrapper_1<TContract>*, creationType>(provider, injectContext)));
    }
    // public TContract Create()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TContract Create() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryProviderWrapper_1::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TContract, false>(this, ___internal__method);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryProviderWrapper_1::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryProviderWrapper_1<TContract>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryProviderWrapper_1::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryProviderWrapper_1<TContract>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.FactoryProviderWrapper`1
  // Could not write size check! Type: Zenject.FactoryProviderWrapper`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
