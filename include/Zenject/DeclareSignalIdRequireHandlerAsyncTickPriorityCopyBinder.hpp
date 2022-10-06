// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder
#include "Zenject/DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalDeclarationBindInfo
  class SignalDeclarationBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder
  class DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*, "Zenject", "DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder : public ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder {
    public:
    // public Zenject.DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder WithId(System.Object identifier)
    // Offset: 0x1783504
    ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* WithId(::Il2CppObject* identifier);
    // public System.Void .ctor(Zenject.SignalDeclarationBindInfo signalBindInfo)
    // Offset: 0x17834F4
    // Implemented from: Zenject.DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder
    // Base method: System.Void DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::.ctor(Zenject.SignalDeclarationBindInfo signalBindInfo)
    // Base method: System.Void DeclareSignalAsyncTickPriorityCopyBinder::.ctor(Zenject.SignalDeclarationBindInfo signalBindInfo)
    // Base method: System.Void SignalTickPriorityCopyBinder::.ctor(Zenject.SignalDeclarationBindInfo signalBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder* New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*, creationType>(signalBindInfo)));
    }
  }; // Zenject.DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::WithId
// Il2CppName: WithId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* (Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::*)(::Il2CppObject*)>(&Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::WithId)> {
  static const MethodInfo* get() {
    static auto* identifier = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*), "WithId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{identifier});
  }
};
// Writing MetadataGetter for method: Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
