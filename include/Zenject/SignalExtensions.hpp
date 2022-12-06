// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder
  class DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder;
  // Forward declaring type: BindSignalIdToBinder`1<TSignal>
  template<typename TSignal>
  class BindSignalIdToBinder_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalExtensions
  class SignalExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SignalExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalExtensions*, "Zenject", "SignalExtensions");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SignalExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class SignalExtensions : public ::Il2CppObject {
    public:
    // static public Zenject.SignalDeclarationBindInfo CreateDefaultSignalDeclarationBindInfo(Zenject.DiContainer container, System.Type signalType)
    // Offset: 0x1DB3E1C
    static ::Zenject::SignalDeclarationBindInfo* CreateDefaultSignalDeclarationBindInfo(::Zenject::DiContainer* container, ::System::Type* signalType);
    // static public Zenject.DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder DeclareSignal(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TSignal>
    static ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder* DeclareSignal(::Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SignalExtensions::DeclareSignal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "SignalExtensions", "DeclareSignal", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSignal>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSignal>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, container);
    }
    // static public Zenject.BindSignalIdToBinder`1<TSignal> BindSignal(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TSignal>
    static ::Zenject::BindSignalIdToBinder_1<TSignal>* BindSignal(::Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SignalExtensions::BindSignal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "SignalExtensions", "BindSignal", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSignal>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSignal>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::BindSignalIdToBinder_1<TSignal>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, container);
    }
  }; // Zenject.SignalExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SignalExtensions::CreateDefaultSignalDeclarationBindInfo
// Il2CppName: CreateDefaultSignalDeclarationBindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalDeclarationBindInfo* (*)(::Zenject::DiContainer*, ::System::Type*)>(&Zenject::SignalExtensions::CreateDefaultSignalDeclarationBindInfo)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* signalType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalExtensions*), "CreateDefaultSignalDeclarationBindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, signalType});
  }
};
// Writing MetadataGetter for method: Zenject::SignalExtensions::DeclareSignal
// Il2CppName: DeclareSignal
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::SignalExtensions::BindSignal
// Il2CppName: BindSignal
// Cannot write MetadataGetter for generic methods!
