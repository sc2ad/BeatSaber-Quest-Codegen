// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InstantiateCallbackConditionCopyNonLazyBinder
#include "Zenject/InstantiateCallbackConditionCopyNonLazyBinder.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ArgConditionCopyNonLazyBinder
  class ArgConditionCopyNonLazyBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ArgConditionCopyNonLazyBinder*, "Zenject", "ArgConditionCopyNonLazyBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ArgConditionCopyNonLazyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ArgConditionCopyNonLazyBinder : public ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder {
    public:
    // public Zenject.InstantiateCallbackConditionCopyNonLazyBinder WithArguments(T param)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(T param) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArgConditionCopyNonLazyBinder::WithArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithArguments", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*, false>(this, ___generic__method, param);
    }
    // public Zenject.InstantiateCallbackConditionCopyNonLazyBinder WithArguments(TParam1 param1, TParam2 param2)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TParam1, class TParam2>
    ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArgConditionCopyNonLazyBinder::WithArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithArguments", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*, false>(this, ___generic__method, param1, param2);
    }
    // public Zenject.InstantiateCallbackConditionCopyNonLazyBinder WithArguments(TParam1 param1, TParam2 param2, TParam3 param3)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TParam1, class TParam2, class TParam3>
    ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2, TParam3 param3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArgConditionCopyNonLazyBinder::WithArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithArguments", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*, false>(this, ___generic__method, param1, param2, param3);
    }
    // public Zenject.InstantiateCallbackConditionCopyNonLazyBinder WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4>
    ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArgConditionCopyNonLazyBinder::WithArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithArguments", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*, false>(this, ___generic__method, param1, param2, param3, param4);
    }
    // public Zenject.InstantiateCallbackConditionCopyNonLazyBinder WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5>
    ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArgConditionCopyNonLazyBinder::WithArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithArguments", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4), ::il2cpp_utils::ExtractType(param5)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*, false>(this, ___generic__method, param1, param2, param3, param4, param5);
    }
    // public Zenject.InstantiateCallbackConditionCopyNonLazyBinder WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6>
    ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArgConditionCopyNonLazyBinder::WithArguments");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithArguments", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4), ::il2cpp_utils::ExtractType(param5), ::il2cpp_utils::ExtractType(param6)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*, false>(this, ___generic__method, param1, param2, param3, param4, param5, param6);
    }
    // public Zenject.InstantiateCallbackConditionCopyNonLazyBinder WithArguments(System.Object[] args)
    // Offset: 0x1732174
    ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(::ArrayW<::Il2CppObject*> args);
    // public Zenject.InstantiateCallbackConditionCopyNonLazyBinder WithArgumentsExplicit(System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArgs)
    // Offset: 0x17322A4
    ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArgumentsExplicit(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs);
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x173216C
    // Implemented from: Zenject.InstantiateCallbackConditionCopyNonLazyBinder
    // Base method: System.Void InstantiateCallbackConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void ConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void CopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void NonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArgConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgConditionCopyNonLazyBinder*, creationType>(bindInfo)));
    }
  }; // Zenject.ArgConditionCopyNonLazyBinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ArgConditionCopyNonLazyBinder::WithArguments
// Il2CppName: WithArguments
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ArgConditionCopyNonLazyBinder::WithArguments
// Il2CppName: WithArguments
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ArgConditionCopyNonLazyBinder::WithArguments
// Il2CppName: WithArguments
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ArgConditionCopyNonLazyBinder::WithArguments
// Il2CppName: WithArguments
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ArgConditionCopyNonLazyBinder::WithArguments
// Il2CppName: WithArguments
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ArgConditionCopyNonLazyBinder::WithArguments
// Il2CppName: WithArguments
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ArgConditionCopyNonLazyBinder::WithArguments
// Il2CppName: WithArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* (Zenject::ArgConditionCopyNonLazyBinder::*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ArgConditionCopyNonLazyBinder::WithArguments)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ArgConditionCopyNonLazyBinder*), "WithArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: Zenject::ArgConditionCopyNonLazyBinder::WithArgumentsExplicit
// Il2CppName: WithArgumentsExplicit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* (Zenject::ArgConditionCopyNonLazyBinder::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*)>(&Zenject::ArgConditionCopyNonLazyBinder::WithArgumentsExplicit)> {
  static const MethodInfo* get() {
    static auto* extraArgs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ArgConditionCopyNonLazyBinder*), "WithArgumentsExplicit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extraArgs});
  }
};
// Writing MetadataGetter for method: Zenject::ArgConditionCopyNonLazyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
