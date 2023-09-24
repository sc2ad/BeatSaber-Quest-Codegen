#pragma once
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ElementSelection_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ElementSelection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)()>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a1a18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._GetPerimeterEdges_b__5_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(UnityEngine::ProBuilder::Face)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetPerimeterEdges_b__5_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a1a194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetPerimeterEdges>b__5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._GetPerimeterEdges_b__5_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetPerimeterEdges_b__5_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a1a1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetPerimeterEdges>b__5_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._GetPerimeterEdges_b__5_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetPerimeterEdges_b__5_2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a1a204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetPerimeterEdges>b__5_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._GetPerimeterFaces_b__7_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetPerimeterFaces_b__7_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a1a264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetPerimeterFaces>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._GetPerimeterFaces_b__7_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Face (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetPerimeterFaces_b__7_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a1a2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetPerimeterFaces>b__7_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._GetEdgeRing_b__10_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(UnityEngine::ProBuilder::EdgeLookup)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeRing_b__10_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a1a31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeRing>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._GetEdgeRingIterative_b__11_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(UnityEngine::ProBuilder::EdgeLookup)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeRingIterative_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a1a324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeRingIterative>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._GetEdgeLoop_b__12_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(UnityEngine::ProBuilder::EdgeLookup)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeLoop_b__12_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a1a32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeLoop>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._GetEdgeLoopIterative_b__13_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(UnityEngine::ProBuilder::EdgeLookup)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeLoopIterative_b__13_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a1a334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeLoopIterative>b__13_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._GetEdgeLoopInternal_b__14_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(UnityEngine::ProBuilder::WingedEdge)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeLoopInternal_b__14_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a1a33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeLoopInternal>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._GetEdgeLoopInternalIterative_b__15_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(UnityEngine::ProBuilder::WingedEdge)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeLoopInternalIterative_b__15_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a1a354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeLoopInternalIterative>b__15_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._GetEdgeLoopInternalIterative_b__15_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(UnityEngine::ProBuilder::WingedEdge)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeLoopInternalIterative_b__15_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a1a36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeLoopInternalIterative>b__15_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._FindHoles_b__26_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(UnityEngine::ProBuilder::WingedEdge)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_FindHoles_b__26_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a1a384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<FindHoles>b__26_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c._FindHoles_b__27_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::*)(UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>, UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_FindHoles_b__27_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a1a39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<FindHoles>b__27_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c value)  {
::cordl_internals::setStaticField<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>(value));
}
 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__5_0(System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__5_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__5_1(System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,bool> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,bool>, "<>9__5_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,bool>>(value));
}
 System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,bool> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__5_1()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,bool>, "<>9__5_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__5_2(System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,UnityEngine::ProBuilder::Edge>, "<>9__5_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,UnityEngine::ProBuilder::Edge>>(value));
}
 System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__5_2()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,UnityEngine::ProBuilder::Edge>, "<>9__5_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__7_0(System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,bool> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,bool>, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,bool>>(value));
}
 System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,bool> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__7_0()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,bool>, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__7_1(System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,UnityEngine::ProBuilder::Face> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,UnityEngine::ProBuilder::Face>, "<>9__7_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,UnityEngine::ProBuilder::Face>>(value));
}
 System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,UnityEngine::ProBuilder::Face> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__7_1()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,UnityEngine::ProBuilder::Face>, "<>9__7_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__10_0(System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>, "<>9__10_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__10_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>, "<>9__10_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__11_0(System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__11_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__12_0(System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__12_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__13_0(System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>, "<>9__13_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__13_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>, "<>9__13_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__14_0(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__14_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__15_0(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__15_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__15_1(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>, "<>9__15_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__15_1()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>, "<>9__15_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__26_0(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>, "<>9__26_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__26_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>, "<>9__26_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__set___9__27_0(System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>> value)  {
