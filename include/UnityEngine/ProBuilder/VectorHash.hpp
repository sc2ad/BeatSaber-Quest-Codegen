// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: VectorHash
  class VectorHash;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::VectorHash);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::VectorHash*, "UnityEngine.ProBuilder", "VectorHash");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.VectorHash
  // [TokenAttribute] Offset: FFFFFFFF
  class VectorHash : public ::Il2CppObject {
    public:
    // static field const value: static public System.Single FltCompareResolution
    static constexpr const float FltCompareResolution = 1000;
    // Get static field: static public System.Single FltCompareResolution
    static float _get_FltCompareResolution();
    // Set static field: static public System.Single FltCompareResolution
    static void _set_FltCompareResolution(float value);
    // static private System.Int32 HashFloat(System.Single f)
    // Offset: 0x2957540
    static int HashFloat(float f);
    // static public System.Int32 GetHashCode(UnityEngine.Vector2 v)
    // Offset: 0x2957580
    static int GetHashCode(::UnityEngine::Vector2 v);
    // static public System.Int32 GetHashCode(UnityEngine.Vector3 v)
    // Offset: 0x29575FC
    static int GetHashCode(::UnityEngine::Vector3 v);
    // static public System.Int32 GetHashCode(UnityEngine.Vector4 v)
    // Offset: 0x29576AC
    static int GetHashCode(::UnityEngine::Vector4 v);
  }; // UnityEngine.ProBuilder.VectorHash
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VectorHash::HashFloat
// Il2CppName: HashFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&UnityEngine::ProBuilder::VectorHash::HashFloat)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VectorHash*), "HashFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VectorHash::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Vector2)>(&UnityEngine::ProBuilder::VectorHash::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VectorHash*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VectorHash::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::VectorHash::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VectorHash*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::VectorHash::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Vector4)>(&UnityEngine::ProBuilder::VectorHash::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::VectorHash*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
