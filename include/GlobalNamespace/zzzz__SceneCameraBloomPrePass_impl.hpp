#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SceneCameraBloomPrePass_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::SceneCameraBloomPrePass._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneCameraBloomPrePass::*)()>(&GlobalNamespace::SceneCameraBloomPrePass::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f97584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SceneCameraBloomPrePass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SceneCameraBloomPrePass::__set__bloomPrepassRenderer(GlobalNamespace::BloomPrePassRendererSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomPrePassRendererSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomPrePassRendererSO>(value));
}
constexpr GlobalNamespace::BloomPrePassRendererSO GlobalNamespace::SceneCameraBloomPrePass::__get__bloomPrepassRenderer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomPrePassRendererSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SceneCameraBloomPrePass::__set__bloomPrePassEffectContainer(GlobalNamespace::BloomPrePassEffectContainerSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomPrePassEffectContainerSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomPrePassEffectContainerSO>(value));
}
constexpr GlobalNamespace::BloomPrePassEffectContainerSO GlobalNamespace::SceneCameraBloomPrePass::__get__bloomPrePassEffectContainer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomPrePassEffectContainerSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SceneCameraBloomPrePass::__set__bloomPrepassRenderTexture(UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<UnityEngine::RenderTexture, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RenderTexture>(value));
}
constexpr UnityEngine::RenderTexture GlobalNamespace::SceneCameraBloomPrePass::__get__bloomPrepassRenderTexture() const {
return ::cordl_internals::getInstanceField<UnityEngine::RenderTexture, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::SceneCameraBloomPrePass GlobalNamespace::SceneCameraBloomPrePass::New_ctor()  {
GlobalNamespace::SceneCameraBloomPrePass o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SceneCameraBloomPrePass>())};
return o;
}
 void GlobalNamespace::SceneCameraBloomPrePass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SceneCameraBloomPrePass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
