// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Installer`2
#include "Zenject/Installer_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.AnimatorInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimatorInstaller : public Zenject::Installer_2<UnityEngine::Animator*, Zenject::AnimatorInstaller*> {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    public:
    // Deleting conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept = delete;
    // Get instance field reference: private readonly UnityEngine.Animator _animator
    UnityEngine::Animator*& dyn__animator();
    // public System.Void .ctor(UnityEngine.Animator animator)
    // Offset: 0x14F3C08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatorInstaller* New_ctor(UnityEngine::Animator* animator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::AnimatorInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatorInstaller*, creationType>(animator)));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x14F3C6C
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
  }; // Zenject.AnimatorInstaller
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::AnimatorInstaller*, "Zenject", "AnimatorInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::AnimatorInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::AnimatorInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::AnimatorInstaller::*)()>(&Zenject::AnimatorInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AnimatorInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
