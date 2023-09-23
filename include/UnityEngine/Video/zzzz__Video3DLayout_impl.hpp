#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Video/zzzz__Video3DLayout_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Video::Video3DLayout::Video3DLayout(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Video::Video3DLayout::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Video::Video3DLayout::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Video::Video3DLayout  UnityEngine::Video::Video3DLayout::No3D{0};
constexpr UnityEngine::Video::Video3DLayout  UnityEngine::Video::Video3DLayout::SideBySide3D{1};
constexpr UnityEngine::Video::Video3DLayout  UnityEngine::Video::Video3DLayout::OverUnder3D{2};
