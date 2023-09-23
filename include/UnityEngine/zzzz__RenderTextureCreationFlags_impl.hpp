#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureCreationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::RenderTextureCreationFlags::RenderTextureCreationFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::RenderTextureCreationFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::RenderTextureCreationFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::MipMap{1};
constexpr UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::AutoGenerateMips{2};
constexpr UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::SRGB{4};
constexpr UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::EyeTexture{8};
constexpr UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::EnableRandomWrite{16};
constexpr UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::CreatedFromScript{32};
constexpr UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::AllowVerticalFlip{128};
constexpr UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::NoResolvedColorSurface{256};
constexpr UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::DynamicallyScalable{1024};
constexpr UnityEngine::RenderTextureCreationFlags  UnityEngine::RenderTextureCreationFlags::BindMS{2048};
