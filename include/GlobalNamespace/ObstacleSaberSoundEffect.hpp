// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObstacleSaberSparkleEffectManager
  class ObstacleSaberSparkleEffectManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ObstacleSaberSoundEffect
  class ObstacleSaberSoundEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ObstacleSaberSoundEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSaberSoundEffect*, "", "ObstacleSaberSoundEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleSaberSoundEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class ObstacleSaberSoundEffect : public ::UnityEngine::MonoBehaviour {
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
    // private ObstacleSaberSparkleEffectManager _obstacleSaberSparkleEffectManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ObstacleSaberSparkleEffectManager* obstacleSaberSparkleEffectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ObstacleSaberSparkleEffectManager*) == 0x8);
    // private SaberType _saberType
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::SaberType saberType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberType) == 0x4);
    // Padding between fields: saberType and: audioSource
    char __padding1[0x4] = {};
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Single _volume
    // Size: 0x4
    // Offset: 0x30
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _targetVolume
    // Size: 0x4
    // Offset: 0x34
    float targetVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kSmooth
    static constexpr const float kSmooth = 8;
    // Get static field: static private System.Single kSmooth
    static float _get_kSmooth();
    // Set static field: static private System.Single kSmooth
    static void _set_kSmooth(float value);
    // Get instance field reference: private ObstacleSaberSparkleEffectManager _obstacleSaberSparkleEffectManager
    ::GlobalNamespace::ObstacleSaberSparkleEffectManager*& dyn__obstacleSaberSparkleEffectManager();
    // Get instance field reference: private SaberType _saberType
    ::GlobalNamespace::SaberType& dyn__saberType();
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private System.Single _volume
    float& dyn__volume();
    // Get instance field reference: private System.Single _targetVolume
    float& dyn__targetVolume();
    // protected System.Void Awake()
    // Offset: 0x147F318
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x147F554
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0x147F7B8
    void LateUpdate();
    // private System.Void HandleSparkleEffectDidStart(SaberType saberType)
    // Offset: 0x147F994
    void HandleSparkleEffectDidStart(::GlobalNamespace::SaberType saberType);
    // private System.Void HandleSparkleEffecDidEnd(SaberType saberType)
    // Offset: 0x147FACC
    void HandleSparkleEffecDidEnd(::GlobalNamespace::SaberType saberType);
    // public System.Void .ctor()
    // Offset: 0x147FAE0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleSaberSoundEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObstacleSaberSoundEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleSaberSoundEffect*, creationType>()));
    }
  }; // ObstacleSaberSoundEffect
  #pragma pack(pop)
  static check_size<sizeof(ObstacleSaberSoundEffect), 52 + sizeof(float)> __GlobalNamespace_ObstacleSaberSoundEffectSizeCheck;
  static_assert(sizeof(ObstacleSaberSoundEffect) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSoundEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSoundEffect::*)()>(&GlobalNamespace::ObstacleSaberSoundEffect::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSoundEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSoundEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSoundEffect::*)()>(&GlobalNamespace::ObstacleSaberSoundEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSoundEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSoundEffect::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSoundEffect::*)()>(&GlobalNamespace::ObstacleSaberSoundEffect::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSoundEffect*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSoundEffect::HandleSparkleEffectDidStart
// Il2CppName: HandleSparkleEffectDidStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSoundEffect::*)(::GlobalNamespace::SaberType)>(&GlobalNamespace::ObstacleSaberSoundEffect::HandleSparkleEffectDidStart)> {
  static const MethodInfo* get() {
    static auto* saberType = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSoundEffect*), "HandleSparkleEffectDidStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSoundEffect::HandleSparkleEffecDidEnd
// Il2CppName: HandleSparkleEffecDidEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSoundEffect::*)(::GlobalNamespace::SaberType)>(&GlobalNamespace::ObstacleSaberSoundEffect::HandleSparkleEffecDidEnd)> {
  static const MethodInfo* get() {
    static auto* saberType = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSoundEffect*), "HandleSparkleEffecDidEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSoundEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
