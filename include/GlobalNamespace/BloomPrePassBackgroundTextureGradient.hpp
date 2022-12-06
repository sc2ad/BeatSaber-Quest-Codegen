// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassNonLightPass
#include "GlobalNamespace/BloomPrePassNonLightPass.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundTextureGradient
  class BloomPrePassBackgroundTextureGradient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundTextureGradient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundTextureGradient*, "", "BloomPrePassBackgroundTextureGradient");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundTextureGradient
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class BloomPrePassBackgroundTextureGradient : public ::GlobalNamespace::BloomPrePassNonLightPass {
    public:
    public:
    // private UnityEngine.Color _tintColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color tintColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Texture2D _texture
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Texture2D* texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FC5E4
    // Get static field: static private readonly System.Int32 _gradientTexID
    static int _get__gradientTexID();
    // Set static field: static private readonly System.Int32 _gradientTexID
    static void _set__gradientTexID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FC5F4
    // Get static field: static private readonly System.Int32 _inverseProjectionMatrixID
    static int _get__inverseProjectionMatrixID();
    // Set static field: static private readonly System.Int32 _inverseProjectionMatrixID
    static void _set__inverseProjectionMatrixID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FC604
    // Get static field: static private readonly System.Int32 _cameraToWorldMatrixID
    static int _get__cameraToWorldMatrixID();
    // Set static field: static private readonly System.Int32 _cameraToWorldMatrixID
    static void _set__cameraToWorldMatrixID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FC614
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // static field const value: static private System.String kUseToneMappingKeyword
    static constexpr const char* kUseToneMappingKeyword = "USE_TONE_MAPPING";
    // Get static field: static private System.String kUseToneMappingKeyword
    static ::StringW _get_kUseToneMappingKeyword();
    // Set static field: static private System.String kUseToneMappingKeyword
    static void _set_kUseToneMappingKeyword(::StringW value);
    // static field const value: static private System.String kSkyGradientShaderName
    static constexpr const char* kSkyGradientShaderName = "Hidden/SkyGradient";
    // Get static field: static private System.String kSkyGradientShaderName
    static ::StringW _get_kSkyGradientShaderName();
    // Set static field: static private System.String kSkyGradientShaderName
    static void _set_kSkyGradientShaderName(::StringW value);
    // static field const value: static private System.Int32 kTextureWidth
    static constexpr const int kTextureWidth = 128;
    // Get static field: static private System.Int32 kTextureWidth
    static int _get_kTextureWidth();
    // Set static field: static private System.Int32 kTextureWidth
    static void _set_kTextureWidth(int value);
    // Get instance field reference: private UnityEngine.Color _tintColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__tintColor();
    // Get instance field reference: private UnityEngine.Texture2D _texture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn__texture();
    // Get instance field reference: private UnityEngine.Material _material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__material();
    // public UnityEngine.Color get_tintColor()
    // Offset: 0x1CC7540
    ::UnityEngine::Color get_tintColor();
    // public System.Void set_tintColor(UnityEngine.Color value)
    // Offset: 0x1CC754C
    void set_tintColor(::UnityEngine::Color value);
    // private System.Void InitIfNeeded()
    // Offset: 0x1CC7558
    void InitIfNeeded();
    // protected System.Void Start()
    // Offset: 0x1CC775C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1CC7760
    void OnDestroy();
    // protected System.Void UpdatePixels(Unity.Collections.NativeArray`1<UnityEngine.Color32> pixels, System.Int32 numberOfPixels)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> pixels, int numberOfPixels);
    // public System.Void UpdateGradientTexture()
    // Offset: 0x1CC5C14
    void UpdateGradientTexture();
    // protected System.Void .ctor()
    // Offset: 0x1CC5A44
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundTextureGradient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundTextureGradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundTextureGradient*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CC7974
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.cctor()
    static void _cctor();
    // protected override System.Void OnValidate()
    // Offset: 0x1CC7790
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::OnValidate()
    void OnValidate();
    // public override System.Void Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    // Offset: 0x1CC77F0
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);
  }; // BloomPrePassBackgroundTextureGradient
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundTextureGradient), 56 + sizeof(::UnityEngine::Material*)> __GlobalNamespace_BloomPrePassBackgroundTextureGradientSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundTextureGradient) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::get_tintColor
// Il2CppName: get_tintColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::get_tintColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "get_tintColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::set_tintColor
// Il2CppName: set_tintColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)(::UnityEngine::Color)>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::set_tintColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "set_tintColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::InitIfNeeded
// Il2CppName: InitIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::InitIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "InitIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::UpdatePixels
// Il2CppName: UpdatePixels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, int)>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::UpdatePixels)> {
  static const MethodInfo* get() {
    static auto* pixels = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")})->byval_arg;
    static auto* numberOfPixels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "UpdatePixels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pixels, numberOfPixels});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::UpdateGradientTexture
// Il2CppName: UpdateGradientTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::UpdateGradientTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "UpdateGradientTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)(::UnityEngine::RenderTexture*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::Render)> {
  static const MethodInfo* get() {
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, viewMatrix, projectionMatrix});
  }
};
