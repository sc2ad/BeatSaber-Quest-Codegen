#pragma once
namespace {
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__Subdivision_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Subdivision.Subdivide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult (*)(::UnityEngine::ProBuilder::ProBuilderMesh)>(&::UnityEngine::ProBuilder::MeshOperations::Subdivision::Subdivide)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a287b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Subdivision>::get(),
                            "Subdivide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Subdivision.Subdivide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face> (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::MeshOperations::Subdivision::Subdivide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2886c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Subdivision>::get(),
                            "Subdivide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
 ::UnityEngine::ProBuilder::ActionResult ::UnityEngine::ProBuilder::MeshOperations::Subdivision::Subdivide(::UnityEngine::ProBuilder::ProBuilderMesh pb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Subdivision>::get(),
                            "Subdivide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult, false>(nullptr, ___internal_method, pb);
}
 ::ArrayW<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::MeshOperations::Subdivision::Subdivide(::UnityEngine::ProBuilder::ProBuilderMesh pb, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face> faces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Subdivision>::get(),
                            "Subdivide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, pb, faces);
}
} // end anonymous namespace
