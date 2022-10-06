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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BlueNoiseDithering
  class BlueNoiseDithering;
  // Forward declaring type: RandomValueToShader
  class RandomValueToShader;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BlueNoiseDitheringUpdater
  class BlueNoiseDitheringUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BlueNoiseDitheringUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlueNoiseDitheringUpdater*, "", "BlueNoiseDitheringUpdater");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BlueNoiseDitheringUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class BlueNoiseDitheringUpdater : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private BlueNoiseDithering _blueNoiseDithering
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BlueNoiseDithering* blueNoiseDithering;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BlueNoiseDithering*) == 0x8);
    // private RandomValueToShader _randomValueToShader
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::RandomValueToShader* randomValueToShader;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RandomValueToShader*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BlueNoiseDithering _blueNoiseDithering
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BlueNoiseDithering*& dyn__blueNoiseDithering();
    // Get instance field reference: private RandomValueToShader _randomValueToShader
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RandomValueToShader*& dyn__randomValueToShader();
    // public System.Void .ctor()
    // Offset: 0x1CFE784
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlueNoiseDitheringUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BlueNoiseDitheringUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlueNoiseDitheringUpdater*, creationType>()));
    }
    // protected System.Void OnEnable()
    // Offset: 0x1CFE498
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1CFE5B0
    void OnDisable();
    // public System.Void HandleCameraPreRender(UnityEngine.Camera camera)
    // Offset: 0x1CFE674
    void HandleCameraPreRender(::UnityEngine::Camera* camera);
  }; // BlueNoiseDitheringUpdater
  #pragma pack(pop)
  static check_size<sizeof(BlueNoiseDitheringUpdater), 32 + sizeof(::GlobalNamespace::RandomValueToShader*)> __GlobalNamespace_BlueNoiseDitheringUpdaterSizeCheck;
  static_assert(sizeof(BlueNoiseDitheringUpdater) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BlueNoiseDitheringUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BlueNoiseDitheringUpdater::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&GlobalNamespace::BlueNoiseDitheringUpdater::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlueNoiseDitheringUpdater*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlueNoiseDitheringUpdater::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&GlobalNamespace::BlueNoiseDitheringUpdater::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlueNoiseDitheringUpdater*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BlueNoiseDitheringUpdater::HandleCameraPreRender
// Il2CppName: HandleCameraPreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BlueNoiseDitheringUpdater::*)(::UnityEngine::Camera*)>(&GlobalNamespace::BlueNoiseDitheringUpdater::HandleCameraPreRender)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BlueNoiseDitheringUpdater*), "HandleCameraPreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
