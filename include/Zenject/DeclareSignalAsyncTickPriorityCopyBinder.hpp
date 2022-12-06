// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SignalTickPriorityCopyBinder
#include "Zenject/SignalTickPriorityCopyBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: SignalCopyBinder because it is already included!
  // Forward declaring type: SignalDeclarationBindInfo
  class SignalDeclarationBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: DeclareSignalAsyncTickPriorityCopyBinder
  class DeclareSignalAsyncTickPriorityCopyBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::DeclareSignalAsyncTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*, "Zenject", "DeclareSignalAsyncTickPriorityCopyBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DeclareSignalAsyncTickPriorityCopyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class DeclareSignalAsyncTickPriorityCopyBinder : public ::Zenject::SignalTickPriorityCopyBinder {
    public:
    // public Zenject.SignalTickPriorityCopyBinder RunAsync()
    // Offset: 0x17BDE0C
    ::Zenject::SignalTickPriorityCopyBinder* RunAsync();
    // public Zenject.SignalCopyBinder RunSync()
    // Offset: 0x17BDE2C
    ::Zenject::SignalCopyBinder* RunSync();
    // public System.Void .ctor(Zenject.SignalDeclarationBindInfo signalBindInfo)
    // Offset: 0x17BDE04
    // Implemented from: Zenject.SignalTickPriorityCopyBinder
    // Base method: System.Void SignalTickPriorityCopyBinder::.ctor(Zenject.SignalDeclarationBindInfo signalBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeclareSignalAsyncTickPriorityCopyBinder* New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeclareSignalAsyncTickPriorityCopyBinder*, creationType>(signalBindInfo)));
    }
  }; // Zenject.DeclareSignalAsyncTickPriorityCopyBinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunAsync
// Il2CppName: RunAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalTickPriorityCopyBinder* (Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)()>(&Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DeclareSignalAsyncTickPriorityCopyBinder*), "RunAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunSync
// Il2CppName: RunSync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalCopyBinder* (Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)()>(&Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunSync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DeclareSignalAsyncTickPriorityCopyBinder*), "RunSync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DeclareSignalAsyncTickPriorityCopyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
