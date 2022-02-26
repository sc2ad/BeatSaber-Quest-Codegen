// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.StaticMemoryPool`1
#include "Zenject/StaticMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable
  class IPoolable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PoolableStaticMemoryPool`1<TValue>
  template<typename TValue>
  class PoolableStaticMemoryPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableStaticMemoryPool_1, "Zenject", "PoolableStaticMemoryPool`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolableStaticMemoryPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TValue>
  class PoolableStaticMemoryPool_1 : public ::Zenject::StaticMemoryPool_1<TValue> {
    public:
    // static private System.Void OnSpawned(TValue value)
    // Offset: 0xFFFFFFFF
    static void OnSpawned(TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolableStaticMemoryPool_1::OnSpawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_1<TValue>*>::get(), "OnSpawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, value);
    }
    // static private System.Void OnDespawned(TValue value)
    // Offset: 0xFFFFFFFF
    static void OnDespawned(TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolableStaticMemoryPool_1::OnDespawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_1<TValue>*>::get(), "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableStaticMemoryPool_1<TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolableStaticMemoryPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableStaticMemoryPool_1<TValue>*, creationType>()));
    }
  }; // Zenject.PoolableStaticMemoryPool`1
  // Could not write size check! Type: Zenject.PoolableStaticMemoryPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
