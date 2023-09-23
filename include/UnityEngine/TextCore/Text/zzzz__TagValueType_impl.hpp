#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TagValueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::Text::TagValueType::TagValueType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TextCore::Text::TagValueType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TagValueType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TextCore::Text::TagValueType  UnityEngine::TextCore::Text::TagValueType::None{0};
constexpr UnityEngine::TextCore::Text::TagValueType  UnityEngine::TextCore::Text::TagValueType::NumericalValue{1};
constexpr UnityEngine::TextCore::Text::TagValueType  UnityEngine::TextCore::Text::TagValueType::StringValue{2};
constexpr UnityEngine::TextCore::Text::TagValueType  UnityEngine::TextCore::Text::TagValueType::ColorValue{4};
