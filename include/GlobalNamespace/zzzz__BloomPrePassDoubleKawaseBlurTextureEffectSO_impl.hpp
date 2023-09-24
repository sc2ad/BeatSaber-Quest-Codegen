#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassDoubleKawaseBlurTextureEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO.Render
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::*)(UnityEngine::RenderTexture, UnityEngine::RenderTexture)>(&GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::Render)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267ad38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::*)()>(&GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x267ad70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__set__bloom1KernelSize(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>(value));
}
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__get__bloom1KernelSize() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__set__bloom1Boost(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__get__bloom1Boost() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__set__bloom2KernelSize(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>(value));
}
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__get__bloom2KernelSize() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__set__bloom2Boost(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__get__bloom2Boost() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__set__bloom2Alpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__get__bloom2Alpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__set__downsample(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__get__downsample() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__set__gammaCorrection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__get__gammaCorrection() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__set__kawaseBlurRenderer(GlobalNamespace::KawaseBlurRendererSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::KawaseBlurRendererSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::KawaseBlurRendererSO>(value));
}
constexpr GlobalNamespace::KawaseBlurRendererSO GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__get__kawaseBlurRenderer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::KawaseBlurRendererSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::Render(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO>::get(),
                            "Render",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, dest);
}
 GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::New_ctor()  {
GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO>())};
return o;
}
 void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
