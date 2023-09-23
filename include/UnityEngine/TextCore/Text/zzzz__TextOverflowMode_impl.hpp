#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextOverflowMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::Text::TextOverflowMode::TextOverflowMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TextCore::Text::TextOverflowMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextOverflowMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::Overflow{0};
constexpr UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::Ellipsis{1};
constexpr UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::Masking{2};
constexpr UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::Truncate{3};
constexpr UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::ScrollRect{4};
constexpr UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::Page{5};
constexpr UnityEngine::TextCore::Text::TextOverflowMode  UnityEngine::TextCore::Text::TextOverflowMode::Linked{6};
