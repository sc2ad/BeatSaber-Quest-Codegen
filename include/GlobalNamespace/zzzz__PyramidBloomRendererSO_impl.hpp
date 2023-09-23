#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::GlobalNamespace__PyramidBloomRendererSO__Pass(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::Prefilter13{0};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::Prefilter4{1};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::Downsample13{2};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::Downsample4{3};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::DownsampleBilinearGamma{4};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::UpsampleTent{5};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::UpsampleBox{6};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::UpsampleTentGamma{7};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::UpsampleBoxGamma{8};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::Bilinear{9};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::BilinearGamma{10};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::UpsampleTentAndReinhardToneMapping{11};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::UpsampleTentAndACESToneMapping{12};
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass  GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass::UpsampleTentAndACESToneMappingGlobalIntensity{13};
// Ctor Parameters [CppParam { name: "down", ty: "UnityEngine::RenderTexture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "up", ty: "UnityEngine::RenderTexture", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level::GlobalNamespace__PyramidBloomRendererSO__Level(UnityEngine::RenderTexture down, UnityEngine::RenderTexture up) noexcept : ::bs_hook::ValueTypeWrapper() {this->down = down;
this->up = up;
}
constexpr void GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level::__set_down(UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<UnityEngine::RenderTexture, 0x0>(this->__instance, std::forward<UnityEngine::RenderTexture>(value));
}
constexpr UnityEngine::RenderTexture GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level::__get_down() const {
return ::cordl_internals::getInstanceField<UnityEngine::RenderTexture, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level::__set_up(UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<UnityEngine::RenderTexture, 0x8>(this->__instance, std::forward<UnityEngine::RenderTexture>(value));
}
constexpr UnityEngine::RenderTexture GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level::__get_up() const {
return ::cordl_internals::getInstanceField<UnityEngine::RenderTexture, 0x8>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::PyramidBloomRendererSO.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomRendererSO::*)()>(&GlobalNamespace::PyramidBloomRendererSO::OnEnable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1f8f3c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::PyramidBloomRendererSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PyramidBloomRendererSO.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomRendererSO::*)()>(&GlobalNamespace::PyramidBloomRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1f8f4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PyramidBloomRendererSO.RenderBloom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomRendererSO::*)(UnityEngine::RenderTexture, UnityEngine::RenderTexture, float_t, bool, bool, bool)>(&GlobalNamespace::PyramidBloomRendererSO::RenderBloom)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1f8f4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get(),
                            "RenderBloom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PyramidBloomRendererSO.RenderBloom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomRendererSO::*)(UnityEngine::RenderTexture, UnityEngine::RenderTexture, float_t, float_t, float_t, float_t, bool, bool, float_t, float_t, float_t, float_t, GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, bool)>(&GlobalNamespace::PyramidBloomRendererSO::RenderBloom)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x1f8f57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get(),
                            "RenderBloom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PyramidBloomRendererSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomRendererSO::*)()>(&GlobalNamespace::PyramidBloomRendererSO::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1f8fd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PyramidBloomRendererSO::__set__shader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::PyramidBloomRendererSO::__get__shader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__set__material(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material GlobalNamespace::PyramidBloomRendererSO::__get__material() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__set__pyramid(::ArrayW<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level> GlobalNamespace::PyramidBloomRendererSO::__get__pyramid() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PyramidBloomRendererSO::__set__bloomTexID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_bloomTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::PyramidBloomRendererSO::__get__bloomTexID()  {
return ::cordl_internals::getStaticField<int32_t, "_bloomTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>();
}
 void GlobalNamespace::PyramidBloomRendererSO::__set__globalIntensityTex(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_globalIntensityTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::PyramidBloomRendererSO::__get__globalIntensityTex()  {
return ::cordl_internals::getStaticField<int32_t, "_globalIntensityTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>();
}
 void GlobalNamespace::PyramidBloomRendererSO::__set__autoExposureLimitID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_autoExposureLimitID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::PyramidBloomRendererSO::__get__autoExposureLimitID()  {
return ::cordl_internals::getStaticField<int32_t, "_autoExposureLimitID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>();
}
 void GlobalNamespace::PyramidBloomRendererSO::__set__sampleScaleID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_sampleScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::PyramidBloomRendererSO::__get__sampleScaleID()  {
return ::cordl_internals::getStaticField<int32_t, "_sampleScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>();
}
 void GlobalNamespace::PyramidBloomRendererSO::__set__combineSrcID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_combineSrcID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::PyramidBloomRendererSO::__get__combineSrcID()  {
return ::cordl_internals::getStaticField<int32_t, "_combineSrcID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>();
}
 void GlobalNamespace::PyramidBloomRendererSO::__set__combineDstID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_combineDstID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::PyramidBloomRendererSO::__get__combineDstID()  {
return ::cordl_internals::getStaticField<int32_t, "_combineDstID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>();
}
 void GlobalNamespace::PyramidBloomRendererSO::__set__alphaWeightsID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_alphaWeightsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::PyramidBloomRendererSO::__get__alphaWeightsID()  {
return ::cordl_internals::getStaticField<int32_t, "_alphaWeightsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get>();
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__set_kIsScreenspaceEffectKeyword(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::PyramidBloomRendererSO::__get_kIsScreenspaceEffectKeyword() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__set__initialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::PyramidBloomRendererSO::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PyramidBloomRendererSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PyramidBloomRendererSO::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PyramidBloomRendererSO::RenderBloom(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest, float_t radius, bool alphaWeights, bool betterQuality, bool gammaCorrection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get(),
                            "RenderBloom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, dest, radius, alphaWeights, betterQuality, gammaCorrection);
}
/// @param isScreenspaceEffect: bool (default: false)
 void GlobalNamespace::PyramidBloomRendererSO::RenderBloom(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest, float_t radius, float_t intensity, float_t autoExposureLimit, float_t downIntensityOffset, bool uniformPyramidWeights, bool downsampleOnFirstPass, float_t pyramidWeightsParam, float_t alphaWeights, float_t firstUpsampleBrightness, float_t finalUpsampleBrightness, GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass preFilterPass, GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass downsamplePass, GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass upsamplePass, GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass finalUpsamplePass, bool isScreenspaceEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get(),
                            "RenderBloom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, dest, radius, intensity, autoExposureLimit, downIntensityOffset, uniformPyramidWeights, downsampleOnFirstPass, pyramidWeightsParam, alphaWeights, firstUpsampleBrightness, finalUpsampleBrightness, preFilterPass, downsamplePass, upsamplePass, finalUpsamplePass, isScreenspaceEffect);
}
// Ctor Parameters []
 GlobalNamespace::PyramidBloomRendererSO::PyramidBloomRendererSO()  : GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<PyramidBloomRendererSO>())) {}
 void GlobalNamespace::PyramidBloomRendererSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PyramidBloomRendererSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
