#pragma once
namespace {
#include "UnityEngine/ProBuilder/zzzz__SelectPathFaces_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectPathFaces.GetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t> (*)(::UnityEngine::ProBuilder::ProBuilderMesh, int32_t, int32_t)>(&::UnityEngine::ProBuilder::SelectPathFaces::GetPath)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x29d6b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get(),
                            "GetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectPathFaces.Dijkstra
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (*)(::UnityEngine::ProBuilder::ProBuilderMesh, int32_t)>(&::UnityEngine::ProBuilder::SelectPathFaces::Dijkstra)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x29d6ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get(),
                            "Dijkstra",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectPathFaces.GetWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t, int32_t, ::UnityEngine::ProBuilder::ProBuilderMesh)>(&::UnityEngine::ProBuilder::SelectPathFaces::GetWeight)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x29d75c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get(),
                            "GetWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectPathFaces.GetMinimalPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t> (*)(::ArrayW<int32_t>, int32_t, int32_t)>(&::UnityEngine::ProBuilder::SelectPathFaces::GetMinimalPath)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x29d6ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get(),
                            "GetMinimalPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::ProBuilder::SelectPathFaces::__set_s_cachedPredecessors(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_cachedPredecessors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> ::UnityEngine::ProBuilder::SelectPathFaces::__get_s_cachedPredecessors()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_cachedPredecessors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get>();
}
 void ::UnityEngine::ProBuilder::SelectPathFaces::__set_s_cachedStart(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_cachedStart", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get>(std::forward<int32_t>(value));
}
 int32_t ::UnityEngine::ProBuilder::SelectPathFaces::__get_s_cachedStart()  {
return ::cordl_internals::getStaticField<int32_t, "s_cachedStart", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get>();
}
 void ::UnityEngine::ProBuilder::SelectPathFaces::__set_s_cachedMesh(::UnityEngine::ProBuilder::ProBuilderMesh value)  {
::cordl_internals::setStaticField<::UnityEngine::ProBuilder::ProBuilderMesh, "s_cachedMesh", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get>(std::forward<::UnityEngine::ProBuilder::ProBuilderMesh>(value));
}
 ::UnityEngine::ProBuilder::ProBuilderMesh ::UnityEngine::ProBuilder::SelectPathFaces::__get_s_cachedMesh()  {
return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::ProBuilderMesh, "s_cachedMesh", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get>();
}
 void ::UnityEngine::ProBuilder::SelectPathFaces::__set_s_cachedFacesCount(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_cachedFacesCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get>(std::forward<int32_t>(value));
}
 int32_t ::UnityEngine::ProBuilder::SelectPathFaces::__get_s_cachedFacesCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_cachedFacesCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get>();
}
 void ::UnityEngine::ProBuilder::SelectPathFaces::__set_s_cachedWings(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge>, "s_cachedWings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge>>(value));
}
 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge> ::UnityEngine::ProBuilder::SelectPathFaces::__get_s_cachedWings()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge>, "s_cachedWings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get>();
}
 void ::UnityEngine::ProBuilder::SelectPathFaces::__set_s_cachedFacesIndex(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face,int32_t> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face,int32_t>, "s_cachedFacesIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face,int32_t>>(value));
}
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face,int32_t> ::UnityEngine::ProBuilder::SelectPathFaces::__get_s_cachedFacesIndex()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face,int32_t>, "s_cachedFacesIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get>();
}
 ::System::Collections::Generic::List_1<int32_t> ::UnityEngine::ProBuilder::SelectPathFaces::GetPath(::UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get(),
                            "GetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>, false>(nullptr, ___internal_method, mesh, start, end);
}
 ::ArrayW<int32_t> ::UnityEngine::ProBuilder::SelectPathFaces::Dijkstra(::UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get(),
                            "Dijkstra",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(nullptr, ___internal_method, mesh, start);
}
 float_t ::UnityEngine::ProBuilder::SelectPathFaces::GetWeight(int32_t face1, int32_t face2, ::UnityEngine::ProBuilder::ProBuilderMesh mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get(),
                            "GetWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, face1, face2, mesh);
}
 ::System::Collections::Generic::List_1<int32_t> ::UnityEngine::ProBuilder::SelectPathFaces::GetMinimalPath(::ArrayW<int32_t> predecessors, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectPathFaces>::get(),
                            "GetMinimalPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>, false>(nullptr, ___internal_method, predecessors, start, end);
}
} // end anonymous namespace
