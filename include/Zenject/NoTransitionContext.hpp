// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: NoTransitionInstaller
  class NoTransitionInstaller;
  // Forward declaring type: DiContainer
  class DiContainer;
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
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: NoTransitionContext
  class NoTransitionContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::NoTransitionContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NoTransitionContext*, "Zenject", "NoTransitionContext");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.NoTransitionContext
  // [TokenAttribute] Offset: FFFFFFFF
  class NoTransitionContext : public ::UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Zenject.NoTransitionInstaller _noScenesTransitionInstaller
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::NoTransitionInstaller* noScenesTransitionInstaller;
    // Field size check
    static_assert(sizeof(::Zenject::NoTransitionInstaller*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Zenject.NoTransitionInstaller _noScenesTransitionInstaller
    ::Zenject::NoTransitionInstaller*& dyn__noScenesTransitionInstaller();
    // public System.Action`1<Zenject.DiContainer> get_installMethod()
    // Offset: 0x1BDB328
    ::System::Action_1<::Zenject::DiContainer*>* get_installMethod();
    // public System.Action`1<Zenject.DiContainer> get_postInstallMethod()
    // Offset: 0x1BDB3A8
    ::System::Action_1<::Zenject::DiContainer*>* get_postInstallMethod();
    // protected System.Void Awake()
    // Offset: 0x1BDB428
    void Awake();
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1BDB4B0
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x1BDB4A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoTransitionContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::NoTransitionContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoTransitionContext*, creationType>()));
    }
  }; // Zenject.NoTransitionContext
  #pragma pack(pop)
  static check_size<sizeof(NoTransitionContext), 24 + sizeof(::Zenject::NoTransitionInstaller*)> __Zenject_NoTransitionContextSizeCheck;
  static_assert(sizeof(NoTransitionContext) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::NoTransitionContext::get_installMethod
// Il2CppName: get_installMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::Zenject::DiContainer*>* (Zenject::NoTransitionContext::*)()>(&Zenject::NoTransitionContext::get_installMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::NoTransitionContext*), "get_installMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::NoTransitionContext::get_postInstallMethod
// Il2CppName: get_postInstallMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::Zenject::DiContainer*>* (Zenject::NoTransitionContext::*)()>(&Zenject::NoTransitionContext::get_postInstallMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::NoTransitionContext*), "get_postInstallMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::NoTransitionContext::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::NoTransitionContext::*)()>(&Zenject::NoTransitionContext::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::NoTransitionContext*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::NoTransitionContext::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::NoTransitionContext::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::NoTransitionContext*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::NoTransitionContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
