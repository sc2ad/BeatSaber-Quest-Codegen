#pragma once
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__QuadUtility_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::QuadUtility.ToQuads
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face>, bool)>(&UnityEngine::ProBuilder::MeshOperations::QuadUtility::ToQuads)> {
  constexpr static std::size_t size = 0x854;
  constexpr static std::size_t addrs = 0x2a241dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::QuadUtility>::get(),
                            "ToQuads",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::QuadUtility.GetBestQuadConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Face (*)(UnityEngine::ProBuilder::WingedEdge, System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::EdgeLookup,float_t>)>(&UnityEngine::ProBuilder::MeshOperations::QuadUtility::GetBestQuadConnection)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2a28548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::QuadUtility>::get(),
                            "GetBestQuadConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::EdgeLookup,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::MeshOperations::QuadUtility.GetQuadScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::ProBuilder::WingedEdge, UnityEngine::ProBuilder::WingedEdge, float_t)>(&UnityEngine::ProBuilder::MeshOperations::QuadUtility::GetQuadScore)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x2a27edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::QuadUtility>::get(),
                            "GetQuadScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @param smoothing: bool (default: true)
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> UnityEngine::ProBuilder::MeshOperations::QuadUtility::ToQuads(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face> faces, bool smoothing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::QuadUtility>::get(),
                            "ToQuads",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces, smoothing);
}
 UnityEngine::ProBuilder::Face UnityEngine::ProBuilder::MeshOperations::QuadUtility::GetBestQuadConnection(UnityEngine::ProBuilder::WingedEdge wing, System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::EdgeLookup,float_t> connections)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::QuadUtility>::get(),
                            "GetBestQuadConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::EdgeLookup,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::Face, false>(nullptr, ___internal_method, wing, connections);
}
/// @param normalThreshold: float_t (default: 0.9)
 float_t UnityEngine::ProBuilder::MeshOperations::QuadUtility::GetQuadScore(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::WingedEdge left, UnityEngine::ProBuilder::WingedEdge right, float_t normalThreshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::MeshOperations::QuadUtility>::get(),
                            "GetQuadScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::WingedEdge>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, mesh, left, right, normalThreshold);
}
