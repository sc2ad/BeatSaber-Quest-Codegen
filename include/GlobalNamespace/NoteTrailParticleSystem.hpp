// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/UnityEngine.EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteTrailParticleSystem
  class NoteTrailParticleSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteTrailParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteTrailParticleSystem*, "", "NoteTrailParticleSystem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xAF
  #pragma pack(push, 1)
  // Autogenerated type: NoteTrailParticleSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteTrailParticleSystem : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem/UnityEngine.EmitParams _emitParams
    // Size: 0x8F
    // Offset: 0x20
    ::UnityEngine::ParticleSystem::EmitParams emitParams;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.ParticleSystem _particleSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn__particleSystem();
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.EmitParams _emitParams
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem::EmitParams& dyn__emitParams();
    // public System.Void .ctor()
    // Offset: 0x154A180
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteTrailParticleSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteTrailParticleSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteTrailParticleSystem*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x154A170
    void Awake();
    // public System.Void Emit(UnityEngine.Vector3 startPos, UnityEngine.Vector3 endPos, System.Int32 count)
    // Offset: 0x1549FEC
    void Emit(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, int count);
  }; // NoteTrailParticleSystem
  #pragma pack(pop)
  static check_size<sizeof(NoteTrailParticleSystem), 32 + sizeof(::UnityEngine::ParticleSystem::EmitParams)> __GlobalNamespace_NoteTrailParticleSystemSizeCheck;
  static_assert(sizeof(NoteTrailParticleSystem) == 0xAF);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteTrailParticleSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteTrailParticleSystem::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteTrailParticleSystem::*)()>(&GlobalNamespace::NoteTrailParticleSystem::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteTrailParticleSystem*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteTrailParticleSystem::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteTrailParticleSystem::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int)>(&GlobalNamespace::NoteTrailParticleSystem::Emit)> {
  static const MethodInfo* get() {
    static auto* startPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* endPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteTrailParticleSystem*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startPos, endPos, count});
  }
};
