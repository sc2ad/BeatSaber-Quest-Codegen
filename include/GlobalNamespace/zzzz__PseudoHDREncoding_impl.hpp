#pragma once
#include "GlobalNamespace/zzzz__PseudoHDREncoding_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: GlobalNamespace::PseudoHDREncoding.CreatePseudoHDREncodedTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture (*)(UnityEngine::RenderTexture)>(&GlobalNamespace::PseudoHDREncoding::CreatePseudoHDREncodedTexture)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x219cc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PseudoHDREncoding>::get(),
                            "CreatePseudoHDREncodedTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::PseudoHDREncoding::__set__material(UnityEngine::Material value)  {
::cordl_internals::setStaticField<UnityEngine::Material, "_material", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PseudoHDREncoding>::get>(std::forward<UnityEngine::Material>(value));
}
 UnityEngine::Material GlobalNamespace::PseudoHDREncoding::__get__material()  {
return ::cordl_internals::getStaticField<UnityEngine::Material, "_material", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PseudoHDREncoding>::get>();
}
 UnityEngine::RenderTexture GlobalNamespace::PseudoHDREncoding::CreatePseudoHDREncodedTexture(UnityEngine::RenderTexture src)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PseudoHDREncoding>::get(),
                            "CreatePseudoHDREncodedTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RenderTexture, false>(nullptr, ___internal_method, src);
}
