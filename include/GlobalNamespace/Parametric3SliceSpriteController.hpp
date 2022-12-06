// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Parametric3SliceSpriteController
  class Parametric3SliceSpriteController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Parametric3SliceSpriteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Parametric3SliceSpriteController*, "", "Parametric3SliceSpriteController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: Parametric3SliceSpriteController
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 10FBCF8
  // [RequireComponent] Offset: 10FBCF8
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class Parametric3SliceSpriteController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _widthMultiplier
    // Size: 0x4
    // Offset: 0x18
    float widthMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single width
    // Size: 0x4
    // Offset: 0x1C
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single length
    // Size: 0x4
    // Offset: 0x20
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single center
    // Size: 0x4
    // Offset: 0x24
    float center;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Single alphaMultiplier
    // Size: 0x4
    // Offset: 0x38
    float alphaMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minAlpha
    // Size: 0x4
    // Offset: 0x3C
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x10FC74C
    // [MinAttribute] Offset: 0x10FC74C
    // public System.Single alphaStart
    // Size: 0x4
    // Offset: 0x40
    float alphaStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [MinAttribute] Offset: 0x10FC788
    // public System.Single alphaEnd
    // Size: 0x4
    // Offset: 0x44
    float alphaEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [MinAttribute] Offset: 0x10FC79C
    // public System.Single widthStart
    // Size: 0x4
    // Offset: 0x48
    float widthStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [MinAttribute] Offset: 0x10FC7B0
    // public System.Single widthEnd
    // Size: 0x4
    // Offset: 0x4C
    float widthEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x60
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kMaxWidth
    static constexpr const float kMaxWidth = 10;
    // Get static field: static private System.Single kMaxWidth
    static float _get_kMaxWidth();
    // Set static field: static private System.Single kMaxWidth
    static void _set_kMaxWidth(float value);
    // static field const value: static private System.Single kMaxLength
    static constexpr const float kMaxLength = 2500;
    // Get static field: static private System.Single kMaxLength
    static float _get_kMaxLength();
    // Set static field: static private System.Single kMaxLength
    static void _set_kMaxLength(float value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FC7C4
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FC7D4
    // Get static field: static private readonly System.Int32 _sizeParamsID
    static int _get__sizeParamsID();
    // Set static field: static private readonly System.Int32 _sizeParamsID
    static void _set__sizeParamsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FC7E4
    // Get static field: static private readonly System.Int32 _alphaStartID
    static int _get__alphaStartID();
    // Set static field: static private readonly System.Int32 _alphaStartID
    static void _set__alphaStartID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FC7F4
    // Get static field: static private readonly System.Int32 _alphaEndID
    static int _get__alphaEndID();
    // Set static field: static private readonly System.Int32 _alphaEndID
    static void _set__alphaEndID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FC804
    // Get static field: static private readonly System.Int32 _widthStartID
    static int _get__widthStartID();
    // Set static field: static private readonly System.Int32 _widthStartID
    static void _set__widthStartID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FC814
    // Get static field: static private readonly System.Int32 _widthEndID
    static int _get__widthEndID();
    // Set static field: static private readonly System.Int32 _widthEndID
    static void _set__widthEndID(int value);
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static ::UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);
    // Get static field: static private UnityEngine.Mesh _mesh
    static ::UnityEngine::Mesh* _get__mesh();
    // Set static field: static private UnityEngine.Mesh _mesh
    static void _set__mesh(::UnityEngine::Mesh* value);
    // Get static field: static private System.Int32 _instanceCount
    static int _get__instanceCount();
    // Set static field: static private System.Int32 _instanceCount
    static void _set__instanceCount(int value);
    // Get instance field reference: private System.Single _widthMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__widthMultiplier();
    // Get instance field reference: public System.Single width
    [[deprecated("Use field access instead!")]] float& dyn_width();
    // Get instance field reference: public System.Single length
    [[deprecated("Use field access instead!")]] float& dyn_length();
    // Get instance field reference: public System.Single center
    [[deprecated("Use field access instead!")]] float& dyn_center();
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
    // Get instance field reference: public System.Single alphaMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_alphaMultiplier();
    // Get instance field reference: public System.Single minAlpha
    [[deprecated("Use field access instead!")]] float& dyn_minAlpha();
    // Get instance field reference: public System.Single alphaStart
    [[deprecated("Use field access instead!")]] float& dyn_alphaStart();
    // Get instance field reference: public System.Single alphaEnd
    [[deprecated("Use field access instead!")]] float& dyn_alphaEnd();
    // Get instance field reference: public System.Single widthStart
    [[deprecated("Use field access instead!")]] float& dyn_widthStart();
    // Get instance field reference: public System.Single widthEnd
    [[deprecated("Use field access instead!")]] float& dyn_widthEnd();
    // Get instance field reference: private UnityEngine.MeshRenderer _meshRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn__meshRenderer();
    // Get instance field reference: private UnityEngine.MeshFilter _meshFilter
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn__meshFilter();
    // Get instance field reference: private System.Boolean _isInitialized
    [[deprecated("Use field access instead!")]] bool& dyn__isInitialized();
    // public System.Void .ctor()
    // Offset: 0x1CD23A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Parametric3SliceSpriteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Parametric3SliceSpriteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Parametric3SliceSpriteController*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CD23C8
    static void _cctor();
    // protected System.Void Awake()
    // Offset: 0x1CD1864
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1CD1F84
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1CD2004
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1CD228C
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x1CD22AC
    void OnDestroy();
    // private System.Void Init()
    // Offset: 0x1CD19FC
    void Init();
    // private UnityEngine.Mesh CreateMesh()
    // Offset: 0x1CD1A7C
    ::UnityEngine::Mesh* CreateMesh();
    // public System.Void Refresh()
    // Offset: 0x1CD203C
    void Refresh();
  }; // Parametric3SliceSpriteController
  #pragma pack(pop)
  static check_size<sizeof(Parametric3SliceSpriteController), 96 + sizeof(bool)> __GlobalNamespace_Parametric3SliceSpriteControllerSizeCheck;
  static_assert(sizeof(Parametric3SliceSpriteController) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::Parametric3SliceSpriteController::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Parametric3SliceSpriteController*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Parametric3SliceSpriteController::*)()>(&GlobalNamespace::Parametric3SliceSpriteController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Parametric3SliceSpriteController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Parametric3SliceSpriteController::*)()>(&GlobalNamespace::Parametric3SliceSpriteController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Parametric3SliceSpriteController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Parametric3SliceSpriteController::*)()>(&GlobalNamespace::Parametric3SliceSpriteController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Parametric3SliceSpriteController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Parametric3SliceSpriteController::*)()>(&GlobalNamespace::Parametric3SliceSpriteController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Parametric3SliceSpriteController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Parametric3SliceSpriteController::*)()>(&GlobalNamespace::Parametric3SliceSpriteController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Parametric3SliceSpriteController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Parametric3SliceSpriteController::*)()>(&GlobalNamespace::Parametric3SliceSpriteController::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Parametric3SliceSpriteController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::CreateMesh
// Il2CppName: CreateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (GlobalNamespace::Parametric3SliceSpriteController::*)()>(&GlobalNamespace::Parametric3SliceSpriteController::CreateMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Parametric3SliceSpriteController*), "CreateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Parametric3SliceSpriteController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Parametric3SliceSpriteController::*)()>(&GlobalNamespace::Parametric3SliceSpriteController::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Parametric3SliceSpriteController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
