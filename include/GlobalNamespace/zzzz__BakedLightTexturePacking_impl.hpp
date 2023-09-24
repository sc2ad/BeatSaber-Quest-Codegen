#pragma once
#include "GlobalNamespace/zzzz__BakedLightTexturePacking_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: GlobalNamespace::BakedLightTexturePacking.PackTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture (*)(System::Collections::Generic::IReadOnlyList_1<UnityEngine::RenderTexture>, UnityEngine::RenderTextureDescriptor)>(&GlobalNamespace::BakedLightTexturePacking::PackTextures)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x219a458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BakedLightTexturePacking>::get(),
                            "PackTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<UnityEngine::RenderTexture>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTextureDescriptor>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::BakedLightTexturePacking::__set__texPropertyIds(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "_texPropertyIds", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BakedLightTexturePacking>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> GlobalNamespace::BakedLightTexturePacking::__get__texPropertyIds()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_texPropertyIds", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BakedLightTexturePacking>::get>();
}
 void GlobalNamespace::BakedLightTexturePacking::__set__material(UnityEngine::Material value)  {
::cordl_internals::setStaticField<UnityEngine::Material, "_material", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BakedLightTexturePacking>::get>(std::forward<UnityEngine::Material>(value));
}
 UnityEngine::Material GlobalNamespace::BakedLightTexturePacking::__get__material()  {
return ::cordl_internals::getStaticField<UnityEngine::Material, "_material", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BakedLightTexturePacking>::get>();
}
 UnityEngine::RenderTexture GlobalNamespace::BakedLightTexturePacking::PackTextures(System::Collections::Generic::IReadOnlyList_1<UnityEngine::RenderTexture> textures, UnityEngine::RenderTextureDescriptor descriptor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BakedLightTexturePacking>::get(),
                            "PackTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<UnityEngine::RenderTexture>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTextureDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RenderTexture, false>(nullptr, ___internal_method, textures, descriptor);
}
