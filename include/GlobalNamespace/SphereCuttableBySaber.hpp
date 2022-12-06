// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CuttableBySaber
#include "GlobalNamespace/CuttableBySaber.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SphereCollider
  class SphereCollider;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SphereCuttableBySaber
  class SphereCuttableBySaber;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SphereCuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SphereCuttableBySaber*, "", "SphereCuttableBySaber");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: SphereCuttableBySaber
  // [TokenAttribute] Offset: FFFFFFFF
  class SphereCuttableBySaber : public ::GlobalNamespace::CuttableBySaber {
    public:
    public:
    // private UnityEngine.SphereCollider _collider
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::SphereCollider* collider;
    // Field size check
    static_assert(sizeof(::UnityEngine::SphereCollider*) == 0x8);
    // private System.Boolean _canBeCut
    // Size: 0x1
    // Offset: 0x28
    bool canBeCut;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.SphereCollider _collider
    [[deprecated("Use field access instead!")]] ::UnityEngine::SphereCollider*& dyn__collider();
    // Get instance field reference: private System.Boolean _canBeCut
    [[deprecated("Use field access instead!")]] bool& dyn__canBeCut();
    // protected System.Void Awake()
    // Offset: 0x147C400
    void Awake();
    // public override System.Single get_radius()
    // Offset: 0x147C3A0
    // Implemented from: CuttableBySaber
    // Base method: System.Single CuttableBySaber::get_radius()
    float get_radius();
    // public override System.Boolean get_canBeCut()
    // Offset: 0x147C3F8
    // Implemented from: CuttableBySaber
    // Base method: System.Boolean CuttableBySaber::get_canBeCut()
    bool get_canBeCut();
    // public override System.Void set_canBeCut(System.Boolean value)
    // Offset: 0x147C3BC
    // Implemented from: CuttableBySaber
    // Base method: System.Void CuttableBySaber::set_canBeCut(System.Boolean value)
    void set_canBeCut(bool value);
    // public System.Void .ctor()
    // Offset: 0x147C45C
    // Implemented from: CuttableBySaber
    // Base method: System.Void CuttableBySaber::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SphereCuttableBySaber* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SphereCuttableBySaber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SphereCuttableBySaber*, creationType>()));
    }
    // public override System.Void Cut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x147C438
    // Implemented from: CuttableBySaber
    // Base method: System.Void CuttableBySaber::Cut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    void Cut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);
  }; // SphereCuttableBySaber
  #pragma pack(pop)
  static check_size<sizeof(SphereCuttableBySaber), 40 + sizeof(bool)> __GlobalNamespace_SphereCuttableBySaberSizeCheck;
  static_assert(sizeof(SphereCuttableBySaber) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SphereCuttableBySaber::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SphereCuttableBySaber::*)()>(&GlobalNamespace::SphereCuttableBySaber::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SphereCuttableBySaber*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SphereCuttableBySaber::get_radius
// Il2CppName: get_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SphereCuttableBySaber::*)()>(&GlobalNamespace::SphereCuttableBySaber::get_radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SphereCuttableBySaber*), "get_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SphereCuttableBySaber::get_canBeCut
// Il2CppName: get_canBeCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SphereCuttableBySaber::*)()>(&GlobalNamespace::SphereCuttableBySaber::get_canBeCut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SphereCuttableBySaber*), "get_canBeCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SphereCuttableBySaber::set_canBeCut
// Il2CppName: set_canBeCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SphereCuttableBySaber::*)(bool)>(&GlobalNamespace::SphereCuttableBySaber::set_canBeCut)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SphereCuttableBySaber*), "set_canBeCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SphereCuttableBySaber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SphereCuttableBySaber::Cut
// Il2CppName: Cut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SphereCuttableBySaber::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&GlobalNamespace::SphereCuttableBySaber::Cut)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SphereCuttableBySaber*), "Cut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber, cutPoint, orientation, cutDirVec});
  }
};
