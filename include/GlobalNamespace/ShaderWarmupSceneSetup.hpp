// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ShaderWarmupSceneSetup
  class ShaderWarmupSceneSetup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ShaderWarmupSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderWarmupSceneSetup*, "", "ShaderWarmupSceneSetup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ShaderWarmupSceneSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderWarmupSceneSetup : public ::Zenject::MonoInstaller {
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
    // private ColorSchemeSO _sharedWarmupColorScheme
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ColorSchemeSO* sharedWarmupColorScheme;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSchemeSO*) == 0x8);
    public:
    // Get instance field reference: private ColorSchemeSO _sharedWarmupColorScheme
    ::GlobalNamespace::ColorSchemeSO*& dyn__sharedWarmupColorScheme();
    // public System.Void .ctor()
    // Offset: 0x142AEE4
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderWarmupSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShaderWarmupSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderWarmupSceneSetup*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x142AE3C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // ShaderWarmupSceneSetup
  #pragma pack(pop)
  static check_size<sizeof(ShaderWarmupSceneSetup), 32 + sizeof(::GlobalNamespace::ColorSchemeSO*)> __GlobalNamespace_ShaderWarmupSceneSetupSizeCheck;
  static_assert(sizeof(ShaderWarmupSceneSetup) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShaderWarmupSceneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ShaderWarmupSceneSetup::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShaderWarmupSceneSetup::*)()>(&GlobalNamespace::ShaderWarmupSceneSetup::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderWarmupSceneSetup*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
