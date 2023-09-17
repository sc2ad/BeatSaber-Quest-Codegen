#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "TMPro/zzzz__TMP_TextElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_TextElementType::TMP_TextElementType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::TMP_TextElementType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_TextElementType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::TMP_TextElementType  ::TMPro::TMP_TextElementType::Character{0};
constexpr ::TMPro::TMP_TextElementType  ::TMPro::TMP_TextElementType::Sprite{1};
} // end anonymous namespace
