#pragma once
namespace {
#include "GlobalNamespace/zzzz__IBakedLightWithRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBakedLightWithRenderer.get_bakingMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material (::GlobalNamespace::IBakedLightWithRenderer::*)()>(&::GlobalNamespace::IBakedLightWithRenderer::get_bakingMaterial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IBakedLightWithRenderer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBakedLightWithRenderer>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::UnityEngine::Material ::GlobalNamespace::IBakedLightWithRenderer::get_bakingMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBakedLightWithRenderer>::get(),
                            "get_bakingMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
