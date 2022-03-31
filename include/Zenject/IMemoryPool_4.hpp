// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IDespawnableMemoryPool`1
#include "Zenject/IDespawnableMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: IMemoryPool`4<TParam1, TParam2, TParam3, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TValue>
  class IMemoryPool_4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IMemoryPool_4, "Zenject", "IMemoryPool`4");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IMemoryPool`4
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TValue>
  class IMemoryPool_4/*, public ::Zenject::IDespawnableMemoryPool_1<TValue>*/ {
    public:
    // Creating interface conversion operator: operator ::Zenject::IDespawnableMemoryPool_1<TValue>
    operator ::Zenject::IDespawnableMemoryPool_1<TValue>() noexcept {
      return *reinterpret_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(this);
    }
    // public TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IMemoryPool_4::Spawn");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, param1, param2, param3);
    }
  }; // Zenject.IMemoryPool`4
  // Could not write size check! Type: Zenject.IMemoryPool`4 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
