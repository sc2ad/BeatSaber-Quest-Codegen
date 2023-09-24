#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize::GlobalNamespace__KawaseBlurRendererSO__KernelSize(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize::Kernel7{0};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize::Kernel15{1};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize::Kernel23{2};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize::Kernel35{3};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize::Kernel63{4};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize::Kernel127{5};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize::Kernel135{6};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize::Kernel143{7};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType::GlobalNamespace__KawaseBlurRendererSO__WeightsType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType::None{0};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType::AlphaWeights{1};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType::AlphaAndDepthWeights{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel::*)()>(&GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9a564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel::__set_kernelSize(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>(value));
}
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel::__get_kernelSize() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel::__set_sharedPartWithNext(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel::__get_sharedPartWithNext() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel::New_ctor()  {
GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass::GlobalNamespace__KawaseBlurRendererSO__Pass(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass::AlphaWeights{0};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass::Blur{1};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass::BlurAndAdd{2};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass::BlurWithAlphaWeights{3};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass::AlphaAndDepthWeights{4};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass::BlurGamma{5};
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass  GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass::BlurGammaAndAdd{6};
//  Writing Method size for method: GlobalNamespace::KawaseBlurRendererSO.GetBlurKernel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (GlobalNamespace::KawaseBlurRendererSO::*)(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize)>(&GlobalNamespace::KawaseBlurRendererSO::GetBlurKernel)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x1f99fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "GetBlurKernel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KawaseBlurRendererSO.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)()>(&GlobalNamespace::KawaseBlurRendererSO::OnEnable)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x1f9a1bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::KawaseBlurRendererSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KawaseBlurRendererSO.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)()>(&GlobalNamespace::KawaseBlurRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1f9a56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KawaseBlurRendererSO.Bloom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)(UnityEngine::RenderTexture, UnityEngine::RenderTexture, int32_t, int32_t, float_t, float_t, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType, ::ArrayW<float_t>)>(&GlobalNamespace::KawaseBlurRendererSO::Bloom)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x1f9a5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "Bloom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KawaseBlurRendererSO.DoubleBlur
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)(UnityEngine::RenderTexture, UnityEngine::RenderTexture, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, float_t, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, float_t, float_t, int32_t, bool)>(&GlobalNamespace::KawaseBlurRendererSO::DoubleBlur)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x1f9aedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "DoubleBlur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KawaseBlurRendererSO.Blur
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D (GlobalNamespace::KawaseBlurRendererSO::*)(UnityEngine::Texture, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, int32_t)>(&GlobalNamespace::KawaseBlurRendererSO::Blur)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1f9b140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "Blur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KawaseBlurRendererSO.Blur
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)(UnityEngine::Texture, UnityEngine::RenderTexture, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, float_t, int32_t)>(&GlobalNamespace::KawaseBlurRendererSO::Blur)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1f9b1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "Blur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KawaseBlurRendererSO.Blur
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)(UnityEngine::Texture, UnityEngine::RenderTexture, ::ArrayW<int32_t>, float_t, int32_t, int32_t, int32_t, float_t, float_t, bool, bool, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType)>(&GlobalNamespace::KawaseBlurRendererSO::Blur)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x1f9aa34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "Blur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KawaseBlurRendererSO.AlphaWeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)(UnityEngine::RenderTexture, UnityEngine::RenderTexture)>(&GlobalNamespace::KawaseBlurRendererSO::AlphaWeights)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1f9b284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "AlphaWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KawaseBlurRendererSO.CreateBlurCommandBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::CommandBuffer (GlobalNamespace::KawaseBlurRendererSO::*)(int32_t, int32_t, ::StringW, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, float_t)>(&GlobalNamespace::KawaseBlurRendererSO::CreateBlurCommandBuffer)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1f9b354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "CreateBlurCommandBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KawaseBlurRendererSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)()>(&GlobalNamespace::KawaseBlurRendererSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9b664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__kawaseBlurShader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::KawaseBlurRendererSO::__get__kawaseBlurShader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__additiveShader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::KawaseBlurRendererSO::__get__additiveShader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__tintShader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::KawaseBlurRendererSO::__get__tintShader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__kawaseBlurMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material GlobalNamespace::KawaseBlurRendererSO::__get__kawaseBlurMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__additiveMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material GlobalNamespace::KawaseBlurRendererSO::__get__additiveMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__tintMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material GlobalNamespace::KawaseBlurRendererSO::__get__tintMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__commandBuffersMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material GlobalNamespace::KawaseBlurRendererSO::__get__commandBuffersMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__kernels(::ArrayW<::ArrayW<int32_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<int32_t>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
constexpr ::ArrayW<::ArrayW<int32_t>> GlobalNamespace::KawaseBlurRendererSO::__get__kernels() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<int32_t>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__bloomKernels(::ArrayW<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel> GlobalNamespace::KawaseBlurRendererSO::__get__bloomKernels() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__blurTextures(::ArrayW<UnityEngine::RenderTexture> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::RenderTexture>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::RenderTexture>>(value));
}
constexpr ::ArrayW<UnityEngine::RenderTexture> GlobalNamespace::KawaseBlurRendererSO::__get__blurTextures() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::RenderTexture>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::KawaseBlurRendererSO::__set_kBloomIterationWeights(::ArrayW<::ArrayW<float_t>> value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<float_t>>, "kBloomIterationWeights", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>(std::forward<::ArrayW<::ArrayW<float_t>>>(value));
}
 ::ArrayW<::ArrayW<float_t>> GlobalNamespace::KawaseBlurRendererSO::__get_kBloomIterationWeights()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<float_t>>, "kBloomIterationWeights", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>();
}
 void GlobalNamespace::KawaseBlurRendererSO::__set__offsetID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_offsetID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::KawaseBlurRendererSO::__get__offsetID()  {
return ::cordl_internals::getStaticField<int32_t, "_offsetID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>();
}
 void GlobalNamespace::KawaseBlurRendererSO::__set__boostID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_boostID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::KawaseBlurRendererSO::__get__boostID()  {
return ::cordl_internals::getStaticField<int32_t, "_boostID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>();
}
 void GlobalNamespace::KawaseBlurRendererSO::__set__additiveAlphaID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_additiveAlphaID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::KawaseBlurRendererSO::__get__additiveAlphaID()  {
return ::cordl_internals::getStaticField<int32_t, "_additiveAlphaID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>();
}
 void GlobalNamespace::KawaseBlurRendererSO::__set__alphaID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_alphaID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::KawaseBlurRendererSO::__get__alphaID()  {
return ::cordl_internals::getStaticField<int32_t, "_alphaID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>();
}
 void GlobalNamespace::KawaseBlurRendererSO::__set__tintColorID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_tintColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::KawaseBlurRendererSO::__get__tintColorID()  {
return ::cordl_internals::getStaticField<int32_t, "_tintColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>();
}
 void GlobalNamespace::KawaseBlurRendererSO::__set__alphaWeightsID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_alphaWeightsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::KawaseBlurRendererSO::__get__alphaWeightsID()  {
return ::cordl_internals::getStaticField<int32_t, "_alphaWeightsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>();
}
 void GlobalNamespace::KawaseBlurRendererSO::__set__tempTexture0ID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_tempTexture0ID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::KawaseBlurRendererSO::__get__tempTexture0ID()  {
return ::cordl_internals::getStaticField<int32_t, "_tempTexture0ID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>();
}
 void GlobalNamespace::KawaseBlurRendererSO::__set__tempTexture1ID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_tempTexture1ID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::KawaseBlurRendererSO::__get__tempTexture1ID()  {
return ::cordl_internals::getStaticField<int32_t, "_tempTexture1ID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get>();
}
 ::ArrayW<int32_t> GlobalNamespace::KawaseBlurRendererSO::GetBlurKernel(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize kernelSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "GetBlurKernel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, kernelSize);
}
 void GlobalNamespace::KawaseBlurRendererSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::KawaseBlurRendererSO::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::KawaseBlurRendererSO::Bloom(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest, int32_t iterationsStart, int32_t iterations, float_t boost, float_t alphaWeights, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType blurStartWeightsType, ::ArrayW<float_t> bloomIterationWeights)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "Bloom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, dest, iterationsStart, iterations, boost, alphaWeights, blurStartWeightsType, bloomIterationWeights);
}
 void GlobalNamespace::KawaseBlurRendererSO::DoubleBlur(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize kernelSize0, float_t boost0, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize kernelSize1, float_t boost1, float_t secondBlurAlpha, int32_t downsample, bool gammaCorrection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "DoubleBlur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, dest, kernelSize0, boost0, kernelSize1, boost1, secondBlurAlpha, downsample, gammaCorrection);
}
/// @param downsample: int32_t (default: 0)
 UnityEngine::Texture2D GlobalNamespace::KawaseBlurRendererSO::Blur(UnityEngine::Texture src, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize kernelSize, int32_t downsample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "Blur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Texture2D, false>(const_cast<void*>(instance), ___internal_method, src, kernelSize, downsample);
}
 void GlobalNamespace::KawaseBlurRendererSO::Blur(UnityEngine::Texture src, UnityEngine::RenderTexture dest, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize kernelSize, float_t boost, int32_t downsample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "Blur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, dest, kernelSize, boost, downsample);
}
 void GlobalNamespace::KawaseBlurRendererSO::Blur(UnityEngine::Texture src, UnityEngine::RenderTexture dest, ::ArrayW<int32_t> kernel, float_t boost, int32_t downsample, int32_t startIdx, int32_t length, float_t alphaWeights, float_t additiveAlpha, bool additivelyBlendToDest, bool gammaCorrection, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType blurStartWeightsType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "Blur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, dest, kernel, boost, downsample, startIdx, length, alphaWeights, additiveAlpha, additivelyBlendToDest, gammaCorrection, blurStartWeightsType);
}
 void GlobalNamespace::KawaseBlurRendererSO::AlphaWeights(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "AlphaWeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, dest);
}
 UnityEngine::Rendering::CommandBuffer GlobalNamespace::KawaseBlurRendererSO::CreateBlurCommandBuffer(int32_t width, int32_t height, ::StringW globalTextureName, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize kernelSize, float_t boost)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            "CreateBlurCommandBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::CommandBuffer, false>(const_cast<void*>(instance), ___internal_method, width, height, globalTextureName, kernelSize, boost);
}
 GlobalNamespace::KawaseBlurRendererSO GlobalNamespace::KawaseBlurRendererSO::New_ctor()  {
GlobalNamespace::KawaseBlurRendererSO o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::KawaseBlurRendererSO>())};
return o;
}
 void GlobalNamespace::KawaseBlurRendererSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KawaseBlurRendererSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
