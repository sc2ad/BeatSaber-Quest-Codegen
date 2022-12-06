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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EmitParticles
  class EmitParticles;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EmitParticles);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmitParticles*, "", "EmitParticles");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: EmitParticles
  // [TokenAttribute] Offset: FFFFFFFF
  class EmitParticles : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.ParticleSystem _particleSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn__particleSystem();
    // public System.Void .ctor()
    // Offset: 0x13867CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmitParticles* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EmitParticles::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmitParticles*, creationType>()));
    }
    // public System.Void Emit(System.Int32 count)
    // Offset: 0x13867B0
    void Emit(int count);
  }; // EmitParticles
  #pragma pack(pop)
  static check_size<sizeof(EmitParticles), 24 + sizeof(::UnityEngine::ParticleSystem*)> __GlobalNamespace_EmitParticlesSizeCheck;
  static_assert(sizeof(EmitParticles) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EmitParticles::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EmitParticles::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EmitParticles::*)(int)>(&GlobalNamespace::EmitParticles::Emit)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EmitParticles*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
