#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedRenderingFeatures_def.hpp"
#include "UnityEngine/zzzz__MixedLightingMode_def.hpp"
#include "UnityEngine/zzzz__LightmapsMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedRenderingFeatures_def.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes  UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes::None{0};
constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes  UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes::Rotation{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes  UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes::None{0};
constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes  UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes::IndirectOnly{1};
constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes  UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes::Subtractive{2};
constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes  UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes::Shadowmask{4};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.get_active
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::SupportedRenderingFeatures (*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_active)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b76270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_active",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.set_active
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rendering::SupportedRenderingFeatures)>(&UnityEngine::Rendering::SupportedRenderingFeatures::set_active)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b74ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "set_active",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::SupportedRenderingFeatures>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.get_defaultMixedLightingModes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_defaultMixedLightingModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.get_mixedLightingModes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_mixedLightingModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.get_lightmapBakeTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LightmapBakeType (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_lightmapBakeTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.get_lightmapsModes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LightmapsMode (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_lightmapsModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.get_enlightenLightmapper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_enlightenLightmapper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_enlightenLightmapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.get_enlighten
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_enlighten",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.get_rendersUIOverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_rendersUIOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_rendersUIOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.get_autoAmbientProbeBaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_autoAmbientProbeBaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_autoAmbientProbeBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.get_autoDefaultReflectionProbeBaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_autoDefaultReflectionProbeBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.FallbackMixedLightingModeByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2b76360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "FallbackMixedLightingModeByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.IsMixedLightingModeSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::MixedLightingMode)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b76494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsMixedLightingModeSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MixedLightingMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.IsMixedLightingModeSupportedByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::MixedLightingMode, ::cordl_internals::intptr_t)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2b76500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsMixedLightingModeSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MixedLightingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::LightmapBakeType)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b76608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsLightmapBakeTypeSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LightmapBakeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupportedByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::LightmapBakeType, ::cordl_internals::intptr_t)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2b76674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsLightmapBakeTypeSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LightmapBakeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapsModeSupportedByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::LightmapsMode, ::cordl_internals::intptr_t)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b76764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsLightmapsModeSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LightmapsMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapperSupportedByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::cordl_internals::intptr_t)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b767f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsLightmapperSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.IsUIOverlayRenderedBySRP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsUIOverlayRenderedBySRP)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b76874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsUIOverlayRenderedBySRP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.IsAutoAmbientProbeBakingSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b768ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsAutoAmbientProbeBakingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.IsAutoDefaultReflectionProbeBakingSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b76964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsAutoDefaultReflectionProbeBakingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures.FallbackLightmapperByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b769dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "FallbackLightmapperByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::SupportedRenderingFeatures._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b74e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::Rendering::SupportedRenderingFeatures::__set_s_Active(UnityEngine::Rendering::SupportedRenderingFeatures value)  {
::cordl_internals::setStaticField<UnityEngine::Rendering::SupportedRenderingFeatures, "s_Active", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get>(std::forward<UnityEngine::Rendering::SupportedRenderingFeatures>(value));
}
 UnityEngine::Rendering::SupportedRenderingFeatures UnityEngine::Rendering::SupportedRenderingFeatures::__get_s_Active()  {
return ::cordl_internals::getStaticField<UnityEngine::Rendering::SupportedRenderingFeatures, "s_Active", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get>();
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__reflectionProbeModes_k__BackingField(UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes>(value));
}
constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbeModes_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__defaultMixedLightingModes_k__BackingField(UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes>(value));
}
constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures::__get__defaultMixedLightingModes_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__mixedLightingModes_k__BackingField(UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes>(value));
}
constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures::__get__mixedLightingModes_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__lightmapBakeTypes_k__BackingField(UnityEngine::LightmapBakeType value)  {
::cordl_internals::setInstanceField<UnityEngine::LightmapBakeType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::LightmapBakeType>(value));
}
constexpr UnityEngine::LightmapBakeType UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightmapBakeTypes_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::LightmapBakeType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__lightmapsModes_k__BackingField(UnityEngine::LightmapsMode value)  {
::cordl_internals::setInstanceField<UnityEngine::LightmapsMode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::LightmapsMode>(value));
}
constexpr UnityEngine::LightmapsMode UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightmapsModes_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::LightmapsMode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__enlightenLightmapper_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__enlightenLightmapper_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__enlighten_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__enlighten_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__lightProbeProxyVolumes_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x26>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightProbeProxyVolumes_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x26>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__motionVectors_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x27>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__motionVectors_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x27>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__receiveShadows_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__receiveShadows_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__reflectionProbes_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbes_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__reflectionProbesBlendDistance_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbesBlendDistance_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__rendererPriority_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendererPriority_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2b>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__rendersUIOverlay_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendersUIOverlay_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesEnvironmentLighting_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesEnvironmentLighting_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesFog_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2e>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesFog_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2e>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesRealtimeReflectionProbes_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2f>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesRealtimeReflectionProbes_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2f>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesOtherLightingSettings_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesOtherLightingSettings_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__editableMaterialRenderQueue_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__editableMaterialRenderQueue_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesLODBias_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x32>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesLODBias_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x32>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesMaximumLODLevel_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x33>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesMaximumLODLevel_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x33>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__rendererProbes_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendererProbes_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__particleSystemInstancing_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x35>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__particleSystemInstancing_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x35>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__autoAmbientProbeBaking_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x36>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__autoAmbientProbeBaking_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x36>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__autoDefaultReflectionProbeBaking_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x37>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__autoDefaultReflectionProbeBaking_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x37>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesShadowmask_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesShadowmask_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overrideShadowmaskMessage_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::Rendering::SupportedRenderingFeatures::__get__overrideShadowmaskMessage_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Rendering::SupportedRenderingFeatures UnityEngine::Rendering::SupportedRenderingFeatures::get_active()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_active",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::SupportedRenderingFeatures, false>(nullptr, ___internal_method);
}
 void UnityEngine::Rendering::SupportedRenderingFeatures::set_active(UnityEngine::Rendering::SupportedRenderingFeatures value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "set_active",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::SupportedRenderingFeatures>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_defaultMixedLightingModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_mixedLightingModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::LightmapBakeType UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_lightmapBakeTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::LightmapBakeType, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::LightmapsMode UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_lightmapsModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::LightmapsMode, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Rendering::SupportedRenderingFeatures::get_enlightenLightmapper()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_enlightenLightmapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_enlighten",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Rendering::SupportedRenderingFeatures::get_rendersUIOverlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_rendersUIOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Rendering::SupportedRenderingFeatures::get_autoAmbientProbeBaking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_autoAmbientProbeBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Rendering::SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "get_autoDefaultReflectionProbeBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef(::cordl_internals::intptr_t fallbackModePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "FallbackMixedLightingModeByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fallbackModePtr);
}
 bool UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine::MixedLightingMode mixedMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsMixedLightingModeSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MixedLightingMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mixedMode);
}
 void UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine::MixedLightingMode mixedMode, ::cordl_internals::intptr_t isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsMixedLightingModeSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MixedLightingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mixedMode, isSupportedPtr);
}
 bool UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine::LightmapBakeType bakeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsLightmapBakeTypeSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LightmapBakeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bakeType);
}
 void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine::LightmapBakeType bakeType, ::cordl_internals::intptr_t isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsLightmapBakeTypeSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LightmapBakeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bakeType, isSupportedPtr);
}
 void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef(UnityEngine::LightmapsMode mode, ::cordl_internals::intptr_t isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsLightmapsModeSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LightmapsMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mode, isSupportedPtr);
}
 void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef(int32_t lightmapper, ::cordl_internals::intptr_t isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsLightmapperSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lightmapper, isSupportedPtr);
}
 void UnityEngine::Rendering::SupportedRenderingFeatures::IsUIOverlayRenderedBySRP(::cordl_internals::intptr_t isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsUIOverlayRenderedBySRP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isSupportedPtr);
}
 void UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported(::cordl_internals::intptr_t isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsAutoAmbientProbeBakingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isSupportedPtr);
}
 void UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported(::cordl_internals::intptr_t isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "IsAutoDefaultReflectionProbeBakingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isSupportedPtr);
}
 void UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef(::cordl_internals::intptr_t lightmapperPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            "FallbackLightmapperByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lightmapperPtr);
}
 UnityEngine::Rendering::SupportedRenderingFeatures UnityEngine::Rendering::SupportedRenderingFeatures::New_ctor()  {
UnityEngine::Rendering::SupportedRenderingFeatures o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Rendering::SupportedRenderingFeatures>())};
return o;
}
 void UnityEngine::Rendering::SupportedRenderingFeatures::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::SupportedRenderingFeatures>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
