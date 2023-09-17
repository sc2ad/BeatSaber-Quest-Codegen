#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::FontStyles::FontStyles(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::TextCore::Text::FontStyles::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::FontStyles::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::TextCore::Text::FontStyles  ::UnityEngine::TextCore::Text::FontStyles::Normal{0};
constexpr ::UnityEngine::TextCore::Text::FontStyles  ::UnityEngine::TextCore::Text::FontStyles::Bold{1};
constexpr ::UnityEngine::TextCore::Text::FontStyles  ::UnityEngine::TextCore::Text::FontStyles::Italic{2};
constexpr ::UnityEngine::TextCore::Text::FontStyles  ::UnityEngine::TextCore::Text::FontStyles::Underline{4};
constexpr ::UnityEngine::TextCore::Text::FontStyles  ::UnityEngine::TextCore::Text::FontStyles::LowerCase{8};
constexpr ::UnityEngine::TextCore::Text::FontStyles  ::UnityEngine::TextCore::Text::FontStyles::UpperCase{16};
constexpr ::UnityEngine::TextCore::Text::FontStyles  ::UnityEngine::TextCore::Text::FontStyles::SmallCaps{32};
constexpr ::UnityEngine::TextCore::Text::FontStyles  ::UnityEngine::TextCore::Text::FontStyles::Strikethrough{64};
constexpr ::UnityEngine::TextCore::Text::FontStyles  ::UnityEngine::TextCore::Text::FontStyles::Superscript{128};
constexpr ::UnityEngine::TextCore::Text::FontStyles  ::UnityEngine::TextCore::Text::FontStyles::Subscript{256};
constexpr ::UnityEngine::TextCore::Text::FontStyles  ::UnityEngine::TextCore::Text::FontStyles::Highlight{512};
} // end anonymous namespace
