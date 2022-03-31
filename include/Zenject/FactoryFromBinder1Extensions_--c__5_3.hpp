// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinder1Extensions
#include "Zenject/FactoryFromBinder1Extensions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`2<TParam1, TParam2>
  template<typename TParam1, typename TParam2>
  class IPoolable_2;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`3<TParam1, TParam2, TValue>
  template<typename TParam1, typename TParam2, typename TValue>
  class MemoryPool_3;
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder1Extensions::$$c__5_3, "Zenject", "FactoryFromBinder1Extensions/<>c__5`3");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder1Extensions/Zenject.<>c__5`3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TContract, typename TMemoryPool>
  class FactoryFromBinder1Extensions::$$c__5_3 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly Zenject.FactoryFromBinder1Extensions/Zenject.<>c__5`3<TParam1,TContract,TMemoryPool> <>9
    static ::Zenject::FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>* _get_$$9() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder1Extensions::$$c__5_3::_get_$$9");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::Zenject::FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>*>::get(), "<>9")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly Zenject.FactoryFromBinder1Extensions/Zenject.<>c__5`3<TParam1,TContract,TMemoryPool> <>9
    static void _set_$$9(::Zenject::FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder1Extensions::$$c__5_3::_set_$$9");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>*>::get(), "<>9", value)));
    }
    // Autogenerated static field getter
    // Get static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__5_0
    static ::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* _get_$$9__5_0() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder1Extensions::$$c__5_3::_get_$$9__5_0");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>*>::get(), "<>9__5_0")));
    }
    // Autogenerated static field setter
    // Set static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__5_0
    static void _set_$$9__5_0(::System::Action_1<::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder1Extensions::$$c__5_3::_set_$$9__5_0");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>*>::get(), "<>9__5_0", value)));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder1Extensions::$$c__5_3::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // System.Void <FromPoolableMemoryPool>b__5_0(Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract> x)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $FromPoolableMemoryPool$b__5_0(::Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder1Extensions::$$c__5_3::<FromPoolableMemoryPool>b__5_0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromPoolableMemoryPool>b__5_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, x);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder1Extensions::$$c__5_3::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder1Extensions::$$c__5_3::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder1Extensions::$$c__5_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>*, creationType>()));
    }
  }; // Zenject.FactoryFromBinder1Extensions/Zenject.<>c__5`3
  // Could not write size check! Type: Zenject.FactoryFromBinder1Extensions/Zenject.<>c__5`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
