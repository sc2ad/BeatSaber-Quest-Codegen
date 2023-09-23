#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::RenderTextureFormat::RenderTextureFormat(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::RenderTextureFormat::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::RenderTextureFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::ARGB32{0};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::Depth{1};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::ARGBHalf{2};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::Shadowmap{3};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::RGB565{4};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::ARGB4444{5};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::ARGB1555{6};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::Default{7};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::ARGB2101010{8};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::DefaultHDR{9};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::ARGB64{10};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::ARGBFloat{11};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::RGFloat{12};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::RGHalf{13};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::RFloat{14};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::RHalf{15};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::R8{16};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::ARGBInt{17};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::RGInt{18};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::RInt{19};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::BGRA32{20};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::RGB111110Float{22};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::RG32{23};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::RGBAUShort{24};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::RG16{25};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::BGRA10101010_XR{26};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::BGR101010_XR{27};
constexpr UnityEngine::RenderTextureFormat  UnityEngine::RenderTextureFormat::R16{28};
