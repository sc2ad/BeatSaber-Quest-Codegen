// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: TransformUtility
  class TransformUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::TransformUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::TransformUtility*, "UnityEngine.ProBuilder", "TransformUtility");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.TransformUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TransformUtility : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform[]> s_ChildStack
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Transform*>>* _get_s_ChildStack();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform[]> s_ChildStack
    static void _set_s_ChildStack(::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Transform*>>* value);
    // static private System.Void .cctor()
    // Offset: 0x2A01C88
    static void _cctor();
    // static System.Void UnparentChildren(UnityEngine.Transform t)
    // Offset: 0x2A01458
    static void UnparentChildren(::UnityEngine::Transform* t);
    // static System.Void ReparentChildren(UnityEngine.Transform t)
    // Offset: 0x2A015A8
    static void ReparentChildren(::UnityEngine::Transform* t);
    // static public UnityEngine.ProBuilder.Vertex TransformVertex(UnityEngine.Transform transform, UnityEngine.ProBuilder.Vertex vertex)
    // Offset: 0x2A016E0
    static ::UnityEngine::ProBuilder::Vertex* TransformVertex(::UnityEngine::Transform* transform, ::UnityEngine::ProBuilder::Vertex* vertex);
    // static public UnityEngine.ProBuilder.Vertex InverseTransformVertex(UnityEngine.Transform transform, UnityEngine.ProBuilder.Vertex vertex)
    // Offset: 0x2A01A94
    static ::UnityEngine::ProBuilder::Vertex* InverseTransformVertex(::UnityEngine::Transform* transform, ::UnityEngine::ProBuilder::Vertex* vertex);
  }; // UnityEngine.ProBuilder.TransformUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TransformUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::TransformUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TransformUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TransformUtility::UnparentChildren
// Il2CppName: UnparentChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(&UnityEngine::ProBuilder::TransformUtility::UnparentChildren)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TransformUtility*), "UnparentChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TransformUtility::ReparentChildren
// Il2CppName: ReparentChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(&UnityEngine::ProBuilder::TransformUtility::ReparentChildren)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TransformUtility*), "ReparentChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TransformUtility::TransformVertex
// Il2CppName: TransformVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::Transform*, ::UnityEngine::ProBuilder::Vertex*)>(&UnityEngine::ProBuilder::TransformUtility::TransformVertex)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* vertex = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TransformUtility*), "TransformVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, vertex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TransformUtility::InverseTransformVertex
// Il2CppName: InverseTransformVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::Transform*, ::UnityEngine::ProBuilder::Vertex*)>(&UnityEngine::ProBuilder::TransformUtility::InverseTransformVertex)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* vertex = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TransformUtility*), "InverseTransformVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, vertex});
  }
};
