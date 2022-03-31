// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: WingedEdge
  class WingedEdge;
  // Forward declaring type: EdgeLookup
  struct EdgeLookup;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Smoothing
  class Smoothing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Smoothing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Smoothing*, "UnityEngine.ProBuilder", "Smoothing");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Smoothing
  // [TokenAttribute] Offset: FFFFFFFF
  class Smoothing : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ProBuilder::Smoothing::$$c
    class $$c;
    // static field const value: static System.Int32 smoothingGroupNone
    static constexpr const int smoothingGroupNone = 0;
    // Get static field: static System.Int32 smoothingGroupNone
    static int _get_smoothingGroupNone();
    // Set static field: static System.Int32 smoothingGroupNone
    static void _set_smoothingGroupNone(int value);
    // static field const value: static System.Int32 smoothRangeMin
    static constexpr const int smoothRangeMin = 1;
    // Get static field: static System.Int32 smoothRangeMin
    static int _get_smoothRangeMin();
    // Set static field: static System.Int32 smoothRangeMin
    static void _set_smoothRangeMin(int value);
    // static field const value: static System.Int32 smoothRangeMax
    static constexpr const int smoothRangeMax = 24;
    // Get static field: static System.Int32 smoothRangeMax
    static int _get_smoothRangeMax();
    // Set static field: static System.Int32 smoothRangeMax
    static void _set_smoothRangeMax(int value);
    // static field const value: static System.Int32 hardRangeMin
    static constexpr const int hardRangeMin = 25;
    // Get static field: static System.Int32 hardRangeMin
    static int _get_hardRangeMin();
    // Set static field: static System.Int32 hardRangeMin
    static void _set_hardRangeMin(int value);
    // static field const value: static System.Int32 hardRangeMax
    static constexpr const int hardRangeMax = 42;
    // Get static field: static System.Int32 hardRangeMax
    static int _get_hardRangeMax();
    // Set static field: static System.Int32 hardRangeMax
    static void _set_hardRangeMax(int value);
    // static public System.Int32 GetUnusedSmoothingGroup(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x29501F4
    static int GetUnusedSmoothingGroup(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static private System.Int32 GetNextUnusedSmoothingGroup(System.Int32 start, System.Collections.Generic.HashSet`1<System.Int32> used)
    // Offset: 0x2950398
    static int GetNextUnusedSmoothingGroup(int start, ::System::Collections::Generic::HashSet_1<int>* used);
    // static public System.Boolean IsSmooth(System.Int32 index)
    // Offset: 0x2950450
    static bool IsSmooth(int index);
    // static public System.Void ApplySmoothingGroups(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Single angleThreshold)
    // Offset: 0x2950470
    static void ApplySmoothingGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, float angleThreshold);
    // static System.Void ApplySmoothingGroups(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Single angleThreshold, UnityEngine.Vector3[] normals)
    // Offset: 0x2950478
    static void ApplySmoothingGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, float angleThreshold, ::ArrayW<::UnityEngine::Vector3> normals);
    // static private System.Boolean FindSoftEdgesRecursive(UnityEngine.Vector3[] normals, UnityEngine.ProBuilder.WingedEdge wing, System.Single angleThreshold, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> processed)
    // Offset: 0x2951104
    static bool FindSoftEdgesRecursive(::ArrayW<::UnityEngine::Vector3> normals, ::UnityEngine::ProBuilder::WingedEdge* wing, float angleThreshold, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* processed);
    // static private System.Boolean IsSoftEdge(UnityEngine.Vector3[] normals, UnityEngine.ProBuilder.EdgeLookup left, UnityEngine.ProBuilder.EdgeLookup right, System.Single threshold)
    // Offset: 0x2951404
    static bool IsSoftEdge(::ArrayW<::UnityEngine::Vector3> normals, ::UnityEngine::ProBuilder::EdgeLookup left, ::UnityEngine::ProBuilder::EdgeLookup right, float threshold);
  }; // UnityEngine.ProBuilder.Smoothing
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Smoothing::GetUnusedSmoothingGroup
// Il2CppName: GetUnusedSmoothingGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::Smoothing::GetUnusedSmoothingGroup)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Smoothing*), "GetUnusedSmoothingGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Smoothing::GetNextUnusedSmoothingGroup
// Il2CppName: GetNextUnusedSmoothingGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, ::System::Collections::Generic::HashSet_1<int>*)>(&UnityEngine::ProBuilder::Smoothing::GetNextUnusedSmoothingGroup)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* used = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Smoothing*), "GetNextUnusedSmoothingGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, used});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Smoothing::IsSmooth
// Il2CppName: IsSmooth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::ProBuilder::Smoothing::IsSmooth)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Smoothing*), "IsSmooth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Smoothing::ApplySmoothingGroups
// Il2CppName: ApplySmoothingGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, float)>(&UnityEngine::ProBuilder::Smoothing::ApplySmoothingGroups)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* angleThreshold = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Smoothing*), "ApplySmoothingGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces, angleThreshold});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Smoothing::ApplySmoothingGroups
// Il2CppName: ApplySmoothingGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, float, ::ArrayW<::UnityEngine::Vector3>)>(&UnityEngine::ProBuilder::Smoothing::ApplySmoothingGroups)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* angleThreshold = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* normals = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Smoothing*), "ApplySmoothingGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces, angleThreshold, normals});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Smoothing::FindSoftEdgesRecursive
// Il2CppName: FindSoftEdgesRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::ProBuilder::WingedEdge*, float, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::Smoothing::FindSoftEdgesRecursive)> {
  static const MethodInfo* get() {
    static auto* normals = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* wing = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    static auto* angleThreshold = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* processed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Smoothing*), "FindSoftEdgesRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normals, wing, angleThreshold, processed});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Smoothing::IsSoftEdge
// Il2CppName: IsSoftEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::EdgeLookup, float)>(&UnityEngine::ProBuilder::Smoothing::IsSoftEdge)> {
  static const MethodInfo* get() {
    static auto* normals = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* left = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "EdgeLookup")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "EdgeLookup")->byval_arg;
    static auto* threshold = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Smoothing*), "IsSoftEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normals, left, right, threshold});
  }
};
