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
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MoveBackWall
  class MoveBackWall;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MoveBackWall);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoveBackWall*, "", "MoveBackWall");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MoveBackWall
  // [TokenAttribute] Offset: FFFFFFFF
  class MoveBackWall : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _fadeInRegion
    // Size: 0x4
    // Offset: 0x18
    float fadeInRegion;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: fadeInRegion and: meshRenderer
    char __padding0[0x4] = {};
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // [InjectAttribute] Offset: 0x11042A8
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerTransforms*) == 0x8);
    // private System.Single _thisZ
    // Size: 0x4
    // Offset: 0x30
    float thisZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _isVisible
    // Size: 0x1
    // Offset: 0x34
    bool isVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isVisible and: material
    char __padding4[0x3] = {};
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _fadeInRegion
    [[deprecated("Use field access instead!")]] float& dyn__fadeInRegion();
    // Get instance field reference: private UnityEngine.MeshRenderer _meshRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn__meshRenderer();
    // Get instance field reference: private readonly PlayerTransforms _playerTransforms
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerTransforms*& dyn__playerTransforms();
    // Get instance field reference: private System.Single _thisZ
    [[deprecated("Use field access instead!")]] float& dyn__thisZ();
    // Get instance field reference: private System.Boolean _isVisible
    [[deprecated("Use field access instead!")]] bool& dyn__isVisible();
    // Get instance field reference: private UnityEngine.Material _material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__material();
    // public System.Void .ctor()
    // Offset: 0x1405BF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MoveBackWall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MoveBackWall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MoveBackWall*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1405A64
    void Start();
    // protected System.Void Update()
    // Offset: 0x1405AC4
    void Update();
  }; // MoveBackWall
  #pragma pack(pop)
  static check_size<sizeof(MoveBackWall), 56 + sizeof(::UnityEngine::Material*)> __GlobalNamespace_MoveBackWallSizeCheck;
  static_assert(sizeof(MoveBackWall) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MoveBackWall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MoveBackWall::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoveBackWall::*)()>(&GlobalNamespace::MoveBackWall::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoveBackWall*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoveBackWall::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoveBackWall::*)()>(&GlobalNamespace::MoveBackWall::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoveBackWall*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
