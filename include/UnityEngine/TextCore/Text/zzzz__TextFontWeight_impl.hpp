#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::Text::TextFontWeight::TextFontWeight(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TextCore::Text::TextFontWeight::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextFontWeight::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Thin{100};
constexpr UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::ExtraLight{200};
constexpr UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Light{300};
constexpr UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Regular{400};
constexpr UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Medium{500};
constexpr UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::SemiBold{600};
constexpr UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Bold{700};
constexpr UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Heavy{800};
constexpr UnityEngine::TextCore::Text::TextFontWeight  UnityEngine::TextCore::Text::TextFontWeight::Black{900};
