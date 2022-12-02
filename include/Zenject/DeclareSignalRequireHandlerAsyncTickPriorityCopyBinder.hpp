// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DeclareSignalAsyncTickPriorityCopyBinder
#include "Zenject/DeclareSignalAsyncTickPriorityCopyBinder.hpp"
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
  // Forward declaring type: DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder
  class DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*, "Zenject", "DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder : public ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder {
    public:
    // public Zenject.DeclareSignalAsyncTickPriorityCopyBinder RequireSubscriber()
    // Offset: 0x17BD304
    ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* RequireSubscriber();
    // public Zenject.DeclareSignalAsyncTickPriorityCopyBinder OptionalSubscriber()
    // Offset: 0x17BD324
    ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* OptionalSubscriber();
    // public Zenject.DeclareSignalAsyncTickPriorityCopyBinder OptionalSubscriberWithWarning()
    // Offset: 0x17BD340
    ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* OptionalSubscriberWithWarning();
    // public System.Void .ctor(Zenject.SignalDeclarationBindInfo signalBindInfo)
    // Offset: 0x17BD2E0
    // Implemented from: Zenject.DeclareSignalAsyncTickPriorityCopyBinder
    // Base method: System.Void DeclareSignalAsyncTickPriorityCopyBinder::.ctor(Zenject.SignalDeclarationBindInfo signalBindInfo)
    // Base method: System.Void SignalTickPriorityCopyBinder::.ctor(Zenject.SignalDeclarationBindInfo signalBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*, creationType>(signalBindInfo)));
    }
  }; // Zenject.DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::RequireSubscriber
// Il2CppName: RequireSubscriber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* (Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::*)()>(&Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::RequireSubscriber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*), "RequireSubscriber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::OptionalSubscriber
// Il2CppName: OptionalSubscriber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* (Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::*)()>(&Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::OptionalSubscriber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*), "OptionalSubscriber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::OptionalSubscriberWithWarning
// Il2CppName: OptionalSubscriberWithWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* (Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::*)()>(&Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::OptionalSubscriberWithWarning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*), "OptionalSubscriberWithWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
