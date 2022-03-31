// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PlaceholderFactoryBindingFinalizer`1<TContract>
  template<typename TContract>
  class PlaceholderFactoryBindingFinalizer_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PlaceholderFactoryBindingFinalizer_1, "Zenject", "PlaceholderFactoryBindingFinalizer`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PlaceholderFactoryBindingFinalizer`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TContract>
  class PlaceholderFactoryBindingFinalizer_1 : public ::Zenject::ProviderBindingFinalizer {
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
    // private readonly Zenject.FactoryBindInfo _factoryBindInfo
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::FactoryBindInfo* factoryBindInfo;
    // Field size check
    static_assert(sizeof(::Zenject::FactoryBindInfo*) == 0x8);
    public:
    // Deleting conversion operator: operator ::Zenject::BindInfo*
    constexpr operator ::Zenject::BindInfo*() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.FactoryBindInfo _factoryBindInfo
    ::Zenject::FactoryBindInfo*& dyn__factoryBindInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PlaceholderFactoryBindingFinalizer_1::dyn__factoryBindInfo");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_factoryBindInfo"))->offset;
      return *reinterpret_cast<::Zenject::FactoryBindInfo**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaceholderFactoryBindingFinalizer_1<TContract>* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PlaceholderFactoryBindingFinalizer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaceholderFactoryBindingFinalizer_1<TContract>*, creationType>(bindInfo, factoryBindInfo)));
    }
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(::Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PlaceholderFactoryBindingFinalizer_1::OnFinalizeBinding");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnFinalizeBinding", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, container);
    }
  }; // Zenject.PlaceholderFactoryBindingFinalizer`1
  // Could not write size check! Type: Zenject.PlaceholderFactoryBindingFinalizer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
