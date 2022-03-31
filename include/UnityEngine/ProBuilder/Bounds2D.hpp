// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Bounds2D
  class Bounds2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Bounds2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Bounds2D*, "UnityEngine.ProBuilder", "Bounds2D");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Bounds2D
  // [TokenAttribute] Offset: FFFFFFFF
  class Bounds2D : public ::Il2CppObject {
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
    // public UnityEngine.Vector2 center
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Vector2 center;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_Size
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Vector2 m_Size;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_Extents
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2 m_Extents;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Vector2 center
    ::UnityEngine::Vector2& dyn_center();
    // Get instance field reference: private UnityEngine.Vector2 m_Size
    ::UnityEngine::Vector2& dyn_m_Size();
    // Get instance field reference: private UnityEngine.Vector2 m_Extents
    ::UnityEngine::Vector2& dyn_m_Extents();
    // public UnityEngine.Vector2 get_size()
    // Offset: 0x24B16AC
    ::UnityEngine::Vector2 get_size();
    // public System.Void set_size(UnityEngine.Vector2 value)
    // Offset: 0x24B16B4
    void set_size(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_extents()
    // Offset: 0x24B16CC
    ::UnityEngine::Vector2 get_extents();
    // public UnityEngine.Vector2[] get_corners()
    // Offset: 0x24B16D4
    ::ArrayW<::UnityEngine::Vector2> get_corners();
    // public System.Void .ctor(UnityEngine.Vector2 center, UnityEngine.Vector2 size)
    // Offset: 0x24B18A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bounds2D* New_ctor(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Bounds2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bounds2D*, creationType>(center, size)));
    }
    // public System.Void .ctor(System.Collections.Generic.IList`1<UnityEngine.Vector2> points)
    // Offset: 0x24B196C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bounds2D* New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Bounds2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bounds2D*, creationType>(points)));
    }
    // public System.Void .ctor(System.Collections.Generic.IList`1<UnityEngine.Vector2> points, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x24B1D2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bounds2D* New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int>* indexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Bounds2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bounds2D*, creationType>(points, indexes)));
    }
    // System.Void .ctor(UnityEngine.Vector3[] points, UnityEngine.ProBuilder.Edge[] edges)
    // Offset: 0x24B2374
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bounds2D* New_ctor(::ArrayW<::UnityEngine::Vector3> points, ::ArrayW<::UnityEngine::ProBuilder::Edge> edges) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Bounds2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bounds2D*, creationType>(points, edges)));
    }
    // public System.Void .ctor(UnityEngine.Vector2[] points, System.Int32 length)
    // Offset: 0x24B2708
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bounds2D* New_ctor(::ArrayW<::UnityEngine::Vector2> points, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Bounds2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bounds2D*, creationType>(points, length)));
    }
    // public System.Boolean ContainsPoint(UnityEngine.Vector2 point)
    // Offset: 0x24B2970
    bool ContainsPoint(::UnityEngine::Vector2 point);
    // public System.Boolean IntersectsLineSegment(UnityEngine.Vector2 lineStart, UnityEngine.Vector2 lineEnd)
    // Offset: 0x24B29C4
    bool IntersectsLineSegment(::UnityEngine::Vector2 lineStart, ::UnityEngine::Vector2 lineEnd);
    // public System.Boolean Intersects(UnityEngine.ProBuilder.Bounds2D bounds)
    // Offset: 0x24B2B5C
    bool Intersects(::UnityEngine::ProBuilder::Bounds2D* bounds);
    // public System.Boolean Intersects(UnityEngine.Rect rect)
    // Offset: 0x24B2C84
    bool Intersects(::UnityEngine::Rect rect);
    // public System.Void SetWithPoints(System.Collections.Generic.IList`1<UnityEngine.Vector2> points)
    // Offset: 0x24B1A10
    void SetWithPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points);
    // public System.Void SetWithPoints(System.Collections.Generic.IList`1<UnityEngine.Vector2> points, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x24B1DD8
    void SetWithPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.Vector2 Center(System.Collections.Generic.IList`1<UnityEngine.Vector2> points)
    // Offset: 0x24B2DCC
    static ::UnityEngine::Vector2 Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points);
    // static public UnityEngine.Vector2 Center(System.Collections.Generic.IList`1<UnityEngine.Vector2> points, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x24B30B8
    static ::UnityEngine::Vector2 Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.Vector2 Size(System.Collections.Generic.IList`1<UnityEngine.Vector2> points, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x24B356C
    static ::UnityEngine::Vector2 Size(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Vector2 Center(System.Collections.Generic.IList`1<UnityEngine.Vector4> points, System.Collections.Generic.IEnumerable`1<System.Int32> indexes)
    // Offset: 0x24B3A14
    static ::UnityEngine::Vector2 Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* points, ::System::Collections::Generic::IEnumerable_1<int>* indexes);
    // public System.Void .ctor()
    // Offset: 0x24B1818
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bounds2D* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Bounds2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bounds2D*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x24B3EF8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.ProBuilder.Bounds2D
  #pragma pack(pop)
  static check_size<sizeof(Bounds2D), 32 + sizeof(::UnityEngine::Vector2)> __UnityEngine_ProBuilder_Bounds2DSizeCheck;
  static_assert(sizeof(Bounds2D) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::ProBuilder::Bounds2D::*)()>(&UnityEngine::ProBuilder::Bounds2D::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::set_size
// Il2CppName: set_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Bounds2D::*)(::UnityEngine::Vector2)>(&UnityEngine::ProBuilder::Bounds2D::set_size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "set_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::get_extents
// Il2CppName: get_extents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::ProBuilder::Bounds2D::*)()>(&UnityEngine::ProBuilder::Bounds2D::get_extents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "get_extents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::get_corners
// Il2CppName: get_corners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (UnityEngine::ProBuilder::Bounds2D::*)()>(&UnityEngine::ProBuilder::Bounds2D::get_corners)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "get_corners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::ContainsPoint
// Il2CppName: ContainsPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Bounds2D::*)(::UnityEngine::Vector2)>(&UnityEngine::ProBuilder::Bounds2D::ContainsPoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "ContainsPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::IntersectsLineSegment
// Il2CppName: IntersectsLineSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Bounds2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&UnityEngine::ProBuilder::Bounds2D::IntersectsLineSegment)> {
  static const MethodInfo* get() {
    static auto* lineStart = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* lineEnd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "IntersectsLineSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineStart, lineEnd});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::Intersects
// Il2CppName: Intersects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Bounds2D::*)(::UnityEngine::ProBuilder::Bounds2D*)>(&UnityEngine::ProBuilder::Bounds2D::Intersects)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Bounds2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "Intersects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::Intersects
// Il2CppName: Intersects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Bounds2D::*)(::UnityEngine::Rect)>(&UnityEngine::ProBuilder::Bounds2D::Intersects)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "Intersects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::SetWithPoints
// Il2CppName: SetWithPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Bounds2D::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*)>(&UnityEngine::ProBuilder::Bounds2D::SetWithPoints)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "SetWithPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::SetWithPoints
// Il2CppName: SetWithPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Bounds2D::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::Bounds2D::SetWithPoints)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "SetWithPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::Center
// Il2CppName: Center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*)>(&UnityEngine::ProBuilder::Bounds2D::Center)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "Center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::Center
// Il2CppName: Center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::Bounds2D::Center)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "Center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::Size
// Il2CppName: Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::Bounds2D::Size)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::Center
// Il2CppName: Center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::Bounds2D::Center)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "Center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Bounds2D::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::Bounds2D::*)()>(&UnityEngine::ProBuilder::Bounds2D::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Bounds2D*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
