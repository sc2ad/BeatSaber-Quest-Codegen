// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.StaticMemoryPool`6
#include "Zenject/StaticMemoryPool_6.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`5<TParam1, TParam2, TParam3, TParam4, TParam5>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  class IPoolable_5;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PoolableStaticMemoryPool`6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
  class PoolableStaticMemoryPool_6;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableStaticMemoryPool_6, "Zenject", "PoolableStaticMemoryPool`6");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolableStaticMemoryPool`6
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
  class PoolableStaticMemoryPool_6 : public ::Zenject::StaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue> {
    public:
    // static private System.Void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TValue value)
    // Offset: 0xFFFFFFFF
    static void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolableStaticMemoryPool_6::OnSpawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get(), "OnSpawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4), ::il2cpp_utils::ExtractType(p5), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, p1, p2, p3, p4, p5, value);
    }
    // static private System.Void OnDespawned(TValue value)
    // Offset: 0xFFFFFFFF
    static void OnDespawned(TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolableStaticMemoryPool_6::OnDespawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get(), "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolableStaticMemoryPool_6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*, creationType>()));
    }
  }; // Zenject.PoolableStaticMemoryPool`6
  // Could not write size check! Type: Zenject.PoolableStaticMemoryPool`6 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
