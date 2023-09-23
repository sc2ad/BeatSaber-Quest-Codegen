#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBloomTextureEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::BloomPrePassBloomTextureEffectSO.get_toneMapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ToneMapping (GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)()>(&GlobalNamespace::BloomPrePassBloomTextureEffectSO::get_toneMapping)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x267ac78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassBloomTextureEffectSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBloomTextureEffectSO>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassBloomTextureEffectSO.Render
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)(UnityEngine::RenderTexture, UnityEngine::RenderTexture)>(&GlobalNamespace::BloomPrePassBloomTextureEffectSO::Render)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x267ac98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassBloomTextureEffectSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBloomTextureEffectSO>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassBloomTextureEffectSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)()>(&GlobalNamespace::BloomPrePassBloomTextureEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x267acfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBloomTextureEffectSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__radius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__intensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__downBloomIntensityOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__downBloomIntensityOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__uniformPyramidWeights(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__uniformPyramidWeights() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__pyramidWeightsParam(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__pyramidWeightsParam() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__firstUpsampleBrightness(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__firstUpsampleBrightness() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__finalUpsampleBrightness(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__finalUpsampleBrightness() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__prefilterPass(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__prefilterPass() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__downsamplePass(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__downsamplePass() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__upsamplePass(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__upsamplePass() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__finalUpsamplePass(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__finalUpsamplePass() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__bloomRenderer(GlobalNamespace::PyramidBloomRendererSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PyramidBloomRendererSO, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PyramidBloomRendererSO>(value));
}
constexpr GlobalNamespace::PyramidBloomRendererSO GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__bloomRenderer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PyramidBloomRendererSO, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__bloomFog(GlobalNamespace::BloomFogSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomFogSO, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomFogSO>(value));
}
constexpr GlobalNamespace::BloomFogSO GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__bloomFog() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomFogSO, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::ToneMapping GlobalNamespace::BloomPrePassBloomTextureEffectSO::get_toneMapping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBloomTextureEffectSO>::get(),
                            "get_toneMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ToneMapping, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassBloomTextureEffectSO::Render(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBloomTextureEffectSO>::get(),
                            "Render",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, dest);
}
// Ctor Parameters []
 GlobalNamespace::BloomPrePassBloomTextureEffectSO::BloomPrePassBloomTextureEffectSO()  : GlobalNamespace::BloomPrePassEffectSO(THROW_UNLESS(::il2cpp_utils::New<BloomPrePassBloomTextureEffectSO>())) {}
 void GlobalNamespace::BloomPrePassBloomTextureEffectSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBloomTextureEffectSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
