// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IFactory`5
#include "Zenject/IFactory_5.hpp"
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
  // Autogenerated type: Zenject.PrefabResourceFactory`4
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename P1, typename P2, typename P3, typename T>
  class PrefabResourceFactory_4 : public ::Il2CppObject/*, public Zenject::IFactory_5<::Il2CppString*, P1, P2, P3, T>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [InjectAttribute] Offset: 0xEC3ABC
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    public:
    // Creating interface conversion operator: operator Zenject::IFactory_5<::Il2CppString*, P1, P2, P3, T>
    operator Zenject::IFactory_5<::Il2CppString*, P1, P2, P3, T>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_5<::Il2CppString*, P1, P2, P3, T>*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return container;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.DiContainer _container
    Zenject::DiContainer*& dyn__container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabResourceFactory_4::dyn__container");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_container"))->offset;
      return *reinterpret_cast<Zenject::DiContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabResourceFactory_4::get_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(___instance_arg, ___internal__method);
    }
    // public T Create(System.String prefabResourceName, P1 param, P2 param2, P3 param3)
    // Offset: 0xFFFFFFFF
    T Create(::Il2CppString* prefabResourceName, P1 param, P2 param2, P3 param3) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabResourceFactory_4::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefabResourceName), ::il2cpp_utils::ExtractType(param), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method, prefabResourceName, param, param2, param3);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabResourceFactory_4<P1, P2, P3, T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabResourceFactory_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabResourceFactory_4<P1, P2, P3, T>*, creationType>()));
    }
  }; // Zenject.PrefabResourceFactory`4
  // Could not write size check! Type: Zenject.PrefabResourceFactory`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabResourceFactory_4, "Zenject", "PrefabResourceFactory`4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