::cordl_internals::setStaticField<System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>>, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>(std::forward<System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>>>(value));
}
 System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::__get___9__27_0()  {
return ::cordl_internals::getStaticField<System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>>, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get>();
}
 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::New_ctor()  {
UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>())};
return o;
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetPerimeterEdges_b__5_0(UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetPerimeterEdges>b__5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 bool UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetPerimeterEdges_b__5_1(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetPerimeterEdges>b__5_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetPerimeterEdges_b__5_2(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetPerimeterEdges>b__5_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method, x);
}
 bool UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetPerimeterFaces_b__7_0(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetPerimeterFaces>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Face UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetPerimeterFaces_b__7_1(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetPerimeterFaces>b__7_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Face, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeRing_b__10_0(UnityEngine::ProBuilder::EdgeLookup x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeRing>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeRingIterative_b__11_0(UnityEngine::ProBuilder::EdgeLookup x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeRingIterative>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeLoop_b__12_0(UnityEngine::ProBuilder::EdgeLookup x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeLoop>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeLoopIterative_b__13_0(UnityEngine::ProBuilder::EdgeLookup x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeLoopIterative>b__13_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeLoopInternal_b__14_0(UnityEngine::ProBuilder::WingedEdge x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeLoopInternal>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeLoopInternalIterative_b__15_0(UnityEngine::ProBuilder::WingedEdge x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeLoopInternalIterative>b__15_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_GetEdgeLoopInternalIterative_b__15_1(UnityEngine::ProBuilder::WingedEdge x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<GetEdgeLoopInternalIterative>b__15_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_FindHoles_b__26_0(UnityEngine::ProBuilder::WingedEdge x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<FindHoles>b__26_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c::_FindHoles_b__27_0(UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t> x, UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t> y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c>::get(),
                            "<FindHoles>b__27_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x, y);
}
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0::*)()>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a1a3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0._GetFaceLoop_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0::*)(UnityEngine::ProBuilder::WingedEdge)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0::_GetFaceLoop_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a1a3fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0>::get(),
                            "<GetFaceLoop>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0::__set_face(UnityEngine::ProBuilder::Face value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::Face, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::Face>(value));
}
constexpr UnityEngine::ProBuilder::Face UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0::__get_face() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::Face, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0::New_ctor()  {
UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0 o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0>())};
return o;
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0::_GetFaceLoop_b__0(UnityEngine::ProBuilder::WingedEdge x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0>::get(),
                            "<GetFaceLoop>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::*)()>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a1a420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0._FindHoles_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::*)(UnityEngine::ProBuilder::WingedEdge)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::_FindHoles_b__1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a1a428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0>::get(),
                            "<FindHoles>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0._FindHoles_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::*)(UnityEngine::ProBuilder::WingedEdge)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::_FindHoles_b__2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a1a484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0>::get(),
                            "<FindHoles>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::__set_common(System::Collections::Generic::HashSet_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<int32_t>>(value));
}
constexpr System::Collections::Generic::HashSet_1<int32_t> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::__get_common() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::__set___9__1(System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool> value)  {
::cordl_internals::setInstanceField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool>>(value));
}
constexpr System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::__get___9__1() const {
return ::cordl_internals::getInstanceField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::__set___9__2(System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool> value)  {
::cordl_internals::setInstanceField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool>>(value));
}
constexpr System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::__get___9__2() const {
return ::cordl_internals::getInstanceField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::New_ctor()  {
UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0 o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0>())};
return o;
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::_FindHoles_b__1(UnityEngine::ProBuilder::WingedEdge w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0>::get(),
                            "<FindHoles>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, w);
}
 bool UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0::_FindHoles_b__2(UnityEngine::ProBuilder::WingedEdge w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0>::get(),
                            "<FindHoles>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, w);
}
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetNeighborFaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::ProBuilder::Edge, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2a13aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetNeighborFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetNeighborFaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face,UnityEngine::ProBuilder::Edge>> (*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x2a0175c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetNeighborFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetNeighborFaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> (*)(UnityEngine::ProBuilder::ProBuilderMesh, ::ArrayW<int32_t>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2a13d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetNeighborFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetConnectedEdges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::ProBuilder::Edge> (*)(UnityEngine::ProBuilder::ProBuilderMesh, ::ArrayW<int32_t>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetConnectedEdges)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x2a13fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetConnectedEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetPerimeterEdges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterEdges)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x2a145cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetPerimeterEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetPerimeterEdges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterEdges)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x2a14bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetPerimeterEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetPerimeterFaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterFaces)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x2a14f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetPerimeterFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetPerimeterVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (*)(UnityEngine::ProBuilder::ProBuilderMesh, ::ArrayW<int32_t>, ::ArrayW<UnityEngine::ProBuilder::Edge>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterVertices)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x2a156d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetPerimeterVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::ProBuilder::Edge>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.EdgeRingNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::WingedEdge (*)(UnityEngine::ProBuilder::WingedEdge)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::EdgeRingNext)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a15a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "EdgeRingNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeRing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeRing)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x2a15aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetEdgeRing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeRingIterative
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeRingIterative)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x2a15f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetEdgeRingIterative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeLoop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>, ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoop)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x2a163cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetEdgeLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeLoopIterative
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>, ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopIterative)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2a16970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetEdgeLoopIterative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeLoopInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::WingedEdge, int32_t, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopInternal)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2a16740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetEdgeLoopInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetEdgeLoopInternalIterative
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::WingedEdge, UnityEngine::ProBuilder::Edge, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopInternalIterative)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2a16c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetEdgeLoopInternalIterative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.NextSpoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::WingedEdge (*)(UnityEngine::ProBuilder::WingedEdge, int32_t, bool)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::NextSpoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a172b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "NextSpoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetSpokes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> (*)(UnityEngine::ProBuilder::WingedEdge, int32_t, bool)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetSpokes)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2a16ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetSpokes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GrowSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>, float_t)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GrowSelection)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x2a17344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GrowSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.Flood
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::WingedEdge, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::Flood)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a178bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "Flood",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.Flood
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::ProBuilder::WingedEdge, UnityEngine::Vector3, float_t, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::Flood)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2a17938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "Flood",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.FloodSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face>, float_t)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::FloodSelection)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x2a17bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "FloodSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetFaceLoop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> (*)(UnityEngine::ProBuilder::ProBuilderMesh, ::ArrayW<UnityEngine::ProBuilder::Face>, bool)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceLoop)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2a17e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetFaceLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetFaceRingAndLoop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> (*)(UnityEngine::ProBuilder::ProBuilderMesh, ::ArrayW<UnityEngine::ProBuilder::Face>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceRingAndLoop)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2a18248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetFaceRingAndLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.GetFaceLoop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> (*)(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>, UnityEngine::ProBuilder::Face, bool)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceLoop)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2a18070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetFaceLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.FindHoles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>> (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IEnumerable_1<int32_t>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindHoles)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x2a1846c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "FindHoles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.FindHoles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>> (*)(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>, System::Collections::Generic::HashSet_1<int32_t>)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindHoles)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x2a18818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "FindHoles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection.FindNextEdgeInHole
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::WingedEdge (*)(UnityEngine::ProBuilder::WingedEdge, int32_t)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindNextEdgeInHole)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a1905c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "FindNextEdgeInHole",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::ProBuilder::MeshOperations::ElementSelection::__set_Vector3_Zero(UnityEngine::Vector3 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector3, "Vector3_Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get>(std::forward<UnityEngine::Vector3>(value));
}
 UnityEngine::Vector3 UnityEngine::ProBuilder::MeshOperations::ElementSelection::__get_Vector3_Zero()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector3, "Vector3_Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Edge edge, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> neighborFaces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetNeighborFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, edge, neighborFaces);
}
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face,UnityEngine::ProBuilder::Edge>> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Edge edge)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetNeighborFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face,UnityEngine::ProBuilder::Edge>>, false>(nullptr, ___internal_method, mesh, edge);
}
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetNeighborFaces(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<int32_t> indexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetNeighborFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, indexes);
}
 ::ArrayW<UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetConnectedEdges(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<int32_t> indexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetConnectedEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::ProBuilder::Edge>, false>(nullptr, ___internal_method, mesh, indexes);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterEdges(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetPerimeterEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>, false>(nullptr, ___internal_method, mesh, faces);
}
 ::ArrayW<int32_t> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterEdges(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge> edges)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetPerimeterEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(nullptr, ___internal_method, mesh, edges);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterFaces(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetPerimeterFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces);
}
 ::ArrayW<int32_t> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetPerimeterVertices(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<int32_t> indexes, ::ArrayW<UnityEngine::ProBuilder::Edge> universal_edges_all)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetPerimeterVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::ProBuilder::Edge>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(nullptr, ___internal_method, mesh, indexes, universal_edges_all);
}
 UnityEngine::ProBuilder::WingedEdge UnityEngine::ProBuilder::MeshOperations::ElementSelection::EdgeRingNext(UnityEngine::ProBuilder::WingedEdge edge)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "EdgeRingNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::WingedEdge, false>(nullptr, ___internal_method, edge);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeRing(UnityEngine::ProBuilder::ProBuilderMesh pb, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetEdgeRing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>, false>(nullptr, ___internal_method, pb, edges);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeRingIterative(UnityEngine::ProBuilder::ProBuilderMesh pb, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetEdgeRingIterative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>, false>(nullptr, ___internal_method, pb, edges);
}
 bool UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoop(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>> loop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetEdgeLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, edges, loop);
}
 bool UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopIterative(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>> loop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetEdgeLoopIterative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, edges, loop);
}
 bool UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopInternal(UnityEngine::ProBuilder::WingedEdge start, int32_t startIndex, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup> used)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetEdgeLoopInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, start, startIndex, used);
}
 void UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetEdgeLoopInternalIterative(UnityEngine::ProBuilder::WingedEdge start, UnityEngine::ProBuilder::Edge edge, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup> used)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetEdgeLoopInternalIterative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, start, edge, used);
}
 UnityEngine::ProBuilder::WingedEdge UnityEngine::ProBuilder::MeshOperations::ElementSelection::NextSpoke(UnityEngine::ProBuilder::WingedEdge wing, int32_t pivot, bool opp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "NextSpoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::WingedEdge, false>(nullptr, ___internal_method, wing, pivot, opp);
}
/// @param allowHoles: bool (default: false)
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetSpokes(UnityEngine::ProBuilder::WingedEdge wing, int32_t sharedIndex, bool allowHoles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetSpokes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>, false>(nullptr, ___internal_method, wing, sharedIndex, allowHoles);
}
/// @param maxAngleDiff: float_t (default: -1)
 System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GrowSelection(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, float_t maxAngleDiff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GrowSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces, maxAngleDiff);
}
 void UnityEngine::ProBuilder::MeshOperations::ElementSelection::Flood(UnityEngine::ProBuilder::WingedEdge wing, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> selection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "Flood",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, wing, selection);
}
 void UnityEngine::ProBuilder::MeshOperations::ElementSelection::Flood(UnityEngine::ProBuilder::ProBuilderMesh pb, UnityEngine::ProBuilder::WingedEdge wing, UnityEngine::Vector3 wingNrm, float_t maxAngle, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> selection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "Flood",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pb, wing, wingNrm, maxAngle, selection);
}
 System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> UnityEngine::ProBuilder::MeshOperations::ElementSelection::FloodSelection(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face> faces, float_t maxAngleDiff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "FloodSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces, maxAngleDiff);
}
/// @param ring: bool (default: false)
 System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceLoop(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<UnityEngine::ProBuilder::Face> faces, bool ring)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetFaceLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces, ring);
}
 System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceRingAndLoop(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<UnityEngine::ProBuilder::Face> faces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetFaceRingAndLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces);
}
 System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> UnityEngine::ProBuilder::MeshOperations::ElementSelection::GetFaceLoop(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> wings, UnityEngine::ProBuilder::Face face, bool ring)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "GetFaceLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, wings, face, ring);
}
 System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>> UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindHoles(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<int32_t> indexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "FindHoles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>, false>(nullptr, ___internal_method, mesh, indexes);
}
 System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>> UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindHoles(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> wings, System::Collections::Generic::HashSet_1<int32_t> common)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "FindHoles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>>, false>(nullptr, ___internal_method, wings, common);
}
 UnityEngine::ProBuilder::WingedEdge UnityEngine::ProBuilder::MeshOperations::ElementSelection::FindNextEdgeInHole(UnityEngine::ProBuilder::WingedEdge wing, int32_t common)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ElementSelection>::get(),
                            "FindNextEdgeInHole",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::WingedEdge, false>(nullptr, ___internal_method, wing, common);
}
