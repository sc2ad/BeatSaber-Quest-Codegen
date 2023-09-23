#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode::GlyphRenderMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TextCore::LowLevel::GlyphRenderMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::LowLevel::GlyphRenderMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SMOOTH_HINTED{4121};
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SMOOTH{4117};
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::COLOR_HINTED{69656};
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::COLOR{69652};
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::RASTER_HINTED{4122};
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::RASTER{4118};
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SDF{4134};
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SDF8{8230};
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SDF16{16422};
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SDF32{32806};
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SDFAA_HINTED{4169};
constexpr UnityEngine::TextCore::LowLevel::GlyphRenderMode  UnityEngine::TextCore::LowLevel::GlyphRenderMode::SDFAA{4165};
