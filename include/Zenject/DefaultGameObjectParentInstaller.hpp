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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: DefaultGameObjectParentInstaller
  class DefaultGameObjectParentInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::DefaultGameObjectParentInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DefaultGameObjectParentInstaller*, "Zenject", "DefaultGameObjectParentInstaller");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.DefaultGameObjectParentInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultGameObjectParentInstaller : public ::Zenject::Installer_2<::StringW, ::Zenject::DefaultGameObjectParentInstaller*> {
    public:
    // Nested type: ::Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer
    class DefaultParentObjectDestroyer;
    public:
    // private readonly System.String _name
    // Size: 0x8
    // Offset: 0x18
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::Zenject::DiContainer*
    constexpr operator ::Zenject::DiContainer*() const noexcept = delete;
    // Get instance field reference: private readonly System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // public System.Void .ctor(System.String name)
    // Offset: 0x17BD49C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultGameObjectParentInstaller* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::DefaultGameObjectParentInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultGameObjectParentInstaller*, creationType>(name)));
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x17BD634
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // public override System.Void InstallBindings()
    // Offset: 0x17BD500
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x17BD6DC
    // Implemented from: Zenject.Installer`2
    // Base method: Zenject.InjectTypeInfo Installer_2::__zenCreateInjectTypeInfo()
    // Base method: Zenject.InjectTypeInfo InstallerBase::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.DefaultGameObjectParentInstaller
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DefaultGameObjectParentInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::DefaultGameObjectParentInstaller::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::DefaultGameObjectParentInstaller::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DefaultGameObjectParentInstaller*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::DefaultGameObjectParentInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DefaultGameObjectParentInstaller::*)()>(&Zenject::DefaultGameObjectParentInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DefaultGameObjectParentInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DefaultGameObjectParentInstaller::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::DefaultGameObjectParentInstaller::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DefaultGameObjectParentInstaller*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
