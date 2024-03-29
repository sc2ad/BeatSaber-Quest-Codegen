// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.KeyedFactoryBase`2
#include "Zenject/KeyedFactoryBase_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: KeyedFactory`5<TBase, TKey, TParam1, TParam2, TParam3>
  template<typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3>
  class KeyedFactory_5;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::KeyedFactory_5, "Zenject", "KeyedFactory`5");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.KeyedFactory`5
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3>
  class KeyedFactory_5 : public ::Zenject::KeyedFactoryBase_2<TBase, TKey> {
    public:
    // public TBase Create(TKey key, TParam1 param1, TParam2 param2, TParam3 param3)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TBase Create(TKey key, TParam1 param1, TParam2 param2, TParam3 param3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::KeyedFactory_5::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3)})));
      return ::il2cpp_utils::RunMethodRethrow<TBase, false>(this, ___internal__method, key, param1, param2, param3);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::KeyedFactory_5::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // protected override System.Collections.Generic.IEnumerable`1<System.Type> get_ProvidedTypes()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.KeyedFactoryBase`2
    // Base method: System.Collections.Generic.IEnumerable`1<System.Type> KeyedFactoryBase_2::get_ProvidedTypes()
    ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ProvidedTypes() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::KeyedFactory_5::get_ProvidedTypes");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ProvidedTypes", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.KeyedFactoryBase`2
    // Base method: System.Void KeyedFactoryBase_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::KeyedFactory_5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>*, creationType>()));
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.KeyedFactoryBase`2
    // Base method: Zenject.InjectTypeInfo KeyedFactoryBase_2::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::KeyedFactory_5::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<KeyedFactory_5<TBase, TKey, TParam1, TParam2, TParam3>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.KeyedFactory`5
  // Could not write size check! Type: Zenject.KeyedFactory`5 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
