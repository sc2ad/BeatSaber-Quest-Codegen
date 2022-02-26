// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`8
#include "Zenject/IMemoryPool_8.hpp"
// Including type: Zenject.IFactory`8
#include "Zenject/IFactory_8.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: MemoryPool`8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
  class MemoryPool_8;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPool_8, "Zenject", "MemoryPool`8");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MemoryPool`8
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
  class MemoryPool_8 : public ::Zenject::MemoryPoolBase_1<TValue>/*, public ::Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>, public ::Zenject::IFactory_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*/ {
    public:
    // Creating interface conversion operator: operator ::Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>
    operator ::Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>() noexcept {
      return *reinterpret_cast<::Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*>(this);
    }
    // Creating interface conversion operator: operator ::Zenject::IFactory_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>
    operator ::Zenject::IFactory_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>() noexcept {
      return *reinterpret_cast<::Zenject::IFactory_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*>(this);
    }
    // public TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7)
    // Offset: 0xFFFFFFFF
    TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPool_8::Spawn");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4), ::il2cpp_utils::ExtractType(param5), ::il2cpp_utils::ExtractType(param6), ::il2cpp_utils::ExtractType(param7)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, param1, param2, param3, param4, param5, param6, param7);
    }
    // protected System.Void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TValue item)
    // Offset: 0xFFFFFFFF
    void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPool_8::Reinitialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Reinitialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4), ::il2cpp_utils::ExtractType(p5), ::il2cpp_utils::ExtractType(p6), ::il2cpp_utils::ExtractType(p7), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, p1, p2, p3, p4, p5, p6, p7, item);
    }
    // private TValue Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>.Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7)
    // Offset: 0xFFFFFFFF
    TValue Zenject_IFactory$TParam1_TParam2_TParam3_TParam4_TParam5_TParam6_TParam7_TValue$_Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPool_8::Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>.Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>.Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4), ::il2cpp_utils::ExtractType(p5), ::il2cpp_utils::ExtractType(p6), ::il2cpp_utils::ExtractType(p7)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, p1, p2, p3, p4, p5, p6, p7);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPool_8::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*, creationType>()));
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Object MemoryPoolBase_1::__zenCreate(System.Object[] P_0)
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPool_8::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: Zenject.InjectTypeInfo MemoryPoolBase_1::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MemoryPool_8::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.MemoryPool`8
  // Could not write size check! Type: Zenject.MemoryPool`8 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
