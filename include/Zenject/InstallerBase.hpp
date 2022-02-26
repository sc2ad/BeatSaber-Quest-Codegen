// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IInstaller
#include "Zenject/IInstaller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: InstallerBase
  class InstallerBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::InstallerBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InstallerBase*, "Zenject", "InstallerBase");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InstallerBase
  // [TokenAttribute] Offset: FFFFFFFF
  class InstallerBase : public ::Il2CppObject/*, public ::Zenject::IInstaller*/ {
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
    // [InjectAttribute] Offset: 0x11F8BC0
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IInstaller
    operator ::Zenject::IInstaller() noexcept {
      return *reinterpret_cast<::Zenject::IInstaller*>(this);
    }
    // Creating conversion operator: operator ::Zenject::DiContainer*
    constexpr operator ::Zenject::DiContainer*() const noexcept {
      return container;
    }
    // Get instance field reference: private Zenject.DiContainer _container
    ::Zenject::DiContainer*& dyn__container();
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x1B02E2C
    ::Zenject::DiContainer* get_Container();
    // public System.Boolean get_IsEnabled()
    // Offset: 0x1B02E34
    bool get_IsEnabled();
    // public System.Void InstallBindings()
    // Offset: 0xFFFFFFFF
    void InstallBindings();
    // static private System.Void __zenFieldSetter0(System.Object P_0, System.Object P_1)
    // Offset: 0x1B02E3C
    static void __zenFieldSetter0(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1B02F10
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // protected System.Void .ctor()
    // Offset: 0x1B02CF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstallerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InstallerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstallerBase*, creationType>()));
    }
  }; // Zenject.InstallerBase
  #pragma pack(pop)
  static check_size<sizeof(InstallerBase), 16 + sizeof(::Zenject::DiContainer*)> __Zenject_InstallerBaseSizeCheck;
  static_assert(sizeof(InstallerBase) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InstallerBase::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::InstallerBase::*)()>(&Zenject::InstallerBase::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstallerBase*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InstallerBase::get_IsEnabled
// Il2CppName: get_IsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::InstallerBase::*)()>(&Zenject::InstallerBase::get_IsEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstallerBase*), "get_IsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InstallerBase::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InstallerBase::*)()>(&Zenject::InstallerBase::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstallerBase*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InstallerBase::__zenFieldSetter0
// Il2CppName: __zenFieldSetter0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::InstallerBase::__zenFieldSetter0)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstallerBase*), "__zenFieldSetter0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::InstallerBase::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::InstallerBase::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstallerBase*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InstallerBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
