#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextElementType::TextElementType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::TextCore::Text::TextElementType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::UnityEngine::TextCore::Text::TextElementType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::TextCore::Text::TextElementType  ::UnityEngine::TextCore::Text::TextElementType::Character{1u};
constexpr ::UnityEngine::TextCore::Text::TextElementType  ::UnityEngine::TextCore::Text::TextElementType::Sprite{2u};
} // end anonymous namespace
