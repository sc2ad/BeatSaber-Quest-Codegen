// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
#include "UnityEngine/ProBuilder/Poly2Tri/Triangulatable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: TriangulationMode
  struct TriangulationMode;
  // Forward declaring type: PolygonPoint
  class PolygonPoint;
  // Forward declaring type: TriangulationContext
  class TriangulationContext;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: Polygon
  class Polygon;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::Polygon);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::Polygon*, "UnityEngine.ProBuilder.Poly2Tri", "Polygon");
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.Polygon
  // [TokenAttribute] Offset: FFFFFFFF
  class Polygon : public ::Il2CppObject/*, public ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*/ {
    public:
    public:
    // protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> _points
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*) == 0x8);
    // protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> _steinerPoints
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* steinerPoints;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*) == 0x8);
    // protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon> _holes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* holes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>*) == 0x8);
    // protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> _triangles
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* triangles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable
    operator ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable() noexcept {
      return *reinterpret_cast<::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>(this);
    }
    // Creating interface conversion operator: i_Triangulatable
    inline ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* i_Triangulatable() noexcept {
      return reinterpret_cast<::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>(this);
    }
    // Get instance field reference: protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> _points
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& dyn__points();
    // Get instance field reference: protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> _steinerPoints
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& dyn__steinerPoints();
    // Get instance field reference: protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon> _holes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>*& dyn__holes();
    // Get instance field reference: protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> _triangles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*& dyn__triangles();
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode get_TriangulationMode()
    // Offset: 0x2B1C618
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();
    // public System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> get_Triangles()
    // Offset: 0x2B1C6B8
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles();
    // public System.Void .ctor(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint> points)
    // Offset: 0x2B1C1F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Polygon* New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Poly2Tri::Polygon::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Polygon*, creationType>(points)));
    }
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint> points)
    // Offset: 0x2B1C58C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Polygon* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Poly2Tri::Polygon::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Polygon*, creationType>(points)));
    }
    // public System.Void AddHole(UnityEngine.ProBuilder.Poly2Tri.Polygon poly)
    // Offset: 0x2B1C620
    void AddHole(::UnityEngine::ProBuilder::Poly2Tri::Polygon* poly);
    // public System.Void AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x2B1C6C0
    void AddTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> list)
    // Offset: 0x2B1C728
    void AddTriangles(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list);
    // public System.Void Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext tcx)
    // Offset: 0x2B1C790
    void Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);
  }; // UnityEngine.ProBuilder.Poly2Tri.Polygon
  #pragma pack(pop)
  static check_size<sizeof(Polygon), 40 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)> __UnityEngine_ProBuilder_Poly2Tri_PolygonSizeCheck;
  static_assert(sizeof(Polygon) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::Polygon::get_TriangulationMode
// Il2CppName: get_TriangulationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode (UnityEngine::ProBuilder::Poly2Tri::Polygon::*)()>(&UnityEngine::ProBuilder::Poly2Tri::Polygon::get_TriangulationMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::Polygon*), "get_TriangulationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::Polygon::get_Triangles
// Il2CppName: get_Triangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* (UnityEngine::ProBuilder::Poly2Tri::Polygon::*)()>(&UnityEngine::ProBuilder::Poly2Tri::Polygon::get_Triangles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::Polygon*), "get_Triangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::Polygon::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::Polygon::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::Polygon::AddHole
// Il2CppName: AddHole
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::UnityEngine::ProBuilder::Poly2Tri::Polygon*)>(&UnityEngine::ProBuilder::Poly2Tri::Polygon::AddHole)> {
  static const MethodInfo* get() {
    static auto* poly = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "Polygon")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::Polygon*), "AddHole", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{poly});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::Polygon::AddTriangle
// Il2CppName: AddTriangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::Polygon::AddTriangle)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::Polygon*), "AddTriangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::Polygon::AddTriangles
// Il2CppName: AddTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)>(&UnityEngine::ProBuilder::Poly2Tri::Polygon::AddTriangles)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::Polygon*), "AddTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::Polygon::Prepare
// Il2CppName: Prepare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*)>(&UnityEngine::ProBuilder::Poly2Tri::Polygon::Prepare)> {
  static const MethodInfo* get() {
    static auto* tcx = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::Polygon*), "Prepare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tcx});
  }
};
