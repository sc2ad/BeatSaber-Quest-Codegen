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
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CuttableBySaber
  class CuttableBySaber;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CuttableBySaber*, "", "CuttableBySaber");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CuttableBySaber
  // [TokenAttribute] Offset: FFFFFFFF
  class CuttableBySaber : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate
    class WasCutBySaberDelegate;
    public:
    // private CuttableBySaber/WasCutBySaberDelegate wasCutBySaberEvent
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate* wasCutBySaberEvent;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private CuttableBySaber/WasCutBySaberDelegate wasCutBySaberEvent
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate*& dyn_wasCutBySaberEvent();
    // public System.Boolean get_canBeCut()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_canBeCut();
    // public System.Void set_canBeCut(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_canBeCut(bool value);
    // public System.Single get_radius()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_radius();
    // public System.Void add_wasCutBySaberEvent(CuttableBySaber/WasCutBySaberDelegate value)
    // Offset: 0x1439818
    void add_wasCutBySaberEvent(::GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate* value);
    // public System.Void remove_wasCutBySaberEvent(CuttableBySaber/WasCutBySaberDelegate value)
    // Offset: 0x14398BC
    void remove_wasCutBySaberEvent(::GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate* value);
    // protected System.Void .ctor()
    // Offset: 0x1439F2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CuttableBySaber* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CuttableBySaber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CuttableBySaber*, creationType>()));
    }
    // protected System.Void CallWasCutBySaberEvent(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x1439960
    void CallWasCutBySaberEvent(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);
    // public System.Void Cut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Cut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);
  }; // CuttableBySaber
  #pragma pack(pop)
  static check_size<sizeof(CuttableBySaber), 24 + sizeof(::GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate*)> __GlobalNamespace_CuttableBySaberSizeCheck;
  static_assert(sizeof(CuttableBySaber) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CuttableBySaber::get_canBeCut
// Il2CppName: get_canBeCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CuttableBySaber::*)()>(&GlobalNamespace::CuttableBySaber::get_canBeCut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CuttableBySaber*), "get_canBeCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CuttableBySaber::set_canBeCut
// Il2CppName: set_canBeCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CuttableBySaber::*)(bool)>(&GlobalNamespace::CuttableBySaber::set_canBeCut)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CuttableBySaber*), "set_canBeCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CuttableBySaber::get_radius
// Il2CppName: get_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CuttableBySaber::*)()>(&GlobalNamespace::CuttableBySaber::get_radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CuttableBySaber*), "get_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CuttableBySaber::add_wasCutBySaberEvent
// Il2CppName: add_wasCutBySaberEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CuttableBySaber::*)(::GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate*)>(&GlobalNamespace::CuttableBySaber::add_wasCutBySaberEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "CuttableBySaber/WasCutBySaberDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CuttableBySaber*), "add_wasCutBySaberEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CuttableBySaber::remove_wasCutBySaberEvent
// Il2CppName: remove_wasCutBySaberEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CuttableBySaber::*)(::GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate*)>(&GlobalNamespace::CuttableBySaber::remove_wasCutBySaberEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "CuttableBySaber/WasCutBySaberDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CuttableBySaber*), "remove_wasCutBySaberEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CuttableBySaber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CuttableBySaber::CallWasCutBySaberEvent
// Il2CppName: CallWasCutBySaberEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CuttableBySaber::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&GlobalNamespace::CuttableBySaber::CallWasCutBySaberEvent)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CuttableBySaber*), "CallWasCutBySaberEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber, cutPoint, orientation, cutDirVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CuttableBySaber::Cut
// Il2CppName: Cut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CuttableBySaber::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&GlobalNamespace::CuttableBySaber::Cut)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CuttableBySaber*), "Cut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber, cutPoint, orientation, cutDirVec});
  }
};
