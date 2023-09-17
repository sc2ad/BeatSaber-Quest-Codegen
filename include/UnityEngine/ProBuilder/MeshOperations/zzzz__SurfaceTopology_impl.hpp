#pragma once
namespace {
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__SurfaceTopology_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WindingOrder_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::*)()>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2a66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c._ToTriangles_b__0_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::*)(::UnityEngine::ProBuilder::FaceRebuildData)>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::_ToTriangles_b__0_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a2a674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>::get(),
                            "<ToTriangles>b__0_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c._GetWindingOrder_b__3_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::*)(::UnityEngine::ProBuilder::Vertex)>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::_GetWindingOrder_b__3_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a2a68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>::get(),
                            "<GetWindingOrder>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Vertex>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::__set___9(::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c value)  {
::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>::get>(std::forward<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>(value));
}
 ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::__get___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>::get>();
}
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::__set___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face>, "<>9__0_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>::get>(std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face>>(value));
}
 ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::__get___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face>, "<>9__0_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>::get>();
}
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::__set___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>::get>(std::forward<::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3>>(value));
}
 ::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3> ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::__get___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>::get>();
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>())) {}
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::ProBuilder::Face ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::_ToTriangles_b__0_0(::UnityEngine::ProBuilder::FaceRebuildData x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>::get(),
                            "<ToTriangles>b__0_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::UnityEngine::Vector3 ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c::_GetWindingOrder_b__3_0(::UnityEngine::ProBuilder::Vertex x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c>::get(),
                            "<GetWindingOrder>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Vertex>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.ToTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face> (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ToTriangles)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x2a28874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "ToTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.BreakFaceIntoTris
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData> (*)(::UnityEngine::ProBuilder::Face, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex>, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::BreakFaceIntoTris)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x2a28e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "BreakFaceIntoTris",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.GetWindingOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::WindingOrder (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a2944c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "GetWindingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.GetWindingOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::WindingOrder (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex>, ::System::Collections::Generic::IList_1<int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2a29708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "GetWindingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.GetWindingOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::WindingOrder (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>)>(&::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2a29484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "GetWindingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.FlipEdge
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::FlipEdge)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x2a298a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "FlipEdge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.ConformNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ConformNormals)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x2a29c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "ConformNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.GetWindingFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::WingedEdge, bool, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face,bool>)>(&::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingFlags)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2a2a12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "GetWindingFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.ConformOppositeNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult (*)(::UnityEngine::ProBuilder::WingedEdge)>(&::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ConformOppositeNormal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2a2a374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "ConformOppositeNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.GetCommonEdgeInWindingOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (*)(::UnityEngine::ProBuilder::WingedEdge)>(&::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetCommonEdgeInWindingOrder)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2a2a218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "GetCommonEdgeInWindingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.MatchNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::Face, ::UnityEngine::ProBuilder::Face, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::MatchNormal)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2a2a494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "MatchNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ToTriangles(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face> faces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "ToTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces);
}
 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData> ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::BreakFaceIntoTris(::UnityEngine::ProBuilder::Face face, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex> vertices, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "BreakFaceIntoTris",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData>, false>(nullptr, ___internal_method, face, vertices, lookup);
}
 ::UnityEngine::ProBuilder::WindingOrder ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "GetWindingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WindingOrder, false>(nullptr, ___internal_method, mesh, face);
}
 ::UnityEngine::ProBuilder::WindingOrder ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex> vertices, ::System::Collections::Generic::IList_1<int32_t> indexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "GetWindingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WindingOrder, false>(nullptr, ___internal_method, vertices, indexes);
}
 ::UnityEngine::ProBuilder::WindingOrder ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder(::System::Collections::Generic::IList_1<::UnityEngine::Vector2> points)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "GetWindingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WindingOrder, false>(nullptr, ___internal_method, points);
}
 bool ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::FlipEdge(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "FlipEdge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, face);
}
 ::UnityEngine::ProBuilder::ActionResult ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ConformNormals(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "ConformNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult, false>(nullptr, ___internal_method, mesh, faces);
}
 void ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingFlags(::UnityEngine::ProBuilder::WingedEdge edge, bool flag, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face,bool> flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "GetWindingFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, edge, flag, flags);
}
 ::UnityEngine::ProBuilder::ActionResult ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ConformOppositeNormal(::UnityEngine::ProBuilder::WingedEdge source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "ConformOppositeNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult, false>(nullptr, ___internal_method, source);
}
 ::UnityEngine::ProBuilder::Edge ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetCommonEdgeInWindingOrder(::UnityEngine::ProBuilder::WingedEdge wing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "GetCommonEdgeInWindingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(nullptr, ___internal_method, wing);
}
 void ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::MatchNormal(::UnityEngine::ProBuilder::Face source, ::UnityEngine::ProBuilder::Face target, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology>::get(),
                            "MatchNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, target, lookup);
}
} // end anonymous namespace
