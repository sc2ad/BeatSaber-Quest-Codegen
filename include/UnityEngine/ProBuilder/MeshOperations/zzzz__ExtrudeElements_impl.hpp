#pragma once
namespace {
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ExtrudeElements_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ExtrudeMethod_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::*)()>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a1f1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c._DetachFaces_b__3_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::*)(::UnityEngine::ProBuilder::FaceRebuildData)>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::_DetachFaces_b__3_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a1f1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>::get(),
                            "<DetachFaces>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c._ExtrudePerFace_b__4_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::*)(::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::_ExtrudePerFace_b__4_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a1f1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>::get(),
                            "<ExtrudePerFace>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::__set___9(::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c value)  {
::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>::get>(std::forward<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>(value));
}
 ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::__get___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>::get>();
}
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::__set___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>::get>(std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face>>(value));
}
 ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::__get___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>::get>();
}
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::__set___9__4_0(::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t>, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>::get>(std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t>>(value));
}
 ::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t> ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::__get___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t>, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>::get>();
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>())) {}
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::ProBuilder::Face ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::_DetachFaces_b__3_0(::UnityEngine::ProBuilder::FaceRebuildData x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>::get(),
                            "<DetachFaces>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c::_ExtrudePerFace_b__4_0(::UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c>::get(),
                            "<ExtrudePerFace>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.Extrude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face> (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>, ::UnityEngine::ProBuilder::ExtrudeMethod, float_t)>(&::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::Extrude)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a1a4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "Extrude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ExtrudeMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.Extrude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Edge> (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>, float_t, bool, bool)>(&::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::Extrude)> {
  constexpr static std::size_t size = 0x111c;
  constexpr static std::size_t addrs = 0x2a1cbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "Extrude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.DetachFaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::DetachFaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a1de94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "DetachFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.DetachFaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>, bool)>(&::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::DetachFaces)> {
  constexpr static std::size_t size = 0xb00;
  constexpr static std::size_t addrs = 0x2a1de9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "DetachFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.ExtrudePerFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face> (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>, float_t)>(&::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudePerFace)> {
  constexpr static std::size_t size = 0xb8c;
  constexpr static std::size_t addrs = 0x2a1a4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "ExtrudePerFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.ExtrudeAsGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face> (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>, bool, float_t)>(&::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudeAsGroups)> {
  constexpr static std::size_t size = 0x1b64;
  constexpr static std::size_t addrs = 0x2a1b080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "ExtrudeAsGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.GetFaceGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face>> (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge>)>(&::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::GetFaceGroups)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x2a1e99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "GetFaceGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.GetPerimeterEdges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup,::UnityEngine::ProBuilder::Face> (*)(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face>, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::GetPerimeterEdges)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x2a1ede0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "GetPerimeterEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::Extrude(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces, ::UnityEngine::ProBuilder::ExtrudeMethod method, float_t distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "Extrude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ExtrudeMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces, method, distance);
}
 ::ArrayW<::UnityEngine::ProBuilder::Edge> ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::Extrude(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> edges, float_t distance, bool extrudeAsGroup, bool enableManifoldExtrude)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "Extrude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Edge>, false>(nullptr, ___internal_method, mesh, edges, distance, extrudeAsGroup, enableManifoldExtrude);
}
 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::DetachFaces(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "DetachFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces);
}
 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::DetachFaces(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces, bool deleteSourceFaces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "DetachFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces, deleteSourceFaces);
}
 ::ArrayW<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudePerFace(::UnityEngine::ProBuilder::ProBuilderMesh pb, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces, float_t distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "ExtrudePerFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, pb, faces, distance);
}
 ::ArrayW<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudeAsGroups(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces, bool compensateAngleVertexDistance, float_t distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "ExtrudeAsGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces, compensateAngleVertexDistance, distance);
}
 ::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face>> ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::GetFaceGroups(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge> wings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "GetFaceGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face>>, false>(nullptr, ___internal_method, wings);
}
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup,::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::GetPerimeterEdges(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face> faces, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements>::get(),
                            "GetPerimeterEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup,::UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, faces, lookup);
}
} // end anonymous namespace
