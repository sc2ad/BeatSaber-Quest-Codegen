// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.BindSignalToBinder`1
#include "Zenject/BindSignalToBinder_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SignalBindingBindInfo
  class SignalBindingBindInfo;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindSignalIdToBinder`1<TSignal>
  template<typename TSignal>
  class BindSignalIdToBinder_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalIdToBinder_1, "Zenject", "BindSignalIdToBinder`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.BindSignalIdToBinder`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TSignal>
  class BindSignalIdToBinder_1 : public ::Zenject::BindSignalToBinder_1<TSignal> {
    public:
    // public Zenject.BindSignalToBinder`1<TSignal> WithId(System.Object identifier)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::BindSignalToBinder_1<TSignal>* WithId(::Il2CppObject* identifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalIdToBinder_1::WithId");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithId", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(identifier)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::BindSignalToBinder_1<TSignal>*, false>(this, ___internal__method, identifier);
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.SignalBindingBindInfo signalBindInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.BindSignalToBinder`1
    // Base method: System.Void BindSignalToBinder_1::.ctor(Zenject.DiContainer container, Zenject.SignalBindingBindInfo signalBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BindSignalIdToBinder_1<TSignal>* New_ctor(::Zenject::DiContainer* container, ::Zenject::SignalBindingBindInfo* signalBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalIdToBinder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BindSignalIdToBinder_1<TSignal>*, creationType>(container, signalBindInfo)));
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.BindSignalToBinder`1
    // Base method: System.Object BindSignalToBinder_1::__zenCreate(System.Object[] P_0)
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalIdToBinder_1::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BindSignalIdToBinder_1<TSignal>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.BindSignalToBinder`1
    // Base method: Zenject.InjectTypeInfo BindSignalToBinder_1::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalIdToBinder_1::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BindSignalIdToBinder_1<TSignal>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.BindSignalIdToBinder`1
  // Could not write size check! Type: Zenject.BindSignalIdToBinder`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
