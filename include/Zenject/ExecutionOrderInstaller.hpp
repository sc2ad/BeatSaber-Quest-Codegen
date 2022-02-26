// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Installer`2
#include "Zenject/Installer_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
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
  // Forward declaring type: ExecutionOrderInstaller
  class ExecutionOrderInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ExecutionOrderInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ExecutionOrderInstaller*, "Zenject", "ExecutionOrderInstaller");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.ExecutionOrderInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class ExecutionOrderInstaller : public ::Zenject::Installer_2<::System::Collections::Generic::List_1<::System::Type*>*, ::Zenject::ExecutionOrderInstaller*> {
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
    // private System.Collections.Generic.List`1<System.Type> _typeOrder
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::System::Type*>* typeOrder;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Type*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::Zenject::DiContainer*
    constexpr operator ::Zenject::DiContainer*() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<System.Type> _typeOrder
    ::System::Collections::Generic::List_1<::System::Type*>*& dyn__typeOrder();
    // public System.Void .ctor(System.Collections.Generic.List`1<System.Type> typeOrder)
    // Offset: 0x1D2A1E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecutionOrderInstaller* New_ctor(::System::Collections::Generic::List_1<::System::Type*>* typeOrder) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ExecutionOrderInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecutionOrderInstaller*, creationType>(typeOrder)));
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1D2A360
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // public override System.Void InstallBindings()
    // Offset: 0x1D2A24C
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1D2A424
    // Implemented from: Zenject.Installer`2
    // Base method: Zenject.InjectTypeInfo Installer_2::__zenCreateInjectTypeInfo()
    // Base method: Zenject.InjectTypeInfo InstallerBase::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.ExecutionOrderInstaller
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ExecutionOrderInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ExecutionOrderInstaller::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ExecutionOrderInstaller::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ExecutionOrderInstaller*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ExecutionOrderInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ExecutionOrderInstaller::*)()>(&Zenject::ExecutionOrderInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ExecutionOrderInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ExecutionOrderInstaller::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ExecutionOrderInstaller::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ExecutionOrderInstaller*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
