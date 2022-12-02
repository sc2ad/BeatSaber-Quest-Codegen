// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BezierPath
  class BezierPath;
  // Forward declaring type: VertexPath
  class VertexPath;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PathsHolder
  class PathsHolder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PathsHolder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PathsHolder*, "", "PathsHolder");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PathsHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class PathsHolder : public ::Il2CppObject {
    public:
    public:
    // private readonly BezierPath _bezierPath
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::BezierPath* bezierPath;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BezierPath*) == 0x8);
    // private readonly VertexPath _vertexPath
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::VertexPath* vertexPath;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VertexPath*) == 0x8);
    public:
    // Get instance field reference: private readonly BezierPath _bezierPath
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BezierPath*& dyn__bezierPath();
    // Get instance field reference: private readonly VertexPath _vertexPath
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VertexPath*& dyn__vertexPath();
    // public BezierPath get_bezierPath()
    // Offset: 0x13801F4
    ::GlobalNamespace::BezierPath* get_bezierPath();
    // public VertexPath get_vertexPath()
    // Offset: 0x13801FC
    ::GlobalNamespace::VertexPath* get_vertexPath();
    // public System.Void .ctor(System.Int32 numberOfFixedVertexPathSegments, System.Boolean updateVertexPath)
    // Offset: 0x1380204
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathsHolder* New_ctor(int numberOfFixedVertexPathSegments, bool updateVertexPath) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PathsHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathsHolder*, creationType>(numberOfFixedVertexPathSegments, updateVertexPath)));
    }
    // public System.Void UpdateVertexPathByBezierPath()
    // Offset: 0x1380328
    void UpdateVertexPathByBezierPath();
  }; // PathsHolder
  #pragma pack(pop)
  static check_size<sizeof(PathsHolder), 24 + sizeof(::GlobalNamespace::VertexPath*)> __GlobalNamespace_PathsHolderSizeCheck;
  static_assert(sizeof(PathsHolder) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PathsHolder::get_bezierPath
// Il2CppName: get_bezierPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BezierPath* (GlobalNamespace::PathsHolder::*)()>(&GlobalNamespace::PathsHolder::get_bezierPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PathsHolder*), "get_bezierPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PathsHolder::get_vertexPath
// Il2CppName: get_vertexPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VertexPath* (GlobalNamespace::PathsHolder::*)()>(&GlobalNamespace::PathsHolder::get_vertexPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PathsHolder*), "get_vertexPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PathsHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PathsHolder::UpdateVertexPathByBezierPath
// Il2CppName: UpdateVertexPathByBezierPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PathsHolder::*)()>(&GlobalNamespace::PathsHolder::UpdateVertexPathByBezierPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PathsHolder*), "UpdateVertexPathByBezierPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
