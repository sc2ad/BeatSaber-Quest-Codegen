// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IFactory
#include "Zenject/IFactory.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: IFactory`8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
  class IFactory_8;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactory_8, "Zenject", "IFactory`8");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IFactory`8
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
  class IFactory_8/*, public ::Zenject::IFactory*/ {
    public:
    // Creating interface conversion operator: operator ::Zenject::IFactory
    operator ::Zenject::IFactory() noexcept {
      return *reinterpret_cast<::Zenject::IFactory*>(this);
    }
    // public TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IFactory_8::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4), ::il2cpp_utils::ExtractType(param5), ::il2cpp_utils::ExtractType(param6), ::il2cpp_utils::ExtractType(param7)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, param1, param2, param3, param4, param5, param6, param7);
    }
  }; // Zenject.IFactory`8
  // Could not write size check! Type: Zenject.IFactory`8 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
