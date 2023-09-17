#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPackingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode::GlyphPackingMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::TextCore::LowLevel::GlyphPackingMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::LowLevel::GlyphPackingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  ::UnityEngine::TextCore::LowLevel::GlyphPackingMode::BestShortSideFit{0};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  ::UnityEngine::TextCore::LowLevel::GlyphPackingMode::BestLongSideFit{1};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  ::UnityEngine::TextCore::LowLevel::GlyphPackingMode::BestAreaFit{2};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  ::UnityEngine::TextCore::LowLevel::GlyphPackingMode::BottomLeftRule{3};
constexpr ::UnityEngine::TextCore::LowLevel::GlyphPackingMode  ::UnityEngine::TextCore::LowLevel::GlyphPackingMode::ContactPointRule{4};
} // end anonymous namespace
