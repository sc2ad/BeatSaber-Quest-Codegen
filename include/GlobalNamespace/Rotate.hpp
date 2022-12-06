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
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Rotate
  class Rotate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Rotate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Rotate*, "", "Rotate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Rotate
  // [TokenAttribute] Offset: FFFFFFFF
  class Rotate : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Vector3 _rotationVector
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 rotationVector;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single _speed
    // Size: 0x4
    // Offset: 0x24
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean _randomize
    // Size: 0x1
    // Offset: 0x28
    bool randomize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: randomize and: randomMinMultiplier
    char __padding2[0x3] = {};
    // [DrawIfAttribute] Offset: 0x10EAB90
    // public UnityEngine.Vector3 _randomMinMultiplier
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 randomMinMultiplier;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [DrawIfAttribute] Offset: 0x10EAC28
    // public UnityEngine.Vector3 _randomMaxMultiplier
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 randomMaxMultiplier;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: randomMaxMultiplier and: transform
    char __padding4[0x4] = {};
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 _startRotationAngles
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 startRotationAngles;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _randomizedMultiplier
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 randomizedMultiplier;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Vector3 _rotationVector
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__rotationVector();
    // Get instance field reference: public System.Single _speed
    [[deprecated("Use field access instead!")]] float& dyn__speed();
    // Get instance field reference: public System.Boolean _randomize
    [[deprecated("Use field access instead!")]] bool& dyn__randomize();
    // Get instance field reference: public UnityEngine.Vector3 _randomMinMultiplier
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__randomMinMultiplier();
    // Get instance field reference: public UnityEngine.Vector3 _randomMaxMultiplier
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__randomMaxMultiplier();
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: private UnityEngine.Vector3 _startRotationAngles
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__startRotationAngles();
    // Get instance field reference: private UnityEngine.Vector3 _randomizedMultiplier
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__randomizedMultiplier();
    // public System.Void .ctor()
    // Offset: 0x2ABA930
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Rotate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Rotate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Rotate*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x2ABA5F0
    void Awake();
    // protected System.Void OnBecameVisible()
    // Offset: 0x2ABA6BC
    void OnBecameVisible();
    // protected System.Void OnBecameInvisible()
    // Offset: 0x2ABA78C
    void OnBecameInvisible();
    // protected System.Void Update()
    // Offset: 0x2ABA798
    void Update();
    // protected System.Void Randomize()
    // Offset: 0x2ABA6E8
    void Randomize();
  }; // Rotate
  #pragma pack(pop)
  static check_size<sizeof(Rotate), 92 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_RotateSizeCheck;
  static_assert(sizeof(Rotate) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Rotate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Rotate::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Rotate::*)()>(&GlobalNamespace::Rotate::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Rotate*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Rotate::OnBecameVisible
// Il2CppName: OnBecameVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Rotate::*)()>(&GlobalNamespace::Rotate::OnBecameVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Rotate*), "OnBecameVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Rotate::OnBecameInvisible
// Il2CppName: OnBecameInvisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Rotate::*)()>(&GlobalNamespace::Rotate::OnBecameInvisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Rotate*), "OnBecameInvisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Rotate::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Rotate::*)()>(&GlobalNamespace::Rotate::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Rotate*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Rotate::Randomize
// Il2CppName: Randomize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Rotate::*)()>(&GlobalNamespace::Rotate::Randomize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Rotate*), "Randomize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
