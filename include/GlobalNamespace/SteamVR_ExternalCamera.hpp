// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileSystemWatcher
  class FileSystemWatcher;
  // Forward declaring type: FileSystemEventArgs
  class FileSystemEventArgs;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_Camera
  class SteamVR_Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xBC
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_ExternalCamera
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_ExternalCamera : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SteamVR_ExternalCamera::Config
    struct Config;
    // Size: 0x49
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: SteamVR_ExternalCamera/Config
    // [TokenAttribute] Offset: FFFFFFFF
    struct Config/*, public System::ValueType*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public System.Single x
      // Size: 0x4
      // Offset: 0x0
      float x;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single y
      // Size: 0x4
      // Offset: 0x4
      float y;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single z
      // Size: 0x4
      // Offset: 0x8
      float z;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single rx
      // Size: 0x4
      // Offset: 0xC
      float rx;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single ry
      // Size: 0x4
      // Offset: 0x10
      float ry;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single rz
      // Size: 0x4
      // Offset: 0x14
      float rz;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single fov
      // Size: 0x4
      // Offset: 0x18
      float fov;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single near
      // Size: 0x4
      // Offset: 0x1C
      float near;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single far
      // Size: 0x4
      // Offset: 0x20
      float far;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single sceneResolutionScale
      // Size: 0x4
      // Offset: 0x24
      float sceneResolutionScale;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single frameSkip
      // Size: 0x4
      // Offset: 0x28
      float frameSkip;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single nearOffset
      // Size: 0x4
      // Offset: 0x2C
      float nearOffset;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single farOffset
      // Size: 0x4
      // Offset: 0x30
      float farOffset;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single hmdOffset
      // Size: 0x4
      // Offset: 0x34
      float hmdOffset;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single r
      // Size: 0x4
      // Offset: 0x38
      float r;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single g
      // Size: 0x4
      // Offset: 0x3C
      float g;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single b
      // Size: 0x4
      // Offset: 0x40
      float b;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single a
      // Size: 0x4
      // Offset: 0x44
      float a;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Boolean disableStandardAssets
      // Size: 0x1
      // Offset: 0x48
      bool disableStandardAssets;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Creating value type constructor for type: Config
      constexpr Config(float x_ = {}, float y_ = {}, float z_ = {}, float rx_ = {}, float ry_ = {}, float rz_ = {}, float fov_ = {}, float near_ = {}, float far_ = {}, float sceneResolutionScale_ = {}, float frameSkip_ = {}, float nearOffset_ = {}, float farOffset_ = {}, float hmdOffset_ = {}, float r_ = {}, float g_ = {}, float b_ = {}, float a_ = {}, bool disableStandardAssets_ = {}) noexcept : x{x_}, y{y_}, z{z_}, rx{rx_}, ry{ry_}, rz{rz_}, fov{fov_}, near{near_}, far{far_}, sceneResolutionScale{sceneResolutionScale_}, frameSkip{frameSkip_}, nearOffset{nearOffset_}, farOffset{farOffset_}, hmdOffset{hmdOffset_}, r{r_}, g{g_}, b{b_}, a{a_}, disableStandardAssets{disableStandardAssets_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: public System.Single x
      float& dyn_x();
      // Get instance field reference: public System.Single y
      float& dyn_y();
      // Get instance field reference: public System.Single z
      float& dyn_z();
      // Get instance field reference: public System.Single rx
      float& dyn_rx();
      // Get instance field reference: public System.Single ry
      float& dyn_ry();
      // Get instance field reference: public System.Single rz
      float& dyn_rz();
      // Get instance field reference: public System.Single fov
      float& dyn_fov();
      // Get instance field reference: public System.Single near
      float& dyn_near();
      // Get instance field reference: public System.Single far
      float& dyn_far();
      // Get instance field reference: public System.Single sceneResolutionScale
      float& dyn_sceneResolutionScale();
      // Get instance field reference: public System.Single frameSkip
      float& dyn_frameSkip();
      // Get instance field reference: public System.Single nearOffset
      float& dyn_nearOffset();
      // Get instance field reference: public System.Single farOffset
      float& dyn_farOffset();
      // Get instance field reference: public System.Single hmdOffset
      float& dyn_hmdOffset();
      // Get instance field reference: public System.Single r
      float& dyn_r();
      // Get instance field reference: public System.Single g
      float& dyn_g();
      // Get instance field reference: public System.Single b
      float& dyn_b();
      // Get instance field reference: public System.Single a
      float& dyn_a();
      // Get instance field reference: public System.Boolean disableStandardAssets
      bool& dyn_disableStandardAssets();
    }; // SteamVR_ExternalCamera/Config
    #pragma pack(pop)
    static check_size<sizeof(SteamVR_ExternalCamera::Config), 72 + sizeof(bool)> __GlobalNamespace_SteamVR_ExternalCamera_ConfigSizeCheck;
    static_assert(sizeof(SteamVR_ExternalCamera::Config) == 0x49);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public SteamVR_ExternalCamera/Config config
    // Size: 0x49
    // Offset: 0x18
    GlobalNamespace::SteamVR_ExternalCamera::Config config;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_ExternalCamera::Config) == 0x49);
    // Padding between fields: config and: configPath
    char __padding0[0x7] = {};
    // public System.String configPath
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* configPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.IO.FileSystemWatcher watcher
    // Size: 0x8
    // Offset: 0x70
    System::IO::FileSystemWatcher* watcher;
    // Field size check
    static_assert(sizeof(System::IO::FileSystemWatcher*) == 0x8);
    // private UnityEngine.Camera cam
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Camera* cam;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.GameObject clipQuad
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::GameObject* clipQuad;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Material clipMaterial
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::Material* clipMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material colorMat
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::Material* colorMat;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material alphaMat
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::Material* alphaMat;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Camera[] cameras
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<UnityEngine::Camera*> cameras;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Camera*>) == 0x8);
    // private UnityEngine.Rect[] cameraRects
    // Size: 0x8
    // Offset: 0xB0
    ::ArrayW<UnityEngine::Rect> cameraRects;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Rect>) == 0x8);
    // private System.Single sceneResolutionScale
    // Size: 0x4
    // Offset: 0xB8
    float sceneResolutionScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public SteamVR_ExternalCamera/Config config
    GlobalNamespace::SteamVR_ExternalCamera::Config& dyn_config();
    // Get instance field reference: public System.String configPath
    ::Il2CppString*& dyn_configPath();
    // Get instance field reference: private System.IO.FileSystemWatcher watcher
    System::IO::FileSystemWatcher*& dyn_watcher();
    // Get instance field reference: private UnityEngine.Camera cam
    UnityEngine::Camera*& dyn_cam();
    // Get instance field reference: private UnityEngine.Transform target
    UnityEngine::Transform*& dyn_target();
    // Get instance field reference: private UnityEngine.GameObject clipQuad
    UnityEngine::GameObject*& dyn_clipQuad();
    // Get instance field reference: private UnityEngine.Material clipMaterial
    UnityEngine::Material*& dyn_clipMaterial();
    // Get instance field reference: private UnityEngine.Material colorMat
    UnityEngine::Material*& dyn_colorMat();
    // Get instance field reference: private UnityEngine.Material alphaMat
    UnityEngine::Material*& dyn_alphaMat();
    // Get instance field reference: private UnityEngine.Camera[] cameras
    ::ArrayW<UnityEngine::Camera*>& dyn_cameras();
    // Get instance field reference: private UnityEngine.Rect[] cameraRects
    ::ArrayW<UnityEngine::Rect>& dyn_cameraRects();
    // Get instance field reference: private System.Single sceneResolutionScale
    float& dyn_sceneResolutionScale();
    // public System.Void ReadConfig()
    // Offset: 0x153AABC
    void ReadConfig();
    // private System.Void OnChanged(System.Object source, System.IO.FileSystemEventArgs e)
    // Offset: 0x153B3C4
    void OnChanged(::Il2CppObject* source, System::IO::FileSystemEventArgs* e);
    // public System.Void AttachToCamera(SteamVR_Camera vrcam)
    // Offset: 0x153B3C8
    void AttachToCamera(GlobalNamespace::SteamVR_Camera* vrcam);
    // public System.Single GetTargetDistance()
    // Offset: 0x153B978
    float GetTargetDistance();
    // public System.Void RenderNear()
    // Offset: 0x153BC24
    void RenderNear();
    // public System.Void RenderFar()
    // Offset: 0x153C37C
    void RenderFar();
    // private System.Void OnGUI()
    // Offset: 0x153C49C
    void OnGUI();
    // private System.Void OnEnable()
    // Offset: 0x153C4A0
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x153C6F0
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x153C82C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_ExternalCamera* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_ExternalCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_ExternalCamera*, creationType>()));
    }
  }; // SteamVR_ExternalCamera
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_ExternalCamera), 184 + sizeof(float)> __GlobalNamespace_SteamVR_ExternalCameraSizeCheck;
  static_assert(sizeof(SteamVR_ExternalCamera) == 0xBC);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_ExternalCamera*, "", "SteamVR_ExternalCamera");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_ExternalCamera::Config, "", "SteamVR_ExternalCamera/Config");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ExternalCamera::ReadConfig
// Il2CppName: ReadConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ExternalCamera::*)()>(&GlobalNamespace::SteamVR_ExternalCamera::ReadConfig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ExternalCamera*), "ReadConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ExternalCamera::OnChanged
// Il2CppName: OnChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ExternalCamera::*)(::Il2CppObject*, System::IO::FileSystemEventArgs*)>(&GlobalNamespace::SteamVR_ExternalCamera::OnChanged)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ExternalCamera*), "OnChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, e});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ExternalCamera::AttachToCamera
// Il2CppName: AttachToCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ExternalCamera::*)(GlobalNamespace::SteamVR_Camera*)>(&GlobalNamespace::SteamVR_ExternalCamera::AttachToCamera)> {
  static const MethodInfo* get() {
    static auto* vrcam = &::il2cpp_utils::GetClassFromName("", "SteamVR_Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ExternalCamera*), "AttachToCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vrcam});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ExternalCamera::GetTargetDistance
// Il2CppName: GetTargetDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SteamVR_ExternalCamera::*)()>(&GlobalNamespace::SteamVR_ExternalCamera::GetTargetDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ExternalCamera*), "GetTargetDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ExternalCamera::RenderNear
// Il2CppName: RenderNear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ExternalCamera::*)()>(&GlobalNamespace::SteamVR_ExternalCamera::RenderNear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ExternalCamera*), "RenderNear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ExternalCamera::RenderFar
// Il2CppName: RenderFar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ExternalCamera::*)()>(&GlobalNamespace::SteamVR_ExternalCamera::RenderFar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ExternalCamera*), "RenderFar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ExternalCamera::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ExternalCamera::*)()>(&GlobalNamespace::SteamVR_ExternalCamera::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ExternalCamera*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ExternalCamera::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ExternalCamera::*)()>(&GlobalNamespace::SteamVR_ExternalCamera::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ExternalCamera*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ExternalCamera::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ExternalCamera::*)()>(&GlobalNamespace::SteamVR_ExternalCamera::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ExternalCamera*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ExternalCamera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
