#pragma once
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectElements_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectElements_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectFaceRebuildData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)()>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a12c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._Connect_b__0_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(UnityEngine::ProBuilder::Face)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__0_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a12c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__0_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._Connect_b__2_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(UnityEngine::ProBuilder::Face)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__2_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a12c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__2_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._Connect_b__2_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::FaceRebuildData (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__2_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a12c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__2_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._Connect_b__3_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(UnityEngine::ProBuilder::Face)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__3_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a12c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._Connect_b__3_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::FaceRebuildData (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__3_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a12c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__3_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._Connect_b__3_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__3_2)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a12cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__3_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._Connect_b__3_4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(UnityEngine::ProBuilder::EdgeLookup)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__3_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a12cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__3_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._ConnectEdgesInFace_b__5_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(int32_t)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ConnectEdgesInFace_b__5_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a12cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<ConnectEdgesInFace>b__5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._ConnectEdgesInFace_b__5_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<int32_t> (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(int32_t)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ConnectEdgesInFace_b__5_1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a12d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<ConnectEdgesInFace>b__5_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._ConnectEdgesInFace_b__5_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(UnityEngine::ProBuilder::WingedEdge)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ConnectEdgesInFace_b__5_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a12dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<ConnectEdgesInFace>b__5_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._InsertVertices_b__6_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(UnityEngine::ProBuilder::WingedEdge)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_InsertVertices_b__6_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a12dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<InsertVertices>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._ConnectIndexesPerFace_b__8_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(int32_t)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ConnectIndexesPerFace_b__8_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a12dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<ConnectIndexesPerFace>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._ConnectIndexesPerFace_b__8_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<int32_t> (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(int32_t)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ConnectIndexesPerFace_b__8_1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a12e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<ConnectIndexesPerFace>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c._ConnectIndexesPerFace_b__8_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<int32_t> (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::*)(int32_t)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ConnectIndexesPerFace_b__8_2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a12ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<ConnectIndexesPerFace>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c value)  {
::cordl_internals::setStaticField<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>(value));
}
 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__0_0(System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>, "<>9__0_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__0_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>, "<>9__0_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__2_1(System::Func_2<UnityEngine::ProBuilder::Face,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::Face,int32_t>, "<>9__2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::Face,int32_t>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::Face,int32_t> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__2_1()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::Face,int32_t>, "<>9__2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__2_2(System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData>, "<>9__2_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__2_2()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData>, "<>9__2_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__3_0(System::Func_2<UnityEngine::ProBuilder::Face,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::Face,int32_t>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::Face,int32_t>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::Face,int32_t> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__3_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::Face,int32_t>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__3_1(System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData>, "<>9__3_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__3_1()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData>, "<>9__3_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__3_2(System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>, "<>9__3_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__3_2()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>, "<>9__3_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__3_4(System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>, "<>9__3_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__3_4()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge>, "<>9__3_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__5_0(System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>> value)  {
::cordl_internals::setStaticField<System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>>(value));
}
 System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__5_0()  {
return ::cordl_internals::getStaticField<System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__5_1(System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> value)  {
::cordl_internals::setStaticField<System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>>, "<>9__5_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>>>(value));
}
 System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__5_1()  {
return ::cordl_internals::getStaticField<System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>>, "<>9__5_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__5_2(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>, "<>9__5_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__5_2()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>, "<>9__5_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__6_0(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__6_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge>, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__8_0(System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>> value)  {
::cordl_internals::setStaticField<System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>, "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>>(value));
}
 System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__8_0()  {
return ::cordl_internals::getStaticField<System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>, "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__8_1(System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> value)  {
::cordl_internals::setStaticField<System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>>, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>>>(value));
}
 System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__8_1()  {
return ::cordl_internals::getStaticField<System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>>, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__set___9__8_2(System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> value)  {
::cordl_internals::setStaticField<System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>>, "<>9__8_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>(std::forward<System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>>>(value));
}
 System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::__get___9__8_2()  {
return ::cordl_internals::getStaticField<System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>>, "<>9__8_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get>();
}
 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::New_ctor()  {
UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>())};
return o;
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__0_0(UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__0_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__2_1(UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__2_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::FaceRebuildData UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__2_2(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__2_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::FaceRebuildData, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__3_0(UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::FaceRebuildData UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__3_1(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__3_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::FaceRebuildData, false>(const_cast<void*>(instance), ___internal_method, x);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__3_2(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__3_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_Connect_b__3_4(UnityEngine::ProBuilder::EdgeLookup x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<Connect>b__3_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::EdgeLookup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method, x);
}
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ConnectEdgesInFace_b__5_0(int32_t x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<ConnectEdgesInFace>b__5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 System::Collections::Generic::List_1<int32_t> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ConnectEdgesInFace_b__5_1(int32_t x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<ConnectEdgesInFace>b__5_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ConnectEdgesInFace_b__5_2(UnityEngine::ProBuilder::WingedEdge x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<ConnectEdgesInFace>b__5_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_InsertVertices_b__6_0(UnityEngine::ProBuilder::WingedEdge x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<InsertVertices>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method, x);
}
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ConnectIndexesPerFace_b__8_0(int32_t x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<ConnectIndexesPerFace>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 System::Collections::Generic::List_1<int32_t> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ConnectIndexesPerFace_b__8_1(int32_t x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<ConnectIndexesPerFace>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 System::Collections::Generic::List_1<int32_t> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c::_ConnectIndexesPerFace_b__8_2(int32_t x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c>::get(),
                            "<ConnectIndexesPerFace>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::*)()>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a101fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0._Connect_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::*)(int32_t)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::_Connect_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a12f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0>::get(),
                            "<Connect>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0._Connect_b__3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::*)(int32_t)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::_Connect_b__3)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a12f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0>::get(),
                            "<Connect>b__3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::__set_lookup(System::Collections::Generic::Dictionary_2<int32_t,int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<int32_t,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<int32_t,int32_t> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::__get_lookup() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<int32_t,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::__set_mesh(UnityEngine::ProBuilder::ProBuilderMesh value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::ProBuilderMesh, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ProBuilder::ProBuilderMesh>(value));
}
constexpr UnityEngine::ProBuilder::ProBuilderMesh UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::__get_mesh() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::ProBuilderMesh, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::New_ctor()  {
UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0 o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0>())};
return o;
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::_Connect_b__0(int32_t x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0>::get(),
                            "<Connect>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0::_Connect_b__3(int32_t x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0>::get(),
                            "<Connect>b__3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0::*)()>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a12bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0._Connect_b__3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0::*)(UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0::_Connect_b__3)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a12fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0>::get(),
                            "<Connect>b__3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0::__set_appended(System::Collections::Generic::HashSet_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<int32_t>>(value));
}
constexpr System::Collections::Generic::HashSet_1<int32_t> UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0::__get_appended() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0::New_ctor()  {
UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0 o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0>())};
return o;
}
 void UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0::_Connect_b__3(UnityEngine::ProBuilder::Edge x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0>::get(),
                            "<Connect>b__3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Edge>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::ProBuilder::Face> (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2a0da90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::SimpleTuple_2<::ArrayW<UnityEngine::ProBuilder::Face>,::ArrayW<UnityEngine::ProBuilder::Edge>> (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a0f2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IList_1<int32_t>)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  constexpr static std::size_t size = 0xe84;
  constexpr static std::size_t addrs = 0x2a0f378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ActionResult (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>, ByRef<::ArrayW<UnityEngine::ProBuilder::Face>>, ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>>, bool, bool, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect)> {
  constexpr static std::size_t size = 0x1590;
  constexpr static std::size_t addrs = 0x2a0dd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::ProBuilder::Face>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements.ConnectEdgesInFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> (*)(UnityEngine::ProBuilder::Face, UnityEngine::ProBuilder::WingedEdge, UnityEngine::ProBuilder::WingedEdge, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x2a12400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "ConnectEdgesInFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements.ConnectEdgesInFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> (*)(UnityEngine::ProBuilder::Face, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace)> {
  constexpr static std::size_t size = 0x99c;
  constexpr static std::size_t addrs = 0x2a11a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "ConnectEdgesInFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements.InsertVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::Face, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>, ByRef<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::InsertVertices)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x2a1151c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "InsertVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements.ConnectIndexesPerFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> (*)(UnityEngine::ProBuilder::Face, int32_t, int32_t, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>, System::Collections::Generic::Dictionary_2<int32_t,int32_t>)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0x2a10c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "ConnectIndexesPerFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements.ConnectIndexesPerFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> (*)(UnityEngine::ProBuilder::Face, System::Collections::Generic::List_1<int32_t>, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>, System::Collections::Generic::Dictionary_2<int32_t,int32_t>, int32_t)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace)> {
  constexpr static std::size_t size = 0xa68;
  constexpr static std::size_t addrs = 0x2a10204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "ConnectIndexesPerFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<UnityEngine::ProBuilder::Face> UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces);
}
 UnityEngine::ProBuilder::SimpleTuple_2<::ArrayW<UnityEngine::ProBuilder::Face>,::ArrayW<UnityEngine::ProBuilder::Edge>> UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::SimpleTuple_2<::ArrayW<UnityEngine::ProBuilder::Face>,::ArrayW<UnityEngine::ProBuilder::Edge>>, false>(nullptr, ___internal_method, mesh, edges);
}
 ::ArrayW<int32_t> UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IList_1<int32_t> indexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(nullptr, ___internal_method, mesh, indexes);
}
/// @param returnFaces: bool (default: false)
/// @param returnEdges: bool (default: false)
/// @param faceMask: System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> (default: csnull)
 UnityEngine::ProBuilder::ActionResult UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, ByRef<::ArrayW<UnityEngine::ProBuilder::Face>> addedFaces, ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>> connections, bool returnFaces, bool returnEdges, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> faceMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::ProBuilder::Face>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::ActionResult, false>(nullptr, ___internal_method, mesh, edges, addedFaces, connections, returnFaces, returnEdges, faceMask);
}
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace(UnityEngine::ProBuilder::Face face, UnityEngine::ProBuilder::WingedEdge a, UnityEngine::ProBuilder::WingedEdge b, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "ConnectEdgesInFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>, false>(nullptr, ___internal_method, face, a, b, vertices);
}
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace(UnityEngine::ProBuilder::Face face, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> edges, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "ConnectEdgesInFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>, false>(nullptr, ___internal_method, face, edges, vertices);
}
 bool UnityEngine::ProBuilder::MeshOperations::ConnectElements::InsertVertices(UnityEngine::ProBuilder::Face face, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> edges, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices, ByRef<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "InsertVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, face, edges, vertices, data);
}
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace(UnityEngine::ProBuilder::Face face, int32_t a, int32_t b, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices, System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "ConnectIndexesPerFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>, false>(nullptr, ___internal_method, face, a, b, vertices, lookup);
}
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace(UnityEngine::ProBuilder::Face face, System::Collections::Generic::List_1<int32_t> indexes, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices, System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup, int32_t sharedIndexOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::ConnectElements>::get(),
                            "ConnectIndexesPerFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>, false>(nullptr, ___internal_method, face, indexes, vertices, lookup, sharedIndexOffset);
}
