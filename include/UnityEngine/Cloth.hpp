// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Cloth
  class Cloth;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Cloth);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cloth*, "UnityEngine", "Cloth");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Cloth
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 1216E1C
  // [NativeHeaderAttribute] Offset: 1216E1C
  // [NativeClassAttribute] Offset: 1216E1C
  class Cloth : public ::UnityEngine::Component {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0x1216EEC
    // private System.Single <useContinuousCollision>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    float useContinuousCollision;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x1216F28
    // private readonly System.Boolean <selfCollision>k__BackingField
    // Size: 0x1
    // Offset: 0x1C
    bool selfCollision;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single <useContinuousCollision>k__BackingField
    float& dyn_$useContinuousCollision$k__BackingField();
    // Get instance field reference: private readonly System.Boolean <selfCollision>k__BackingField
    bool& dyn_$selfCollision$k__BackingField();
    // public System.Void set_externalAcceleration(UnityEngine.Vector3 value)
    // Offset: 0x2A63EB8
    void set_externalAcceleration(::UnityEngine::Vector3 value);
    // private System.Void set_externalAcceleration_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x2A63F10
    void set_externalAcceleration_Injected(ByRef<::UnityEngine::Vector3> value);
  }; // UnityEngine.Cloth
  #pragma pack(pop)
  static check_size<sizeof(Cloth), 28 + sizeof(bool)> __UnityEngine_ClothSizeCheck;
  static_assert(sizeof(Cloth) == 0x1D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Cloth::set_externalAcceleration
// Il2CppName: set_externalAcceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Cloth::*)(::UnityEngine::Vector3)>(&UnityEngine::Cloth::set_externalAcceleration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cloth*), "set_externalAcceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cloth::set_externalAcceleration_Injected
// Il2CppName: set_externalAcceleration_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Cloth::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Cloth::set_externalAcceleration_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cloth*), "set_externalAcceleration_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
