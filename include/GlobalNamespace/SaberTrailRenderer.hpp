// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TrailElementCollection
  class TrailElementCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SaberTrailRenderer
  class SaberTrailRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SaberTrailRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberTrailRenderer*, "", "SaberTrailRenderer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: SaberTrailRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberTrailRenderer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.Mesh _mesh
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.Vector3[] _vertices
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Vector3> vertices;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Int32[] _indices
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<int> indices;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private UnityEngine.Vector2[] _uvs
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Vector2> uvs;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    // private UnityEngine.Color[] _colors
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::Color> colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // private System.Single _trailWidth
    // Size: 0x4
    // Offset: 0x50
    float trailWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _trailDuration
    // Size: 0x4
    // Offset: 0x54
    float trailDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _segmentDuration
    // Size: 0x4
    // Offset: 0x58
    float segmentDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _granularity
    // Size: 0x4
    // Offset: 0x5C
    int granularity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _whiteSectionMaxDuration
    // Size: 0x4
    // Offset: 0x60
    float whiteSectionMaxDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1114710
    // Get static field: static private readonly UnityEngine.Bounds _bounds
    static ::UnityEngine::Bounds _get__bounds();
    // Set static field: static private readonly UnityEngine.Bounds _bounds
    static void _set__bounds(::UnityEngine::Bounds value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1114720
    // Get static field: static private readonly System.Int32 _saberTravelledDistanceId
    static int _get__saberTravelledDistanceId();
    // Set static field: static private readonly System.Int32 _saberTravelledDistanceId
    static void _set__saberTravelledDistanceId(int value);
    // static field const value: static private System.Single kMinMotionBlurSpeed
    static constexpr const float kMinMotionBlurSpeed = 2.5;
    // Get static field: static private System.Single kMinMotionBlurSpeed
    static float _get_kMinMotionBlurSpeed();
    // Set static field: static private System.Single kMinMotionBlurSpeed
    static void _set_kMinMotionBlurSpeed(float value);
    // static field const value: static private System.Single kMotionBlurStrength
    static constexpr const float kMotionBlurStrength = 0.8;
    // Get static field: static private System.Single kMotionBlurStrength
    static float _get_kMotionBlurStrength();
    // Set static field: static private System.Single kMotionBlurStrength
    static void _set_kMotionBlurStrength(float value);
    // Get instance field reference: private UnityEngine.MeshRenderer _meshRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn__meshRenderer();
    // Get instance field reference: private UnityEngine.MeshFilter _meshFilter
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn__meshFilter();
    // Get instance field reference: private UnityEngine.Mesh _mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn__mesh();
    // Get instance field reference: private UnityEngine.Vector3[] _vertices
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__vertices();
    // Get instance field reference: private System.Int32[] _indices
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__indices();
    // Get instance field reference: private UnityEngine.Vector2[] _uvs
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector2>& dyn__uvs();
    // Get instance field reference: private UnityEngine.Color[] _colors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color>& dyn__colors();
    // Get instance field reference: private System.Single _trailWidth
    [[deprecated("Use field access instead!")]] float& dyn__trailWidth();
    // Get instance field reference: private System.Single _trailDuration
    [[deprecated("Use field access instead!")]] float& dyn__trailDuration();
    // Get instance field reference: private System.Single _segmentDuration
    [[deprecated("Use field access instead!")]] float& dyn__segmentDuration();
    // Get instance field reference: private System.Int32 _granularity
    [[deprecated("Use field access instead!")]] int& dyn__granularity();
    // Get instance field reference: private System.Single _whiteSectionMaxDuration
    [[deprecated("Use field access instead!")]] float& dyn__whiteSectionMaxDuration();
    // public System.Void .ctor()
    // Offset: 0x1405F0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberTrailRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SaberTrailRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberTrailRenderer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1405F14
    static void _cctor();
    // public System.Void Init(System.Single trailWidth, System.Single trailDuration, System.Int32 granularity, System.Single whiteSectionMaxDuration)
    // Offset: 0x1405488
    void Init(float trailWidth, float trailDuration, int granularity, float whiteSectionMaxDuration);
    // protected System.Void OnDestroy()
    // Offset: 0x14057B0
    void OnDestroy();
    // private System.Void OnValidate()
    // Offset: 0x14057BC
    void OnValidate();
    // protected System.Void OnEnable()
    // Offset: 0x140589C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1405930
    void OnDisable();
    // public System.Void SetTrailWidth(System.Single width)
    // Offset: 0x14059C4
    void SetTrailWidth(float width);
    // public System.Void UpdateMesh(TrailElementCollection trailElementCollection, UnityEngine.Color color)
    // Offset: 0x1404EE0
    void UpdateMesh(::GlobalNamespace::TrailElementCollection* trailElementCollection, ::UnityEngine::Color color);
    // protected System.Void UpdateVertices(TrailElementCollection trailElementCollection, UnityEngine.Color color)
    // Offset: 0x14059CC
    void UpdateVertices(::GlobalNamespace::TrailElementCollection* trailElementCollection, ::UnityEngine::Color color);
    // private System.Void UpdateIndices()
    // Offset: 0x14055C8
    void UpdateIndices();
  }; // SaberTrailRenderer
  #pragma pack(pop)
  static check_size<sizeof(SaberTrailRenderer), 96 + sizeof(float)> __GlobalNamespace_SaberTrailRendererSizeCheck;
  static_assert(sizeof(SaberTrailRenderer) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberTrailRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SaberTrailRenderer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SaberTrailRenderer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrailRenderer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrailRenderer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrailRenderer::*)(float, float, int, float)>(&GlobalNamespace::SaberTrailRenderer::Init)> {
  static const MethodInfo* get() {
    static auto* trailWidth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* trailDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* granularity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* whiteSectionMaxDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrailRenderer*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trailWidth, trailDuration, granularity, whiteSectionMaxDuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrailRenderer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrailRenderer::*)()>(&GlobalNamespace::SaberTrailRenderer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrailRenderer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrailRenderer::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrailRenderer::*)()>(&GlobalNamespace::SaberTrailRenderer::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrailRenderer*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrailRenderer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrailRenderer::*)()>(&GlobalNamespace::SaberTrailRenderer::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrailRenderer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrailRenderer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrailRenderer::*)()>(&GlobalNamespace::SaberTrailRenderer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrailRenderer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrailRenderer::SetTrailWidth
// Il2CppName: SetTrailWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrailRenderer::*)(float)>(&GlobalNamespace::SaberTrailRenderer::SetTrailWidth)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrailRenderer*), "SetTrailWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrailRenderer::UpdateMesh
// Il2CppName: UpdateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrailRenderer::*)(::GlobalNamespace::TrailElementCollection*, ::UnityEngine::Color)>(&GlobalNamespace::SaberTrailRenderer::UpdateMesh)> {
  static const MethodInfo* get() {
    static auto* trailElementCollection = &::il2cpp_utils::GetClassFromName("", "TrailElementCollection")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrailRenderer*), "UpdateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trailElementCollection, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrailRenderer::UpdateVertices
// Il2CppName: UpdateVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrailRenderer::*)(::GlobalNamespace::TrailElementCollection*, ::UnityEngine::Color)>(&GlobalNamespace::SaberTrailRenderer::UpdateVertices)> {
  static const MethodInfo* get() {
    static auto* trailElementCollection = &::il2cpp_utils::GetClassFromName("", "TrailElementCollection")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrailRenderer*), "UpdateVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trailElementCollection, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrailRenderer::UpdateIndices
// Il2CppName: UpdateIndices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrailRenderer::*)()>(&GlobalNamespace::SaberTrailRenderer::UpdateIndices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrailRenderer*), "UpdateIndices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
