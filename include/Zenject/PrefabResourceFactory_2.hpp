// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IFactory`3
#include "Zenject/IFactory_3.hpp"
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
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PrefabResourceFactory`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename P1, typename T>
  class PrefabResourceFactory_2 : public ::Il2CppObject/*, public Zenject::IFactory_3<::Il2CppString*, P1, T>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [InjectAttribute] Offset: 0xEC3A9C
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    public:
    // Creating interface conversion operator: operator Zenject::IFactory_3<::Il2CppString*, P1, T>
    operator Zenject::IFactory_3<::Il2CppString*, P1, T>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_3<::Il2CppString*, P1, T>*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return container;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.DiContainer _container
    Zenject::DiContainer*& dyn__container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabResourceFactory_2::dyn__container");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_container"))->offset;
      return *reinterpret_cast<Zenject::DiContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabResourceFactory_2::get_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(___instance_arg, ___internal__method);
    }
    // public T Create(System.String prefabResourceName, P1 param)
    // Offset: 0xFFFFFFFF
    T Create(::Il2CppString* prefabResourceName, P1 param) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabResourceFactory_2::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefabResourceName), ::il2cpp_utils::ExtractType(param)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method, prefabResourceName, param);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabResourceFactory_2<P1, T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabResourceFactory_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabResourceFactory_2<P1, T>*, creationType>()));
    }
  }; // Zenject.PrefabResourceFactory`2
  // Could not write size check! Type: Zenject.PrefabResourceFactory`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabResourceFactory_2, "Zenject", "PrefabResourceFactory`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
