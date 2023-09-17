#pragma once
#include "UnityEngine/zzzz__Renderer_impl.hpp"
namespace {
#include "UnityEngine/zzzz__ParticleSystemRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::ParticleSystemRenderer.GetMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystemRenderer::*)(ByRef<::ArrayW<::UnityEngine::Mesh>>)>(&::UnityEngine::ParticleSystemRenderer::GetMeshes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b99844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer>::get(),
                            "GetMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Mesh>>>::get()}
                        )));
    return ___internal_method;
  }
};
 int32_t ::UnityEngine::ParticleSystemRenderer::GetMeshes(ByRef<::ArrayW<::UnityEngine::Mesh>> meshes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystemRenderer>::get(),
                            "GetMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Mesh>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, meshes);
}
} // end anonymous namespace
