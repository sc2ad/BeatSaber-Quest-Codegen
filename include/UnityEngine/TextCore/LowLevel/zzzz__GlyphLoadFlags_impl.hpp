#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphLoadFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::LowLevel::GlyphLoadFlags::GlyphLoadFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TextCore::LowLevel::GlyphLoadFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::LowLevel::GlyphLoadFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_DEFAULT{0};
constexpr UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_NO_SCALE{1};
constexpr UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_NO_HINTING{2};
constexpr UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_RENDER{4};
constexpr UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_NO_BITMAP{8};
constexpr UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_FORCE_AUTOHINT{32};
constexpr UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_MONOCHROME{4096};
constexpr UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_NO_AUTOHINT{32768};
constexpr UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_COLOR{1048576};
constexpr UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_COMPUTE_METRICS{2097152};
constexpr UnityEngine::TextCore::LowLevel::GlyphLoadFlags  UnityEngine::TextCore::LowLevel::GlyphLoadFlags::LOAD_BITMAP_METRICS_ONLY{4194304};
