// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AutomaticSFXVolumeParamsSO
  class AutomaticSFXVolumeParamsSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AutomaticSFXVolumeParamsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutomaticSFXVolumeParamsSO*, "", "AutomaticSFXVolumeParamsSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: AutomaticSFXVolumeParamsSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AutomaticSFXVolumeParamsSO : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // private System.Single _musicVolumeMultiplier
    // Size: 0x4
    // Offset: 0x18
    float musicVolumeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _threshold
    // Size: 0x4
    // Offset: 0x1C
    float threshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _impact
    // Size: 0x4
    // Offset: 0x20
    float impact;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _attackTime
    // Size: 0x4
    // Offset: 0x24
    float attackTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _releaseTime
    // Size: 0x4
    // Offset: 0x28
    float releaseTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minVolume
    // Size: 0x4
    // Offset: 0x2C
    float minVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxVolume
    // Size: 0x4
    // Offset: 0x30
    float maxVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _volumeSmooth
    // Size: 0x4
    // Offset: 0x34
    float volumeSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _musicVolumeMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__musicVolumeMultiplier();
    // Get instance field reference: private System.Single _threshold
    [[deprecated("Use field access instead!")]] float& dyn__threshold();
    // Get instance field reference: private System.Single _impact
    [[deprecated("Use field access instead!")]] float& dyn__impact();
    // Get instance field reference: private System.Single _attackTime
    [[deprecated("Use field access instead!")]] float& dyn__attackTime();
    // Get instance field reference: private System.Single _releaseTime
    [[deprecated("Use field access instead!")]] float& dyn__releaseTime();
    // Get instance field reference: private System.Single _minVolume
    [[deprecated("Use field access instead!")]] float& dyn__minVolume();
    // Get instance field reference: private System.Single _maxVolume
    [[deprecated("Use field access instead!")]] float& dyn__maxVolume();
    // Get instance field reference: private System.Single _volumeSmooth
    [[deprecated("Use field access instead!")]] float& dyn__volumeSmooth();
    // public System.Single get_musicVolumeMultiplier()
    // Offset: 0x1538268
    float get_musicVolumeMultiplier();
    // public System.Single get_threshold()
    // Offset: 0x1538270
    float get_threshold();
    // public System.Single get_impact()
    // Offset: 0x1538278
    float get_impact();
    // public System.Single get_attackTime()
    // Offset: 0x1538280
    float get_attackTime();
    // public System.Single get_releaseTime()
    // Offset: 0x1538288
    float get_releaseTime();
    // public System.Single get_minVolume()
    // Offset: 0x1538290
    float get_minVolume();
    // public System.Single get_maxVolume()
    // Offset: 0x1538298
    float get_maxVolume();
    // public System.Single get_volumeSmooth()
    // Offset: 0x15382A0
    float get_volumeSmooth();
    // public System.Void .ctor()
    // Offset: 0x15382A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutomaticSFXVolumeParamsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AutomaticSFXVolumeParamsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutomaticSFXVolumeParamsSO*, creationType>()));
    }
  }; // AutomaticSFXVolumeParamsSO
  #pragma pack(pop)
  static check_size<sizeof(AutomaticSFXVolumeParamsSO), 52 + sizeof(float)> __GlobalNamespace_AutomaticSFXVolumeParamsSOSizeCheck;
  static_assert(sizeof(AutomaticSFXVolumeParamsSO) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolumeParamsSO::get_musicVolumeMultiplier
// Il2CppName: get_musicVolumeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AutomaticSFXVolumeParamsSO::*)()>(&GlobalNamespace::AutomaticSFXVolumeParamsSO::get_musicVolumeMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolumeParamsSO*), "get_musicVolumeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolumeParamsSO::get_threshold
// Il2CppName: get_threshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AutomaticSFXVolumeParamsSO::*)()>(&GlobalNamespace::AutomaticSFXVolumeParamsSO::get_threshold)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolumeParamsSO*), "get_threshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolumeParamsSO::get_impact
// Il2CppName: get_impact
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AutomaticSFXVolumeParamsSO::*)()>(&GlobalNamespace::AutomaticSFXVolumeParamsSO::get_impact)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolumeParamsSO*), "get_impact", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolumeParamsSO::get_attackTime
// Il2CppName: get_attackTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AutomaticSFXVolumeParamsSO::*)()>(&GlobalNamespace::AutomaticSFXVolumeParamsSO::get_attackTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolumeParamsSO*), "get_attackTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolumeParamsSO::get_releaseTime
// Il2CppName: get_releaseTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AutomaticSFXVolumeParamsSO::*)()>(&GlobalNamespace::AutomaticSFXVolumeParamsSO::get_releaseTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolumeParamsSO*), "get_releaseTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolumeParamsSO::get_minVolume
// Il2CppName: get_minVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AutomaticSFXVolumeParamsSO::*)()>(&GlobalNamespace::AutomaticSFXVolumeParamsSO::get_minVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolumeParamsSO*), "get_minVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolumeParamsSO::get_maxVolume
// Il2CppName: get_maxVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AutomaticSFXVolumeParamsSO::*)()>(&GlobalNamespace::AutomaticSFXVolumeParamsSO::get_maxVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolumeParamsSO*), "get_maxVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolumeParamsSO::get_volumeSmooth
// Il2CppName: get_volumeSmooth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AutomaticSFXVolumeParamsSO::*)()>(&GlobalNamespace::AutomaticSFXVolumeParamsSO::get_volumeSmooth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolumeParamsSO*), "get_volumeSmooth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolumeParamsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
